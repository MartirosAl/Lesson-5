#include <stdio.h>

#include "str.h"

int main()
{
   char str1[100] = "123456789";
   char str2[] = "234";
   char str3[100] = {0};
   FILE* in;
   errno_t error = fopen_s(&in, "test.txt", "r");
   if (error)
   {
      perror("Test.txt");
      return 1;
   }


   //printf("%d %d \n", my_strlen(str1), my_strlen(str2));
   //printf("%s \n", my_strcpy(str1, str2)); 
   //printf("%s \n", my_strcat(str1, str2));
   //printf("%d \n", my_strcmp(str1, str2));
   //printf("%s \n", my_strstr(str1, str2));
   //printf("%d \n", fgetline(str3, fp));
   fclose(in);
   return 0;
}


// size_t strlen(const char *);	���������� ����� ������
// char *strcpy(char *toHere, const char *fromHere);	�������� ������ �� ������ ����� � ������
// char *strcat(char *dest, const char *src);	���������� ������ src � ����� dest
// int strcmp(const char *, const char *); ������������������ ��������� ����� (���������� "0", ���� ������ ����������, �������������, ���� ������ ������ ������, � �������������, ���� ������)
// char *strstr(const char *haystack, const char *needle);	������� ������ ��������� ������ needle � haystack