// Programmer: John Le
// Lab Number: 3
// Lab Description: Linked List
// Course:  COSC 2436 PF III Data Structures Synonym 36017 Section 003
// Date: 03/30/2022
// File: linkedinterface.h

#ifndef LIST_INTERFACE
#define LIST_INTERFACE

template <class ItemType>
class ListInterface
{
public:
    virtual bool addNode(const ItemType &newEntry) = 0;

    virtual int getSize() const = 0;

    virtual std::vector<ItemType> toVector() = 0;

    virtual ~ListInterface() {}
};

#endif