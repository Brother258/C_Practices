#include <stdio.h>
void prime(int start,int end){
    int i,is_prime;
    while (start < end) {
      is_prime = 0;

      if (start <= 1) {
         ++start;
      }

      for (i = 2; i <= start / 2; ++i) {

         if (start % i == 0) {
            is_prime = 1;
            break;
         }
      }

      if (is_prime == 0)
         printf("%d ", start);

      ++start;
   }
}
int main() {
    int start, end;
    printf("Enter the range : ");
    scanf("%d %d", &start, &end);

    prime(start,end);


   return 0;
}
