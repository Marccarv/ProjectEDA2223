#include <stdio.h>
#include <stdlib.h>
#include "gestor.h"

// Fun��o para Listar todas os gestores
void listarGestores(Gestor* gestor)
{
	printf("****************************************************************************\n");
	printf("*                             LISTA DE GESTOR                              *\n");
	printf("****************************************************************************\n\n");
	while (gestor != NULL)
	{
		printf(" ID: %d     Nome: %s     Password: %s\n", gestor->idGestor, gestor->nomeGestor, gestor->password);
		gestor = gestor->seguinte;
	}
	printf("\n****************************************************************************\n");
}

// Fun��o para Criar um Novo Registo de um novo gestor (inser��o de um novo gestor)
Gestor* inserirGestor(Gestor* gestor, int idGestor, char nomeGestor[], char password[]) {
	Gestor* novo = (Gestor*)malloc(sizeof(Gestor));

	if (novo != NULL) {
		novo->idGestor = idGestor;
		strcpy(novo->nomeGestor, nomeGestor);
		strcpy(novo->password, password);
		novo->seguinte = gestor;
		return(novo);
	}
	else {
		return(gestor);
	}
}