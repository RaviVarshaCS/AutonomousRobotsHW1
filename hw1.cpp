#include <iostream>
#include <vector>
#include "VectorNumberList.h"
//#include <NumberList.h>
using namespace std;

void printVector(vector<int> name) {
  for (int i = 0; i < name.size(); i++) {
    cout << name[i] << endl;
  }
}

int main() {

  // Problem 2: Nested For Loops Counter
  cout << "Problem 2: Nested For Loops" <<endl;
  
  for (int i = 1; i <= 5; i++) {
    cout << i << " - ";
    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }
    cout << "\n";
  }

  // Problem 3: Modulo
  cout << "Problem 3: Modulo" <<endl;
  
   for (int i = 1; i <= 5; i++) {
    cout << i << " - ";
    for (int j = 1; j <= i; j++) {
      if(i % 2 == 0) {
        cout << j << " ";
      }
    }
    cout << "\n";
  }

  //Problem 4: Vectors
  cout << "Problem 4: Vectors Part 1" <<endl;
  
  vector<int> numbers;
  for (int i = 0; i < 10; i++) {
    numbers.push_back(i);
  }
  printVector(numbers);

  cout << "Problem 4: Vectors Part 2" <<endl;
  
  numbers.erase(numbers.begin());
  numbers.erase(numbers.begin() + 2);
  printVector(numbers);

  // Problem 5: Fibonacci
  cout << "Problem 5: Fibonacci" <<endl;
  
   numbers.clear();
   int count = 0;
   int sum = 0;
   while(count < 9) {

      if(numbers.size() < 2) {
          numbers.push_back(1);
      } else {
          sum = numbers[count-1] + numbers[count-2];
          numbers.push_back(sum);
      }
     count++;
  }
  printVector(numbers);

  cout << "Problem 6: Inheritance" <<endl;
  


  VectorNumberList a;
  VectorNumberList b;
  cout << "Testing addNumberToList" <<endl;
  
  for(int i = 0; i < 10; i++) {
    a.addNumberToList(i);
  }
  a.printNumbers();

  cout << "Testing removeNumberFromBack" <<endl;
  a.removeNumberFromBack();
  a.printNumbers();

  cout << "Testing removeNumberFromFront" <<endl;
  a.removeNumberFromFront();
  a.printNumbers();

  cout << "Testing getSizeOfTheList" <<endl;
  cout << a.getSizeOfList() << endl;

  cout << "Testing getNumberAt(size_t num)" << endl;
  cout << a.getNumberAt(0) << endl;


  for(int i = 10; i < 20; i++) {
    b.addNumberToList(i);
  }

  cout << "Testing computeNextFibonacciAndInsertAtEnd" <<endl;
  a.computeNextFibonacciAndInsertAtEnd();
  a.printNumbers();

  cout << "Testing computeNFibonacci" << endl;

  a.computeNFibonacci(2);
  a.printNumbers();

  cout << "Testing ReverseList" << endl;
  a.reverseList();
  a.printNumbers();

  cout << "Testing CopyList" << endl;
  a.copyListIntoMe(b);
  a.printNumbers();

  cout << "Testing clear" << endl;
  a.clear();
  a.printNumbers();
}