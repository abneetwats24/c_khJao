#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strRemoveAll(char *src,char *key)
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
  char s[]="fofoo ";
  char *z = (char*)malloc(sizeof(char)*15);
  while( strRemoveAll(s,"foo") );
  z=s;
  printf("%s",z);
	  
}
