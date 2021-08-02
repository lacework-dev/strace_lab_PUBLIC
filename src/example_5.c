#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

	int pid = getuid();
	char *usr = getenv("USER");
	printf("User is %s, UID is: %d\n", usr, pid);

	if (pid != 0) {
		printf("[!] Cannot run! Must be root...\n");
		return 1;
	} else {
		printf("[+] Woo, running as root!\n");
	}

	return 0;
}
