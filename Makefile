CXX=g++

hw1: hw1.cpp NumberList.h NumberList.cpp VectorNumberList.h VectorNumberList.cpp
	$(CXX) hw1.cpp NumberList.cpp VectorNumberList.cpp -o hw1

clean:
	rm -f hw1 *~