#include "common.h"

#include <random>

int gen_random_in_range(int a1, int a2)
{
  std::mt19937 intgen;
  std::uniform_int_distribution<> dist(a1, a2);
  return dist(intgen);
}
