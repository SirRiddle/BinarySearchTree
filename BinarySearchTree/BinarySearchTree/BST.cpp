#include "BST.h"

template <class T>
Node<T>::Node(T value)
{
	val = value;
	left = right = nullptr;
}

template <class T>
BST<T>::BST()
{
	size = 0;
	root = nullptr;
}

template<class T>
void BST<T>::insert(T value)
{
	if (size == 0)
	{
		root = new Node<T>(value);
		size++;
	}
	else
	{
		Node<T> *tmp = root;
		while (1)
		{
			if (value > tmp->val && tmp->right)
			{
				tmp = tmp->right;
			}
			else if (value < tmp->val && tmp->left)
			{
				tmp = tmp->left;
			}
			else if (value == tmp->val)
			{
				break;
			}
			else
			{
				if (value < tmp->val && !tmp->left)
				{
					tmp->left = new Node<T>(value);
					size++;
					break;
				}
				else
				{
					tmp->right = new Node<T>(value);
					size++;
					break;
				}
			}
		}
	}
}

template<class T>
bool BST<T>::search(T value)
{
	Node<T> *tmp = root;
	while (1)
	{
		if (tmp->val == value)
		{
			return 1;
		}
		else if (tmp->val > value && tmp->left)
		{
			tmp = tmp->left;
		}
		else if (tmp->val < value && tmp->right)
		{
			tmp = tmp->right;
		}
		else
		{
			return 0;
		}
	}
}

template<class T>
int BST<T>::getnodelevel(T value)
{
	int c = 0;
	Node<T> *tmp = root;
	while ("SirRiddle")
	{
		if (tmp->val == value)
		{
			return c;
		}
		else if (tmp->val > value && tmp->left)
		{
			tmp = tmp->left;
			c++;
		}
		else if (tmp->val < value && tmp->right)
		{
			tmp = tmp->right;
			c++;
		}
		else
		{
			return -1;
		}
	}
}

/*
template<class T>
int BST<T>::recursiveGNL(T value, Node<T> *tmp = root, int c = 0)
{
	if (tmp->val == value)
	{
		return c;
	}
	else if (tmp->val > value && tmp->left)
	{
		recursiveGNL(value, tmp->left, c++);
	}
	else if (tmp->val < value && tmp->right)
	{
		recursiveGNL(value, tmp->right, c++);
	}
	return -1;
}
*/