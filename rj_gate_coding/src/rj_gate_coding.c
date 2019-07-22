/*
 ============================================================================
 Name        : rj_gate_coding.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int*ptr =(int*) malloc(sizeof(int));
	if(ptr == NULL)
		printf("No Memory Allocated");
	else
		printf("%p\n",ptr);
	*ptr = 33;
	printf("\n%d",*ptr);
	return 0;
}
