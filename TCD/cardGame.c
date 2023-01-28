#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int fillDeckValue(int num);
const char *fillDeckName(int num);

void checkGame(int winner, int *pW, int *iaW, int *rC, int *t);
void trick(int *t, int *rC, int *tOn);

struct playerDeck
{
    int cardsV[3];
    char cardsN[3][20];
};

void main()
{
    srand(time(NULL));

    int roundCount = 1, handState = 0, playerWins = 0, iaWins = 0, gameRunning = 1, handRunning = 1, turn, trickOn = 0, trickedRoundsOn = 0;
    int *pW = &playerWins, *iaW = &iaWins, *rC = &roundCount, *t = &turn, *tOn = &trickOn, *tROn = &trickedRoundsOn, *hRun = &handRunning;

    struct playerDeck player[2];
    turn = rand() % 1;

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
                        strcpy(player[i].cardsN[j], fillDeckName(tempNumber));
                    }
                }
        }

    while (gameRunning == 1)
    {
        while (handRunning == 1)
        {
            int picked, biggestOnTable, playerChoice, iaChoice, highest;
            int *pChoice = &playerChoice, *iChoice = &iaChoice;

            if (turn == 0)
            {
                // Componente de teste para IA

                printf("Escolha a posicao da carta para jogar\n");
                printf("As cartas do inimigo são: \n\n");

                for (int i = 0; i < 3; i++)
                    printf("\t[%d] %s\n", i + 1, player[1].cardsN[i]);

                printf("Opcao: 1\n\n");

                // Fim componente de teste para IA

                printf("Escolha a posicao da carta para jogar ou 4 para trucar\n");
                printf("Suas cartas sao: \n\n");

                for (int i = 0; i < 3; i++)
                    printf("\t[%d] %s\n", i + 1, player[0].cardsN[i]);

                if (trickOn == 0)
                {
                    printf("Opcao: ");
                    scanf("%d", &picked);

                    if (picked == 1)
                        playerChoice = player[0].cardsV[0];
                    else if (picked == 2)
                        playerChoice = player[0].cardsV[1];
                    else if (picked == 3)
                        playerChoice = player[0].cardsV[2];

                    turn = 1;

                    if (picked == 4)
                        trick(t, rC, tOn);
                }
                else
                {
                    printf("Seu oponente pediu truco, escolha uma carta para jogar ou 4 para CORRER\n");
                    printf("Suas cartas sao: \n\n");

                    for (int i = 0; i < 3; i++)
                        printf("\t[%d] %s\n", i + 1, player[0].cardsN[i]);
                    scanf("%d", &picked);

                    trickedRoundsOn++;
                }
            }
            else
            {
                iaChoice = player[1].cardsV[0];

                turn = 0;

                if (trickOn == 1 && iaChoice != 4)
                    printf("Seu oponente aceitou o truco!\n");

                else
                {
                    printf("Seu oponente correu!");
                    handRunning = 0;
                }
            }

            if (roundCount == 2)
            {
                checkGame(pChoice, iChoice, pW, iaW, rC, t, tOn, tROn, *hRun);

                roundCount = 0;
            }

            roundCount++;
        }
    }
}

int fillDeckValue(int num)
{
    int deckValue[40] = {1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7,
                         8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10, 11, 12, 13, 14};

    return deckValue[num];
}

const char *fillDeckName(int num)
{
    char *name;
    char cardName[40][20] = {"Quatro de Ouros", "Quatro de Espada", "Quatro de Copas",
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
    name = cardName[num];
    return name;
}

void checkGame(int *pChoice, int *iChoice, int *pW, int *iaW, int *rC, int *t, int *tOn, int *tROn, int *hRun)
{
    if (tOn)
        *rC--;
    // Diminui para o check do tROn

    if (tROn == 2)
    {
        if (*pChoice < 4 || *iChoice < 4)
            if (*pChoice > *iChoice)
            {
                *t = 0;
                *pW += 3;
                // Mudar para variavel trickValue da mao

                printf("PLAYER GANHOU O TRUCO!");
            }
            else if (*pChoice > playerChoice)
            {
                *t = 1;
                *iaW += 3;
                printf("IA GANHOU O TRUCO!");
            }

        // else: Fazer para empate

        *tOn = 0;
        *hRun = 0;
    }
    else
    {
        if (*pChoice > *iChoice)
        {
            *pW++;
            *t = 0;

            printf("\n\nPlayer ganhou!\n\n");
        }
        else if (*pChoice < *iChoice)
        {
            *iaW++;
            *t = 1;

            printf("\n\nIA ganhou!\n\n");
        }
        else
        {
            *pW++;
            *iaW++;

            printf("\n\nEmpatou!\n\n");
        }
    }
}

void trick(int *t, int *rC, int *tOn)
{
    if (*t == 0)
        *t = 1;
    else
        *t = 0;

    *tOn = 1;
}