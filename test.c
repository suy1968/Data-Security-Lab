#include<stdio.h>
#include<conio.h>
int main()
{
char message[100], ch;
int i, key;
printf("Enter a message to encrypt: ");
gets(message);
printf("Enter key: ");
scanf("%d", &key);
if (key >= 0)
	{
		for(i = 0; message[i] != '\0'; ++i){
        ch = message[i];
		if(ch >= 'a' && ch <= 'z'){
		ch = ch + key;
		if(ch > 'z'){
		ch = ch - 'z' + 'a' - 1;
		}
		message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
		ch = ch + key;
		if(ch > 'Z'){
		ch = ch - 'Z' + 'A' - 1;
		}
		message[i] = ch;
		}
		}
		printf("Cipher text obtained: %s", message);
		return 0;
	}
else
	{
		key = key*(-1);
		for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		if(ch >= 'a' && ch <= 'z'){
		ch = ch - key;
		if(ch < 'a'){
		ch = ch + 'z' - 'a' + 1;
		}
		message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
		ch = ch - key;
		if(ch < 'A'){
		ch = ch + 'Z' - 'A' + 1;
		}
		message[i] = ch;
		}
		}
		printf("Cipher text obtained:	 %s", message);
		return 0;
	}

}
