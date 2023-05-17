#include "binary_trees.h"
/**
 * binary_tree_node - crate a new node
 * @parent: pointer to dad
 * @value: value
 * Return: pointer to new node, NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

{

binary_tree_t *new;

if (parent == NULL)
{
parent = malloc(sizeof(binary_tree_t));
if (parent == NULL)
return (NULL);
}
parent->n = value;
parent->left = NULL;
parent->right = NULL;
return (parent);
{
new = malloc(sizeof(binary_tree_t));
if (new == NULL)
{
free(parent);
return (NULL);
}
new->n = value;
new->parent = parent;
new->right = NULL;
new->left = NULL;
return (new);

}
}

