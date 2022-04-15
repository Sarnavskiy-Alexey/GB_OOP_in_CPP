#include "Tree.h"

Tree::Tree()
{
	this->m_size = 0;
	this->m_node = new Node;
	m_node = nullptr;
}

int Tree::getSize() const
{
	return m_size;
}

void Tree::push(int data)
{
	Node* node = new Node;
	node->data = data;
	node->left = nullptr;
	node->right = nullptr;

	if (m_size == 0)
	{
		m_node = node;
		m_size++;
		return;
	}

	Node* current = m_node;
	while (current != nullptr)
	{
		if (node->data < m_node->data)
		{
			current = current->left;
		}
		else if (node->data > m_node->data)
		{
			current = current->right;
		}
		else
		{
			break;
		}

		if (current == nullptr)
		{
			current = node;
			m_size++;
			break;
		}
	}
}
