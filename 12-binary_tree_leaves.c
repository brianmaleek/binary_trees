#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: The number of leaves in the tree, 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If the node has no children, it is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recursively count the leaves */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
