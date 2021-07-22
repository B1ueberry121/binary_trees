#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (!tree->left && !tree->right))
		return (0);
	else
	{
		size_t left_subtree;
		size_t right_subtree;
		
		left_subtree = binary_tree_height(tree->left);
		right_subtree = binary_tree_height(tree->right);

		if (left_subtree > right_subtree)
			return (left_subtree) + 1;
		else
			return (right_subtree) + 1;
	}
}
