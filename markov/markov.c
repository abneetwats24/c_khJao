/*Implementation of Markov Algorithm which replace all occurance of antecedent with consequent 
 * as production ac -> c and input string 'bacc' will be transformed to 'bcc'
 * @author : abneetwats24
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int subStrRemv(char *src,char *key)
{
  while( *src )
  {
    char *k=key,*s=src;
    while( *k && *k==*s ) ++k,++s;
    if( !*k )
    {
      while( *s ) *src++=*s++;
      *src=0;
      return 1;
    }
    ++src;
  }
  return 0;
}

void main(){
	int i = 0; //intermediate string index
	int j = 1; //the production index
	int n = 0;
	int temp = 0;
	int sub_str_stat = 0; 
       	//char **p = malloc(sizeof(char*)*15);	
       	//char **z = malloc(sizeof(char*)*15);	
       	//char **antecedent = malloc(sizeof(char*)*15);	
       	//char **consequent = malloc(sizeof(char*)*15);
       	//char *sub_str_loc = malloc(sizeof(char)*15);
	//char *p[10] ;	
       	char *z[3];	
       	char *antecedent[10] ;	
       	char *consequent[100] ;
       	char *sub_str_loc  ;

		
	
	//establish conditions for  execution
	printf("Enter production no.\n");
	scanf("%d",&n);
	for(temp=0;temp<n;temp++){ 
		printf("Enter antecedent\n");
		scanf("%s",antecedent[temp]);
		printf("Enter consequent\n");
		scanf("%s",consequent[temp]);
         	//p[temp]=strcat(antecedent[temp]," -> ");
		//p[temp]=strcat(p[temp],consequent[temp]);
	}

	printf("Productions are : \n");
	for(temp=0;temp<n;temp++){
		printf("%s -> %s\n",antecedent[temp],consequent[temp]);
		//printf("%s\n",p[temp]);
	}
	
	printf("Enter string to process Markov Algorithm\n");
	scanf("%s",z[i]);
	printf("%s",z[i]);
	
	while(j<=n){
		//check for production applicability and terminal production
		//if(p[j] is applicable){
		sub_str_loc = strstr(z[i],antecedent[j]);
		sub_str_stat = (sub_str_loc!=NULL)?1:0;
		if(sub_str_stat == 1){
			//apply production p[j]
			while( subStrRemv(z[i],antecedent[j]) );
			i = i+1; //to obtain new string z[i]
 			printf("%s",z[i]);

			if(strstr(z[i],antecedent[j])==NULL){
				printf("%s",z[i]);
				break;
			}
			else{
				j = 1;
			}
		}
		else{
			j=j+1;
		}
	}
	printf("%s",z[i]);
	//return z[i];
}
