#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0 or if node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/* if node is NULL, return 0 */
	if (node == NULL)
		return (0);

	/* check if node is a root, parent should be NULL */
	if (node->parent == NULL)
		return (1);

	/* if node has a parent, return 0 */
	return (0);
}
