#include "binary_trees.h"

/**
 * binary_tree_inorder - Tranverses a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node,
 *		value passed as parameter
 *
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* if tree or func is NULL, return */
	if (tree == NULL || func == NULL)
		return;

	/* traverse left subtree */
	binary_tree_inorder(tree->left, func);

	/* call func on value of current node */
	func(tree->n);

	/* traverse right subtree */
	binary_tree_inorder(tree->right, func);
}
