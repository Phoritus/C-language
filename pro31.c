#include <stdio.h>

// write file

int main()
{
    /* FILE *pF = fopen("C:\\Users\\poohz\\OneDrive\\Desktop\\a.txt","a");

    fprintf(pF,"King of Kays\n");

    fclose(pF);
 */
    if(remove("C:\\Users\\poohz\\OneDrive\\Desktop\\a.txt")==0)
    {
        printf("The file has been deleted");
    }
    else
    {
        printf("The file was NOT delete");
    }
    return 0;


}