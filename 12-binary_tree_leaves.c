#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += binary_tree_leaves(tree->left);
		nodes += binary_tree_leaves(tree->right);
		if (!tree->left && !tree->right)
			nodes += 1;
		else
			nodes += 0;
	}
	return (nodes);
}
