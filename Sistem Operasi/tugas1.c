// Maxdha Maxiwinata
// G64190105

#include <stdio.h>
#include <unistd.h>

int main()
{
  puts("Runing Comand");
  char *args[] = {"curl", "wttr.in", NULL};
  execvp(args[0], args);
  puts("Done");
  return 0;
}