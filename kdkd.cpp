#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

vector<int> nums;

void gerarsequencia() {
    nums.clear();
    for (int i = 0; i <= TamanhoMax; i++) {
        nums.push_back(i);
    }
}

void embaralhar() {
    static random_device rd;   
    static mt19937 gen(rd());  

    shuffle(nums.begin(), nums.end(), gen);
}

class BingoCards{       
    private:             
      int number;        
      char letter;
      
      
      public:
      BingoCards(int numCards){
        for(int k = 0; k < TamanhoMax; k++){
            for(int j = 0; j < 5; j++ )
        } 
      }
  };



int main(){

int TamanhoMax = 100;

}
;
