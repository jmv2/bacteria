#ifndef __STRUCTURES_H__
#define __STRUCTURES_H__

typedef struct{
  char up;
  char down;
  char left;
  char rigth;
}neighbors;

typedef struct{
  char type;
  int cycles;
  neighbors n;
}bacteria;

#endif
