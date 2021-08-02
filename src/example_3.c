#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#define PORT 8000
#include "payload.h"

int main(int argc, char *argv[])
{
	
	struct sockaddr_in serv_addr;
    // while true loop so the parent process doesn't die.
    while (1)  {
        int sock = socket(AF_INET, SOCK_STREAM, 0);

        serv_addr.sin_family = AF_INET;
        serv_addr.sin_port = htons(PORT);

        inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr);
        connect(sock, (struct sockaddr *) &serv_addr, sizeof (serv_addr));
		write(sock, payload, payload_len);

        sleep(3);
        close(sock);
    }

	return 0;
}
