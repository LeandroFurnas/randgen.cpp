#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <random>
#include <iomanip>
using namespace std;

int TamanhoMax = 100;     
vector<int> nums;


void gerarsequencia() {
    nums.clear();
    for (int i = 1; i <= TamanhoMax; i++) {
        nums.push_back(i);
    }
}

// Embaralha a sequência
void embaralhar() {
    static random_device rd;
    static mt19937 gen(rd());
    shuffle(nums.begin(), nums.end(), gen);
}

class BingoCards {
    private:
        vector<vector<int>> card;  // 5x5

    public:
        BingoCards() {
            card.resize(5, vector<int>(5, 0));
        }

        void gerar() {
            
            gerarsequencia();
            embaralhar();

            int index = 0;
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    card[i][j] = nums[index++];
                }
            }
        }

        void imprimir() {

            // Cabeçalho automático
            for (int i = 0; i < 5; i++) {
                char letra = "BINGO"[i];
                cout << " " << letra << "\t";
            }
            cout << "\n";
        
            // Tabela
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    if (i == 2 && j == 2) {
                        cout << " **\t"; // FREE
                    } else {
                        cout << setw(3) << card[i][j] << "\t";
                    }
                }
                cout << "\n";
            }
        }
        
        
};


int main() {
    BingoCards c;
    c.gerar();
    c.imprimir();
    return 0;
}
