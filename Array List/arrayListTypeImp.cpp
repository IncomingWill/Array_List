/*
Title: Chapter Twelve List Program -- arrayListType implementation file
Created by William Schaeffer
CPS 362
P. 905-906, Challenge 6 and 10, List Program
2.10.2022
*/

#include "arrayListType.hpp"

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

//arrayListType Class Function Definitions

//Constructors

arrayListType::arrayListType(int size)
{
	if (size <= 0)
	{
		cout << "The array size must be positive. Creating "
			<< "a default array of the size 100." << endl;

		maxSize = 100;
	}
	else
		maxSize = size;
	length = 0;
	list = new int[maxSize];
}

arrayListType::arrayListType(const arrayListType& otherList)
{
	maxSize = otherList.maxSize;
	length = otherList.length;

	list = new int[maxSize];									//array creation

	for (int j = 0; j < length; j++)							//copy otherList
		list[j] = otherList.list[j];
}

//Accessor Functions

bool arrayListType::isEmpty() const
{
	return (length == 0);
}

bool arrayListType::isFull() const
{
	return (length == maxSize);
}

int arrayListType::listSize() const
{
	return length;
}

int arrayListType::maxListSize() const
{
	return maxSize;
}

void arrayListType::print() const
{
	for (int i = 0; i < length; i++)
		cout << list[i] << " ";
	cout << endl;
}

bool arrayListType::isItemAtEqual(int location, int item) const
{
	if (location < 0 || location >= length)
	{
		cout << "The locaiton of the item to be remove "
			<< "is out of range." << endl;

		return false;
	}
	else
		return (list[location] == item);
}

void arrayListType::removeAt(int location)
{
	if (location < 0 || location >= length)
		cout << "The location of the item to be removed "
		<< "is out of range." << endl;
	else
	{
		for (int i = location; i < length - 1; i++)
			list[i] = list[i + 1];

		length--;
	}
}

void arrayListType::retrieveAt(int location, int& retItem) const
{
	if (location < 0 || location >= length)
		cout << "The locaiton of the item to be retrieved is "
		<< "out of range" << endl;
	else
		retItem = list[location];
}

void arrayListType::clearList()
{
	length = 0;
}

//Destructor

arrayListType::~arrayListType()
{
	delete[] list;
}