#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_is_root - Vérifie si un nœud est la racine de l'arbre
 * @node: Pointeur vers le nœud à vérifier
 *
 * Description:
 * Cette fonction détermine si le nœud donné est la racine de
 * l'arbre binaire.Un nœud est considéré comme la racine s'il
 * n'a pas de parent (le parent est NULL). Si le nœud est NULL,
 * il ne peut pas être la racine, donc la
 * fonction renvoie 0.
 *
 * Return: 1 si le nœud est la racine, sinon 0.
 */
int binary_tree_is_root(const binary_tree_t *node)

{
if (node == NULL)
{
return (0);
}
if (node->parent == NULL)
{
return (1);
}
return (0);
}
