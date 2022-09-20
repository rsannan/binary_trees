#include "binary_trees.h"
/**
* binary_tree_postorder - goes through a binary tree using postorder traversal
* @tree: binary tree to traverse
* @func: function to call on each node
*
* Return: Void or NULL if failed
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
