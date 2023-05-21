#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: A pointer to the node
 * Return: If node is NULL or has no uncle, NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)

{
if (node == NULL ||
node->parent == NULL ||
node->parent->parent == NULL)
return (NULL);

if (node->parent->parent->left && node->parent->parent->right)
{
if (node->parent == node->parent->parent->left)
return (node->parent->parent->right);
else
return (node->parent->parent->left);
}
return (NULL);
}
