// https://projecteuler.net/problem=22
// Names scores

// Using names.txt (right click and 'Save Link/Target As...'),
// a 46K text file containing over five-thousand first names,
// begin by sorting it into alphabetical order.
// Then working out the alphabetical value for each name, multiply this
// value by its alphabetical position in the list to obtain a name score.
//
// For example, when the list is sorted into alphabetical order,
// COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in
// the list. So, COLIN would obtain a score of 938 × 53 = 49714.
//
// What is the total of all the name scores in the file?

// Answer: 871198282

#include <fstream>
#include <iostream>
#include <vector>
#include <mmap>

int alphabet_score(string name)
{
  // Avoid ASCII based solution
  



}

int name_scores(const char* fname)
{
  std::mmap<std::string,int> names;

  std::cout << "Opening: " << fname << std::endl;
  std::ifstream fin(fname);

  if( !fin.is_open()){
    std::cerr << "Failed to open file: " << fname << std::endl;
  }
  // fin.exceptions(std::ifstream::failbit | std::ifstream::badbit);

  for( std::string line ; std::getline(fin,line);){
    std::map<std::string>::iterator itr = names.insert( )
  }

  std::cout << "Names size: " << names.size() << std::endl;

  return 0;
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[]) {
  std::cout << "Answer: " << name_scores("./src/p022_names.txt") << std::endl;
}
#endif //#if ! defined UNITTEST_MODE
