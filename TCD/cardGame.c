#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int fillDeckValue(int num);
const char *fillDeckName(int num);
void closeGame(int *tBy, int *tOn, int *hRun, int *pHWins, int *iaHWins);

void checkGame(int *pChoice, int *iChoice, int *pW, int *iaW, int *pHWins, int *iaHWins, int *t, int *tOn, int *tBy, int *hRun, int *handV, int *fWin);
void trick(int *tOn, int *handV, int *dTrick);

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
    int firstWin, playerWins = 0, iaWins = 0, pHandWins = 0, iaHandWins = 0;

    int *pW = &playerWins, *iaW = &iaWins;
    int *t = &turn, *hRun = &handRunning, *gRun = &gameRunning;
    int *fWin = &firstWin, *pHWins = &pHandWins, *iaHWins = &iaHandWins;

    int **cardsOfRound, cardsOnHand;

    struct playerDeck player[2];
    turn = rand() % 1;

    while (gameRunning == 1)
    {
        int picked, biggestOnTable, playerCardRank, iaCardRank, handValue = 1;
        int roundCount = 0;
        int decideTrick = 0, trickOn = 0, trickedBy = 0;

        int *pChoice = &playerCardRank, *iChoice = &iaCardRank;
        int *handV = &handValue;
        int *tOn = &trickOn, *tBy = &trickedBy, *dTrick = &decideTrick;
        ;

        printf("Jogo\n");
        printf("Player: %d\nIA: %d\n\n", playerWins, iaWins);

        if (iaWins < 12 && playerWins < 12)
        {

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
                    printf("Escolha a posicao da carta para jogar ou 4 para trucar o truco\n");
                    printf("Suas cartas sao: \n\n");

                    for (int i = 0; i < cardsOnHand; i++)
                        printf("\t[%d] %s\n", i + 1, player[0].cardsN[i]);

                    printf("\nOpcao: ");
                    scanf("%d", &picked);

                    if (picked == 4)
                    {
                        if (decideTrick < 2)
                        {
                            trick(tOn, handV, dTrick);
                            trickedBy = 1;
                            printf("Voce trucou\n");
                        }
                        else
                            printf("Não pode aumentar o truco que voce mesmo pediu\n");
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
                    }
                }
                else if (trickOn == 1 && decideTrick < 2)
                {
                    printf("Escolha 1 para aceitar o truco, 2 para correr ou 3 para aumentar\n");
                    scanf("%d", &picked);

                    if (picked == 1)
                    {
                        printf("\nVoce aceitou o truco\n");
                        decideTrick++;
                    }
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
                        trick(tOn, handV, dTrick);
                        printf("\nVoce chamou %d\n", handValue);
                        roundCount -= 2;
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
                // Começo teste
                if (trickOn == 1 && trickedBy == 1 && decideTrick < 2)
                {
                    picked = ((rand() % 3) + 1);
                    iaCardRank = player[1].cardsV[picked];
                }
                else
                {
                    picked = ((rand() % 4) + 1);
                    iaCardRank = player[1].cardsV[picked - 1];
                }
                // Final do teste

                if (trickOn == 1 && trickedBy == 1 && decideTrick < 2)
                {
                    if (picked == 1)
                    {
                        printf("Seu oponente aceitou o truco!\n");
                        decideTrick++;
                    }
                    else if (picked == 2)
                    {
                        if (handValue > 3)
                            handValue -= 3;
                        else
                            handValue -= 2;

                        printf("Seu oponente correu!\n");
                        playerWins += handValue;
                        closeGame(tBy, tOn, hRun, pHWins, iaHWins);
                        decideTrick++;
                    }
                    else if (picked == 3)
                    {
                        trick(tOn, handV, dTrick);
                        printf("Seu oponente chamou %d\n", handValue);
                        roundCount--;
                    }
                    decideTrick++;
                }
                else if (trickOn == 0 && picked == 4)
                {
                    trick(tOn, handV, dTrick);
                    trickedBy = 2;
                    printf("Seu oponente trucou\n");
                }
                else
                    printf("\nSeu oponente jogou %s\n\n", player[1].cardsN[picked - 1]);

                turn = 0;
            }

            // Game
            if (trickOn == 0 || (trickOn == 1 && decideTrick >= 2))
                roundCount++;

            if ((roundCount == 2 && trickOn == 0) || (roundCount == 2 && trickOn == 1))
            {
                checkGame(pChoice, iChoice, pW, iaW, pHWins, iaHWins, t, tOn, tBy, hRun, handV, fWin);
                roundCount = 0;

                printf("Mao da Vez\n");
                printf("Player: %d\nIA: %d\n\n", *pHWins, *iaHWins);
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
        if ((*pChoice > *iChoice) && *pHWins > 0)
        {
            *t = 0;
            *pW += *handV;

            printf(" e GANHOU O TRUCO!\n\n");
        }
        else if ((*pChoice < *iChoice) && *iaHWins > 0)
        {
            *t = 1;
            *iaW += *handV;
            printf(" e GANHOU O TRUCO!\n\n");
        }
        else
        {
            if (*fWin == 0 && pHWins == 1)
            {
                pW += *handV;
                printf(" e o PLAYER GANHOU O TRUCO!\n\n");
            }
            else if (*fWin == 1 && iaHWins == 1)
            {
                iaW += *handV;
                printf(" e A IA GANHOU O TRUCO!\n\n");
            }
        }
        closeGame(tBy, tOn, hRun, pHWins, iaHWins);
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

void trick(int *tOn, int *handV, int *dTrick)
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
        {
            p[line][column] = p[line][i];
        }
        sup++;
    }
    --numberOfcards;
    p = realloc(p, numberOfcards * sizeof(*p));
}