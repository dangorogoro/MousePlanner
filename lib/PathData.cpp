#include "PathData.h"

PathData::PathData(const Operation& op, const Direction& dir_) {
  //基準は東行き
  pathOP = op;
  if (pathOP.op == Operation::FORWARD) {
    pathRawData.reset(straightPos);
    pathInfo.reset(&straightInfo);
  }
  //斜めからの帰還は(x,y)をひっくり返してAからthetaを引く.
  if(bit_count(dir.byte) > 1){
    //back from diagonal to straight
    auto tmp = pathInfo->get_first_period();
    pathInfo->set_first_period(pathInfo->get_last_period());
    pathInfo->set_last_period(tmp);
  }
}
//OPの右左判別
