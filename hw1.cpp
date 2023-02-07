#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> name) {
    for(int i = 0; i < name.size(); i++) {
        cout << i << endl; 
    }
}

int main() {
    //Problem 2: Nested For Loops Counter
    for(int i = 0; i < 5; i++) {
        cout << i <<" - ";
        for(int j = 0; j < i; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }

    //Problem 3: Modulo
    for(int i = 0; i < 5; i++) {
        cout << i <<" - ";
        for(int j = 0; j < i; j++) {
            if(i % 2 == 0) {
                cout << j << " ";
            }
        }
        cout << "\n";
    }

    //Problem 4: Vectors
    vector<int> numbers;
    for(int i = 0; i < 10; i++) {
        numbers.push_back(i);
    }
    printVector(numbers);

    numbers.erase(numbers.begin());
    numbers.erase(numbers.begin()+2);
    printVector(numbers);

    //Problem 5: Fibonacci

}