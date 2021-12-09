// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>

#include <math.h>
using namespace std;


void main()
{
    int n,max,min,c;
    cin >> n;
    srand((unsigned)time(NULL));
    int** mtrx = new int* [n];
    for (int i = 0; i < n; i++) {
        mtrx[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            mtrx[i][j] = (rand()%1000)-500;
        }
    }
    c = 0;
    min = INT_MAX;
    max = INT_MIN;
    for (int i = 0; i < n-c; i++)
    {
        for (int j=c; j < n-c; j++)
        {
            if ((mtrx[i][j] > 0)&&(mtrx[i][j] < min ))
            {
                min=mtrx[i][j];

            }
        c++;
        }
    }
    c = n-1;
    for (int i = n/2; i > n-c; i--)
    {
        for (int j=n/2; j > n-c; j--)
        {
            if ((mtrx[i][j] > 0) && (mtrx[i][j] > max))
            {
                max = mtrx[i][j];

            }
            c--;
        }
    }

    cout <<min << endl; cout <<max << endl;
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++)cout << mtrx[i][j]<<" ";
        cout<< "\n";
        }
}