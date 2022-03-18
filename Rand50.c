#include "header.h"


int main () {
  int ikra;
  printf("Enter lot of random numbers from 1 to 20\n");
  scanf("%d", &ikra);
  
  FILE *file = fopen("file.txt", "a"); //create and open file for add some text
  while (ikra > 0) {  //loop while ikra bigger than 0
    srand(time(NULL));
    //sleep(1);   // delay 1 sec. Without delaying numbers would similar due to time
    fprintf(file, "%d\r\n",rand()%100); // writing number to file
    ikra--; // -1 after each loop
    }  
  fclose(file);  
show(); // another function
  return 0;
  
}
