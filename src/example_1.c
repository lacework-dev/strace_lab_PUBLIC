#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	unsigned int fd = open("/tmp/this_file_should_not_exist", O_RDONLY);
	if (fd == -1) {
		printf("[!] Error!\n");
		return 1;
	}
	else if (fd == 99) {
		printf("[*] whoa, should never get here!\n");
		return 99;
	}
	else {
	    printf("The file exists!\n");
	}

	return 0;
}
