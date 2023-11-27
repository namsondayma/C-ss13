#include<stdio.h>
#include<string.h>
int main(){
//	char str[] = {'h','e','l','l','o'};
//	int size = sizeof(str) /sizeof(char);
//	for ( int i=0;i<size;i++){
//		printf("%c",str[i]); 
//	}
//	printf("truoc khi cap nhat: %s\n",str);
//	str[0]='K';
//	printf("sau khi cap nhat: %s",str); 
//    char randomString[] = "Special NULL";
//	int length = sizeof(randomString) / sizeof(char);
//	for(int i = 0; i< length;i++){
//		printf("ky tu %d: %c\n", i , randomString[i]);}
//	char sentence[12]="Hello world";
//	printf("%s\n",sentence);
//	printf("%s\n",&sentence[5]);
//	printf("%.4s\n",sentence);
//	char str[10];
//	printf("nhap mot chuoi ki tu ngau nhien:\n");
//	gets (str);
//	puts (str);
	char str1[100] = "Hello world";
	char str2[] = "Yello world";
	char str3[] = ", ";
	strcat(str1, str3, str2);
	puts(str1);
	 return 10;
} 
