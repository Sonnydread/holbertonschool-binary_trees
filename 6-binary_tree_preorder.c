#include "binary_trees.h"

/**
 * binary_tree_preorder - using pre-order traversal
 * @tree: pointer to the root node
 * @func: func to call for each node
 * return: If tree or func is NULL, do nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

if (tree == NULL)
return;
if (func != NULL)
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);

}
