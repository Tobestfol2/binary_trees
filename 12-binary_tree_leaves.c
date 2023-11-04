#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_leaves - counts the leaves in a bt
* @tree: pointer to root node
* Return: returns number of nodes
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right_leaves = 0;
	size_t left_leaves = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	return (left_leaves + right_leaves);
}
