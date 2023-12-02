#pragma once
#include <stdio.h>

/**
* @brief ��������� ������� �� �����
* @param line_: ������ ���� �����������
* @param f_: ����
* @return ���-�� ��������� ��������
*/
unsigned int fgetline(char* line_, FILE* f_);

/** 
* @brief ������� ���-�� �������� � ������
* @param str_: ������
* @return ����� ������
*/
unsigned int my_strlen(const char* str_);

/** 
* @brief �������� ������ � ������ ���������� 
* @param toHere ���� ��������
* @param fromHere ������ ��������
* @return ���������� � ������� ����������� 
*/
char* my_strcpy(char* toHere, const char* fromHere);

/** 
* @brief ����������� � ����� ������ ������
* @param dest � ���� �����������
* @param src ��� �����������
* @return ���������� � ������� ��������� ������
*/
char* my_strcat(const char* dest, const char* src);

/**
* @brief ������������������ ��������� ����� (���������� "0", ���� ������ ����������, �������������, ���� ������ ������ ������, � �������������, ���� ������)
* @param ������ 1
* @param ������ 2
* @return ������� 0 ���� �����, 1 ���� ������ 1 > ������ 2, -1 ����� 
*/
int my_strcmp(const char* str1, const char* str2);

/**
* @brief ������� ������ ��������� ������ needle � haystack
* @param haystack �� ��� ����
* @param needle ��� ����
* @return ���������� ������ ������������ � ������� ������
*/
char* my_strstr(const char* haystack, const char* needle);