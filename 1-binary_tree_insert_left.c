#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert child at left
 *
 * @parent: binary tree
 * @value: new child
 *
 * Return: The height of the tree starting at @node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	parent->left = binary_tree_node(parent, value);

	return (parent->left);
}
