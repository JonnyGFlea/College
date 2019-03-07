/*
JTSK-320112
Problem a6.p4.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a program which reads from the standard input a username and a password,
and prints a message on the screen for granting or denying access
depending on the fact if the user and the corresponding password are listed in a file
which is given as input to the program.

The program should repeatedly check the username and its password
introduced from the standard input until the word “exit” is introduced for the username.
It is assumed that the word “exit” is not contained in the input file.

Do not store the whole information (list of usernames and passwords) in the main memory or do
not read the whole information from the file for every request, but store only partial information
(e.g., the usernames) and use the functions ftell() and fseek() to read the rest of the needed
information.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct names{
  char name[50];
  int pos;
  struct names *next;
};

struct names *create_list(struct names *l, char *temp1, int pos);
struct names *create_list_from_File(FILE *fptr);
int CheckUsername(char *s, struct names *l, int *val);
int CheckPassword(FILE *fptr, struct names *l, char *passw, int *val);

int main(){
	//instantiate character array, a username and a password
	//also instantiate char array for the filename, a names struct
	//and a holder variable
  char user[50];
  char pass[50];
  char fileName[50];
  struct names *l = NULL;
  int holder = 0;

	//get user input
	scanf("%s", fileName);
	getchar();

  //fileName[strlen(fileName)-1] = '\0';
	//open file using name given by user
	FILE *fptr;
  fptr = fopen(fileName, "r");

	//if there is no file by that name
	if(fptr == NULL){
		//error and quit
		printf("ERROR reading the file\n");
		exit(1);
	}

  l = create_list_from_File(fptr);

  while(strcmp(user, "exit")!=0){
		scanf("%s", user);
		getchar();
    if(CheckUsername(user, l, &holder) == 1){
			scanf("%s", pass);
			getchar();
      if(CheckPassword(fptr ,l, pass, &holder) == 1){
      	printf("Access to user %s is granted.\n", user);
			}
      else{
      	printf("Access to user %s is denied.\n", user);
			}
    }
  }
  printf("Exiting ...\n");
  fclose(fptr);
  return 1;
}

// creating of list data
struct names *create_list(struct names *l, char *temp1, int pos){
  struct names *temp;
  temp=(struct names*)malloc(1*sizeof(struct names));
  strcpy(temp->name, temp1);
  temp->pos = pos;
  temp->next = l;

  return temp;
}

 // create list from file data
struct names * create_list_from_File(FILE *fptr){
  char ch;
  int holder = 0;
  int check = 0;
  int pos;
  struct names *l=NULL;

  char temp1[20];
  temp1[0] = '\0';

  while(1){
    if(check == 1){
    	break;
		}

    while((ch = fgetc(fptr)) != '\n'){
      temp1[holder]=ch;
      holder++;
    }
    temp1[holder]='\0';
    pos = ftell(fptr); // pos where to read for password
    l = create_list(l,temp1, pos);

    while((ch=fgetc(fptr)) != '\n'){
      if(ch == EOF){
        check = 1;
        break;
      }
    }
    holder = 0;
  }
  return l;

}

// check for username correctness
int CheckUsername(char *s, struct names *l, int *i){
  int flag=0;
  struct names *cursor=l;
  *i=0;

  while (cursor!=NULL){
    if(strcmp(cursor->name, s)==0){
      flag=1;
      break;
    }
    cursor=cursor->next;
    (*i)++;
  }
  return flag;
}

 // check for password
int CheckPassword(FILE *fptr, struct names *l, char *passw, int *val){
  struct names *cursor;
  cursor = l;
  int holder = 0;
  int flag = 0;
  char c;
  char temp[20];

  while(holder != *val){
    cursor = cursor->next;
    holder++;
  }

  holder = 0;
  fseek(fptr, cursor->pos, SEEK_SET);

  while((c = fgetc(fptr)) != '\n'){
    if(c == EOF)
    break;
    temp[holder] = c;
    holder++;
  }

  temp[holder] = '\0';
  if(strcmp(passw, temp) == 0){
    flag = 1;
  }
  return flag;
}
