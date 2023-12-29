#include <iostream>
#include "linklist.h"
using namespace std;

LinkList::LinkList() {          // Default constructor
    
    head = new PieCake_struct;
    tail = new PieCake_struct;
    head->id = -1;
    head->lname = "        ";
    tail->id = 9999999;
    tail->lname = "zzzzzzzz";
    head->next = tail;
    head->prev = nullptr;
    tail->next = nullptr;
    tail->prev = head;
    current = nullptr;
    count = 0;
}

LinkList::~LinkList() {
    
    PieCake_struct * temp;
    cout << "Destructor called." << endl;
    if (Empty() == true) {
        delete head;
        delete tail;
        return;
    }
    current = head->next;
    while (current != NULL) {
        temp = current;
        current = current->next;
        delete temp;
    }
    delete head;
    delete tail;
}

bool LinkList::Empty() {
    
    if (count ==0) {return true; }
    else {return false;}
}

int LinkList::Size() {
    
    cout << count << endl;
    return count;
}

bool LinkList::Find(const int idnumber) { // Looks for a record with the id, returns true if  found, false otherwise.
                                          // Also sets the current to the record found.
    current = head->next;
    while (current != NULL) {
        if (idnumber == current->id) {
            return true;
        }
        current = current->next;
    }
    cout << "Sorry, record not found." << endl; // Runs if the record is not found in the while loop
    return false;
}

void LinkList::Insert( PieCake_struct * p) {
    cout << "Starting Insert()" << endl; 
    /*
    if(Empty())
    {
        head->prev = p;
        tail->next = p;
        count++;
        cout << "is Empty()" << endl;
        return;
    }
    */
    //PieCake_struct * temp = p; // temp is a pointer to a new PieCake_struct with p data. ("temp" and "current" pointers seem like the same thing, it's what I saw in the example.)
    //current =  tail;   // pointer to current pieCake_struct is now pointing to the PieCake_struct right after the dummy head.
    
    cout << "new PieCake_struct created with temp" << endl;
    //insert at current -> prev
    current = head->next;
    count++;
    while (p->lname > current->lname) {
        current = current->next;
    }
    p->prev = current->prev;
    p->next = current;
    current->prev->next = p;
    current->prev = p;
    /*
    p->next = current;        
    p->prev = current->prev;
    current->prev->next = p;
    current->prev = p; 
    cout << "Insert() done" << endl;
    return;
    */
}


bool LinkList::Delete() {
    if(count >= 0) return false;
    current->prev->next = current->next;
    current->next->prev = current->prev;
    count --;
    return true;
}

void LinkList::Print() {
    
    cout << " * * * The Great Cheesecake Survey * * * " << endl;
    cout << "ID   " << "First Name       " << "MI   " << "Last Name     " << "Sex    " << "Answer" << endl;
    cout << "--   ----------       --   ----------    ---    ------" << endl;
    current = head->next;
    while (current != tail) {
        cout << current->id << "  " << current->fname << "           " << current->mi << "    " << current->lname << "       " << current->sex << "    " << current->pORc << endl;
        current = current->next;
    }
    cout << "--   ----------       --   ----------    ---    ------" << endl;
}

void LinkList::List() {
    
    cout << "ID   " << "First Name       " << "MI   " << "Last Name     " << "Sex    " << "Answer" << endl;
    cout << current->id << "  " << current->fname << "           " << current->mi << "    " << current->lname << "       " << current->sex << "    " << current->pORc << endl;
}

int LinkList::CountPie() {
    
    int pieCounter = 0;
    while (current != tail) {
         if (current->pORc == 'p') {
             pieCounter++;
         }  
    }

    return pieCounter;
}

int LinkList::CountCake() {
    
    int cakeCounter = 0;
    while (current != tail) {
         if (current->pORc == 'c') {
             cakeCounter++;
         }  
    }

    return cakeCounter;
}
