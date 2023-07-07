#include<stdio.h>

void textToBinary(const char* binaryFile,const char* textFile)
{
    FILE* binaryPtr = fopen(binaryFile,"wb");
    FILE* textPtr = fopen(textFile,"r");
    if(binaryFile ==NULL || textFile ==NULL)
    {
        printf("error in opening file\n");
        return;
    }
    int num;
    while(fscanf(textPtr,"%d",&num) !=EOF)
    {
        fwrite(&num,sizeof(int),1,binaryPtr);
    }
    fclose(binaryPtr);
    fclose(textPtr);
    printf("text file converted to binary");
}
int main()
{
    const char* binaryFile = "ouput.bin";
    const char* textFile = "input1.txt";
    textToBinary(binaryFile,textFile);
    return 0;
}