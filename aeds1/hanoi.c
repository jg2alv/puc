#include <stdio.h>

#define N 8

void hanoi(int n, char from, char aux, char to);
void move(char from, char to);

int main()
{
	hanoi(N, 'A', 'B', 'C');
}

void hanoi(int n, char from, char aux, char to)
{
	if(n !=0)
	{
		hanoi(n - 1, from, to, aux);
		move(from, to);
		hanoi(n - 1, aux, from, to);
	}
}

void move(char from, char to)
{
	printf("Movendo disco de %c para %c\n", from, to);
}
