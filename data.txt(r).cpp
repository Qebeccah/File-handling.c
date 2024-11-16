#include<stdio.h>
# include<stdlib.h>
int main(){
char sentence[100];
FILE *fptr;
fptr= fopen("data.txt","r");
if(fptr==NULL){
printf("Error!");
exit(1);
}
else{
printf("file opened successful!\n");
}

while (fgets(sentence,100,fptr)){
printf("%s",sentence);
}

fclose(fptr);
return 0;
}

    