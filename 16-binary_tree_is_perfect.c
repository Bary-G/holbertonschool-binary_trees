#include "binary_trees.h"

/**
 * get_depth - Measures the depth of the leftmost leaf.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Depth of the tree.
 */
size_t get_depth(const binary_tree_t *tree)
{
size_t depth = 0;
while (tree)
{
depth++;
tree = tree->left;
}
return (depth);
}

/**
 * is_perfect_recursive - Recursively checks if a binary tree is perfect.
 * @tree: Pointer to the current node.
 * @depth: Expected depth of all leaves.
 * @level: Current level in the tree.
 *
 * Return: 1 if tree is perfect, 0 otherwise.
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t depth, size_t level)
{
if (!tree)
return (1);
if (!tree->left && !tree->right)
return (depth == level + 1);
if (!tree->left || !tree->right)
return (0);
return (is_perfect_recursive(tree->left, depth, level + 1) &&
is_perfect_recursive(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t depth;
if (!tree)
return (0);
depth = get_depth(tree);
return (is_perfect_recursive(tree, depth, 0));
}

