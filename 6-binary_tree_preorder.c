#include "binary_trees.h"
/**
* binary_tree_preorder - goes through a binary tree using pre-order traversal
* @tree: binary tree to traverse
* @func: function to call on each node
*
* Return: Void or NULL if failed
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
