// Programmer: John Le
// Lab Number: 3
// Lab Description: Linked List
// Course:  COSC 2436 PF III Data Structures Synonym 36017 Section 003
// Date: 03/30/2022
// File: main.cpp

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "linkedlist.h"

using namespace std;

int main()
{
    fstream file;
    string fileName{""};
    int lineCount{0};
    LinkedList<string> list;

    cout << "Enter file name: "; 
    cin >> fileName;

    cout << endl;

    file.open(fileName, ios::in);

    while (!file.eof())
    {
        string line;
        getline(file, line);
        bool passTest = list.addNode(line);
        lineCount++;
    };

    cout << "The items in the file are: " << endl;

    vector<string> listItems = list.toVector();

    for (auto i : listItems)
       cout << i << endl;

    cout << "\nList Size: " << list.getSize() << endl;
    cout << "Line Count: " << lineCount << endl;

    file.close();

    return 0;
}