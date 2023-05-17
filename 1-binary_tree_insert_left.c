#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert left child
 * @parent: pointer to left child
 * @value: value
 * Return: pointer to left, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
int vleft;

if (parent == NULL)
return (NULL);
if (parent->left == NULL)

{
parent->left = binary_tree_node(parent, value);
return (parent->left);
}
else

{
vleft = parent->left->n;
parent->left->n = value;
parent->left->left = binary_tree_node(parent->left, vleft);
return (parent->left->left);

}
return (NULL);

}
