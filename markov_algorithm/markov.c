/*Implementation of Markov Algorithm which replace all occurance of antecedent with consequent 
 *  * as production ac -> c and input string 'bacc' will be transformed to 'bcc'
 *   * @author : abneetwats24
 *   */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* strRep(char string[], char search[], char replace[])
{
	char buffer[100];
	char*p = string;
	while((p=strstr(p, search)))
	{
		strncpy(buffer, string, p-string);
		buffer[p-string] = '\0'; 
		strcat(buffer, replace);
		strcat(buffer, p+strlen(search));
		strcpy(string, buffer);
		p++;
	}
	return string;
} 

void main()
{
	int i = 0; //intermediate string index
	int j = 0; //production index 
	int n = 0;
	int temp = 0;
	char consequent[100][50];
	char antedecent[100][50];
	char z[100];
	char *result;
       	printf("Enter total no. of production :\n");
       	scanf("%d",&n);
	printf("Enter productions\n");
	for(temp=0;temp<n;temp++)
	{
		printf("Enter antedecent-%d \n",temp);
		scanf("%s",&antedecent[temp]);
		printf("Enter consequentt-%d \n",temp);
		scanf("%s",&consequent[temp]);
	}
	printf("Enter input string\n");
	scanf("%s",&z);
	printf("Productions are:\n");
	for(temp=0;temp<n;temp++)
	{
		printf("%s => %s\n",antedecent[temp],consequent[temp]);
	}
	printf("Entered string to process is %s\n",z);
	while(j<n)
	{
		result=strRep(z,antedecent[j],consequent[j]);
		printf("RESULT %d : %s\n",j,result);
		j++;
	}
	printf("RESULT : %s\n",result);
	
}

		

