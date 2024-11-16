#include<stdio.h>
# include<stdlib.h>
int main(){
FILE *fptr;
char sentence[100];
fptr =fopen("documents:\\codingc++\\data.txt","w");
if(fptr==NULL){
printf("Error opening the file!");
 exit(1);
 }
 else{
 printf("file opened successfully!");
 }
 
  printf("write a sentence of upto 100 characters:\n");
  fgets(sentence,sizeof(sentence),stdin);
  fputs(sentence, fptr);
  
 fclose(fptr);
 
return 0;
}