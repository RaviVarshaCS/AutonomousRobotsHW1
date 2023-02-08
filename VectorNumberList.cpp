#include "VectorNumberList.h"
#include <iostream>

using namespace std;

void VectorNumberList::addNumberToList(int num) { numbers.push_back(num); }

void VectorNumberList::removeNumberFromFront() {
  numbers.erase(numbers.begin());
}

void VectorNumberList::removeNumberFromBack() { numbers.pop_back(); }

int VectorNumberList::getNumberAt(size_t index) {
  int pos = (int)index;
  if (pos >= 0 && pos < numbers.size()) {
    return numbers[pos];
  } else {
    return -1;
  }
}

size_t VectorNumberList::getSizeOfList() { return numbers.size(); }

void VectorNumberList::clear() { numbers.clear(); }