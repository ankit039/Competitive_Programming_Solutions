#include <stdio.h>
#include <math.h>
int main ()
{
  int n;
  scanf ("%d", &n);
  int initial_row = n - 1;
  int initial_col = 1 - n;
  for (int row = initial_row; row > -n; --row)
    {
      for (int col = initial_col; col < n; ++col)
	{
	  int distance_from_center =
	    (abs (row) > abs (col)) ? abs (row) : abs (col);
	  printf ("%d ", distance_from_center + 1);
	}
      puts ("");
    }
  return 0;
}
