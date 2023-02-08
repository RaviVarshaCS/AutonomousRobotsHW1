#ifndef VECTOR_NUMBER_LIST_H
#define VECTOR_NUMBER_LIST_H

#include "NumberList.h"
#include <vector>
#include <cstdlib>

using namespace std;

class VectorNumberList : public NumberList {
	private: 
		vector<int> numbers;

	public: 
		void addNumberToList(int num);
		void removeNumberFromFront();
		void removeNumberFromBack();
		int getNumberAt(size_t index);
		size_t getSizeOfList();
		void clear();
};

#endif