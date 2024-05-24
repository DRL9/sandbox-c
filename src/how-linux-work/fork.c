#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * 用来演示创建子进程
 */

void parent(pid_t pid) {
  printf("parent pid is: %d, child pid is: %d\n", getpid(), pid);
}

void child() {
  printf("child, pid is: %d\n", getpid());
}

int main() {
  pid_t pid;
  pid = fork();
  if (pid == -1) {
    err(EXIT_FAILURE, "fork fail");
  }
  if (pid == 0) {
    child();
  } else {
    parent(pid);
  }
  return 0;
}