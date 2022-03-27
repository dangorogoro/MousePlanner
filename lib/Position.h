#pragma once
#include "Maze.h"
#include "Operation.h"
#include "math.h"
struct Position {
 public:
  float x, y, theta;
  Position(float x_ = 0.0f, float y_ = 0.0f, float theta_ = 0.0f)
      : x(x_), y(y_), theta(theta_) {}
  inline void operator+=(const Position &obj) {
    x += obj.x;
    y += obj.y;
    theta += obj.theta;
  }
  inline void operator-=(const Position &obj) {
    x -= obj.x;
    y -= obj.y;
    theta -= obj.theta;
  }
};

Position calculate_position(const int32_t& target_id, const Direction& dir);