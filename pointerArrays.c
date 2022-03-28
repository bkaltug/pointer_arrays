#include<stdio.h>


char *chosen(char *days[],int length,int ix){
	
	if(ix>=1 && ix<=7){
		
		return days[ix-1];
	}
	else {
		return NULL;
	}
}

int main(void){
	
	char *days[7]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};	
	int ix;
	
	printf("Please enter the number of the week to see the name of the day: ");
	scanf("%d",&ix);
	
	char *p = chosen(days,7,ix);
	printf("%s",p);
	
	return 0;
}
