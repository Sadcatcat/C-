#pragma once
#include<iostream>
using namespace std;
template<class T1, class T2>
class person
{
public:
	person(T1 name, T2 age);
	void Print();

private:
	T1 name;
	T2 age;

};

template<class T1, class T2>
person<T1, T2>::person(T1 name, T2 age)
{
	this->name = name;
	this->age = age;
}

template<class T1, class T2>
void person<T1, T2>::Print()
{
	cout << this->name << '\t' << this->age << endl;
}