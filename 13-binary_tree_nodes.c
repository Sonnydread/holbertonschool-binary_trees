#include "binary_trees.h"
/**
 * binary_tree_nodes - func that counts nodes
 * @tree: pointer to the root
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)

{
if (tree == NULL)
return (0);
if (tree->right != NULL || tree->left != NULL)
return (1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
}
