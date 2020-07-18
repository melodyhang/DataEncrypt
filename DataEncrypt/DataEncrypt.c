#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//实现字符串的加密与解密
//加密方式：将字符串中每个字符加上她在字符串中的位置和一个偏移量5
//例如：xuetang9中，第一个字符x在字符串中的位置为-，那么对应的密文是‘m’+0+5

#define KEY 5	//偏移量/密钥
/*
* 加密传入的字符串
* 参数1：要加密的字符串
* 返回值：加密后的字符串
*/

char* encrypt(char[]);
char* dencrypt(char[]);


char* encrypt(char password[])
{
	int i = 0;
	int count = strlen(password);
	for (; i < count; i++)
	{
		//将字符串中的每个字符加上它在字符串中的位置和一个偏移量5
		password[i] = password[i] + i + KEY;
	}
	return password;
}

char* dencrypt(char password[])
{
	int i = 0;
	int count = strlen(password);
	for (; i < count; i++)
	{
		//将字符串中的每个字符加上它在字符串中的位置和一个偏移量5
		password[i] = password[i] - i - KEY;
	}
	return password;
}


int main()
{
	char password[50] = "123456";
	encrypt(password);
	printf("加密后的字符串为：%s\n", password);
	dencrypt(password);
	printf("解密后的字符串为：%s", password);
	
	return 0;
}
