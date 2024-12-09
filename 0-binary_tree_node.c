#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Crée un nouveau nœud dans un arbre binaire
 *
 * @parent: Un pointeur vers le parent du nœud à créer
 * @value: La valeur à stocker dans le nouveau nœud
 *
 * Return: Un pointeur vers le nouveau nœud, ou NULL si l'allocation échoue
 *
 * Cette fonction crée un nouveau nœud pour un arbre binaire. Le nœud n'aura
 * aucun enfant au départ, et le parent sera défini à partir de la valeur
 * passée en paramètre. Si l'allocation de mémoire échoue, la fonction
 * retournera NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

{
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

if (new_node == NULL)
{
return (NULL);
}

new_node->n = value;
new_node->parent = parent;
new_node->right = NULL;
new_node->left = NULL;


return (new_node);

}
