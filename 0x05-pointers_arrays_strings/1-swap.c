#include <stdio.h>
#include "main.h"

void swap(int *a, int *b)
{
   int a_original = *a;
   int b_original = *b;

   *a = b_original;
   *b = a_original;
}
