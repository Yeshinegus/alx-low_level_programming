#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;

fd = open(*filename, O_RDONLY);
if (fd == -1)
{
printf("Failed to open and read the file");
return (0);
}
read(fd, *filename, letters);

return (fd);
close (fd);
}
