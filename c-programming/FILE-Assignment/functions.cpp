#include <stdio.h>
#include <stdlib.h>

int countLines(const char *_path){
   char ch ;
   FILE *ipf = fopen(_path,"r");
   int count =0;
   if(ipf  == NULL){
        fprintf(stderr,"%s","Cannot Open the file");
        exit(-1);
   }
   while(fscanf(ipf,"%c",&ch) != EOF){
        if(ch == '\n')
            count++;
   } 
   return count; 
}

int countCharacters(const char *_path){
    int char_count = 0;
    char ch ;
    FILE *ifp = fopen(_path,"r");
    if(ifp == NULL){
        fprintf(stderr,"%s","Cannot Open the file");
        exit(-1);
    }
    while(fscanf(ifp,"%c",&ch) != EOF){
        if(ch >= 'A' && ch <= 'z')
            char_count++;
    }
    return char_count;
}


/*
    * This function assumes that  every word is surrounded by two whitespaces 
*/

int countWords(const char *_path){
    int word_count = 0;
    char word[60];
    FILE *ifp = fopen(_path,"r");
    if(ifp == NULL){
        fprintf(stderr,"%s","Cannot Open file");
        exit(-1);
    }
    while(fscanf(ifp,"%s",word) != EOF){
            word_count++;
    }
    return word_count;
}
