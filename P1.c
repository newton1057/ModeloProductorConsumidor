#include <stdio.h>
#include<stdlib.h>

#include <string.h>

void Productor (char (*LetrasRecolectadas)[3]){
	//int N_Letras = strlen(LetrasRecolectadas); // Obtener el numero de letras del arreglo de las letras recolectadas
	
	printf("Productor() => %s \n", LetrasRecolectadas[1] );
	puts(LetrasRecolectadas[2]);
	printf("Puntaje de la letra: %d", ObtenerPuntajeLetra(LetrasRecolectadas[0]));
}

int ObtenerPuntajeLetra(char *Letra){
	printf("Letra Obtenida: %s \n", Letra);
	
	int Puntaje=0;
	
	
	if(strcmp(Letra, "A")==0 || strcmp(Letra, "E")==0 || strcmp(Letra, "I")==0 || strcmp(Letra, "L")==0 || strcmp(Letra, "N")==0 || strcmp(Letra, "O")==0 || strcmp(Letra, "R")==0 || strcmp(Letra, "S")==0 || strcmp(Letra, "T")==0 || strcmp(Letra, "U")==0){
		Puntaje = 1;
	} else{
		if(strcmp(Letra, "D")==0 || strcmp(Letra, "G")==0){
			Puntaje = 2;
		}else{
			if(strcmp(Letra, "B")==0 || strcmp(Letra, "C")==0 || strcmp(Letra, "M")==0 || strcmp(Letra, "P")==0){
				Puntaje = 3;
			}else{
				if(strcmp(Letra, "F")==0 || strcmp(Letra, "H")==0 || strcmp(Letra, "V")==0 || strcmp(Letra, "Y")==0){
					Puntaje = 4;
				}else{
					if(strcmp(Letra, "Ch")==0 || strcmp(Letra, "Q")==0){
						Puntaje = 5;
					}else{
						if(strcmp(Letra, "J")==0 || strcmp(Letra, "LL")==0|| strcmp(Letra, "Ñ")==0 || strcmp(Letra, "RR")==0 || strcmp(Letra, "X")==0){
							Puntaje = 8;
						}else{
							if(strcmp(Letra, "Z")==0){
								Puntaje = 10;
							}
						}
					}
				}
			}
		}
	}
	
	return Puntaje;
}

int main(void){
	int PuntajeMaximo;
	int PuntajeGlobal;
	char LetrasRecolectadas[10][3] = { "Ñ", "O", "Ch"}; 
				
	printf("array: %s\n", LetrasRecolectadas[1]);
	
	Productor(LetrasRecolectadas);
	
	return 0;
}




