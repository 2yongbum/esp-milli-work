#include "MilliWork.h"

MilliWork::MilliWork(unsigned long interval_ms) : interval(interval_ms) {}

bool MilliWork::check() {
  unsigned long current = millis();
  if (current - last >= interval) {
    last = current;
    return true;
  }
  return false;
}