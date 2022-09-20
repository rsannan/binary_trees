#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lDepth = 0, rDepth = 0;

		if (tree->left)
			lDepth = 1 + binary_tree_height(tree->left);
		else
			lDepth = 0;
		if (tree->right)
			rDepth = 1 + binary_tree_height(tree->right);
		else
			rDepth = 0;

		if (lDepth > rDepth)
			return (lDepth);
		else
			return (rDepth);
	}
	return (0);
}
