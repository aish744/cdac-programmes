#include<stdio.h>
void binaryToText(const char* binaryFile, const char* textFile)
{
    FILE* binaryPtr = fopen(binaryFile,"rb");
    FILE* textPtr = fopen(textFile,"w");

    if(binaryFile ==NULL || textFile ==NULL){
        printf("error in opening files\n");
        return;
    }

    int num;
    while(fread(&num, sizeof(int),1,binaryPtr) == 1)
    {
        fprintf(textPtr,"%d\n",num);
    }
    fclose(binaryPtr);
    fclose(textPtr);

    printf("binary file converted to text file\n");
    
}
int main()
{
    const char* binaryFile = "input.bin";
    const char* textFile = "ouput5.txt";
    binaryToText(binaryFile,textFile);
    return 0;
}
