#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_nodes - counts the nodes except leaves
* @tree: rootnode
* Return: returns number of nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		count = 1;
	else
		count = 0;

	count = count + binary_tree_nodes(tree->left);
	count = count + binary_tree_nodes(tree->right);
	return (count);
}
