#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int fillDeckValue(int num);
const char *fillDeckName(int num);
void closeGame(int *tBy, int *tOn, int *hRun, int *pHWins, int *iaHWins);

void checkGame(int *pChoice, int *iChoice, int *pW, int *iaW, int *pHWins, int *iaHWins, int *t, int *tOn, int *tBy, int *hRun, int *handV, int *fWin);
void trick(int *tOn, int *handV, int *dTrick, int *rC, int *callTrick);

void CardsOfRound(int **p, int line, int column);

struct playerDeck
{
    int cardsV[3];
    char cardsN[3][20];
};

void main()
{
    srand(time(NULL));

    int gameRunning = 1, handRunning = 1, turn;
    int playerWins = 0, iaWins = 0, pHandWins = 0, iaHandWins = 0;

    int *pW = &playerWins, *iaW = &iaWins;
    int *t = &turn, *hRun = &handRunning, *gRun = &gameRunning;
    int *pHWins = &pHandWins, *iaHWins = &iaHandWins;

    int **cardsOfRound, cardsOnHand;

    struct playerDeck player[2];
    turn = rand() % 1;

    while (gameRunning == 1)
    {
        int picked, biggestOnTable, playerCardRank, iaCardRank, handValue = 1, firstWin = -1;
        int roundCount = 0;
        int callingTrick = 0, decideTrick = 0, trickOn = 0, trickedBy = 0;

        int *pChoice = &playerCardRank, *iChoice = &iaCardRank, *fWin = &firstWin;
        int *handV = &handValue, *rC = &roundCount;
        int *tOn = &trickOn, *tBy = &trickedBy, *dTrick = &decideTrick, *callTrick = &callingTrick;
        ;

        printf("\n\nJogo\n");
        printf("Player: %d\nIA: %d\n\n", playerWins, iaWins);

        if (iaWins < 12 && playerWins < 12)
        {

            handRunning = 1;
            cardsOnHand = 3;

            cardsOfRound = (int **)malloc(2 * sizeof(int *));
            if (cardsOfRound == NULL)
                exit(1);
            for (int i = 0; i < 2; i++)
            {
                cardsOfRound[i] = (int *)malloc(3 * sizeof(int));
                if (cardsOfRound[i] == NULL)
                    exit(1);
            }

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
                                cardsOfRound[i][j] = tempNumber;
                            }
                        }
                }
        }
        else
        {
            if (iaWins >= 12)
                printf("\n\nIA ganhou o jogo!\n\n");
            else
                printf("\n\nVoce ganhou o jogo!\n\n");

            gameRunning = 0;
        }

        while (handRunning == 1)
        {
            printf("\n_________________________________________________________________");
            printf("\n\nValor da mão atual: %d\n\n", handValue);

            // Player
            if (turn == 0)
            {
                if (trickOn == 0 || trickOn == 1 && decideTrick >= 2)
                {
                    printf("Escolha a posicao da carta para jogar");
                    if (trickOn == 0)
                        printf(" ou 4 para trucar o truco\n");
                    printf("\nSuas cartas sao: \n\n");

                    for (int i = 0; i < cardsOnHand; i++)
                        printf("\t[%d] %s\n", i + 1, player[0].cardsN[i]);

                    printf("\nOpcao: ");
                    scanf("%d", &picked);

                    if (picked == 4)
                    {
                        trick(tOn, handV, dTrick, rC, callTrick);
                        printf("Voce trucou\n");
                        trickedBy = 1;
                        decideTrick++;
                        callingTrick = 1;
                    }
                    else
                    {
                        if (picked == 1)
                        {
                            playerCardRank = player[0].cardsV[0];
                            CardsOfRound(cardsOfRound, 0, 0);
                            cardsOnHand--;
                        }
                        else if (picked == 2)
                        {
                            playerCardRank = player[0].cardsV[1];
                            CardsOfRound(cardsOfRound, 0, 1);
                            cardsOnHand--;
                        }
                        else if (picked == 3)
                        {
                            playerCardRank = player[0].cardsV[2];
                            CardsOfRound(cardsOfRound, 0, 2);
                            cardsOnHand--;
                        }

                        printf("\nVoce jogou %s\n", player[0].cardsN[picked - 1]);
                        roundCount++;
                    }
                }
                else if (trickOn == 1 && decideTrick < 2)
                {
                    int decisionMade = 0;

                    printf("Escolha 1 para aceitar o truco, 2 para correr ou 3 para aumentar\n");
                    scanf("%d", &picked);
                    while (decisionMade == 0)
                    {
                        decisionMade = 1;

                        if (picked == 1)
                            printf("\nVoce aceitou o truco\n");

                        else if (picked == 2)
                        {
                            if (handValue > 3)
                                handValue -= 3;
                            else
                                handValue -= 2;

                            printf("\nVoce correu!\n");
                            iaWins += handValue;
                            closeGame(tBy, tOn, hRun, pHWins, iaHWins);
                        }
                        else
                        {
                            if (handValue < 12)
                            {
                                trick(tOn, handV, dTrick, rC, callTrick);
                                printf("\nVoce chamou %d\n", handValue);
                            }
                            else
                            {
                                decisionMade = 0;
                                printf("Não pode pedir para aumentar");
                            }
                        }
                    }
                    decideTrick++;
                }
                strcpy(player[0].cardsN[0], fillDeckName(cardsOfRound[0][0]));
                strcpy(player[0].cardsN[1], fillDeckName(cardsOfRound[0][1]));

                turn = 1;
            }
            // IA
            else
            {
                int highest = player[1].cardsV[0], lowest = player[1].cardsV[0];

                for (int i = 0; i < cardsOnHand; i++)
                    if (player[1].cardsV[i] > highest)
                        highest = player[1].cardsV[i];

                for (int i = 0; i <= cardsOnHand; i++)
                    if (player[1].cardsV[i] < lowest)
                        lowest = player[1].cardsV[i];

                // Mecanica
                if (trickOn == 0 || trickOn == 1 && decideTrick >= 2)
                {
                    int decisionMade = 0;
                    while (decisionMade == 0)
                    {
                        decisionMade = 1;
                        int randomTrick = rand() % 10;

                        if (randomTrick > 8 && trickOn == 1)
                            decisionMade = 0;
                        else if (randomTrick > 8 && trickOn == 0)
                            picked = 4;

                        if (picked == 4)
                        {
                            trick(tOn, handV, dTrick, rC, callTrick);
                            printf("IA trucou\n");
                            trickedBy = 1;
                            decideTrick++;
                        }
                        else
                        {
                            if (trickOn == 0)
                            {
                                if (pHandWins == iaHandWins || pHandWins > iaHandWins)
                                    iaCardRank = highest;
                                else if (pHandWins < iaHandWins)
                                    iaCardRank = lowest;
                            }
                            else
                            {
                                if (lowest > playerCardRank || pHandWins < iaHandWins)
                                    iaCardRank = lowest;
                                else
                                    iaCardRank = highest;
                            }

                            for (int i = 0; i < cardsOnHand; i++)
                                if (iaCardRank == i)
                                    picked = i + 1;

                            printf("\nIA jogou %s\n", player[1].cardsN[picked - 1]);

                            if (picked == 1)
                                CardsOfRound(cardsOfRound, 1, 0);
                            else if (picked == 2)
                                CardsOfRound(cardsOfRound, 1, 1);
                            else if (picked == 3)
                                CardsOfRound(cardsOfRound, 1, 2);

                            roundCount++;
                        }
                        strcpy(player[1].cardsN[0], fillDeckName(cardsOfRound[1][0]));
                        strcpy(player[1].cardsN[1], fillDeckName(cardsOfRound[1][1]));
                    }
                }
                else if (trickOn == 1 && decideTrick < 2)
                {
                    int decisionMade = 0;
                    while (decisionMade == 0)
                    {
                        picked = rand() % 3;
                        decisionMade = 1;

                        if (picked == 1)
                            printf("\nIA aceitou o truco\n");

                        else if (picked == 2)
                        {
                            if (handValue > 3)
                                handValue -= 3;
                            else
                                handValue -= 2;

                            printf("\nIA correu!\n");
                            playerWins += handValue;
                            closeGame(tBy, tOn, hRun, pHWins, iaHWins);
                        }
                        else
                        {

                            if (handValue < 11)
                            {
                                trick(tOn, handV, dTrick, rC, callTrick);
                                printf("\nIA chamou %d\n", handValue);
                            }
                            else
                                decisionMade = 0;
                        }
                    }
                    decideTrick++;
                }
                turn = 0;
            }

            if (roundCount == 2)
            {
                checkGame(pChoice, iChoice, pW, iaW, pHWins, iaHWins, t, tOn, tBy, hRun, handV, fWin);
                roundCount = 0;

                printf("\n\nMao da Vez\n");
                printf("Player: %d\nIA: %d\n\n", *pHWins, *iaHWins);
            }

            printf("\n\n%d\n\n", playerCardRank);
            printf("\n\n%d\n\n", iaCardRank);
        }

        for (int i = 0; i < 2; i++)
            free(cardsOfRound[i]);

        free(cardsOfRound);
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

