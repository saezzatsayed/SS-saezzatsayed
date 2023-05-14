// Stack overflow Assignment
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
using namespace std;

#define BUFSIZE 300

using namespace std;

void give_shell()
{
  system("/bin/sh");
}

char *mgets(char *dst)
{
  char *ptr = dst;
  int ch;
  /* skip leading white spaces */
  while ((ch = getchar()) && (ch == ' ' or ch == '\t'))
    ;

  if (ch == '\n')
  {
    *ptr = '\0';
    return dst;
  }
  else
    *ptr = ch;

  /* now read the rest until \n */
  while (true)
  {
    ch = getchar();
    if (ch == '\n')
      break;
    *(++ptr) = ch;
  }
  *(++ptr) = 0;
  return dst;
}

void bad()
{
  char buffer[BUFSIZE];
  printf("buffer is at %p\n", buffer);
  cout << "Give me some text: ";
  fflush(stdout);
  mgets(buffer); // similar to C's gets();
  //gets(buffer); // depricated
  cout << "Acknowledged: " << buffer << " with length " << strlen(buffer) << endl;
}

int main(int argc, char *argv[])
{
  bad();
  cout << "Good bye!\n";
  return 0;
}