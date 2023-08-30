#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node,
 *			value passed as parameter
 *
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* if tree or func is NULL, return */
	if (tree == NULL || func == NULL)
		return;

	/* call func on value of current node */
	func(tree->n);

	/* traverse left subtree */
	binary_tree_preorder(tree->left, func);

	/* traverse right subtree */
	binary_tree_preorder(tree->right, func);
}
