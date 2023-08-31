#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: The uncle node, NULL if node is NULL or the parent is NULL, or if
 * node has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* If node is NULL or the parent is NULL, return NULL */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* If the parent is the left child, return the right child */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	/* If the parent is the right child, return the left child */
	return (node->parent->parent->left);
}
