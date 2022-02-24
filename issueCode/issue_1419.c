#include <dirent.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>


int foo(void) {
    int fd = open("mydir", O_RDONLY);
    if (fd < 0)
        return -1;

    DIR *d = fdopendir(fd);
    if (!d) {
        close(fd);
        return -1;
    }

    closedir(d);

    return 0;
}