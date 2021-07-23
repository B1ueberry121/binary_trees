#include "binary_trees.h"


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_subtree;
	size_t right_subtree;

	if (tree == NULL)
		return (0);

	left_subtree = binary_tree_height(tree->left);
	right_subtree = binary_tree_height(tree->right);

	if (left_subtree > right_subtree)
		return (left_subtree + 1);
	else
		return (right_subtree + 1);
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

	left_subtree = binary_tree_height(tree->left);
	right_subtree = binary_tree_height(tree->right);
	return (left_subtree - right_subtree);
}

/**
 * binary_tree_is_perfect - Checks if the binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_subtree;
	int right_subtree;

	if (!tree)
		return (0);

	left_subtree = height_count(tree->left);
	right_subtree = height_count(tree->right);
	return (left_subtree == right_subtree);
}