void checkGame(int *pChoice, int *iChoice, int *pW, int *iaW, int *pHWins, int *iaHWins, int *t, int *tOn, int *tBy, int *hRun, int *handV, int *fWin)
{
    if (*pChoice > *iChoice)
    {
        *pHWins += 1;
        *t = 0;

        if (*pHWins == 0 && *iaHWins == 0)
            *fWin = 0;

        printf("\nPlayer ganhou a mao");
    }
    else if (*pChoice < *iChoice)
    {
        *iaHWins += 1;
        *t = 1;

        if (*pHWins == 0 && *iaHWins == 0)
            *fWin = 1;

        printf("\nIA ganhou a mao");
    }
    else
        printf("\nA mao empatou");

    // Trucar
    if (*tOn == 1)
    {
        if ((*pChoice > *iChoice) && *pHWins > 1)
        {
            *t = 0;
            *pW += *handV;

            printf(" e GANHOU O TRUCO!\n\n");
            closeGame(tBy, tOn, hRun, pHWins, iaHWins);
        }
        else if ((*pChoice < *iChoice) && *iaHWins > 1)
        {
            *t = 1;
            *iaW += *handV;
            printf(" e GANHOU O TRUCO!\n\n");
            closeGame(tBy, tOn, hRun, pHWins, iaHWins);
        }

        if (*tOn == 1 && *fWin == 0 && *pHWins == 1)
        {
            pW += *handV;
            printf(" e o PLAYER GANHOU O TRUCO!\n\n");
            closeGame(tBy, tOn, hRun, pHWins, iaHWins);
        }
        else if (*tOn == 1 && *fWin == 1 && *iaHWins == 1)
        {
            iaW += *handV;
            printf(" e A IA GANHOU O TRUCO!\n\n");
            closeGame(tBy, tOn, hRun, pHWins, iaHWins);
        }
    }

    // Fim de jogo
    if (*tOn == 0 && *pHWins == 2 || *tOn == 0 && *iaHWins == 2)
    {
        if (*pHWins == 2)
            *pW += 1;
        else
            *iaW += 1;

        closeGame(tBy, tOn, hRun, pHWins, iaHWins);
    }
}

void trick(int *tOn, int *handV, int *dTrick, int *rC, int *callTrick)
{
    if (*tOn == 0)
    {
        *tOn = 1;
        *handV = 3;
    }
    else
    {
        *handV += 3;
        *dTrick = 0;
    }
    if (*callTrick == 1)
    {
        *callTrick = 0;
        *rC = 0;
    }
}

void closeGame(int *tBy, int *tOn, int *hRun, int *pHWins, int *iaHWins)
{
    *tBy = 0;
    *tOn = 0;
    *hRun = 0;
    *pHWins = 0;
    *iaHWins = 0;
}

void CardsOfRound(int **p, int line, int column)
{
    int numberOfcards = 3;
    int i = column + 1;
    int sup = column + 2;
    for (column; column < 3; column++)
    {
        i = column + 1;
        for (i; i < sup; i++)
            p[line][column] = p[line][i];
        sup++;
    }
    --numberOfcards;
    p = realloc(p, numberOfcards * sizeof(*p));
}