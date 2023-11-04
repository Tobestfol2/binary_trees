#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_is_root - checks if a node is root node
* @node: pointer to node to check
* Return: 1(true) 0(false)
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return ((node->parent == NULL) ? 1 : 0);
}
