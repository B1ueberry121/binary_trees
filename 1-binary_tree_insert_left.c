#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left_child
 * @parent: pointer to the node to insert the left_child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	else
	{
		node->left = NULL;
	}

	parent->left = node;

	return (node);
}
