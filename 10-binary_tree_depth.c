#include "binary_trees.h"
/**
 * binary_tree_depth -  measures the depth
 * @tree: pointer to the node
 * Return: 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)

{
if (tree == NULL)
return (0);

if (tree->parent)
return (1 + binary_tree_depth(tree->parent));
return (0);
}
