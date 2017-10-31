#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main() {

  int num = 34563;

  int file = open( "file", O_CREAT | O_RDWR, 0666 );
  write( file, num, sizeof( num ) );
  close( file );

  printf( "Fize size in bytes: %d\n", stat( "file", st_size ) );
  printf( "File mode: %d\n", stat( "file", st_mode ) );
  printf( "Last accessed: %s\n", ctime( stat( "file", st_atime ) ) );
  
  return 0;
}
