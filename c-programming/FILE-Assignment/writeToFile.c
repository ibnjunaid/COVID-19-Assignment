#include <stdio.h>
int main(){
    char data[] =" Where Did Viruses Come From? \n There is much debate among virologists about this question.\n Three main hypotheses have been articulated: \n 1. The progressive, or escape, hypothesis states that viruses arose from genetic elements that gained the ability to move between cells; \n2. the regressive, or reduction, hypothesis asserts that viruses are remnants of cellular organisms; and \n3. the virus-first hypothesis states that viruses predate or coevolved with their current cellular hosts.";
    char *mode = "w"; 
    FILE *opf = fopen("data.txt",mode);
    fprintf(opf,"%s",data);
    fclose(opf);
}
