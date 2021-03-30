// Fill in the missing code in the below sample code which finds the length of the given string and prints result.
//Instructions:-
// 1)Read a string from the standard input device
// 2) using loop calculate the length of string 
// 3) print the length

//Expected input & output:-
//Enter a string: Vidyavardhaka
//The length of string = 13

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
