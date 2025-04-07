#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert child at right
 *
 * @parent: binary tree
 * @value: new child
 *
 * Return: The height of the tree starting at @node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	parent->right = binary_tree_node(parent, value);

	return (parent->right);
}
