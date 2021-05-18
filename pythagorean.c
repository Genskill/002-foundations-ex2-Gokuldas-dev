#include <stdio.h>
#include <cs50.h>

int main(void) {
  float a1=get_float("side 1 ");
  float a2=get_float("side 2 ");
  float a3=get_float("side 3 ");
  
  float largest;
  float other1, other2;
  
  if (a1>a2) {
    if (a1 > a3) {
      largest = a1;
      other1 = a2;
      other2 = a3;
    } else {
      largest = a3;
      other1 = a1;
      other2 = a2;
    }
  } else {
    if (a2 > a3) {
      largest = a2;
      other1 = a1;
      other2 = a3;
    } else {
      largest = a3;
      other1 = a1;
      other2 = a2;
    }
  }
    
  if (largest*largest == other1*other1 + other2*other2) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
}
