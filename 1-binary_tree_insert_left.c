#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: parent node
* @value: value to insert
*
* Return: pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *tmp;

	if (new_node == NULL || parent == NULL)
		return (NULL);

	tmp = parent->left;
	if (tmp == NULL)
	{
		tmp = new_node;
		new_node->left = NULL;
		new_node->parent = parent;
	}
	else
	{
		new_node->parent = parent;
		new_node->left = tmp;
		tmp->parent = new_node;
		parent->left = new_node;

	}

	new_node->right = NULL;
	new_node->n = value;
	return (new_node);
}
