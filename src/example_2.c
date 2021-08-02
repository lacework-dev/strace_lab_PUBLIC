#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


int main(int argc, char *argv[])
{
	
	char password[] = "secret123\n";

	for (int i = 0; i < 7; i+=1) {
		fork();

		char fout[10];
		strcpy(fout, &password[i]);

		char *fname = (char *)malloc(100);
		srand(31337);
		sprintf(fname, "/tmp/%d.log", ( getpid() ^ rand()));

		FILE *fd = fopen(fname, "a+");
		fputs(fout, fd);

		free(fname);
		fclose(fd);
	}

	return 0;
}
