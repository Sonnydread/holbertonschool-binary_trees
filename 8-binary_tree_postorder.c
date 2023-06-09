#include "binary_trees.h"

/**
 * binary_tree_postorder - post-order traversal
 * @tree: pointer to the root
 * @func: func to call for each node
 * return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))

{

if (tree == NULL)
return;
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
if (func != NULL)
func(tree->n);

}
