#ifndef LINKLIST_H
#define LINKLIST_H
#include "constructorfile.cpp"
#include <string>
using namespace std; 


class LinkList {
    
    public:
    LinkList();     // Constructor
    ~LinkList();    // Destructor
    LinkList & operator = (LinkList & l);   // Assignment operator
    bool Empty();   // Is empty
    int Count();    // Return number of records
    void insert (const int i, const string n);  // Insert a record
    bool Delete (const int i);                  // Delete record with id i
    void List();                                // List the records
    bool SetName (const int i, const string n); // Update name on record i
    string GetName (const int i);               // Get name at record i
    
    private:
    double linklist * Head;
    double linklist * Tail;
    double linklist * Curr;
    int RecordCount;
};
#endif // LINKLIST_H