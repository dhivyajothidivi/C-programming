#include<stdio.h>
int main()
{
printf("Enter a number:");
char input[255]; 
fgets(input, sizeof(input), stdin);

size_t ln = strlen(input) - 1;
if( input[ln] == '\n' ) input[ln] = '\0')

	for( size_t i = 0; i < ln; i++)
		{
   			 if( !isdigit(input[i]) )
			{
       			 fprintf(stderr, "%c is not a number. Try again.\n", input[i]);
       			 getInput();
  			}
		}
return 0:
}
