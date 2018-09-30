#include "pch.h"
#include "MyVector.h"

MyVector::MyVector(int s) : elem{new double[s]}, size{s}
{
}

double& MyVector::operator[](int i)
{
	return elem[i];
}

int MyVector::Size()
{
	return size;
}


MyVector::~MyVector()
{
}
