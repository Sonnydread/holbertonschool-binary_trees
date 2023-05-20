#include "binary_trees.h"
/**
 * binary_tree_leaves - func counts the leaves
 * @tree:  pointer to the root
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)

{
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
