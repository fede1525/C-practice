// Write a program that outputs the C version in use.

#include <stdio.h>

int main (int argc, char** argv){

#if __STDC_VERSION__>= 201710L
   printf("We are using C18!");
#elif __STDC_VERSION__>= 201112L
   printf("We are using C11!");
#elif __STDC_VERSION__>= 199901L
   printf("We are using C99!");
#else
   printf("We are using C89/C90!");
#endif

   return 0;

}
