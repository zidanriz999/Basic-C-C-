
#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];
  int a = 0, e = 0, i = 0, o = 0, u = 0;
  int k;

  printf("Enter a string: ");
  gets(str);

  for (k = 0; k < strlen(str); k++)
  {
    char ch = str[k];

    if (ch >= 'A' && ch <= 'Z')
    {
      ch = ch + 32;
    }

    if (ch == 'a')
    {
      a++;
    }
    else if (ch == 'e')
    {
      e++;
    }
    else if (ch == 'i')
    {
      i++;
    }
    else if (ch == 'o')
    {
      o++;
    }
    else if (ch == 'u')
    {
      u++;
    }
  }

  printf("a is occurred %d times.\n", a);
  printf("e is occurred %d times.\n", e);
  printf("i is occurred %d times.\n", i);
  printf("o is occurred %d times.\n", o);
  printf("u is occurred %d times.\n", u);

  return 0;
}
