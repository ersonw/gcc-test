/*
 ============================================================================
 Name        : test-gcc.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main(int c, char* v[]){
	int len = sizeof(v) / sizeof(v[0]);
	printf("c===%d\nv.len===%d\n",c,len);
	for(int i=0; i < c; i++){
		printf("%d===%s\n",i,v[i]);
	}
	return 0;
}
