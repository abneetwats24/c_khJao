#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char* encode(int to_ENCODE)
{	
	int length = snprintf( NULL, 0, "%c", to_ENCODE );
	char* temp = malloc( length + 1 );
	snprintf(temp, length + 1, "%c", to_ENCODE );
       	return temp;	
	
}	
char* decode(char to_DECODE){
        
        char* octal_val=(char*)malloc(sizeof(char)*15);
        sprintf(octal_val,"%03o",to_DECODE);
        return octal_val;       
}
long mod(int x, int y)
{
	long z;
	return z = x%y;
}	

int main(){
	
	char numbchar[10];
	int number;
	scanf("%d",&number);

	printf("number = %d\n",number);
	while (number!=0)
	{
		strcat(numbchar ,encode(strtol(decode('0'),NULL,10)+mod(number,10)));				
		//strcat(numbchar ,encode(number));				
		number = number/10;
	}
	printf("numbchar = %s\n",numbchar);
	return number;	
}

