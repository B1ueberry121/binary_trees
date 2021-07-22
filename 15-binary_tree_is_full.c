#include "binary_trees.h"
#include <stdbool.h>

bool isFullTree(const binary_tree_t *);

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (isFullTree(tree))
		return (1);
	else
		return (0);
}

/**
 * isFullTree - recurvesively checks if tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: true if full , false if not
 */
bool isFullTree(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (true);

	if (tree->left == NULL && tree->right == NULL)
		return (true);

	if ((tree->left) && (tree->right))
		return (isFullTree(tree->left) && isFullTree(tree->right));

	return (false);
}
