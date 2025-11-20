Twoim zadaniem jest zaimplementowanie kolejki (ang. queue) przy użyciu dynamicznej tablicy w języku C. Kolejka powinna działać na zasadzie FIFO (ang. First In, First Out), czyli pierwszy element dodany do kolejki powinien być pierwszym, który z niej zostanie usunięty.

Jako dodatkowe wyzwanie, powrzucaj w możliwie dużo (rozsądnych) miejsc wyrażenie const. W szczególności do zmiennych przyjmowanych przez funkcję.

Struktura danych:

Zaimplementuj strukturę Queue, która będzie zawierać:

- Dynamicznie alokowaną tablicę int do przechowywania elementów kolejki.
- Zmienną `front`, która przechowuje indeks pierwszego elementu w kolejce.
- (Opcjonalnie) zmienną `rear`, która przechowuje indeks ostatniego elementu w kolejce.
- Zmienną `size`, która przechowuje aktualny rozmiar zaalokowanej tablicy.
- Zmienną `count`, która przechowuje liczbę elementów w kolejce.

Operacje do zaimplementowania:

- `void allocQueue(struct Queue *q, int size)`:
    - Rezerwuje pamięć odpowiedniego rozmiaru oraz przypisuje innym zmiennym odpowiednie wartości.

- `void enqueue(struct Queue *q, int value)`:
    - Dodaje nowy element na koniec kolejki.
    - Jeśli kolejka jest pełna, powiększa jej rozmiar dwukrotnie, a następnie dodaje element.

- `int dequeue(struct Queue *q, int *result)`:
    - Usuwa element z początku kolejki i zapisuje go w result.
    - Jeśli kolejka jest pusta, zwraca 0, a w przypadku sukcesu zwraca 1.

- `int peek(struct Queue *q, int *result)`:
    - Pobiera wartość z początku kolejki bez usuwania jej, zapisując wartość w result.
    - Jeśli kolejka jest pusta, zwraca 0, a w przypadku sukcesu zwraca 1.

- `int isEmpty(struct Queue *q)`:
    - Sprawdza, czy kolejka jest pusta. Zwraca 1, jeśli jest pusta, a 0 w przeciwnym razie.

- `void freeQueue(struct Queue *q)`:
    - Zwalnia pamięć zaalokowaną dla kolejki.

Zadanie należy zaimplementować w pliku queue.h, który będzie następnie dołączony do załączonego pliku main.c. Należy przesłać jedynie plik queue.h.