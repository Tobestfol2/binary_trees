#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_preorder - this prints the numbers in all the nodes
* @tree: pointer to root node
* @func: pointer to function
* Return: return void
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
