#include "header.h"
#define N 80

int show(){
  char arr[N];
  
  FILE *file = fopen("file.txt", "r");  
      while (fgets(arr, N, file) !=NULL)
         printf("%s", arr);
   printf("\n");
   fclose(file); 
   return 0;
}
