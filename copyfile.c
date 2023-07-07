#include<stdio.h>

int main()
{
    FILE* source = fopen("source","r");
    FILE* destination = fopen("destination.txt","w");

    
    char c;

        while((c=fgetc(source)) !=EOF){
            fputc(c,destination);

    }
    
    fclose(source);
    fclose(destination);
    printf("File copied successfully.\n");

    return 0;
}