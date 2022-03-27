#pragma once
#include <memory>

#include "PathRawData.h"
#include "Position.h"
class PathData {
 private:
  std::unique_ptr<Position> pathRawData;
  std::unique_ptr<PathInfo> pathInfo;
  int32_t currentPeriod;
  Operation pathOP;
  Direction dir;
 public:
  PathData(const Operation& op, const Direction& dir_);
  inline void updatePeriod(const int32_t& period){currentPeriod += period;}
  inline bool isFinished()const {return (currentPeriod >= pathInfo->get_size());}
  inline void setPeriod(const int32_t& period){currentPeriod = period;}
  Position getPosition();
};