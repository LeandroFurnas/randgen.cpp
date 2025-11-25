#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

#define TamanhoMax 90
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

int main() {
    gerarsequencia();
    embaralhar();

    // imprimir vetor
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
