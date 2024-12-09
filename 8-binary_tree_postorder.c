#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_postorder - Parcourt un arbre binaire en post-ordre
 * @tree: Pointeur vers la racine de l'arbre
 * @func: Pointeur vers la fonction à appliquer sur chaque nœud
 *
 * Description:
 * Cette fonction parcourt l'arbre binaire en suivant un parcours
 * **post-ordre** et applique la fonction `func` à chaque nœud de l'arbre.
 * Le parcours en post-ordre consiste à visiter d'abord le sous-arbre gauche,
 * puis le sous-arbre droit, et enfin la racine.
 *
 * Si l'arbre est vide (tree est NULL) ou si la fonction `func` est NULL,
 * la fonction ne fait rien.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))

{
if (tree == NULL || func == NULL)
{
return;
}

if (tree->left != NULL)
{
binary_tree_postorder(tree->left, func);
}

if (tree->right != NULL)
{
binary_tree_postorder(tree->right, func);
}

func(tree->n);
}
