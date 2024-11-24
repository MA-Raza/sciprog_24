#include <stdio.h>

int main(void){
  int i;
  double a;
  int ierr;

  // Enter info from user
  printf("Enter an integar and a double\n");
  ierr = scanf("%d %lf", &i, &a);

  // Check if input is correct
  if (ierr != 2) printf("Problem with input!!! Rerun and enter an integar and a double\n");

  return 0;
}


