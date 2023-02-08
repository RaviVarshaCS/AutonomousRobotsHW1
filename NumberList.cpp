#include "NumberList.h"
#include <iostream>

using namespace std;

void NumberList::printNumbers() {
  for (int i = 0; i < getSizeOfList(); i++) {
    cout << getNumberAt(i) << endl;
  }
  if(getSizeOfList() == 0) {
    cout << "List is Empty" << endl;
  }
}

void NumberList::computeNextFibonacciAndInsertAtEnd() {
  if (getSizeOfList() < 2) {
    addNumberToList(1);
  } else {
    int firstEntry = getNumberAt(getSizeOfList() - 1);
    int secondEntry = getNumberAt(getSizeOfList() - 2);
    int sum = firstEntry + secondEntry;
    addNumberToList(sum);
  }
}

void NumberList::computeNFibonacci(size_t n) {
  for (int i = 0; i < n; i++) {
    computeNextFibonacciAndInsertAtEnd();
  }
}

void NumberList::copyListIntoMe(NumberList &numList) {
  clear();
  for (int i = 0; i < numList.getSizeOfList(); i++) {
    addNumberToList(getNumberAt(i));
  }
}

void NumberList::reverseList() {
  for (int i = getSizeOfList() - 1; i >= 0; i--) {
    int temp = getNumberAt(i);
    addNumberToList(temp);
  }

  int length = getSizeOfList();

  for (int i = 0; i < length / 2; i++) {
    removeNumberFromFront();
  }
}
