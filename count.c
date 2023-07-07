#include<stdio.h>

int main()
{
    FILE* file= fopen("source","r");
    int space=0;
    int vowel=0;
    int consonant=0;
    char c;

    for (c=fgetc(file);c!=EOF;c=fgetc(file))
    {
        if(c== 'a'|| c=='e'|| c=='i'|| c=='o'|| c=='u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            vowel++;
        }
        else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            consonant++;
        }
         else if (c == ' ') {
            space++;
        }
        // if(c == " \n")
        // {
        //     space++;
        // }
    }
    fclose(file);
    printf("number of voweles are: %d \n",vowel);
    printf("number of consatant are: %d \n",consonant);
    printf("number of spaces are: %d \n",space);

    return 0;

}
