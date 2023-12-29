# link-list
COP 3330 Spring 2023 Assignment 8 Link List

“THE CHEESE CAKE SURVEY”PRACTICE WITH LINKED LISTS
Description: This assignment will be challenging. You will have to develop a linkedlist.cpp implementation of a doubly linked list with dummy header and tail. Normally in the data structures course we would have you use one of the standard templates but we want you to understand the details of developing your own code. The linked list will store statistical information concerning a survey on whether people believe whether “Cheese Cake” is a pie or cake.

Programming Specifications: Here are the lists of tasks and specifications.

There will be an unlimited number of records
The program must handle routine errors such as invalid file names and data out of range
Each record must be dynamically allocated.
Each record deleted must have the storage reclaimed
Functions to be implemented
Empty()
Size() -How many records are contained
Find()-Find a specific record
Insert()-Insert a node
Delete()-Delete a node
Print() -Print to standard output
List()-List the current record to standard output
CountPie() -Count the number of records that believe it is a Pie
CountCake()-Count the number of records that believe it is a Cake
Design Considerations:

The file will contain an undisclosed number of records that contain the following fields, each separated by at least one space.
id-An integer number that is unique for each person .
Last Name –Will not contain spaces or special characters (The list is ordered by last name. Don't worry about the first name).
First Name –Will not contain spaces or special characters.
Middle initial –A single Alphabetic character
Sex –A single Alphabetic character either M for Male, F for FemaleO for Other
Pie or Cake –A single Alphabetic character C if the person believes Cheese Cake is a Cake or P if the person believes that Cheese Cake is a Pie.
You will implement a doubly-linked list ( pointing to the previous and next record) with a dummy head and tail.
The Head will have the id with the lowest possible integer number. 
The Tail will have the lid with the highest possible integer number. 
An empty list is where the count or size is zero and/or the head->next point to the tail.
The linked list will be ordered ascending on the last name. 
The class that you provide (LinkedList) will be used to store and retrieve information and must comply with the specifications within this document.
The main routine will be responsible for the following steps: (an example will be provided) a.
Ask for a file to be opened and be persistent in asking for a valid file.
Open the file and read the records, and (one at a time) add each record to the linked list.
Print the report alphabetically to standard output using the List() and Print() member functions.
Count the number of those who think that Cheese Cake is a Pie
Count the number of those who think that Cheese Cake is a Cake
Find a specific Record to test this function.
Look for a record that does not exist
Delete a record to test this function
Member Function specifications:
LinkList();        Constructor, Creates an empty link list with a dummy  tail (or sentinel record), sets the count to zero. head points to tail and the previous and next pointers are nullptr. .
~LinkList();      Destructor, deletes the list, one record at a time and sets counter to zero.
bool Empty();  Returns true if the head->next of the list points to the tail or the size is zero
int Size();        Returns the number of records.
bool Find(const int index);    Finds the record with an id that matches the number past in with index. Sets the current pointer to that record. Returns true if found, false otherwise.
void Insert( PieCake_struct * p);     Inserts the past in record alphabetically into the list by last name.
bool Delete();  Deletes the record at the current pointer. Must use Find() first.
void Print();   Prints the report. Uses List(), CountPie(), and CountCake() methods. See the example output.
void List();      Prints the records out to standard  output.
int CountPIe();   Counts the records where the person thought Cheesecake is Pie.
intCountCake(); Counts the records where the person thought Cheesecake is Cake.
