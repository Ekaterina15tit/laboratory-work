﻿#include <math.h>
#include <windows.h>
#include <iostream>
using namespace std;

void fill(int a[50][50], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = rand() % 50;
        }
    }
}

void print(int a[50][50], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void delete_m(int a[50][50], int& n, int m, int row)
{
    for (int i = row; i < n - 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = a[i + 1][j];
        }
    }

    for (int j = 0; j < m; j++)
    {
        a[n - 1][j] = 0;
    }
    n--;
}

int main()
{
    int n, m;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;

    int a[50][50];

    fill(a, n, m);
    print(a, n, m);

    int start, end;
    cout << "a = ";
   
    cin >> start;

    cout << "b = ";
  
    cin >> end;

    for (int i = start; i <= end; i++)
    {
        delete_m(a, n, m, start);
    }
   
    cout << "Result "<< endl;
    print(a, n, m);
}
