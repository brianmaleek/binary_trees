#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise or if node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* if node is NULL, return 0 */
	if (node == NULL)
		return (0);

	/* check if node is a leaf, Left and Right should be NULL */
	if (node->left == NULL && node->right == NULL)
		return (1);

	/* if node has children, return 0 */
	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *          the height
 *
 * Return: The height of the binary tree, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* if tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* if tree is a leaf, return 0 */
	if (binary_tree_is_leaf(tree))
		return (0);

	/* if tree has children, return 1 + the max height of the children */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);


	return (1 + (left_height > right_height ? left_height : right_height));
}
