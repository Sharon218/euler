#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

class Cbowling_data
{
public:
  std::vector<std::vector<int> > m_rolls;

  Cbowling_data( const char* fname )
  {
    std::cout << "Opening: " << fname << std::endl;
    std::ifstream fin(fname);

    if( !fin.is_open()){
      std::cerr << "Failed to open file: " << fname << std::endl;
    }
    // fin.exceptions(std::ifstream::failbit | std::ifstream::badbit);

    for( std::string line ; std::getline(fin,line);){
      if( '#' != line.at(0) ){
        std::stringstream ss(line);
        std::string number;
        std::vector<int> inner;

        while (std::getline(ss,number,',')) {
          inner.push_back(std::stoi(number));
        }
        m_rolls.push_back(inner);
      }
    }
  }

  void process()
  {
    for( int i = 0 ; i < m_rolls.size() ; i++)
    {
      std::cout << "Line: " << i << " Score: " << calculate(m_rolls[i]) << std::endl;
    }
  }

private:
  //int calculate(int idx)
  int calculate(std::vector<int> rolls)
  {
    int bonus_rolls = 0;
    int bonus_score = 0;
    int score = 0;

    std::vector<int>::iterator first_roll = rolls.begin();

    for( int frame = 0 ; frame < 10; frame++ ){

      std::vector<int>::iterator second_roll = first_roll+1;

      // std::cout << "-------------------"<< std::endl;
      // std::cout << "Frame: " << frame+1 << std::endl;
      // std::cout << "Bonus score: " <<  bonus_score << std::endl;
      // std::cout << "Bonus rolls: " << bonus_rolls << std::endl;
      // std::cout << "Score: " << score << std::endl;
      // std::cout << "Accum score: " <<  score+bonus_score << std::endl;
      // std::cout << "Roll 1: " << *first_roll << std::endl;
      // std::cout << "Roll 2: " << *second_roll << std::endl;

      std::vector<int>::iterator bonus = first_roll;
      while(bonus_rolls){
        // std::cout << "Bonus: " << *bonus << std::endl;
        bonus_score += *bonus;
        bonus_rolls--;
        bonus++;
      }

      score += *first_roll;

      if( 10 != *first_roll ){
        score += *second_roll;
        if (10 == (*first_roll + *second_roll)){
          bonus_rolls++;
        }
      }else{
        bonus_rolls += 2;
        first_roll--; // First = 10, no second roll
      }
      first_roll += 2;
    }

    // Pick up any 10th frame bonuses
    while( first_roll != rolls.end()){
      bonus_score += *first_roll++;
    }

    return score+bonus_score;
  }
};

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[]) {
  Cbowling_data bd("./src/bowling.data");
  bd.process();
}
#endif // #if ! defined UNITTEST_MODE
