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

    int fd_lettura;
    fd_lettura = open(argv[1], O_RDONLY);
    if(fd_lettura < 0){
        printf("\nERRORE: apertura del file di lettura %s\n", argv[1]);
        exit(3);
    }


    printf("\nI caratteri * sono tasti non riconosciuti\n");

    while(1){

        // leggo dal file di input della tastiera e salvo i dati nella struct input_event -> ie
        
        read(fd_lettura, &ie, sizeof(ie));

        // se il tipo non è EV_KEY (Tasto evento) -> continua;
        // se il valore non è uno ( Tasto premuto ) -> continua;

        if(ie.type != EV_KEY || ie.value != 1){
            continue;
        }

        if( ie.code >= 2 && ie.code <= 10){
            printf("%d", ie.code - 1);
        }
        else if(ie.code == 11){
            printf("0");
        }
        else if(ie.code == 14){
            printf("<-");
        }
        else if(ie.code == 57){
            printf(" ");
        }
        else if(ie.code == KEY_A){
            printf("A");
        }
        else if(ie.code == KEY_B){
            printf("B");
        }
        else if(ie.code == KEY_C){
            printf("C");
        }
        else if(ie.code == KEY_D){
            printf("D");
        }
        else if(ie.code == KEY_E){
            printf("E");
        }
        else if(ie.code == KEY_F){
            printf("F");
        }
        else if(ie.code == KEY_G){
            printf("G");
        }
        else if(ie.code == KEY_H){
            printf("H");
        }
        else if(ie.code == KEY_I){
            printf("I");
        }
        else if(ie.code == KEY_J){
            printf("J");
        }
        else if(ie.code == KEY_K){
            printf("K");
        }
        else if(ie.code == KEY_L){
            printf("L");
        }
        else if(ie.code == KEY_M){
            printf("M");
        }
        else if(ie.code == KEY_N){
            printf("N");
        }
        else if(ie.code == KEY_O){
            printf("O");
        }
        else if(ie.code == KEY_P){
            printf("P");
        }
        else if(ie.code == KEY_Q){
            printf("Q");
        }
        else if(ie.code == KEY_R){
            printf("R");
        }
        else if(ie.code == KEY_S){
            printf("S");
        }
        else if(ie.code == KEY_T){
            printf("T");
        }
        else if(ie.code == KEY_U){
            printf("U");
        }
        else if(ie.code == KEY_V){
            printf("V");
        }
        else if(ie.code == KEY_W){
            printf("W");
        }
        else if(ie.code == KEY_X){
            printf("X");
        }
        else if(ie.code == KEY_Y){
            printf("Y");
        }
        else if(ie.code == KEY_Z){
            printf("Z");
        }
        else{
            printf("*");
        }


        fflush(stdout);
        
    }


    close(fd_lettura);

    
    return 0;
}