#include <stdio.h>
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{

	int fd = open("/tmp/follow_twitter_lacework_labs", O_CREAT|O_WRONLY, 0777);

	// ptrace reference: https://stackoverflow.com/questions/33646089/using-ptrace-to-detect-debugger
	if (ptrace(PTRACE_TRACEME, 0,1,0) == -1) 
	{
		printf("[!] Oh no! Error!");
		return 1;
	} 

	if (fd == 31337){
		printf("[*] Achievement unlocked!\n");
	} else {
		printf("[!] Achievement still locked!\n");
	}

	return 0;
}
