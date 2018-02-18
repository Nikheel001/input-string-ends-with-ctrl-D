#include<stdio.h>
#include<string.h>
int main (void)
{
	char b[256],str[4096];
     	while (( fgets(b, 256, stdin) ) != NULL )
		strcat(str,b);
	printf("%s",str);
	return 0;
}
