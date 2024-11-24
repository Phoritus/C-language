#include <stdio.h>
#include <string.h>

int main(){
    char s1[]="MunEen";
    char s2[]="mUnEen";
    //strlwr(s1);            //converts string to lowercase
    //strupr(s2);            //converts string to uppercase
    //strcat(s1,s2);         //เอา string ต่อกัน 
    //strncat(s1,s2,1);        // this is result "PuM"
    //strcpy(s1,s2);           //copy s2 to s1
    //strncpy(s1,s2,2);     //copy n character of s2 to s1

    //strset(s1,'?');  //set all characters of string to given character this is result "??"
    //strnset(s1,'x',1);   //sets first n characters of string to given character result is "xu"
    //strrev(s1);  //reverses string

    //int s=strlen(s1); //length string
    //int s=strcmp(s1,s2);   //string compare all character
    //int s=strncmp(s1,s2,1); //string compare n character
    //int s=strcmpi(s1,s2); //สตริงทั้งสองเหมือนกัน" เนื่องจากฟังก์ชัน strcmpi() จะแปลงทั้ง "MunEen" และ "mUnEen" ให้เป็นตัวเล็กก่อนทำการเปรียบเทียบ
    int s=strnicmp(s1,s2,2); //string compare n character (ignore case)
    //printf("%d",s);
    if(s==0)
    {
        printf("These string are the same");
    }
    else
    {
        printf("Not fucking same!!");
    }
}