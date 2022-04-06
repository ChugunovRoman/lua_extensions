#include "common.h"

int gen_random_in_range(int a1, int a2)
{
  std::uniform_int<> dist(a1, a2);
  return dist(intgen);
}