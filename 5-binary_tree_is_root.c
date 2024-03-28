#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a node is the root prolly
 * @node: Node to check.
 * Return: 1 if it's the root, 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
