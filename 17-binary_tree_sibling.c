#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: The sibling node, NULL if node is NULL or the parent is NULL, or if
 * node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* If node is NULL or the parent is NULL, return NULL */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* node = left return right child */
	if (node->parent->left == node)
		return (node->parent->right);

	/* node = right return left child */
	return (node->parent->left);
}
