#include "binary_trees.h"
#include <stddef.h>
/**
* binary_tree_insert_right - insert to right of parent
* @parent: parent node pointer
* @value: value to insert in node
* Return: returns pointer to node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node  = binary_tree_node(parent, value);

	if (!node)
		return (NULL);

	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}

		parent->right = node;
	return (node);
}
