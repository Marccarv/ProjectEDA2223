#pragma once

// Estrutura para representar um meio de mobilidade el�trica

typedef struct mobilidade
{
    // Identificador �nico do meio de mobilidade
    int idMobilidade; 
    // Tipo do meio de mobilidade (ex: bicicleta el�trica, patinete el�trica)
    char tipo[20]; 
    // N�vel atual da bateria (em porcentagem)
    float nivel_bateria;
    // Indica se o meio de mobilidade est� alugado (1) ou n�o (0)
    int mobilidadeAlugada; 
    // Ponteiro para o pr�ximo meio de mobilidade na lista
    struct mobilidade* seguinte; 

} Mobilidade;