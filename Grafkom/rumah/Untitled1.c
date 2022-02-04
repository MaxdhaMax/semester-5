#include <iostream>
#include <string>
using namespace std;

int main()
{
    int total;
    int size, elements;
    cin >> total;
    string letters[100][100];

    while (total > 0){
        cin >> size >> elements;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < elements; j++ ) {
                std::cin >> letters[i][j];
            }
        }
        total--;
    }

    for (int i = 0; i < size; i++) {
            for (int j = 0; j < elements; j++ ) {
                cout << letters[i][j] << std::endl;
            }
    }
}
