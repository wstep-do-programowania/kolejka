#include "queue.h"
#include <stdio.h>
#include <string.h>

int main() {
  struct Queue queue;
  allocQueue(&queue, 2);

  char command[20];
  int value;

  while (1) {
    fprintf(stderr,
            "\nDostępne komendy: enqueue, dequeue, peek, is_empty, exit\n");
    fprintf(stderr, "Wprowadź komendę: ");
    scanf("%s", command);

    if (strcmp(command, "enqueue") == 0) {
      fprintf(stderr, "Podaj wartość do dodania: ");
      scanf("%d", &value);
      enqueue(&queue, value);
    } else if (strcmp(command, "dequeue") == 0) {
      if (dequeue(&queue, &value)) {
        printf("Usunięta wartość: %d\n", value);
      } else {
        printf("Błąd: kolejka jest pusta.\n");
      }
    } else if (strcmp(command, "peek") == 0) {
      if (peek(&queue, &value)) {
        printf("Wartość na początku kolejki: %d\n", value);
      } else {
        printf("Błąd: kolejka jest pusta.\n");
      }
    } else if (strcmp(command, "is_empty") == 0) {
      if (isEmpty(&queue)) {
        printf("Czy kolejka jest pusta? Tak\n");
      } else {
        printf("Czy kolejka jest pusta? Nie\n");
      }
    } else if (strcmp(command, "exit") == 0) {
      break;
    } else {
      printf("Nieznana komenda.\n");
    }
  }

  freeQueue(&queue);
  return 0;
}