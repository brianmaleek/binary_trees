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
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if the tree is full, 0 if tree is NULL or not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* check if the node has no children */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* check if the node has two children */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 if tree is NULL or not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	/* Get height of the left and right subtrees */
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	/* If the tree is full and the heights are equal, it is perfect */
	if (binary_tree_is_full(tree) && left_h == right_h)
		return (1);

	return (0);
}
