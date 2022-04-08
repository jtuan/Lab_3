// Programmer: John Le
// Lab Number: 3
// Lab Description: Linked List
// Course:  COSC 2436 PF III Data Structures Synonym 36017 Section 003
// Date: 03/30/2022
// File: node.cpp

#include <string>
#include "node.h"

template <class ItemType>
Node<ItemType>::Node()
{
    line = "";
    next = nullptr;
} // end default constructor


template <class ItemType>
Node<ItemType>::Node(const ItemType &lineItem)
{
    line = lineItem;
    next = nullptr;
} // end constructor

template <class ItemType>
Node<ItemType>::Node(const ItemType &lineItem, Node<ItemType> *nextNodePtr)
{
    line = lineItem;
    next = nextNodePtr;
} // end constructor


template <class ItemType>
void Node<ItemType>::setItem(const ItemType &lineItem)
{
    line = lineItem;
} // end setItem

template <class ItemType>
void Node<ItemType>::setNext(Node<ItemType> *nextNodePtr)
{
    next = nextNodePtr;
} // end setNext


template <class ItemType>
ItemType Node<ItemType>::getItem() const
{
    return line;
} // end getItem

template <class ItemType>
Node<ItemType> *Node<ItemType>::getNext() const
{
    return next;
} // end getNext