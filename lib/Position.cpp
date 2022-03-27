#include "Position.h"

Position calculate_position(const int32_t& target_id, const Direction& dir = NORTH){
  Position pos;
  const IndexVec vec = convert_index2IndexVec(target_id);
  pos.x = vec.x * MAZE_1BLOCK_LENGTH;
  pos.y = vec.y * MAZE_1BLOCK_LENGTH;
  if(target_id % 2 == 0)  pos.y += MAZE_1BLOCK_LENGTH / 2;
  else  pos.x += MAZE_1BLOCK_LENGTH / 2;
  
  if(dir == EAST)                pos.theta = 0.0 * M_PI / 4.0f;
  else if(dir == (NORTH | EAST)) pos.theta = 1.0 * M_PI / 4.0f;
  else if(dir == NORTH)          pos.theta = 2.0 * M_PI / 4.0f;
  else if(dir == (NORTH | WEST)) pos.theta = 3.0 * M_PI / 4.0f;
  else if(dir == WEST)           pos.theta = 4.0 * M_PI / 4.0f;
  else if(dir == (SOUTH | WEST)) pos.theta = 5.0 * M_PI / 4.0f;
  else if(dir == SOUTH)          pos.theta = 6.0 * M_PI / 4.0f;
  else if(dir == (SOUTH | EAST)) pos.theta = 7.0 * M_PI / 4.0f;
  return pos;
}