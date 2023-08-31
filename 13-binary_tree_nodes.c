#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: The number of nodes with at least 1 child in the tree, 0 if tree is
 * NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If the node has no children, it is not a node */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Recursively count the nodes with at least 1 child */
	return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}
