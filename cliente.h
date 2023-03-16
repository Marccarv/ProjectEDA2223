#include <stdio.h>
#include <stdlib.h>

#define MAXNOME 50

#pragma once

// Estrutura para representar um cliente

typedef struct cliente
{
    // Identificador �nico do cliente
    int idCliente; 
    // Nome do cliente
    char nomeCliente[MAXNOME];
    //Morada do cliente
    char moradaCliente[MAXNOME];
    //NIF do Cliente
    int nifCliente;
    // Saldo dispon�vel do cliente
    float saldo; 
    // Ponteiro para a estrutura do meio de mobilidade el�trica alugado pelo cliente que pode ser usada para armazenar informa��es cobre a mobilidade do cliente
    struct ClienteMobilidade* mobilidadeAlugada; 
    // Ponteiro para o pr�ximo cliente na lista
    struct cliente* seguinte;

} Cliente;

typedef struct clientemobilidade {

    // Nif do cliente
    int nifCliente;
    // ID da Mobilidade
    int id;
    // Apontador para o proximo clientemobilidade da lista
    struct clientemobilidade* seguinte;

}ClienteMobilidade;

//Declara��o das fun��es para os clientes

void listarClientes(Cliente* cliente);
Cliente* inserirCliente(Cliente* cliente, int idCliente, char nomeCliente[], char moradaCliente[], int nifCliente, float saldo);