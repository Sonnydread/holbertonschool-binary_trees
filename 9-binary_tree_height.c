#include "binary_trees.h"
/**
 * binary_tree_height - measures the heigth
 * @tree: pointer to the root
 * Return: height, or 0 if is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)

{

int left = 0, right = 0;

if (tree == NULL)
return (0);

if (tree->left)
left += 1 + binary_tree_height(tree->left);
if (tree->right)
right += 1 + binary_tree_height(tree->right);
if (right > left)

return (left);
return (right);

}
