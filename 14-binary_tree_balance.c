#include "binary_trees.h"

/**
 * height_count - counts the length of each branch of the tree
 * @tree: the tree to count
 * Return: the length
 */

int height_count(const binary_tree_t *tree)
{
	int left_subtree = 0;
	int right_subtree = 0;

	if (tree == NULL)
		return (0);

	left_subtree += height_count(tree->left) + 1;
	right_subtree += height_count(tree->right) + 1;

	if (left_subtree > right_subtree)
		return (left_subtree);
	return (right_subtree);
}

/**
 * binary_tree_balance - measures the balance faactor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_subtree;
	int right_subtree;

	if (!tree)
		return (0);

	left_subtree = height_count(tree->left);
	right_subtree = height_count(tree->right);
	return (left_subtree - right_subtree);
}
