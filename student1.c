#include <stdio.h>
#include <assert.h>
#include "functions.h"

/* CMSC 216, Spring 2023, Project #1
 * Public test 1 (public1.c)
 *
 * Tests calling compare_rectangles(216, 216, 216, 216).
 *
 * (c) Larry Herman, 2023.  You are allowed to use this code yourself, but
 * not to provide it to anyone else.
 */

int main(void) {
  assert(compare_rectangles(216, 216, 216, 216) == 0);
  assert(compare_rectangles(216, 216, 128, 128) == 1);
  assert(compare_rectangles(128, 128, 216, 216) == -1);
  assert(compare_rectangles(-1, 216, 216, 216) == -2);
  assert(compare_rectangles(0, 216, 216, 216) == -1);

  printf("\nThis test has passed!\n");

  return 0;
}
