//Playfair is one of the popular cryptographic software security algorithms. This technique encrypts pairs of letters at a time and
//generates more secure encrypted text compare to  the simple substitution cipher like Caesar.
//https://cprogrampracticals.blogspot.com/2017/02/playfair-encryption.html?m=0
/*Assumptions:
Assume key matrix is given to us.
Read plain text(2 characters) from user.
This program demonstrate four rules of the Playfair encryption algorithm.
This program will process only 2 characters input.
You may extend to process n characters by repeating given logic.
Add suitable exception for completing this program */



#include<stdio.h>
int main(){

  char arr[5][5]={"MONAR","CHYBD","EFGIK","LPQST","UVWXZ"};
  char pt[10];

  int i, j, r1=0, r2=0, c1=0, c2=0;
  printf("Playfair Keymatrix\n==================\n");
  for(i=0; i<5; i++)
  {
    for(j=0; j<5; j++)
    printf("%c ", arr[i][j]);
    printf("\n");
  }

  printf("Enter your plain text:");
  scanf("%s",pt);
  printf("Your plain text = %s", pt);

  for(i=0; i<5; i++)
  {
    for(j=0; j<5; j++)
    {
       if(arr[i][j] == pt[0])
       {
         r1=i; c1=j;
       }
       if(arr[i][j] == pt[1])
       {
         r2=i; c2=j;
       }
    }
  }
  if(r1==r2) //when both characters in same row
  {
    if(c2==4) //for char in last column
       printf("Ciphertext = %c%c \n", arr[r1][c1+1], arr[r2][0]);
    else
       printf("Ciphertext = %c%c \n", arr[r1][c1+1], arr[r2][c2+1]);
  }
  if(c1==c2)//when both characters in same column
  {
    if(r2==4) //for char in last row
       printf("Ciphertext = %c%c \n", arr[r1+1][c1], arr[0][c2]);
    else
       printf("Ciphertext = %c%c \n", arr[r1+1][c1], arr[r2+1][c2]);
  }
  //when characters are not in a same row and column
  if(r1 != r2 && c1 != c2)
  {
    printf("\nCiphertext = %c%c \n", arr[r1][c2], arr[r2][c1]);
  }
  return 0;
}
