#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int board[200]={};
int countsolution;

void print_board(int n)
{
    int i,j;
    printf("\n\nNow the Solution number %d:\n\n",++countsolution);

    for(i=1; i<=n; i++,printf("\n"))
        for(j=1; j<=n; j++)
        {
            if(board[i]==j) printf(" Q");

            else printf(" -");
        }
}

bool place(int row ,int column)
{
    int i;
    for(i=1; i<=row-1; i++)

        if(board[i]==column||abs(board[i]-column)==abs(i-row)) return false;

    return true;
}

void queen(int row, int n)
{
    int column;

    for(column=1;column<=n;column++)
    {
        if(place(row,column))
        {
            board[row]=column;
            if(row==n) print_board(n);

            else queen(row+1,n);
        }
    }
}

int main()
{
    printf("\n\n\t\t\t\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
    printf("\t\t\t\t\t\xB1@ WELCOME TO  N  Queen problem PROJECT @\xB1\n");
    printf("\t\t\t\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");

    int n;
    LOOP:do {
    printf("\n\n\nEnter number of queen's :");
    scanf("%d",&n);
    if (n==3||n==2 || n<0)
        printf("\nNot possible for %d",n);

    else if(n==0)
        return 0;

    else
    queen(1,n);
         goto LOOP;
      }
    while(n);
}
