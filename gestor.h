#include <stdio.h>
#include <stdlib.h>

#define MAXNOME 50

#pragma once

// Estrutura para representar um gestor

typedef struct gestor
{
    // Identificador �nico do gestor
    int idGestor; 
    // Nome do gestor
    char nomeGestor[MAXNOME];
    // Senha de acesso do gestor
    char password[MAXNOME]; 
    // Ponteiro para o pr�ximo gestor na lista
    struct gestor* seguinte; 

} Gestor;

//Declara��o das fun��es para os gestores

void listarGestores(Gestor* gestor);
int existeGestor(Gestor* gestor, int idGestor);
Gestor* inserirGestor(Gestor* gestor, int idGestor, char nomeGestor[], char password[]);
Gestor* removerGestor(Gestor* gestor, int idGestor);
Gestor* alterarGestor(Gestor* gestor, int idGestor, char nomeGestorNovo[], char passwordNova[]);