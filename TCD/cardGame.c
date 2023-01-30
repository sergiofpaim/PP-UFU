#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int fillDeckValue(int num);
const char *fillDeckName(int num);

void checkGame(int *pChoice, int *iChoice, int *pW, int *iaW, int *t, int *tOn, int *tBy, int *hRun, int *handV);
void trick(int *tCheck, int *tOn, int *handV, int *dTrick);

struct playerDeck
{
    int cardsV[3];
    char cardsN[3][20];
};

void main()
{
    srand(time(NULL));

    int iaTotalHands = 0, playerTotalHands = 0;
    int gameRunning = 1, handRunning = 1, turn;
    int playerWins = 0, iaWins = 0;

    int *pW = &playerWins, *iaW = &iaWins;
    int *t = &turn, *hRun = &handRunning, *gRun = &gameRunning;

    struct playerDeck player[2];
    turn = rand() % 1;

    while (gameRunning == 1)
    {
        int handValue = 1, picked, biggestOnTable, playerCardRank, iaCardRank, highest, trickCheck, roundCount = 0;
        int decideTrick = 0, trickOn = 0, trickedBy = 0;
        int *pChoice = &playerCardRank, *iChoice = &iaCardRank, *tCheck = &trickCheck, *handV = &handValue, *dTrick = &decideTrick;
        int *tOn = &trickOn, *tBy = &trickedBy;

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
            // Player
            if (turn == 0)
            {
                if (trickOn == 0 || trickOn == 1 && decideTrick >= 2)
                {
                    printf("Escolha a posicao da carta para jogar ou 4 para trucar/aumentar o truco\n");
                    printf("Suas cartas sao: \n\n");

                    for (int i = 0; i < 3; i++)
                        printf("\t[%d] %s\n", i + 1, player[0].cardsN[i]);

                    printf("\nOpcao: ");
                    scanf("%d", &picked);

                    if (picked == 4)
                    {
                        trick(tCheck, tOn, handV, dTrick);
                        trickedBy = 1;
                        printf("Voce trucou");
                    }

                    else
                    {
                        if (picked == 1)
                            playerCardRank = player[0].cardsV[0];
                        else if (picked == 2)
                            playerCardRank = player[0].cardsV[1];
                        else if (picked == 3)
                            playerCardRank = player[0].cardsV[2];

                        printf("\nVoce jogou %s\n\n", player[0].cardsN[picked - 1]);
                    }
                }
                else if (trickOn == 1 && trickedBy == 2 && decideTrick < 2)
                {
                    printf("Seu oponente trucou, escolha 1 para aceitar, 2 para correr ou 3 para aumentar\n");
                    scanf("%d", &picked);

                    if (picked == 1)
                        printf("\nVoce aceitou o truco");
                    else if (picked == 2)
                    {
                        printf("\nVoce correu");
                        playerCardRank = -1;
                        trickOn = 0;
                    }
                    else
                    {
                        printf("\nVoce chamou %d", handValue);
                        trick(tCheck, tOn, handV, dTrick);
                    }
                    decideTrick++;
                }
                turn = 1;
            }
            // IA
            else
            {
                turn = 0;

                // Começo teste
                picked = 2;
                iaCardRank = player[1].cardsV[picked];
                // Final do teste

                if (trickOn == 1 && trickedBy == 1 && decideTrick < 2)
                {
                    if (picked == 1)
                        printf("\nSeu oponente aceitou o truco");
                    else if (picked == 2)
                    {
                        printf("Seu oponente correu!");
                        iaCardRank = -1;
                        trickOn = 0;
                    }
                    else
                    {
                        printf("\nSeu oponente chamou %d", handValue);
                        trick(tCheck, tOn, handV, dTrick);
                    }
                    decideTrick++;
                }
                else
                    printf("\nSeu oponente jogou %s\n\n", player[1].cardsN[0]);
            }
            // Game

            if (trickCheck == 0 || (trickCheck == 1 && decideTrick >= 2))
                roundCount++;
            // So aumenta o roundcount depois que decidir o truco

            if ((roundCount == 2 && trickCheck == 0) || (roundCount == 2 && trickCheck == 1))
                checkGame(pChoice, iChoice, pW, iaW, t, tOn, tBy, hRun, handV);
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

void checkGame(int *pChoice, int *iChoice, int *pW, int *iaW, int *t, int *tOn, int *tBy, int *hRun, int *handV)
{
    if (*tOn == 1)
    {
        if (*pChoice > *iChoice)
        {
            *t = 0;
            *pW += *handV;

            printf("\nPLAYER GANHOU O TRUCO!\n\n");
        }
        else if (*pChoice < *iChoice)
        {
            *t = 1;
            *iaW += *handV;
            printf("\nIA GANHOU O TRUCO!\n\n");
        }
        // else: Fazer para empate
    }
    else if (*tOn == 0)
    {
        if (*pChoice > *iChoice)
        {
            *pW += *handV;
            *t += 0;

            printf("\nPlayer ganhou!\n\n");
        }
        else if (*pChoice < *iChoice)
        {
            *iaW += *handV;
            *t = 1;

            printf("\nIA ganhou!\n\n");
        }
        else
        {
            *pW += *handV;
            *iaW += *handV;

            printf("\nEmpatou!\n\n");
        }
    }

    *tBy = 0;
    *tOn = 0;
    *hRun = 0;
}

void trick(int *tCheck, int *tOn, int *handV, int *dTrick)
{
    if (*tOn == 0)
    {

        *tCheck = 1;
        *tOn = 1;
        *handV = 3;
    }
    else
    {
        *handV += 3;
        *dTrick -= 2;
    }
}