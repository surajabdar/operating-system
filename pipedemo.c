#include<stdio.h>
#include<unistd.h>

int main()
{
	unsigned char rbuff[128];
	int pfd[2];
	pipe (pfd);
	pid_t id;
	id= fork();
	if(0==id)
	{
		read(pfd[0], rbuff, 128);
		printf("child: %s\n",rbuff);
		close(pfd[0]);
	}
	else
	{
		write(pfd[1], "cdac\n", 5);
		close(pfd[1]);
	}
	return 0;

}
