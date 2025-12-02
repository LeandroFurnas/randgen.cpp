#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <vector>

using namespace std;

struct bingoNums {
    int num;
    bool estado;
};

struct bingoNumsIndesponiveis

int main() {
    while(true){
    
        vector<bingoNums> Nums;

        for (int i = 1; i <= 100; i++) {
            bingoNums temp;
            temp.num = i;
            Nums.push_back(temp);
            estado = false;
        }
        
    rand();

    bingoNums temp;
    temp.num = rand() % 101; 
    
    cout << "Número aleatório entre 0 e 100: " << temp.num << endl;

    randnum.pop_back(temp); 
    cin.get();
    
    }
    return 0;
}
