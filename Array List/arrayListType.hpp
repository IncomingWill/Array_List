/*
Title: Chapter Twelve List Program -- arrayListType header file
Created by William Schaeffer
CPS 362
P. 905-906, Challenge 6 and 10, List Program
2.10.2022
*/

class arrayListType
{
public:
//Constructors

	//Creates an array of the size specified by the parameter size.
		//Default array size is 100
		//Postcondition: The list points to the array, length = 0, and maxSize = size
	arrayListType(int size = 100);

	//Copy Constructor
	arrayListType(const arrayListType& otherList);

	//Function to determine whether the list is empty
		//Postcondition: Return true if the list is empty; otherwise, return false
	bool isEmpty() const;

	//Function to determine whether the list is full
		//Postcondiition: Return true if the list is full; otherwise, return false
	bool isFull() const;

	//Fuction to determine the number of elements in the list
		//Postcondition: Returns the value of length
	int listSize() const;

	//Function to determine the number of elements in the list
		//Postcondition: Returns the value of maxSize
	int maxListSize() const;

	//Function to output the elements of the list
		//Postcondiition: Elements of the list are output on the standard output device
	void print() const;

	//Function to determine whether item is the same as the item in the list at the specified position by location
		//Postcondition: Returns true if list[location] is the same as item; otherwise, returns false.
			//If location is out of range, an appropriate message is displayed
	bool isItemAtEqual(int location, int item) const;

	//Function to remove the item from the list at the position specified by location
		//Postcondition: THe list element at list[location] is removed and length is decremented by 1
			//If location is out of range, an appropriate message is displayed
	void removeAt(int location);

	//Function to retrieve the element from the list at the position specified by location
		//Postcondition: retItem = list[location]
			//If location is out of range, and appropriate message is displayed
	void retrieveAt(int location, int& retItem) const;

	//Function to remove all the elements from the list. After this operation, the size of the list is zero.
		//Postcondition: length = 0
	void clearList();

//Abstract Functions

	//Function to insert insertItem in the list at the position specified by location
		//Postcondition: Starting at location, the elmenets of the list are shifted down,
			//list[location] = insertItem; length++;
			//If the list is full or location is out of range, an appropriate message is displayed
	virtual void insertAt(int location, int insertItem) = 0;

	//Function to insert insertItem at the end of the list. 
		//Postcondition: list[length] = insertItem; and length++;
			//If the list is full, an appropriate message is displayed 
	virtual void insertEnd(int insertItem) = 0;

	//Function to replace the elements in the list at the position specified by location.
		//Postcondition: list[location] = repItem
			//If location is out of range, an appropriate message is displayed
	virtual void replaceAt(int location, int repItem) = 0;
	
	//Function to search the list for searchItem
		//Postcondition: If the item is found, return the location in the array where the item is found
			//Otherwise, return -1
	virtual int seqSearch(int searchItem) const = 0;

	//Function to remove removeITem from the list
		//Postcondition: If removeItem is found in the list, it is removed from the list 
			//and length is decremented by one
	virtual void remove(int removeItem) = 0;

//Destructor
	//Deallocate the memory occpied by the array
	virtual ~arrayListType();

protected:
	int* list;		//array to hold the list elements
	int length;		//variable to store the length of the list
	int maxSize;	//variable to store the maximum size of the list
};