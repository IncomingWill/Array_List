/*
Title: Chapter Twelve List Program -- unorderedArrayListType header file
Created by William Schaeffer
CPS 362
P. 905-906, Challenge 6 and 10, List Program
2.10.2022
*/

#include "arrayListType.hpp"

class unorderedArrayListType : public arrayListType
{
public:

//Constructor
	unorderedArrayListType(int size = 100);
	
//Functions to override Virtual Abstract Functions of Base Class
	void insertAt(int location, int insertItem);
	void insertEnd(int insertItem);
	void replaceAt(int location, int repItem);
	int seqSearch(int searchItem) const;
	void remove(int removeItem);

};