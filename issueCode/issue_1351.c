#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

#define FILE_MAX_SIZE        256000
#define FILE_NAME                "dump.log"
#define LAST_FILE_NAME        "dump.log2"

FILE* check_file_size_and_reopen(FILE* fp);

int main(void) {

        FILE *fp = fopen(FILE_NAME, "a+");

        if (!fp) {
                return 1;
        }
        fp = check_file_size_and_reopen(fp);

        if (fp) {
                fclose(fp);
        }

        return 0;
}

FILE* check_file_size_and_reopen(FILE* fp) {
        struct stat info;
        int fd = fileno(fp);
        (void)fd;

        fstat(fd, &info);

        if (info.st_size <= FILE_MAX_SIZE) {
                return fp;        
        }

        fclose(fp);
        rename(FILE_NAME, LAST_FILE_NAME);

        return fopen(FILE_NAME,"a+");
}