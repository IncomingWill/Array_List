/*
Title: Chapter Twelve List Program -- unorderedArrayListType implementation file
Created by William Schaeffer
CPS 362
P. 905-906, Challenge 6 and 10, List Program
2.10.2022
*/

#include "unorderedArrayListType.hpp"

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

//unorderedArrayListType Class Function Definitions

// Constructor
unorderedArrayListType::unorderedArrayListType(int size) : arrayListType(size)
{

}

void unorderedArrayListType::insertAt(int location, int insertItem)
{
	if (location < 0 || location >= maxSize)
		cout << "The position of the item to be inserted "
		<< "is out of range." << endl;
	else if (length >= maxSize)							//the list is full
		cout << "Cannot insert in a full list. " << endl;
	else
	{
		for (int i = length; i > location; i--)
			list[i] = list[i - 1];						//move the elements down

		list[location] = insertItem;						//insert the item at the specified position

		length++;								//increment the length
	}
}

void unorderedArrayListType::insertEnd(int insertItem)
{
	if (length >= maxSize)								//the list is full
		cout << "Cannot insert new elements into a full list." << endl;
	else
	{
		list[length] = insertItem;						//insert at the end
		length++;								//increment the length
	}
}

int unorderedArrayListType::seqSearch(int searchItem) const
{
	int loc;
	bool found = false;

	loc = 0;

	while (loc < length && !found)
		if (list[loc] == searchItem)
			found = true;
		else
			loc++;

	if (found)
		return loc;
	else
		return - 1;
}

void unorderedArrayListType::remove(int removeItem)
{
	int loc;

	if (length == 0)
		cout << "Cannot delete from an empty list." << endl;
	else
	{
		loc = seqSearch(removeItem);

		if (loc != -1)
			removeAt(loc);
		else
			cout << "The item to be deleted is not in the list."
			<< endl;
	}
}

void unorderedArrayListType::replaceAt(int location, int repItem)
{
	if (location < 0 || location >= length)
		cout << "The location of the item to be "
		<< "replaced is out of range." << endl;
	else
		list[location] = repItem;
}
