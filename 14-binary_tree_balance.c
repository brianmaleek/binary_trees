#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: The height of the tree, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	// Get height of the left and right subtrees
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	// Return the greater height, plus 1 for the current node
	return ((left_h > right_h ? left_h : right_h) + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: The balance factor of the tree, 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	// Get height  the left and right subtrees
	left_h= binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	// Return the difference in height- balance factor
	return (left_h - right_h);
}
