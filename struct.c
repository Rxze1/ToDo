#include <stdio.h>
#include "struct.h"
#include <string.h>

TODO todos[100];
void Tasks()
    FILE *fp = fopen("tasks.txt", "r");
if (fp == NULL) {
  printf("Fehler bei lesen der Datei!\n");
  return;
  }
  char line[300];//Max pro Zeile
  printf(
//input title
void title() {
    for (int i = 0; i < 100; i++) {
        strcpy(todos[i].header, " ");
    }
}