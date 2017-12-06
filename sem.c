#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/sem.h>
#include <sys/ipc.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

#define KEY 1729

void create(const char * x) {
  int semVal;
  sscanf(x, "%d", semVal);
}
void view() {
  printf("something\n");
}
void rem() {
  printf("something\n");
}


int main(int c, const char *args[]) {
  int i;
  for(i = 0; i < c; i ++){
    if (strcmp(args[i], "-c") == 0)
      create(args[++i]);
    else if (strcmp(args[i], "-v") == 0)
      view();
    else if (strcmp(args[i], "-r") == 0)
      rem();
    }
}
