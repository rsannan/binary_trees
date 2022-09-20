#include "binary_trees.h"
/**
* binary_tree_inorder - goes through a binary tree using in-order traversal
* @tree: binary tree to traverse
* @func: function to call on each node
*
* Return: Void or NULL if failed
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
