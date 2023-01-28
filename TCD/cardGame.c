#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int fillDeckValue(int num);
const char *fillDeckName(int num);

void checkGame(int *pChoice, int *iChoice, int *pW, int *iaW, int *rC, int *t, int *tOn, int *tBy, int *hRun, int *tValue);
void trick(int *tCheck, int *tOn, int *tValue);

struct playerDeck
{
    int cardsV[3];
    char cardsN[3][20];
};

void main()
{
    srand(time(NULL));

    int iaTotalHands = 0, playerTotalHands = 0;
    int roundCount = 0, gameRunning = 1, handRunning = 1, turn;
    int playerWins = 0, iaWins = 0;
    int trickOn = 0, trickedBy = 0, decideTrick = 0;

    int *pW = &playerWins, *iaW = &iaWins;
    int *rC = &roundCount, *t = &turn, *hRun = &handRunning;
    int *tOn = &trickOn, *tBy = &trickedBy;

    struct playerDeck player[2];
    turn = rand() % 1;

    while (gameRunning == 1)
    {
        if (iaTotalHands < 12 && playerTotalHands < 12)
        {
            handRunning = 1;

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
        }

        while (handRunning == 1)
        {
            int picked, biggestOnTable, playerCardRank, iaCardRank, highest, trickCheck, trickValue = 3;
            int *pChoice = &playerCardRank, *iChoice = &iaCardRank, *tCheck = &trickCheck, *tValue = &trickValue;

            // Player
            if (turn == 0)
            {
                if (trickOn == 0 || trickOn == 1 && decideTrick >= 2)
                {
                    printf("Escolha a posicao da carta para jogar ou 4 para trucar\n");
                    printf("Suas cartas sao: \n\n");

                    for (int i = 0; i < 3; i++)
                        printf("\t[%d] %s\n", i + 1, player[0].cardsN[i]);

                    printf("\nOpcao: ");
                    scanf("%d", &picked);

                    if (picked == 4)
                    {
                        trick(tCheck, tOn, tValue);
                        trickedBy = 1;
                    }

                    else
                    {
                        if (picked == 1)
                            playerCardRank = player[0].cardsV[0];
                        else if (picked == 2)
                            playerCardRank = player[0].cardsV[1];
                        else if (picked == 3)
                            playerCardRank = player[0].cardsV[2];
                    }
                }
                else if (trickOn == 1 && trickedBy == 2)
                {
                    printf("Seu oponente trucou, escolha 1 para aceitar ou 2 para correr\n");
                    scanf("%d", &picked);

                    if (picked == 1)
                        printf("\nVoce aceitou o truco");
                    else
                    {
                        printf("\nVoce correu");
                        playerCardRank = -1;
                        trickOn = 0;
                    }

                    decideTrick++;
                }

                if (picked == 4)
                {
                    printf("Voce trucou");
                    decideTrick++;
                }
                else
                    printf("\nVoce jogou %s\n\n", player[0].cardsN[picked - 1]);

                turn = 1;
            }
            // IA
            else
            {
                turn = 0;

                picked = 2;
                iaCardRank = player[1].cardsV[picked];
                // Teste

                if (trickOn == 1 && trickedBy == 1 && decideTrick < 2)
                {
                    if (picked == 1)
                        printf("\nSeu oponente aceitou o truco");
                    else if (picked == 2)
                    {
                        trickValue += 3;
                        printf("\nSeu oponente aumentou o truco para %d", trickValue);
                    }
                    else
                    {
                        printf("Seu oponente correu!");
                        handRunning = 0;
                    }

                    decideTrick++;
                }
                else
                    printf("\nSeu oponente jogou %s\n\n", player[1].cardsN[0]);
            }
            // Game

            roundCount++;

            if ((roundCount == 2 && trickCheck == 0) || (roundCount == 4 && trickCheck == 1))
            {
                checkGame(pChoice, iChoice, pW, iaW, rC, t, tOn, tBy, hRun, tValue);

                roundCount = 0;
            }
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

void checkGame(int *pChoice, int *iChoice, int *pW, int *iaW, int *rC, int *t, int *tOn, int *tBy, int *hRun, int *tValue)
{
    if (*tOn == 1)
    {
        if (*pChoice > *iChoice)
        {
            *t = 0;
            *pW += *tValue;

            printf("\nPLAYER GANHOU O TRUCO!\n\n");
        }
        else if (*pChoice < *iChoice)
        {
            *t = 1;
            *iaW += *tValue;
            printf("\nIA GANHOU O TRUCO!\n\n");
        }
        // else: Fazer para empate
    }
    else if (*tOn == 0)
    {
        if (*pChoice > *iChoice)
        {
            *pW++;
            *t = 0;

            printf("\nPlayer ganhou!\n\n");
        }
        else if (*pChoice < *iChoice)
        {
            *iaW++;
            *t = 1;

            printf("\nIA ganhou!\n\n");
        }
        else
        {
            *pW++;
            *iaW++;

            printf("\nEmpatou!\n\n");
        }
    }

    *tBy = 0;
    *tOn = 0;
    *hRun = 0;
    *pChoice = 0;
    *iChoice = 0;
}

void trick(int *tCheck, int *tOn, int *tValue)
{
    *tCheck = 1;
    *tOn = 1;
    *tValue = 3;
}