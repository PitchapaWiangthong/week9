#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0,Nc=0,Ne=0,Nb=0,No=0,Ns=0,Nt=0,Nu=0,Np=0,min=0;
	char x[100];
	scanf_s("%s", x, 50);
	while (i<strlen(x))
	{
		if (x[i] == 'c' || x[i] == 'e' || x[i] == 'b' || x[i] == 'o' || x[i] == 's' || x[i] == 't' || x[i] == 'u' || x[i] == 'p')
		{
			{
				if (x[i] == 'c')
				{
					Nc++;
				}
				else if (x[i] == 'e')
				{
					Ne++;
				}
				else if (x[i] == 'b')
				{
					Nb++;
				}
				else if (x[i] == 'o' )
				{
					No++;
				}
				else if (x[i] == 's')
				{
					Ns++;
				}
				else if (x[i] == 't')
				{
					Nt++;
				}
				else if (x[i] == 'u')
				{
					Nu++;
				}
				else if (x[i] == 'p')
				{
					Np++;
				}
			}
		}
		i++;
	}
	No = No / 2;
	printf("%d %d %d %d %d %d %d %d ", Nc, Ne, Nb, No, Ns, Nt, Nu, Np);
	int a[8];
	a[0] = Nc;
	a[1] = Ne;
	a[2] = Nb;
	a[3] = No;
	a[4] = Ns;
	a[5] = Nt;
	a[6] = Nu;
	a[7] = Np;
	min = a[0];
	for (int i = 0; i < 8; i++) 
	{
		if (a[i] <= min)
		{
			min = a[i];
		}
	}
	printf("\n%d", min);
}