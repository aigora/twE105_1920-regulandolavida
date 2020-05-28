#include <stdio.h>
#include <time.h> 

void imprimirCalendario();

int main(){
	int salir = 0, opcion;
	char introducir;

	//Puntero con las posibles opciones del calendario
	const char *a[6] = {"a) Regla", "b) Estado de animo", "c) Dolor", "d) Pildora", "e) Eventos", "f) Salir"};
	int sangrado;
	int emociones;
	int dolor;
	int pildora;
	char evento[50];
	//Bucle hasta que se indique salir
	while (salir != 1){
		do{
			//Menu principal
			printf("Menu principal\n\n Que desea hacer?\n  Introduzca 1 para anadir evento o 0 para ver el seguimiento:\n");
			scanf(" %i", &opcion);
			if (opcion == 1){
				printf("Seleccione evento a anadir entre los siguientes (introduzca la letra del evento):\n");
				//Imprime los posibles eventos a aniadir
				
				int i=0;
				while (i<=5){
					printf("%s\n", a[i]);
					i++;
				}
				scanf(" %c", &introducir);

				//Dependiendo del evento lo aniade en el fichero de texto
				if(introducir != 'f' && introducir != 'F'){
					if (introducir == 'a' || introducir == 'A'){
						while (sangrado !=1 && sangrado !=2 && sangrado!=3){
						
						printf("Selecione el nivel de sangrado\n");
						printf("1. Nivel de sangrado alto\n");
						printf("2. Nivel de sangrado medio\n");
						printf("3. Nivel de sangrado bajo\n");
						scanf("%d", &sangrado);
					}
						/*Meter opcion en el txt*/
					} else if (introducir == 'b' || introducir == 'B'){
						while (emociones !=1 && emociones !=2 && emociones!=3 && emociones!=4){
						
							printf("Selecione el estado de animo\n");
							printf("1. Feliz\n");
							printf("2. Triste\n");
							printf("3. Enfadada\n");
							printf("4. Nerviosa\n");
							scanf("%d", &emociones);
					}
					} else if (introducir == 'c' || introducir == 'C'){
						while (dolor !=1 && dolor !=2 && dolor!=3 ){
						
							printf("Selecione el nivel de dolor\n");
							printf("1. Mucho\n");
							printf("2. Poco\n");
							printf("3. Aceptable\n");
							scanf("%d", &dolor);
						}
						
						/*Meter opcion en el txt*/						
					} else if (introducir == 'd' || introducir == 'D'){
						while (pildora !=1 && pildora !=2 ){
						
							printf("A tomado la pildora\n");
							printf("1. Si\n");
							printf("2. No\n");
							scanf("%d", &pildora);
					}
						
						/*Meter opcion en el txt*/						
					} else if (introducir == 'e' || introducir == 'E'){
						printf("Evento relevantes(max. 50 caracteres)\n");
						scanf("%d", &evento);
					//Meter opcion en el txt*/						
					} else {
						printf("Opcion no correcta\n");
					}

					//Cuando lo introduce pregunta para volver o no al inicio.
					printf("Desea volver al inicio? s/n \n");
					scanf(" %c", &introducir);
					if (introducir == 'n'){
						printf("Saliendo...\n");
						salir = 1;
					} else {
						imprimirCalendario();
					}
				}
				//Si es la opcion de salir, sale del documento
				else{
					printf("Saliendo...\n");
					salir = 1;
				}
			//Si desde el menu principal quiere imprimir el calendario
			}else if(opcion ==0){
				imprimirCalendario();
			} else {
				printf("Opcion no correcta.\n\n");
			}
		}while (opcion != 0 && opcion != 1);
	}
	
}

void imprimirCalendario (){
	/*Crear funcion que imprima el .txt*/
}


