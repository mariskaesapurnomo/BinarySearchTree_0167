// BinarySearchTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	// constructor for the node class
	Node(string i, Node* l, Node* r)
	{
		info = 1;
		leftchild = l;
		rightchild = r;
	}
};

class BinaryTree
{
public:
    Node* ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // Initializing ROOT to null
    }

    void insert(string element) // Insert a node in the binary serach tree
    {
        Node* newNode = new Node(element, nullptr, nullptr); // Allocate memory for the new node
        newNode->info = element; // Assign value to the data field of the new node
        newNode->leftchild = nullptr; // Make the left child of the new node point tu NULL
        newNode->rightchild = nullptr; // Make the right child of the new node point tu NULL

        Node* parent = nullptr;
        Node* currentNode = nullptr;
        search(element, parent, currentNode); // Locate the node which will be the parent of the node to be ins

    }
};

int main()
{
	
}