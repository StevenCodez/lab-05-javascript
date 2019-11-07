// gcc -v main.c -o exec

#include <stdio.h> // needed for printf()
#include <stdlib.h> // needed for malloc()

int main()
{
  printf("\n\nworking\n\n");

  // STACK
  // The stack is a small space in RAM included by C compiler for scratch space;
  // we don't typically use it in our C programs. Stack space is limited to ~1MB
  // (you can change size on some compilers, but not recommended to write huge
  // arrays on the stack).
  char helloworld[] = "helloworld";
  //char helloworld[11] = {"h", "e", "l", "l", "o", "w", "o", "r", "l", "d", "\0"};

  for (int i = 0; i < 10; i++)
  {
    printf("%c", helloworld[i]);
  }
  printf("\n\n");

  // HEAP
	// The heap is dynamically allocated space in RAM, used for file readin, for
  // example, where the length of contents is unkown and we may need to resize
  // buffers.
  char *oddchars;

  oddchars = malloc(6 * sizeof(char));


  for (int j = 0; j < 6; j++)
  {
    int m = j * 2;
    oddchars[j] = helloworld[m];
  }
  printf("\n\n%s\n\n", oddchars);

  // assisgnment 6 -- modify the above loop to print hlool backwards (loolh)
  oddchars[5] = '\0';
  for (int k = 0; k < 5; k++)
  {
    int n = k * 2;
      printf("\n%d\n", (8 - n));
      oddchars[k] = helloworld[8 - n];

  }
  printf("\n\n%s\n\n", oddchars);

free(oddchars);
}
