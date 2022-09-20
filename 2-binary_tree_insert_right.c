#include "binary_trees.h"
/**
* binary_tree_insert_right - inserts a node as the right-child of another node
* @parent: parent node
* @value: value to insert
*
* Return: pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	tmp = parent->right;
	if (tmp == NULL)
	{
		tmp = new_node;
	}
	else
	{
		new_node->right = tmp;
		tmp->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
