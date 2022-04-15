#pragma once

typedef struct Node
{
	int data;
	Node* left;
	Node* right;
} Node;

class Tree
{
private:
	int m_size;
	Node* m_node;
public:
	Tree();
	int getSize() const;
	void push(int data);
};

