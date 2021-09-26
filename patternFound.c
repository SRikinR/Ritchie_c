#include<stdio.h>


#define MAXLINE 1000


char patter[]="ould";

void getInput(char input[], int max);

int main(){
	printf("What would be the max. limit of your string?: \t");
	int max;
	scanf("%d",&max);
	char line[3];
	getInput(line, max);
	
	
	
	return 0;
}

void getInput(char input[], int max){
	char inputLine[max];
	int i=1;
	while(fgets(inputLine, max, stdin) && i>0){
	printf("\nEnter the String: ");
	i--;
	}
	printf("\nYour Entered String is: %s\n", inputLine);	

}
