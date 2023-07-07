#include<stdio.h>

int main()
{
    FILE* file = fopen("data.txt","a");
    if (file == NULL )
    {
        printf("error in opeing file");

    }
    fprintf(file,"hello\n");
    fprintf(file,"this is aihswarya swami\n");
     fclose(file);

     printf("file is appended successfully\n");
     return 0;

}