#include "bst.h"
#include <stdio.h>
#include <stdlib.h>




no * inserir (no* raiz, tipo_dado elemento){
    if(raiz == NULL) {
        no *novo = (no *) malloc(sizeof(struct no));
        novo->valor = elemento;
        novo->esq = NULL;
        novo->dir = NULL;
        return novo;
    } else {
           if(elemento > raiz->valor) {
                raiz->dir = inserir(raiz->dir, elemento);
           } else {
                raiz->esq = inserir(raiz->esq, elemento);
           }
           return raiz;
    }
}



void preorder(no* raiz){
    if(raiz == NULL) ;
    else {
        printf("[%d]", raiz->valor);
        preorder(raiz->esq);
        preorder(raiz->dir);
    }
}


void inorder(no* raiz){
    if(raiz == NULL) ;
    else {
        inorder(raiz->esq);
        printf("[%d]", raiz->valor);
        inorder(raiz->dir);
    }
}

void posorder(no* raiz){
    if(raiz == NULL) ;
    else {
        posorder(raiz->esq);
        posorder(raiz->dir);
        printf("[%d]", raiz->valor);
    }
}


no* remover(no* raiz, tipo_dado elemento) {
	return raiz;
}

