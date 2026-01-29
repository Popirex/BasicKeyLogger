#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include </usr/include/linux/input.h>
#include </usr/include/linux/input-event-codes.h>


int main( int argc, char *argv[]){

    struct input_event ie;

    // avrò due argomenti, l'eseguibile e il path della tastiera
    if(argc != 2 ){
        printf("\nAttenzione! Uso: %s <path_file_tastiera>\n", argv[0]);
        exit(1);
    }

    if(argv[1][0] != '/'){
     
        printf("\nERRORE: il path del file deve essere assoluto!\n");
        exit(2);
    }

    int fd;
    fd = open(argv[1], O_RDONLY);
    if(fd < 0){
        printf("\nERRORE: apertura del file %s\n", argv[1]);
        exit(3);
    }

    while(1){


        read(fd, &ie, sizeof(ie));
        if(ie.type != EV_KEY || ie.value != 1) continue;
        printf("%d %d %d\n", ie.code, ie.value, ie.type);
        if(ie.code == KEY_A) printf("a");
        else if(ie.code == KEY_SPACE) printf(" ");
    }


    close(fd);

    
    return 0;
}