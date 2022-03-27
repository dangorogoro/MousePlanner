#pragma once
#include "Position.h"
struct PathInfo {
 private:
  int32_t first_straight_period;
  int32_t last_straight_period;
  int32_t data_size;

 public:
  PathInfo(const int32_t& first = 0, const int32_t& last = 0,
           const int32_t& size_ = 0)
      : first_straight_period(first),
        last_straight_period(last),
        data_size(size_) {}
  inline int32_t get_last_period() const { return last_straight_period; }
  inline int32_t get_first_period() const { return first_straight_period; }
  inline void set_last_period(const int32_t& period)  { last_straight_period = period; }
  inline void set_first_period(const int32_t& period) { first_straight_period = period; }
  inline int32_t get_size() const { return data_size; }
};
extern Position straightPos[];
extern PathInfo straightInfo;