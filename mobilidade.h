#pragma once

// Estrutura para representar um meio de mobilidade el�trica

typedef struct mobilidade
{
    // Identificador �nico do meio de mobilidade
    int idMobilidade; 
    // Tipo do meio de mobilidade (ex: bicicleta el�trica, patinete el�trica)
    char tipo[100]; 
    // N�vel atual da bateria (em porcentagem)
    float nivel_bateria;
    // Autonomia
    float autonomia;
    // Apontador para o pr�ximo meio de mobilidade na lista
    struct mobilidade* seguinte;


} Mobilidade;


//Declara��o das fun��es para as mobilidades

void listarMobilidade(Mobilidade* mobilidade);
int existeMobilidade(Mobilidade* mobilidade, int idMobilidade);
Mobilidade* inserirMobilidade(Mobilidade* mobilidade, int idMobilidade, char tipo[], float n�vel_bateria, float autonomia);
Mobilidade* removerMobilidade(Mobilidade* mobilidade, int idMobilidade);
Mobilidade* alterarMobilidade(Mobilidade* mobilidade, int idMobilidade, char tipo[], float nivel_bateria, float autonomia);
void listarMobilidadesDESC(Mobilidade* mobilidade);