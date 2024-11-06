#include <stdio.h>
#include <string.h>
//4740
int main()
{
	char s[81]="";
	while (1)
	{
		scanf("%[^\n]", s);
		if (!strcmp(s, "***")) break;
		else
		{
			for (int i = strlen(s) - 1; i >= 0; i--) printf("%c", s[i]);
			printf("\n");
		}
		getchar();
	}
	return 0;
}
