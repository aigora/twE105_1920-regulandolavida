#include <stdio.h>
#include <time.h> 
#include <stdlib.h> 
#include <string.h> 


int imprimirCalendario();
int escribirCalendario();
char toString[190];
int main(){
	int salir = 0, opcion, introducir;

	//Puntero con las posibles opciones del calendario
	int sangrado;
	int emociones;
	int dolor;
	int pildora;
	char evento[50];
	char stringSangrado[35];
	char stringEmociones[35];
	char stringDolor[35];
	char stringPildora[35];
	char stringEvento[50];
	int counter;
	//Bucle hasta que se indique salir
	while (salir != 1){
		do{
			//Menu principal
			printf("Menu principal\n\n Que desea hacer?\n  Introduzca 1 para anadir evento o 0 para ver el seguimiento:\n");
			scanf("%i", &opcion);
			if (opcion == 1){
				//Dependiendo del evento lo aniade en el fichero de texto
				for(counter = 1;counter <= 5;counter++){
					if (counter == 1){
						while (sangrado !=1 && sangrado !=2 && sangrado!=3){
						
						printf("Selecione el nivel de sangrado\n");
						printf("1. Nivel de sangrado alto\n");
						printf("2. Nivel de sangrado medio\n");
						printf("3. Nivel de sangrado bajo\n");
						scanf("%d", &sangrado);
					if(sangrado == 1){
							strcpy(stringSangrado, "Nivel de sangrado: alto,");
						}else if (sangrado == 2){
							strcpy(stringSangrado, "Nivel de sangrado: medio,");
						}else if (sangrado == 3){
							strcpy(stringSangrado, "Nivel de sangrado: bajo,");
						}else{
							strcpy(stringSangrado, "NULL,");
						}
					}
					
					} else if (counter == 2){
						while (emociones !=1 && emociones !=2 && emociones!=3 && emociones!=4){
						
							printf("Selecione el estado de animo\n");
							printf("1. Feliz\n");
							printf("2. Triste\n");
							printf("3. Enfadada\n");
							printf("4. Nerviosa\n");
							scanf("%d", &emociones);
						if(emociones == 1){
							strcpy(stringEmociones, "Estado de animo: Feliz,");
						}else if (emociones == 2){
							strcpy(stringEmociones, "Estado de animo: Triste,");
						}else if(emociones == 3){
							strcpy(stringEmociones, "Estado de animo: Enfadada,");
						}else if(emociones == 4){
							strcpy(stringEmociones, "Estado de animo: Nerviosa,");
						}else {
							strcpy(stringEmociones, "NULL,");
						}
					}
					} else if (counter == 3){
						while (dolor !=1 && dolor !=2 && dolor!=3 ){
						
							printf("Selecione el nivel de dolor\n");
							printf("1. Mucho\n");
							printf("2. Poco\n");
							printf("3. Aceptable\n");
							scanf("%d", &dolor);
						if(dolor == 1){
							strcpy(stringDolor, "Nivel de dolor: Mucho,");
						}else if (dolor == 2){
							strcpy(stringDolor, "Nivel de dolor: Poco,");
						}else if (dolor == 3) {
							strcpy(stringDolor, "Nivel de dolor: Aceptable,");
						}else{
							strcpy(stringDolor, "NULL,");
						}
					}
											
					} else if (counter == 4){
						while (pildora !=1 && pildora !=2 ){
							
							printf("A tomado la pildora\n");
							printf("1. Si\n");
							printf("2. No\n");
							scanf("%d", &pildora);
						if(pildora == 1){
							strcpy(stringPildora, "Si ha tomado pildora,");
						}else if(pildora == 2){
							strcpy(stringPildora, "No ha tomado pildora,");
						}else{
							strcpy(stringPildora, "NULL,");
						}
					}
											
					} else if (counter == 5){
						printf("Eventos relevantes(max. 50 caracteres)\n");
						scanf(" %[^\n];%s ", &evento);
						strcpy(stringEvento, evento);
						
					}else {
						printf("Ha ocurrido un error1\n");
						main();
					}
					
				}
			
				strcpy(toString,stringSangrado);
				strcat(toString,stringEmociones);
				strcat(toString,stringDolor);
				strcat(toString,stringPildora);
				strcat(toString,stringEvento);
				escribirCalendario();
				//Menu para volver al inicio
				printf("Desea volver al inicio? Si=1, No=2 \n");
				scanf("%i", &introducir);
					if (introducir == 2){
						printf("Saliendo...\n");
						salir = 1;
					} else if (introducir == 1){
						main();
					}else{
						printf("Ha ocurrido un error\n");
						main();
					}
						
			//Si desde el menu principal quiere imprimir el calendario
			} else if(opcion ==0){
				imprimirCalendario();
				printf("\n");
				
				printf("Desea volver al inicio? Si=1, No=2 \n");
				scanf("%i", &introducir);
					if (introducir == 2){
						printf("Saliendo...\n");
						salir = 1;
					} else if (introducir == 1){
						main();
					}else{
						printf("Ha ocurrido un error\n");
						main();
					}
				
			} else {
				printf("Opcion no correcta.\n\n");
			}
		}while (opcion != 0 && opcion != 1);
	}
	
}
	
int imprimirCalendario (){
int i, n, nLineas = -1;
char dia[190];
char x;
  FILE *pf;
  // Abrimos fichero para lectura
  pf = fopen("C:\\Users\\reyam\\OneDrive\\Documentos\\GitHub\\twE105_1920-regulandolavida\\fichero del calendario.txt", "r");
  // Cada uno podra su directorio correspondiente
  if (pf == NULL){
  	printf("Error al abrir el fichero.\n");
  	return (1);
  }else{
  	while (fscanf(pf, "%c", &x) != EOF){
		fscanf(pf, " %[^\n];%s ",&dia);
    	printf("%s\t\n", dia);
		}
	}			
  	fclose(pf);
  	
 	 return (0);
}	

int escribirCalendario(){

	FILE *pf;
	
  // Abrimos fichero para escritura
	pf = fopen("C:\\Users\\reyam\\OneDrive\\Documentos\\GitHub\\twE105_1920-regulandolavida\\fichero del calendario.txt", "a");
	 // Cada uno podra su directorio correspondiente
 	 if (pf == NULL) 
    	{// Si el resultado es NULL mensaje de error 
     	 printf("Error al abrir el fichero.\n");
     	 return (-1);
    	}
  	else
   	 {
   	 
	fputc('\n',pf);
	fprintf(pf,"%s",toString);
     
	  fclose(pf); // Cerramos fichero
      return (0);
    }
}



