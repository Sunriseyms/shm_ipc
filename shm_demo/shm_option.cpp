#include <asm-generic/errno-base.h>
#include <cerrno>
#include <iostream>
#include <sys/mman.h>
#include <sys/stat.h>        /* For mode constants */
#include <fcntl.h>           /* For O_* constants */


int main(int argc, char** argv) {
    if(argc != 2) {
        std::cout << "usage: ./shm_option shm_name" << std::endl;
        return -1;
    }

    int fd = shm_open(argv[1], O_CREAT | O_RDWR, 0755);
    if(fd == -1 ) {
        
    }
}