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


bacteria** breedingGround(){

  FILE* sourceFile = fopen("Entrada.in" , "r");

  bacteria** arrayOfBacteria;
  arrayOfBacteria = (bacteria**)malloc(dimension * sizeof(bacteria*));
  
  int i, j; // Indices para recorrer arreglo
  char c; // Variable para leer los caracteres del archivo

  for (i = 0 ; i <= dimension ; i++){
    arrayOfBacteria[i] = (bacteria*) malloc(dimension * sizeof(bacteria));
    for(j = 0 ; j <= dimension ; j++) 
      while((c = fgetc(sourceFile))!= EOF)
          arrayOfBacteria[i][j].type = c;
  }

  fclose(sourceFile);
  return arrayOfBacteria;
}
