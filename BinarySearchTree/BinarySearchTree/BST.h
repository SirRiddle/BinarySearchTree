#include <iostream>
#include <fstream>
#include <string>

using namespace std;

template <class T>
class Node
{
public:
	Node<T> *left, *right;
	T val;
	Node(T);
};

template <class T>
class BST
{
	int size;
	Node<T> *root;
public:
	BST();
	void insert(T);
	bool search(T);
	int getnodelevel(T);
	/*int recursiveGNL(T,Node*,int);*/
};