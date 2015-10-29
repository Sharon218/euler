// https://projecteuler.net/problem=19
// Counting Sundays

// You are given the following information, but you may prefer to do some research for yourself.
//
// - 1 Jan 1900 was a Monday.
// - Thirty days has September,
// - April, June and November.
// - All the rest have thirty-one,
// - Saving February alone,
// - Which has twenty-eight, rain or shine.
// - And on leap years, twenty-nine.
// - A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
//
// How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?

// Answer: 171

#include <iostream>
#include <cmath>

int is_first_sunday(int y, int m)
{
    // @see http://en.wikipedia.org/wiki/Determination_of_the_day_of_the_week#Gauss.27_algorithm
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return 0 == std::floor(( y + y/4 - y/100 + y/400 + t[m-1] + 1) % 7);
}

int counting_sundays()
{
  int suns = 0;

  for (size_t y = 1901; y <= 2000; y++) {
    for (size_t m = 1; m <= 12; m++) {
      if( is_first_sunday(y,m) ){
        suns++;
      }
    }
  }
  return suns;
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[])
{
  std::cout << "Answer: " << counting_sundays() << std::endl;
}
#endif // #if ! defined UNITTEST_MODE
