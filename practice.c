#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n, cnt = 0, flg = 1;
  scanf("%d", &n);
  while (n--) {
    flg = 1;
    int letternum[26] = {0};
    char s[102];
    scanf("%s", s);
    for (int i = 0; s[i] != 0; i++) {
      if (letternum[s[i] - 'a'] == 0) {
        letternum[s[i] - 'a']++;
      } else {
        if (s[i - 1] == s[i]) {
          letternum[s[i] - 'a']++;
        } else {
          flg = 0;
          break;
        }
      }
    }
    if (flg)
      cnt++;
  }
  printf("%d", cnt);
}
