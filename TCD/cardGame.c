#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int fillDeckValue(int num);
const char *sorteia(int num);
// int checkGame(int winner);

struct playerDeck
{
    int cardsV[3];
    char cardsN[3][20];
};

void main()
{
    srand(time(NULL));

    int roundCount = 0, handState = 0, playerWins = 0, iaWins = 0, gameRunning = 1, turn;

    struct playerDeck player[2];

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
        {
            int deck[6] = {-1, -1, -1, -1, -1, -1};
            int tempNumber = rand() % 40;
            for (int k = 0; k < 6; k++)
                for (int l = 0; l < k; l++)
                {
                    if (tempNumber == deck[l])
                    {
                        tempNumber = rand() % 40;
                        k--;
                    }
                    else
                    {
                        deck[k] = tempNumber;
                        player[i].cardsV[j] = fillDeckValue(tempNumber);
                        strcpy(player[i].cardsN[j], sorteia(tempNumber));
                    }
                }
        }

    while (gameRunning == 1)
    {
        int picked, biggestOnTable, playerChoice, iaChoice, winning;
        turn = rand() % 1;

        if (turn == 0)
        {
            printf("Escolha a posição da carta para jogar");
            printf("Suas cartas sao\n\n");

            for (int i = 0; i < 3; i++)
                printf("%s   ", player[0].cardsN[i]);

            scanf("%d", &picked);

            if (picked == 1)
                playerChoice = player[0].cardsV[0];
            else if (picked == 2)
                playerChoice = player[0].cardsV[1];
            else
                playerChoice = player[0].cardsV[2];

            turn = 1;
        }
        else
        {
            printf("\n\nAs cartas do inimigo sao\n\n");

            for (int i = 0; i < 3; i++)
                printf("%s   ", player[1].cardsN[i]);

            turn = 0;
        }

        if (playerChoice > iaChoice)
            winning = 0;
        else if (iaChoice > playerChoice)
            winning = 1;
        else
            winning = 2;

        // CheckGame();
    }
}

int fillDeckValue(int num)
{
    int deckValue[40] = {1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7,
                         8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10, 11, 12, 13, 14};

    return deckValue[num];
}

const char *sorteia(int num)
{
    char *name;
    char nome_cartas[40][20] = {"Quatro de Ouros", "Quatro de Espada", "Quatro de Copas",
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
    name = nome_cartas[num];
    return name;
}

// int checkGame(int winner)
// {
// }