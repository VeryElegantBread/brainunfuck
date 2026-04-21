#include <stdio.h>

#include "gen.h"

void repeat(char c, int n) {
  for (int i = 0; i < n; i++) putchar(c);
}

void plus(int amount) { repeat('+', amount); }

void minus(int amount) { repeat('-', amount); }

void move(int amount) {
  if (amount < 0)
    repeat('<', -amount);
  else
    repeat('>', amount);

  pos += amount;
}

void go_to(int new_pos) {
  int diff = new_pos - pos;
  move(diff);
}

void zero() { printf("[-]"); }

void move_cell(int from, int to) {
  go_to(to);
  printf("[-]");
  go_to(from);
  printf("[-");
  go_to(to);
  putchar('+');
  go_to(from);
  putchar(']');
}

void copy_cell(int from, int to) {
  go_to(to);
  printf("[-]");
  go_to(from);
  printf("[-");
  go_to(to);
  putchar('+');
  go_to(0);
  putchar('+');
  go_to(from);
  putchar(']');
  move_cell(0, from);
}
