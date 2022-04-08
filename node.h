// Programmer: John Le
// Lab Number: 3
// Lab Description: Linked Lists
// Course:  COSC 2436 PF III Data Structures Synonym 36017 Section 003
// Date: 03/30/2022
// File: node.h

#ifndef NODE_H
#define NODE_H

template <class ItemType>
class Node
{
private:
    ItemType line;
    Node<ItemType> *next;

public:
    Node();                                                    
    Node(const ItemType &lineItem);                                     
    Node(const ItemType &lineItem, Node<ItemType> *nextNodePtr);  
    void setItem(const ItemType &lineItem);                       
    void setNext(Node<ItemType> *nextNodePtr);                 
    ItemType getItem() const;                                            
    Node<ItemType> *getNext() const;                           
};

#include "node.cpp"
#endif
