#include "binary_trees.h"

/**
 * binary_tree_postorder - Tranverses a binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node,
 *			value passed as parameter
 *
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* if tree or func is NULL, return */
	if (tree == NULL || func == NULL)
		return;

	/* traverse left subtree */
	binary_tree_postorder(tree->left, func);

	/* traverse right subtree */
	binary_tree_postorder(tree->right, func);

	/* call func on value of current node */
	func(tree->n);
}
