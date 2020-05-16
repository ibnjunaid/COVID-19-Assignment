//This program tries to emulate the UNIX wc command

#include "functions.cpp"
#include <string.h>
int main(int argc , char *argv[]){
    
    char filename[30] = "data.txt";
    if(argc >= 2){
        memcpy(filename ,argv[1],sizeof(filename));
    }

    int lineCount = countLines(filename);
    fprintf(stdout, "Line Count: %d \n", lineCount);
    
    int charCount = countCharacters(filename);
    fprintf(stdout, "Char count: %d \n", charCount);

    int wordCount = countWords(filename);
    fprintf(stdout, "Word Count: %d \n", wordCount);

}
