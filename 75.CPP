#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
FILE *f1;
char c[30],d[30];
f1 = fopen("75.txt","r");
fscanf(f1,"%s",&c);
printf("Enter password : ");
scanf("%s",&d);
if(strcmp(d,c)==0){
		printf("Log in successfully");
	}
	else{
		printf("Wrong password");
	}
getch();
}