#include <string.h>
#include <stdio.h>

int main()
{
	
	char dump, str[80];
	printf("Enter string:\n");
	scanf ("%[^\n]", str);
	scanf("%c", &dump);

   	const char s[2] = " ";
   	char *token;
   
   	token = strtok(str, s);
 
   	while( token != NULL )  {

      		printf( " %s ", token );
    
      		token = strtok(NULL, s);

   	}

   	return(0);

}