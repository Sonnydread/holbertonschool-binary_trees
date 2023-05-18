#include "binary_trees.h"

/**
 * binary_tree_inorder - using in-order traversal
 * @tree: pointer to the root node
 * @func: funct to call for each node
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))

{

if (tree == NULL)
return;
binary_tree_inorder(tree->left, func);
if (func != NULL)
func(tree->n);
binary_tree_inorder(tree->right, func);

}
