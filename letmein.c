#include <stdio.h>
#include <string.h>

int main(void)
{
        char buff[20];
        int pass = 0;

        printf("\n Enter Your Password: \n");
        gets(buff);

        if(strcmp(buff, "bufferoverflow"))
        {
                printf("\n Wrong Password \n");
        }
        else
        {
                printf("\n Correct Password! you may login now \n");
        }

        if(pass)
        {
        /* if passes we can do stuffs */
                printf("\n we are logged in now! \n");
        }
        return 0;

}
