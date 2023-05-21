#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to the root
 * Return: 0 If tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)

{
int balancef;

if (tree == NULL)
return (0);
balancef = binary_tree_height(tree->left) - binary_tree_height(tree->right);
if (tree->left == NULL)
balancef = binary_tree_height(tree) * -1;
else if (tree->right == NULL)
balancef = binary_tree_height(tree);
return (balancef);
}

/**
 * binary_tree_height - measures heigth
 * @tree: pointer to the root
 * Return: 0 If tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)

{
int lefth, righth;

if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (0);
lefth = binary_tree_height(tree->left);
righth = binary_tree_height(tree->right);
if (lefth > righth)
return (lefth + 1);
else
return (righth + 1);

}
