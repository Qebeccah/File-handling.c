#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
char name[30];
int marks;
} student1,student2,student3,student4,student5;
int main(){
FILE *fptr;
fopen("documents:\\coding c++\\students file.txt","r");
if(fptr ==NULL){
printf("Error opening the file");
exit(1);
}
printf("Enter student 1 name:");
scanf("%s",&student1.name);
printf("Enter student 1 marks:");
scanf("%d",&student1.marks);
printf("Enter student 2 name:");
scanf("%s",&student2.name);
printf("Enter student 2 marks:");
scanf("%d",&student2.marks);
printf("Enter student 3 name:");
scanf("%s",&student3.name);
printf("Enter student 3 marks:");
scanf("%d",&student3.marks);
printf("Enter student 4 name:");
scanf("%s",&student4.name);
printf("Enter student 4 marks:");
scanf("%d",&student4.marks);
printf("Enter student 5 name:");
scanf("%s",&student5.name);
printf("Enter student 5 marks:");
scanf("%d",&student5.marks);

fprintf(fptr,"student1name: %s",student1.name);
fprintf(fptr,"student1marks:%d",student1.marks);
fprintf(fptr,"student2name: %s",student2.name);
fprintf(fptr,"student2marks:%d",student2.marks);
fprintf(fptr,"student3name: %s",student3.name);
fprintf(fptr,"student3marks:%d",student3.marks);
fprintf(fptr,"student4name: %s",student4.name);
fprintf(fptr,"student4marks:%d",student4.marks);
fprintf(fptr,"student5name: %s",student5.name);
fprintf(fptr,"student5marks:%d",student5.marks);
fclose(fptr);
    return 0;
}