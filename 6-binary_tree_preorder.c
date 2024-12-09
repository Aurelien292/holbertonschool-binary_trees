#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_preorder - Parcourt un arbre binaire en pré-ordre
 * @tree: Pointeur vers la racine de l'arbre
 * @func: Pointeur vers la fonction à appliquer sur chaque nœud
 *
 * Description:
 * Cette fonction parcourt l'arbre binaire en pré-ordre et
 * applique la fonction`func` sur la valeur de chaque nœud.
 * Le parcours pré-ordre consiste à visiter la racine d'abord,
 *  puis récursivement le sous-arbre gauche, et enfin le sous-arbre droit.
 *
 * Si l'arbre est vide ou si la fonction est NULL, la fonction ne fait rien.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))

{
if (tree == NULL || func == NULL)
{
return;
}
func(tree->n);

if (tree->left != NULL)
binary_tree_preorder(tree->left, func);

if (tree->right != NULL)
binary_tree_preorder(tree->right, func);
}
