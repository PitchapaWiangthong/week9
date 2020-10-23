#include<stdio.h>

int main()
{
	int i = 0, n = 0;
	char x[50],b[50],a[50];
	scanf_s("%s", x, 50);
	while (x[i] != '\0')
	{
		if (x[i] == 'c' || x[i] == 'e' || x[i] == 'b' || x[i] == 'o' || x[i] == 's' || x[i] == 't' || x[i] == 'u' || x[i] == 'p')
		{
			b[i] = x[i];
			a[i] = x[i + 1];
			if (b[i] != a[i])
			{
				n++;
			}
		}
		i++;
	}
	printf("%d", n / 9);
}