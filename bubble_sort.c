#include <stdio.h>
/* Just a try */
int ar[5];
int i,j,k;
int main() {
void read_array();
void print_array();
void bubble_sort_array();
   printf("program to bubble bubble_sort \n");

   read_array();
   print_array();
   printf ("Sorting the array \n"); 
   bubble_sort_array();
   //merge_sort_array();
   printf ("Sorted the array \n"); 
   print_array();
   
   
}



/* Functions */

void read_array() {
   printf("Filling or reading intot the array\n");
   for (i=0;i<=4;i++) {
       printf ("Enter the %d element \n", i);
       scanf("%d", &ar[i]);
   }
}
   


void print_array() {
   for (i=0;i<=4;i++) {
       printf (" %d element is %d \n", i, ar[i]);
   }
}



void bubble_sort_array() {
   for (i=0;i<=4; i++) {
      for (j=i+1; j<=4; j++) {
          if (ar[i] > ar[j]) {
               k=ar[i];
	       ar[i]=ar[j];
               ar[j]=k;
          }
      }
   }
}

