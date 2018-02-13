#include "headers.h"
int dimension = 12;

void displayMenu()
{

  printf("1) Ver siguiente ciclo de reproduccion y muerte\n");
  printf("2) Ver todos los ciclos de reproduccion y muerte\n");
  printf("3) Escribir los resultados a un archivo de salida\n");
  printf("0) Salir de la Simulacion\n\n");

  printf("Elegir opcion: ");
}

Boolean validateOption(int opt)
{
  if(opt >= 0 && opt <= 3)
    return True;
  else
    return False;
}

//bacteries* breedingGround(){
void breedingGround(){

  FILE* sourceFile = fopen("Entrada.in" , "r");
  bacteries arrayOfBacteries[dimension][dimension];
  int i, j;
  char c;

  for (i = 0 ; i <= dimension ; i++)
    for(j = 0 ; j <= dimension ; j++)
      while((c = fgetc(sourceFile))!= EOF){
        arrayOfBacteries[i][j].type = c;
        printf("%c", arrayOfBacteries[i][j].type);
      }


  fclose(sourceFile);
  //return arrayOfBacteries;
}
