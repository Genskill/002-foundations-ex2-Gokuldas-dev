#include <stdio.h>
#include <cs50.h>

int main(void) {
  int type=get_int("Enter type of pattern (1 or 2) ");
  int rows=get_int("Number of rows");
  int col;
  switch (type) {
    case 1:
      for (int row=rows; row>=1; row--) {
        for (int col=0; col<row; col++) {
          printf("#");
        }
        printf("\n");
      }
      break;

    case 2:
      for (int row=0; row<rows; row++) {
        /* printf("%d %d\n",row, rows-row); */
        for(int col=0; col<rows-row-1; col++)
          printf(" ");
        for(int col=rows-row; col<=rows; col++)
          printf("#");
        printf("\n");
      }
      break;
    default:
      printf("Don't know that pattern\n");
      

    }
  }
