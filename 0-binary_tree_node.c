#include "binary_trees.h"
/**
* binary_tree_node - creates a binary tree node
* @parent: parent node
* @value: value to insert
*
* Return: pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *tmp;

	if (new_node == NULL)
		return (NULL);

	if (parent == NULL)
	{
		new_node->parent = NULL;
	}
	else
	{
		new_node->parent = parent;
		if (value < parent->n)
		{
			tmp = parent->left;
			if (tmp == NULL)
			{
				tmp = new_node;
			}
		}
		else
		{
			tmp = parent->right;
			if (tmp == NULL)
			{
				tmp = new_node;
			}
		}
	}
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
