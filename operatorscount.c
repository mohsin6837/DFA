#include <stdio.h>
#include <string.h>


char operators[] = "+-*/%=&|<>!~^?:";
int i,j;
int count = 0;

int count_oper(char str[])
{
	int i,j;
	int count = 0;
	for(i=0; i<strlen(str); i ++)
	{
		for( j = 0; j<strlen(operators); j++){
			if( str[i] == operators[j])
			{
				count++;
			}
		}
	}
	
	return count;
	
}
int main() {

char operators[] = "+-*/%=&|<>!~^?:";
int i, j;

char str[100];

    printf("Enter a string : ");
    gets(str);
    
    int num_operators = count_oper(str);
    printf("Number of operators: %d", num_operators);
    
    return 0;
}

