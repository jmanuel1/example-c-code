#include <stdio.h>
#include <stdlib.h> //exit()
#include <unistd.h> //read(), write(), open()
#include <fcntl.h> //O_RDONLY, O_WRONLY

int main(int argc, char *argv[])
{
	int src, dest, bwritten;
	char *srcname, *destname, buffer[512];

	if (argc < 3)
	{
		printf("Program needs two arguments\n");
		exit(0);
	}

	srcname = argv[1];
	destname = argv[2];

	src = open(srcname, O_RDONLY, 0); //open for reading
	if (src == -1)
	{
		printf("Cannot open file %s for reading\n", srcname);
		exit(0);
	}

	dest = open(destname, O_WRONLY, 0);
	if (dest == -1)
	{
		printf("Cannot open file %s for writing\n", destname);
		exit(0);
	}

	//start copying
	while ((bwritten = read(src, buffer, sizeof(buffer))) > 0) //while we are not at the end of file
	{
		write(dest, buffer, bwritten);
	}

	close(src);
	close(dest);
}
