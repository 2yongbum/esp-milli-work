#pragma once
#include <Arduino.h>

class MilliWork {
unsigned long interval;
unsigned long last = 0;
public:
  MilliWork(unsigned long interval_ms);
  bool check();
};