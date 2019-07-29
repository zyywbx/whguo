#include <stdio.h>
#include <string>
int main() {
  int i = 0;
  char str[1000] = {0};
  char letter;
  while (scanf("%c", &letter) != EOF) {
    while (letter != '\n') {
      str[i] = letter;
      i++;
      letter = getchar();
    }
    str[i] = '\0';
    length = strlen(str);
    for (i = 0; i < length - 2; i++) {
      if (str[i] == 'y' && str[i + 1] == 'o' && str[i + 2] == 'u') {
        str[i] = 'w';
        str[i + 1] = 'e';
        str[i + 2] = '\0';
      }
    }
    for (i = 0; i < length; < i++) {
      printf("%c", str[i]);
    }
    printf("\n");
  }
  return 0;
}