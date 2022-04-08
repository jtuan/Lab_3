// Programmer: John Le
// Lab Number: 3
// Lab Description: Linked List
// Course:  COSC 2436 PF III Data Structures Synonym 36017 Section 003
// Date: 03/30/2022
// File: linkedlist.h

#ifndef LINKED_LIST
#define LINKED_LIST

#include <vector>
#include <string>

#include "listinterface.h"
#include "node.h"

template <class ItemType>
class LinkedList : public ListInterface<ItemType>
{
private:
    Node<ItemType> *headPtr; 
    int numItems;            

public:
    LinkedList();    
    LinkedList(const ItemType *headPtr);                       
    virtual ~LinkedList();                  
    bool addNode(const ItemType &newEntry); 
    int getSize() const;                    
    std::vector<ItemType> toVector();  
};     

#include "linkedlist.cpp"

#endif