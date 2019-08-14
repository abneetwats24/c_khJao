#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* decode(char to_DECODE){
	
	char* octal_val=(char*)malloc(sizeof(char)*15);
	sprintf(octal_val,"%03o",to_DECODE);
	return octal_val;	
}

int main(){
	long number,i = 0;
	char numbchar[10];
	char* zerorep = decode('0');
	scanf("%s",numbchar);
	for(i=0;i<strlen(numbchar);i++)
	{
		
		number = (10*number)+strtol(decode(numbchar[i]),NULL,10)-strtol(zerorep,NULL,10);
	}
	printf("number = %ld\n",number);
	return number;
	free(zerorep);

}
