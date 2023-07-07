#include<stdio.h>

int main()
{
    FILE* file = fopen("source","r");

    if(file == NULL)
    {
        printf("file doesn't exits");
        return 1;
    }
    char c;
    int count=0;
    for(c=fgetc(file);c!=EOF; c=fgetc(file)){
        if(c=='\n')
        {
            count++;
        }
    }
    fclose(file);
    printf("total number of lines in files : %d\n",count);
    return 0;

}