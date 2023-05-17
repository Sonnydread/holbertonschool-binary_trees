#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert right child
 * @parent: pointer to right child
 * @value: value
 * Return: pointer to right, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
int vright;

if (parent == NULL)
return (NULL);
if (parent->right == NULL)

{
parent->right = binary_tree_node(parent, value);
return (parent->right);
}
else

{
vright = parent->right->n;
parent->right->n = value;
parent->right->right = binary_tree_node(parent->right, vright);
return (parent->right->right);

}
return (NULL);

}
