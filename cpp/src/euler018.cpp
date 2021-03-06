// https://projecteuler.net/problem=18
// Maximum path sum I

// By starting at the top of the triangle below and moving to adjacent numbers
// on the row below, the maximum total from top to bottom is 23.
//
//    3
//   7 4
//  2 4 6
// 8 5 9 3
//
// That is, 3 + 7 + 4 + 9 = 23.
//
// Find the maximum total from top to bottom of the triangle below:
//
//               75
//              95 64
//             17 47 82
//            18 35 87 10
//           20 04 82 47 65
//          19 01 23 75 03 34
//         88 02 77 73 07 63 67
//        99 65 04 28 06 16 70 92
//       41 41 26 56 83 40 80 70 33
//      41 48 72 33 47 32 37 16 94 29
//     53 71 44 65 25 43 91 52 97 51 14
//    70 11 33 28 77 73 17 78 39 68 17 57
//   91 71 52 38 17 14 91 43 58 50 27 29 48
//  63 66 04 68 89 53 67 30 73 16 69 87 40 31
// 04 62 98 27 23 09 70 98 73 93 38 53 60 04 23
//
// NOTE: As there are only 16384 routes, it is possible to solve this problem by
// trying every route. However, Problem 67, is the same challenge with a triangle
// containing one-hundred rows; it cannot be solved by brute force, and requires
// a clever method! ;o)

// Answer: 1074

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

static const char* test_data_fname = "./src/euler_18_test_data.txt";
static const char* data_fname = "./src/euler_18_data.txt";

int maximum_path_sum_1(const char* fname)
{
  std::ifstream fin(fname);

  if( !fin.is_open()){
    std::cerr << "Failed to open input file: " << fname << std::endl;
    return -1;
  }

  std::vector<std::vector<int> > lines;

  for( std::string line ; std::getline(fin,line);){
    std::stringstream ss(line);
    std::string number;
    std::vector<int> inner;

    while (std::getline(ss,number,',')) {
      inner.push_back(std::stoi(number));
    }
    lines.push_back(inner);
  }

  for( int i = lines.size()-1; i > 0 ; --i){
    for( int j = 0 ; j < i; j++){
      if( lines[i][j] > lines[i][j+1] ){
        lines[i-1][j] += lines[i][j];
      }else{
        lines[i-1][j] += lines[i][j+1];
      }
    }
  }

  return lines[0][0];
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[])
{
  std::cout << "Answer: " << maximum_path_sum_1(data_fname) << std::endl;
}
#endif // #if ! defined UNITTEST_MODE
