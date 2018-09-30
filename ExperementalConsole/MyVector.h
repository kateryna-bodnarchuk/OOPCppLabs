#pragma once

class MyVector
{
public:
	MyVector(int s);
	double& operator[](int i);
	int Size();
	~MyVector();
private:
	double* elem;
	int size;
};

