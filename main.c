#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int main() {

	struct stat buff;
	stat("hello.txt", &buff);

	printf( "Fize size in bytes: %d\n", buff.st_size);
	printf( "File mode: %d\n", buff.st_mode ) );
  	printf( "Last accessed: %s\n", ctime(&buff.t_atime ) );

  	int B = buff.st_size;
  	int KB = B / 1024;
  	B = B % 1024
  	int MB = KB / 1024;
  	KB = KB % 1024;
  	int GB = MB / 1024;
  	MB = MB % 1024;

  	printf("Human Readable Form: %d GB %d MB %d KB %d B\n", GB, MB, KB, B);
  
  return 0;
}
