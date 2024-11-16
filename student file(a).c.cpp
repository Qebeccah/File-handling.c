#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
char name[30];
int marks;
};
int main(){
struct student std;
int i,n;
FILE *fptr;
fptr= fopen("students file","a+");
if(fptr==NULL){
printf("Error!");
exit(1);
}
else{
printf("file opened successful!\n");
}
printf("Enter the number of students:\n");
scanf("%d",&n);

for(i=0; i<n; i++){
printf("\nEnter the name of the student:%d\n", i+1);
scanf("[^%s]",std.name);
fgets(std.name,sizeof(std.name),stdin);
printf("\nEnter the student's marks:%d\n", i+1);
scanf("[^%d]",std.marks);
fwrite(&std,sizeof(struct student),1,fptr);
}

fclose(fptr);
return 0;
}

    