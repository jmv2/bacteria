#include "headers.h"

void main ()
{
  int opt;

  printf("Simulacion de baterias\n\n");
  displayMenu();
  scanf("%d", &opt);

  while (validateOption(opt) == False ){
    printf("Opcion incorrecta.\n\n");
    displayMenu();
    scanf("%d", &opt);

  }

  switch (opt) {
    case 0:
      printf("Salir de la Simulacion\n");
      breedingGround();
      break;
    case 1:
      printf("Siguiente ciclo\n");
      break;
    case 2:
      printf("Ver todos los ciclos\n");
      break;
    case 3:
      printf("Guardar los cambios\n");
      break;
  }

}
