#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

long ler_bytes(FILE *fptr){

	fseek(fptr, 0, SEEK_END);
	file_size = ftell(fptr);
	rewind(fptr);
	
	return file_size;
}

void readFile(char fileName[15]){	
	fptr = fopen(fileName, "r");
	
	if (fptr == NULL) {
		printf("Erro ao abrir o arquivo %s !\n", fileName );
		return;
	}
	
	tamanho_bytes = ler_bytes(fptr);
	
	char *file_text = (char*) malloc(sizeof(char) * (tamanho_bytes + 1));
	
	if (file_text == NULL){
		printf("Erro de memoria!\n");
		fclose(fptr);
		return;
	}
	
	fread(file_text, sizeof(char), tamanho_bytes, fptr);
	file_text[tamanho_bytes] = '\0';
	
	printf("%s", file_text);
    
	free(file_text);
    fclose(fptr);
}

