#include "binary_trees.h"
/**
* binary_tree_delete - deletes a binary tree
* @tree: pointer to root
*
* Return: Void
*/

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *node = tree;

	if (node != NULL)
	{
		binary_tree_delete(node->left);
		binary_tree_delete(node->right);
		free(node);
	}

}
