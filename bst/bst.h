#ifndef BST_H
#define BST_H

typedef  int  tipo_dado;

typedef struct no {
    tipo_dado valor;
    struct no *esq, *dir;
} no;

no * inserir (no* raiz, tipo_dado elemento);
void preorder(no* raiz);
void inorder(no* raiz);
void posorder(no* raiz);

no* remover(no* raiz, tipo_dado elemento);

#endif
