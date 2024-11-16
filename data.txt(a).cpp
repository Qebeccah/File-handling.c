#include<stdio.h>
# include<stdlib.h>
int main(){
char sentence[100];
FILE *fptr;
fptr= fopen("data.txt(w)","a");
if(fptr==NULL){
printf("Error!");
exit(1);
}
else{
printf("file opened successful!\n");
}
printf("Enter a second sentence:");
fgets(sentence, sizeof(sentence), stdin);
fprintf(fptr,"%s",sentence);

fclose(fptr);
return 0;
}

    