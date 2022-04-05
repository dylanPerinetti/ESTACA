#ifndef __USER_H__
#define __USER_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USER_NUMBER 2
#define BUFFER_SIZE 25
#define CLEAR_TERMINAL "clear" // Remplacer "clear" par "cls" Pour les OS Windows
/*--------- Type et Structure ---------*/

typedef enum
{
	AF,
	EADS,
	SAIPEM,
	CNRS
}Entity;

typedef struct
{
	unsigned int DD;// DAY
	unsigned int MM;// MONTH
	unsigned int YY;// YEARS
}Date;
typedef struct
{
	char login[USER_NUMBER];
	char password[USER_NUMBER];
	Entity entity;
	Date date;
}User;
/*------------- Prototype -------------*/
void GetLogIn(char* _login);
void GetPassWord(char* _password);
Entity GetEntity();
Date GetDateCreation();
void GetUser(User* _user);

void PrintUserTable(const User* _user);
void PrintUserEntity();
void PrintUserDateCreation();

void PrintDateFilter(User _user, Date _date_min, Date _date_max);
void PrintEntityFilter(User _user, Entity _user_entity);
#endif