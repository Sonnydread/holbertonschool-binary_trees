#include "binary_trees.h"

/**
 * binary_tree_size - measures the size
 * @tree: pointer to the root
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)

{

size_t xsize = 1;

if (tree == NULL)
return (0);
binary_tree_size(tree->right);
binary_tree_size(tree->left);
return (xsize + 1);

}
