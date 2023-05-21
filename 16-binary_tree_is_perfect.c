#include "binary_trees.h"

/**
* binary_tree_is_perfect - func tree is perfect
* @tree: pointer to the root
* Return: 0 if tree is NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int left_height, right_height;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

if (left_height == right_height)
{
if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
return (1);
}

return (0);
}

/**
* binary_tree_height - function that measures the height
* @tree: is a pointer to the root
* Return: the height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

return (1 + (left_height > right_height ? left_height : right_height));
}
