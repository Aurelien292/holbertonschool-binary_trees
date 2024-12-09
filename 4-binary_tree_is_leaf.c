#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_is_leaf - Vérifie si un nœud est une feuille
 * @node: Pointeur vers le nœud à vérifier
 *
 * Description:
 * Cette fonction détermine si un nœud donné est une feuille. Un nœud
 * est considéré comme une feuille si il n'a pas d'enfants (pas de fils
 * gauche ni de fils droit). Si le nœud est NULL, il n'est pas une feuille.
 *
 * Return: 1 si le nœud est une feuille, sinon 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)

{
if (node == NULL)
{
return (0);
}

if (node->left == NULL && node->right == NULL)
{
return (1);
}
else
return (0);
}
