#include "apue.h"
#include <sys/wait.h>

int 
main(void)
{
	/* MAXLINE is from apue.h */
	char buf[MAXLINE];
	pid_t pid;
	int status;

	printf("%% ");
	while (fgets(buf, MAXLINE, stdin) != NULL) {
		if (buf[strlen(buf) - 1] == '\n') {
			/*
				replace newline with null.
				because the execlp function wants a null-terminated argument, not a newline-terminated argument.
			*/
			buf[strlen(buf) - 1] = 0;
		}

		if ((pid = fork()) < 0) {
			err_sys("fork error");
		} else if (pid == 0) {	/* child */
			/*
				In the child, we call execlp to execute the command that was read from the standardinput. 
				This replaces the child process with the new program file. 
			*/
			execlp(buf, buf, (char *)0);
			err_ret("couldn't execute: %s", buf);
			exit(127);
		}

		/* parent */
		if ((pid = waitpid(pid, &status, 0)) < 0) {
			err_sys("Waitpid error");
		}
		printf("%% ");
	}
	exit(0);
}



	
