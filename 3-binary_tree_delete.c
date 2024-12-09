#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Supprime un arbre binaire
 *
 * @tree: Un pointeur vers la racine de l'arbre à supprimer
 *
 * Return: Rien (void)
 *
 * Cette fonction supprime un arbre binaire en libérant récursivement tous
 * les nœuds de l'arbre, en commençant par les sous-arbres gauche et droit,
 * puis en libérant la mémoire allouée pour chaque nœud.
 * Si l'arbre est vide (c'est-à-dire si le pointeur 'tree' est NULL), la
 * fonction ne fait rien.
 */
void binary_tree_delete(binary_tree_t *tree)

{
if (tree == NULL)
return;

binary_tree_delete(tree->left);
binary_tree_delete(tree->right);

free(tree);
}
