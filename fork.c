#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{

		pid_t id;
		printf("before fork\n");
		id=fork();
		printf("After fork\n");
		return 0;
}
