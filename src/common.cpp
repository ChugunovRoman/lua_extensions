#include "common.h"

#include <random>

std::mt19937 intgen;

int gen_random_in_range(int a1, int a2)
{
  std::uniform_int_distribution<> dist(a1, a2);
  return dist(intgen);
}
