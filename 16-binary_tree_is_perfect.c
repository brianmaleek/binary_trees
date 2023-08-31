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

	/* Get height of the left and right subtrees */
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	/* Return the greater height, plus 1 for the current node */
	return ((left_h > right_h ? left_h : right_h) + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 if tree is NULL or not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	/* Get height of the left and right subtrees */
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	/* If the tree is full and the heights are equal, it is perfect */
	if (left_h != right_h)
		return (0);

	if (left_h == 0)
		return (1);

	return (binary_tree_is_perfect(tree->left)
		&& binary_tree_is_perfect(tree->right));
}
