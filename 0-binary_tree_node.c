#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_node - returns a pointer to a binary tree node
* @parent: pointer to the parent node
* @value: the value in the node
* Return: returns a pointer to node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
