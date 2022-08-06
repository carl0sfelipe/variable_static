#include <unistd.h>
#include <stdio.h>
//#include <unistd.h>
#include <fcntl.h>

int main(){
int fd;
fd = open("file.bin", O_RDONLY);
char *buf;
read(fd,buf,100);
int i;
while(buf[i]){
putchar(buf[i]);
i++;
}
return 0;
}
