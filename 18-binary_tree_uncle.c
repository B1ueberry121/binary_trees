#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if ((!node) || !(node->parent) || !(node->parent->parent))
		return (NULL);

	parent = node->parent->parent;
	if (parent->left && parent->right)
	{
		if (parent->left == node->parent)
		{
			return (parent->right);
		}
		return (parent->left);
	}
	return (NULL);
}
