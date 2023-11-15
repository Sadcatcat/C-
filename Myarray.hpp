#pragma once
#include<iostream>
using namespace std;

template<class T>
class Myarray
{
public:
	
	//构造函数 初始化数组  传入容量


	Myarray(int capacity)
	{
		cout << "开始构造"<<endl;
		this->Capacity = capacity;
		this->Sizeof = 0;
		this->Array = new T[this->Capacity];//建立自定义类型数组
	}

	Myarray(const Myarray& arr)
	{
		cout << "开始拷贝" << endl;
		this->Capacity = arr.Capacity;
		this->Sizeof = arr.Sizeof;
		//深拷贝
		this->Array = new T[arr.Capacity];
		//将数组元素一个一个拷贝过来
		for (int i = 0; i < Sizeof; i++)
		{
			this->Array[i] = arr.Array[i];
		}
	}

	Myarray& operator=(const Myarray& arr)
	{
		cout << "开始运算符重载" << endl;
		if (this->Array != NULL)
		{
			delete[] this->Array;
			this->Array = NULL;
			this->Capacity = 0;
			this->Sizeof = 0;
		}

		//深拷贝解决浅拷贝问题
		this->Capacity = arr.Capacity;
		this->Sizeof = arr.Sizeof;
		//深拷贝
		this->Array = new T[arr.Capacity];
		//将数组元素一个一个拷贝过来
		for (int i = 0; i < Sizeof; i++)
		{
			Array[i] = arr.Array[i];
		}
		return *this;
	}


	//尾插法
	void Push_Back(const T& val)
	{
		if (this->Capacity == this->Sizeof)
		{
			return;
		}
		this->Array[this->Sizeof] = val;
		this->Sizeof++;//更新数组大小
	
	}


	//尾删法
	void Pop_Back()
	{
		//让用户访问不到最后一个元素，即为尾删，逻辑删除
		if (this->Sizeof == 0)
		{
			return;
		}
		this->Sizeof--;
	}

	//[]运算符重载:通过下标方式访问数组中的元素 arr[0] = 100
	T& operator[](int index)
	{
		return this->Array[index];
		
	}

	int getCapacity()
	{
		return this->Capacity;
	}

	int getsizeof()
	{
		return this->Sizeof;
	}
	~Myarray()
	{
		if (this->Array != NULL)
		{
			cout << "开始析构" << endl;
			delete[] this->Array;//释放数组
			this->Array = NULL;
			this->Sizeof = 0;
			this->Capacity = 0;

		}
	
	}

private:
	T* Array;//指向数组的指针
	int Capacity;
	int Sizeof;


};