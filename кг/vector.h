#ifndef VECTOR_H_
#define VECTOR_H_

#include <cstdarg>
#include <iostream>

class vector {
public:
	vector();
	vector(int);
	vector(const vector&);
	vector(vector&&);
	~vector();
	int size() const { return length; }
	void resize(int);

	void setVector(double, ...);
	vector& operator=(const vector&);
	vector& operator=(vector&&);
	double& operator[](int i) { return data[i]; }
	double operator[](int i) const { return data[i]; }
	void print() {
		for (int j = 0; j < length; ++j) {
			std::cout << data[j] << ' ';
		}
		std::cout << std::endl;
	}
private:
	double *data;
	int length;
};

#endif