#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Insère un nouveau nœud à droite d'un parent
 *
 * @parent: Un pointeur vers le parent du nœud à insérer
 * @value: La valeur à stocker dans le nouveau nœud
 *
 * Return: Un pointeur vers le nouveau nœud inséré, ou NULL si
 * l'allocation échoue
 *
 * Cette fonction insère un nouveau nœud à gauche du nœud parent
 * spécifié.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->n = value;
new_node->parent = parent;
parent->right = new_node;
new_node->left = NULL;
return (new_node);
}
