#include <stdio.h>
#include <time.h> 
int main()
{

int i,j,k,m,l,cont;			
int dia,mes,ano,semana,moduloMes,febrero,total_mes;
int seleccion=1;					
i=j=k=m=l=cont=0; 				

time_t sisTime; 
struct tm *tiempo;	

time(&sisTime);	
tiempo=localtime(&sisTime);


dia=tiempo->tm_mday;	
mes=tiempo->tm_mon;	
ano=(tiempo->tm_year)+1900;

system ("clear");

printf("CALENDARIO\n");
printf("Hoy es: %d/%d/%d \n\n\n",dia,mes+1,ano);

while(seleccion != 0)
{

if ((ano%4==0) && (ano%100!=0) || ano%400==0)
febrero=29;
else
febrero=28;


switch (mes)
{
case 3: case 5: case 8: case 10: 
total_mes=30; 
break; 
case 1: 
total_mes=febrero; 
break; 
case 0: case 2: case 4: case 6: case 7: case 9: case 11: 
total_mes=31; 
break; 
}


switch (mes)
{
case 0:printf("\t\tENERO\t%d",ano);break;
case 1:printf("\t\tFEBRERO\t%d",ano);break;
case 2:printf("\t\tMARZO\t%d",ano);break;
case 3:printf("\t\tABRIL\t%d",ano);break;
case 4:printf("\t\tMAYO\t%d",ano);break;
case 5:printf("\t\tJUNIO\t%d",ano);break;
case 6:printf("\t\tJULIO\t%d",ano);break;
case 7:printf("\t\tAGOSTO\t%d",ano);break;
case 8:printf("\t\tSEPTIEMBRE\t%d",ano);break;
case 9:printf("\t\tOCTUBRE\t%d",ano);break;
case 10:printf("\t\tNOVIEMBRE\t%d",ano);break;
case 11:printf("\t\tDICIEMBRE\t%d",ano);break;
}




