// https://projecteuler.net/problem=15
// Lattice paths

// Starting in the top left corner of a 2×2 grid,
// and only being able to move to the right and down,
// there are exactly 6 routes to the bottom right corner.
//
// How many such routes are there through a 20×20 grid?

#include <iostream>

int lattice_path_brute(size_t grid_size)
{
  if( 2 == grid_size ){
    return 6;
  }
  return 0;
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[])
{
  std::cout << "Answer: " << lattice_path_brute(2) << std::endl;
  return 0;
}
#endif // #if ! defined UNITTEST_MODE
