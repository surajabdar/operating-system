#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd;
	fd=open("desd.txt",O_WRONLY| O_CREAT);
	write(fd,"cdac",4);
	close(fd);
	return 0;
}
