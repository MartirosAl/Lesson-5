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


// size_t strlen(const char *);	возвращает длину строки
// char *strcpy(char *toHere, const char *fromHere);	копирует строку из одного места в другое
// char *strcat(char *dest, const char *src);	дописывает строку src в конец dest
// int strcmp(const char *, const char *); лексикографическое сравнение строк (возвращает "0", если строки одинаковые, положительное, если первая строка больше, и отрицательное, если меньше)
// char *strstr(const char *haystack, const char *needle);	находит первое вхождение строки needle в haystack