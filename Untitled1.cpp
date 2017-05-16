#include "TXLib.h"

struct Coordinates
    {
    int I, J;
    };

void FillArray(int Array[][]);
void PrintArray(int Array[][]);
void Addition(int A[][], int B[][], int Res[][]);

int main()
    {

    Coordinates Massive[3] = {};

    int A[Ia][Ja] = {};
    int B[Ia][Jb] = {};
    int Res[I][J] = {};

    FillArray(A);
    FillArray(B);

    PrintArray(Res);
    }

void SettingArray(int Array[][], Coordinates Massive[])
    {
    printf("Введите кол-во строк в 1-ом массиве");
    scanf("%d", Massive[0].I);
    printf("Теперь столбцы");
    scanf("%d", Massive[0].J);
    printf("Введите кол-во строк во 2-ом массиве");
    scanf("%d", Massive[1].I);
    printf("Теперь столбцы");
    scanf("%d", Massive[1].J);
    }

void FillArray(int Array[][])
    {
    for(int i = 0; i < I; i ++)
        for(int j = 0; j < J; j ++)
            Array[i] = rand() % 10;
    }

void PrintArray(int Array[][])
    {
    for(int i = 0; i < I; i ++)
        {
        for(int j = 0; j < J; j ++)
            printf("%d ", Array[i][j]);
        printf("\n");
        }
    }

void Addition(int A[][], int B[][], int Res[][])
    {
    for(int i = 0; i < I; i ++)
        for(int j = 0; j < J; j ++)
            Res[i][j] = A[i][j] + B[i][j];
    }

void Multiplication()
    {

    }



