// For loop with 2D array myarray[2][2]
#include<stdio.h>
int main(){
   
   int display[4][4];
   
   int i, j;
   for(i=0; i<4; i++) {
      for(j=0;j<4;j++) {
         printf("Enter value for display[%d][%d]:", i, j);
         scanf("%d", &display[i][j]);
      }
   }

   printf("two dim array elem:\n");
   for(i=0; i<4; i++) {
      for(j=0;j<4;j++) {
         printf("%d ", display[i][j]);
         if(j==3){
            printf("\n");
         }
      }
   }
   return 0;
}
