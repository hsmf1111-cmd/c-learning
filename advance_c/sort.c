#include <stdio.h>

int main() {
	int scores[5] = {85, 92, 78, 99, 88};

        int temp;
        for (int round = 0; round < 4; round++) {

             for (int i =1; i< 5; i++) {
                  if (scores[i-1] < scores[i]) {
	        	temp = scores[i-1];
	        	scores[i-1] = scores[i];
	        	scores[i] = temp;
               	}
       }
    }	     
printf("Ranked scores: ");
  for (int i =0; i < 5; i++) {
	printf("%d ", scores[i]);
   }
    printf("\n");

   return 0 ;

 }

