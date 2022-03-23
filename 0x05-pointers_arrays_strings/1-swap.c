#include <stdio.h>
#include "main.h"

void swap_int(int *a, int *b)
{
   int n = *a;
   int *a = *b;
   *b = n;
}
