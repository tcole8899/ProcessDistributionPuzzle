#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <assert.h>

char **split(char *dataPath, int numProcesses){

}

int main(int argc, char *argv[]){
    assert(argc == 3);
    DIR *dir = opendir(argv[1]);
    int numProcesses = (int)(argv[2][0] - '0');
    if (numProcesses < 1) {
        fprintf(stderr, "Unreasonable Amount of Processes: %d", numProcesses);
        exit(1);
    }
    if(dir){ 
        fprintf(stderr, "Cannot Open Directory: %d\n", argv[1]);
        exit(2);
    }
    char **childFragments = createChildren(argv[1], numProcesses);
    //concatenate childFragments
    //output the concatenated fragments to a source file
    return 0;
}