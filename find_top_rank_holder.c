// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
#include <stdio.h>

int main() {
  int values[5];
  int top_rank_holder;
  int top_mark = 0;

  printf("Enter Total Marks for 5 Students\n\n\n");
  // taking input and storing it in an array
  for(int i = 0; i < 5; ++i) {
     printf("Enter Total Marks for Student%d :-",i);
     scanf("%d", &values[i]);
  }

  printf("Displaying Marks: ");

  // printing elements of an array
  for(int i = 0; i < 5; ++i) {
     printf("%d\n", values[i]);
     if ( values[i] > top_mark)
     {
         top_rank_holder = i;
         top_mark = values[i];
     }
  }
  
  printf(" Top Rank Holder is Student%d with Marks %d", top_rank_holder,values[top_rank_holder]);
  
  return 0;
}
