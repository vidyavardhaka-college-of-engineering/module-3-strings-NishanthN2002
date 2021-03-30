//Complete the given program to count number of vowels in a string
//read the input string to be find number vowels present.
//apply comparison character('a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u' and 'U'), if match found, the count to be incremented by one.
//finally display the count of vowels present

//Expected input & output:-
//Enter the string: nithin
//Number of vowels in the string = 2

#include <stdio.h>
int main()
{
  int c = 0, count = 0;
  char s[1000];

  printf("Input a string\n");
  gets(s);

  while (s[c] != '\0') {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      count++;
    c++;
  }

  printf("Number of vowels in the string: %d", count);

  return 0;
}
