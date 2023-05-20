#include "binary_trees.h"
/**
 * binary_tree_height - measures the heigth
 * @tree: pointer to the root
 * Return: height, or 0 if is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)

{

int lefth, righth;

if (tree == NULL)
return (0);

if (tree->right == NULL && tree->left == NULL)
return (0);
righth = binary_tree_height(tree->right);
lefth = binary_tree_height(tree->left);
if (righth > lefth)
return (righth + 1);
else
return (lefth + 1);
}
