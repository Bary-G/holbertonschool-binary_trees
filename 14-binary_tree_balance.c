#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree
 * @node: Pointer to the node to measure the height of
 *
 * Return: Height of the tree, or -1 if node is NULL
 */
int height(const binary_tree_t *node)
{
int left_height;
int right_height;
if (node == NULL)
return (-1);
left_height = height(node->left);
right_height = height(node->right);
return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height;
int right_height;
if (tree == NULL)
return (0);
left_height = height(tree->left);
right_height = height(tree->right);
return (left_height - right_height);
}
