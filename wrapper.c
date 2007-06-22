#include <stdio.h>
#include<stdlib.h>
#include<asm/unistd.h>
#include<errno.h>
#include<string.h>
#include<fcntl.h>

_syscall2(int, memmir, int, a, int, b);

int main(int argc, char *argv[], char *envp[]) {
	char **hmm = malloc(sizeof(char *) * argc);
	int i;
	if (argc < 2) {
		printf("Bad usage.\n");
		return -1;
	}	
	memmir(5,5);
	for(i=1;i<argc;i++)
	    hmm[i-1] = argv[i];
	execve(hmm[0],hmm,envp);
	return 0;
}
