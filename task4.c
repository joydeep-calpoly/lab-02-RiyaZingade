#include <stdio.h>


int main(int argc, char *argv[]){

        for(int i = 1; i < argc; i++){

                char* word = argv[i];
                if(word[0] == '-'){
                        printf("%s\n", argv[i]);
                }

        }

        return 0;


}
