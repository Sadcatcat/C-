#pragma once
#include<iostream>
using namespace std;

template<class T>
class Myarray
{
public:
	
	//���캯�� ��ʼ������  ��������


	Myarray(int capacity)
	{
		cout << "��ʼ����"<<endl;
		this->Capacity = capacity;
		this->Sizeof = 0;
		this->Array = new T[this->Capacity];//�����Զ�����������
	}

	Myarray(const Myarray& arr)
	{
		cout << "��ʼ����" << endl;
		this->Capacity = arr.Capacity;
		this->Sizeof = arr.Sizeof;
		//���
		this->Array = new T[arr.Capacity];
		//������Ԫ��һ��һ����������
		for (int i = 0; i < Sizeof; i++)
		{
			this->Array[i] = arr.Array[i];
		}
	}

	Myarray& operator=(const Myarray& arr)
	{
		cout << "��ʼ���������" << endl;
		if (this->Array != NULL)
		{
			delete[] this->Array;
			this->Array = NULL;
			this->Capacity = 0;
			this->Sizeof = 0;
		}

		//������ǳ��������
		this->Capacity = arr.Capacity;
		this->Sizeof = arr.Sizeof;
		//���
		this->Array = new T[arr.Capacity];
		//������Ԫ��һ��һ����������
		for (int i = 0; i < Sizeof; i++)
		{
			Array[i] = arr.Array[i];
		}
		return *this;
	}


	//β�巨
	void Push_Back(const T& val)
	{
		if (this->Capacity == this->Sizeof)
		{
			return;
		}
		this->Array[this->Sizeof] = val;
		this->Sizeof++;//���������С
	
	}


	//βɾ��
	void Pop_Back()
	{
		//���û����ʲ������һ��Ԫ�أ���Ϊβɾ���߼�ɾ��
		if (this->Sizeof == 0)
		{
			return;
		}
		this->Sizeof--;
	}

	//[]���������:ͨ���±귽ʽ���������е�Ԫ�� arr[0] = 100
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
			cout << "��ʼ����" << endl;
			delete[] this->Array;//�ͷ�����
			this->Array = NULL;
			this->Sizeof = 0;
			this->Capacity = 0;

		}
	
	}

private:
	T* Array;//ָ�������ָ��
	int Capacity;
	int Sizeof;


};