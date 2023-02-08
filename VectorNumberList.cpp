#include "VectorNumberList.h"
#include <iostream>

using namespace std;

void VectorNumberList::addNumberToList(int num) { numbers.push_back(num); }

void VectorNumberList::removeNumberFromFront() {
    if(numbers.size() > 0) {
        numbers.erase(numbers.begin());
    } else {
        cout << "Nothing to remove" << endl;
    }

}

void VectorNumberList::removeNumberFromBack() { 
    if(numbers.size() > 0) {
        numbers.pop_back();
    } else {
        cout << "Nothing to remove" << endl;
    } 
    
}

int VectorNumberList::getNumberAt(size_t index) {
  int pos = (int)index;
  if (pos >= 0 && pos < numbers.size()) {
    return numbers[pos];
  } else {
    cout << "Index given is out of bounds" << endl;
    return INT8_MAX;
  }
}

size_t VectorNumberList::getSizeOfList() { return numbers.size(); }

void VectorNumberList::clear() { numbers.clear(); }