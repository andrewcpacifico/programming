/**
 * Copyright (c) 2019 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include <map>

using namespace std;

typedef struct treeNode {
    int id, size;
    struct treeNode* parent;
} Tree;

Tree* getRoot(Tree* node)
{
    Tree* aux = node;

    while (aux->parent != NULL) {
        aux = aux->parent;
    }

    return aux;
}

void fusion(Tree* a, Tree* b)
{
    Tree* rootA = getRoot(a);
    Tree* rootB = getRoot(b);

    // same group already
    if (rootA->id == rootB->id) {
        return;
    }

    if (rootA->size > rootB->size) {
        rootB->parent = rootA;
        rootA->size += rootB->size;
    } else {
        rootA->parent = rootB;
        rootB->size += rootA->size;
    }
}

Tree* getTree(map<int, Tree*> *fusions, int id)
{
    Tree* node = (*fusions)[id];

    if (node == NULL) {
        node = (Tree*) malloc(sizeof(Tree));
        node->size = 1;
        node->id = id;
        node->parent = NULL;

        (*fusions)[id] = node;
    }

    return node;
}

int main()
{
    map<int, Tree*> fusions;
    char type[2];
    int n, k, i, op1, op2;
    Tree* tree1, *tree2;

    scanf("%d%d", &n, &k);

    for (i = 0; i < k; i++) {
        scanf("%s%d%d", type, &op1, &op2);

        tree1 = getTree(&fusions, op1);
        tree2 = getTree(&fusions, op2);

        if (type[0] == 'C') {
            if (getRoot(tree1)->id == getRoot(tree2)->id) {
                printf("S\n");
            } else {
                printf("N\n");
            }
        } else {
            fusion(tree1, tree2);
        }
    }

    return 0;
}
