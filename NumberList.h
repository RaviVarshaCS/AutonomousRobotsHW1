#ifndef NUMBER_LIST_H
#define NUMBER_LIST_H

#include <cstdlib>

using namespace std;

class NumberList {
public:
	virtual void addNumberToList(int num) = 0;
	virtual void removeNumberFromFront() = 0;
	virtual void removeNumberFromBack() = 0;
	virtual int getNumberAt(size_t index) = 0;
	virtual size_t getSizeOfList() = 0;
	virtual void clear() = 0;

	void printNumbers();
	void computeNextFibonacciAndInsertAtEnd();
	void computeNFibonacci(size_t n);
	void copyListIntoMe(NumberList &numList);
	void reverseList();
	
};

#endif