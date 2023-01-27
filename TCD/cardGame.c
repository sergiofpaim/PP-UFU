#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct fullDeck
{
    int cardsV[40];
    char cardsN[40][20];
};

struct myDeck
{
    int cardsV[3];
    char cardsN[3][20];
};

void main()
{
    srand(time(NULL));

    int roundCount = 0, handState = 0, playerWins = 0, iaWins = 0;

    char deckName[40][20] = {"Quatro de Ouros", "Quatro de Espada", "Quatro de Copas",
                             "Cinco de Ouros", "Cinco de Espada", "Cinco de Copas", "Cinco de Paus",
                             "Seis de Ouros", "Seis de Espada", "Seis de Copas", "Seis de Paus",
                             "Sete de Espada", "Sete de Paus",
                             "Dama de Ouros", "Dama de Espada", "Dama de Copas", "Dama de Paus",
                             "Valete de Ouros", "Valete de Espada", "Valete de Copas", "Valete de Paus",
                             "Rei de Ouros", "Rei de Espada", "Rei de Copas", "Rei de Paus",
                             "As de Ouros", "As de Copas", "As de Paus",
                             "Dois de Ouros", "Dois de Espada", "Dois de Copas", "Dois de Paus",
                             "Tres de Ouros", "Tres de Espada", "Tres de Copas", "Tres de Paus",
                             "Sete de Ouros", "Espadilha", "Sete de Copas", "Zap"};

    int deckValue[40] = {1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7,
                         8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10, 11, 12, 13, 14};

    struct myDeck player[2];

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
        {
            int tempNumber = rand() % 40;

            player[i].cardsV[j] = deckValue[tempNumber];
            strcpy(player[i].cardsN[j], deckName[tempNumber]);
        }

    printf("%s", player[1].cardsN[1]);
}