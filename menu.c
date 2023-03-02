#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include "menu.h"


#define MAXNAME 50

#pragma region MENUS

void mostrarMenu() {
	printf("***********************************\n");
	printf("*             MENU                *\n");
	printf("***********************************\n");
	printf("* 1. Cliente                      *\n");
	printf("* 2. Gestor                       *\n");
	printf("* 3. Mobilidade                   *\n");
	printf("* 0. Sair                         *\n");
	printf("***********************************\n");
	printf("Opcao: ");
}

void mostrarCliente() {
	printf("***********************************\n");
	printf("*             CLIENTE             *\n");
	printf("***********************************\n");
	printf("* 1. Listar Clientes              *\n");
	printf("* 2. Inserir Novo Cliente         *\n");
	printf("* 3. Remover Cliente              *\n");
	printf("* 4. Alterar Cliente              *\n");
	printf("* 0. Sair                         *\n");
	printf("***********************************\n");
	printf("Opcao: ");
}

void mostrarGestor() {
	printf("***********************************\n");
	printf("*             GESTOR              *\n");
	printf("***********************************\n");
	printf("* 1. Listar Gestores              *\n");
	printf("* 2. Inserir Novo Gestor          *\n");
	printf("* 3. Remover Gestor               *\n");
	printf("* 4. Alterar Gestor               *\n");
	printf("* 0. Sair                         *\n");
	printf("***********************************\n");
	printf("Opcao: ");
}

void mostrarMobilidade() {
	printf("***********************************\n");
	printf("*             MOBILIDADE          *\n");
	printf("***********************************\n");
	printf("* 1. Listar Mobilidades           *\n");
	printf("* 2. Inserir Nova Mobilidade      *\n");
	printf("* 3. Remover Mobilidade           *\n");
	printf("* 4. Alterar Mobilidade           *\n");
	printf("* 0. Sair                         *\n");
	printf("***********************************\n");
	printf("Opcao: ");
}

#pragma endregion

#pragma region CLIENTE

// Fun��o para inserir um cliente

Cliente* criaCliente(Cliente* cliente) {
	int idCliente;
	char nomeCliente[MAXNAME];
	char moradaCliente[MAXNAME];
	int nifCliente;
	float saldo;
	Cliente* clientes = NULL;

	printf("ID do cliente: ");
	scanf_s("%d", &idCliente);
	printf("Nome do cliente: ");
	scanf_s("%s", &nomeCliente);
	printf("Morada: ");
	scanf_s("%s", &moradaCliente);
	printf("NIF: ");
	scanf_s("%d", &nifCliente);
	printf("Saldo: ");
	scanf_s("%.2f", &saldo);

	if (idCliente != NULL) {
		printf("\n\J� exite um cliente com o nome '%s'\n", nomeCliente);
		return cliente;
	}

	return inserirCliente(cliente, idCliente, nomeCliente,  moradaCliente, nifCliente, saldo);

}

// Fun��o remover cliente
Cliente* removeCliente(Cliente* cliente) {
	int idCliente = 0;

	listarClientes(cliente);

	printf("ID do Cliente que pretende remover: ");
	scanf_s("%d", &idCliente);

	return removeCliente(cliente, idCliente);
}

// Fun��o para alterar um cliente
Cliente* alterarCliente(Cliente* cliente, int nifCliente, char nomeNovo[]) {
	Cliente* nodoAtual = cliente;
	Cliente* nodoAnterior;

	while (nodoAtual != NULL && nodoAtual->nifCliente != nifCliente) {
		nodoAnterior = nodoAtual;
		nodoAtual = nodoAtual->seguinte;
	}

	if (nodoAtual != NULL) {
		strcpy_s(nodoAtual->nomeCliente, nomeNovo);
	}

	return(cliente);
}

#pragma endregion

#pragma region GESTOR

// Fun��o para inserir um gestor

Gestor* criaGestor(Gestor* gestor) {
	int idGestor;
	char nomeGestor[MAXNAME];
	char password[MAXNAME];
	Gestor* gestores = NULL;

	printf("ID do gestor: ");
	scanf_s("%d", &idGestor);
	printf("Nome do gestor: ");
	scanf_s("%s", &nomeGestor);
	printf("Insira a password: ");
	scanf_s("%s", &password);

	if (idGestor != NULL) {
		printf("\n\J� existe um gestor com o nome '%s'\n", nomeGestor);
		return(gestor);
	}

	return inserirGestor(gestor, idGestor, nomeGestor, password);

}

// Fun��o de remover um gestor

Gestor* removeGestor(Gestor* gestor) {
	int idGestor = 0;

	listarGestores(gestor);

	printf("ID do gestor que pretende remover: ");
	scanf_s("%d", &idGestor);

	return removeGestor(gestor, idGestor);
}

// Fun��o para alterar um gestor

Gestor* alterarGestor(Gestor* gestor, int idGestor, char nomeNovo[]) {
	Gestor* nodoAtual = gestor;
	Gestor* nodoAnterior;

	while (nodoAtual != NULL && nodoAtual->idGestor != idGestor)
	{
		nodoAnterior = nodoAtual;
		nodoAtual = nodoAtual->seguinte;
	}

	if (nodoAtual != NULL) {
		strcpy_s(nodoAtual->nomeGestor, nomeNovo);
	}

	return(gestor);
}

#pragma endregion

#pragma region MOBILIDADE

// Fun��o para inserir uma mobilidade

Mobilidade* criaMobilidade(Mobilidade* mobilidade) {
	int idMobilidade;
	char tipo[20];
	float nivel_bateria;
	int mobilidadeAlugada;
	Mobilidade* mobilidades = NULL;

	printf("ID da Mobilidade: ");
	scanf_s("%d", &idMobilidade);
	printf("Tipo de Mobilidade: ");
	scanf_s("%s", &tipo);
	printf("N�vel da Bateria: ");
	scanf_s("%.2f", &nivel_bateria);
	printf("A Mobilidade � alugada? ");
	scanf_s("%d", &mobilidadeAlugada);

	if (idMobilidade != NULL)
	{
		printf("\n\J� existe uma mobilidade com o ID '%d'\n", idMobilidade);
		return(mobilidade);
	}

	return inserirMobilidade(mobilidade, idMobilidade, tipo);
}

// Fun��o para remover uma mobilidade

Mobilidade* removeMobilidade(Mobilidade* mobilidade) {
	int idMobilidade = 0;

	listarMobilidade(mobilidade);

	printf("ID da mobilidade que pretende remover: ");
	scanf_s("%d", &idMobilidade);

	return removeMobilidade(mobilidade, idMobilidade);
}

// Fun��o para alterar uma mobilidade

Mobilidade* alterarMobilidade(Mobilidade* mobilidade, char tipo[], int novoID) {
	Mobilidade* nodoAtual = mobilidade;
	Mobilidade* nodoAnterior;

	while (nodoAtual != NULL && nodoAtual->tipo != tipo) {
		nodoAnterior = nodoAtual;
		nodoAtual = nodoAtual->seguinte;
	}

	if (nodoAtual != NULL)
	{
		strcpy_s(nodoAtual->idMobilidade, novoID);
	}

	return(mobilidade);
}

#pragma endregion