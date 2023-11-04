#include <stddef.h>
#include "binary_trees.h"
/**
* binary_tree_is_leaf - checks if a node is a leaf node or not
* @node: pointer to node
* Return: returns 1 (true) or 0(false)
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (node->left == NULL && node->right == NULL ? 1 : 0);
}
