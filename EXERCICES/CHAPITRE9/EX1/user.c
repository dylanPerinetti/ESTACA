#include "user.h"


void GetLogIn(char* _login)
{
	system(CLEAR_TERMINAL);
	printf("Enter your login\n-->");
	scanf("%s",_login);
}
/*-------------------------------------------------------------*/

void GetPassWord(char* _password)
{
	system(CLEAR_TERMINAL);
	printf("Enter your Password\n-->");
	scanf("%s",_password);
}

/*-------------------------------------------------------------*/

Entity GetEntity()
{
	int _user_choice;
	do{
		system(CLEAR_TERMINAL);
		printf("Selcte Your Entity\n1.[AF]\n2.[EADS]\n3.[SAIPEM]\n4.[CNRS]\n-->");
		scanf("%d",&_user_choice);
	}while(_user_choice < AF+1 | _user_choice > CNRS+1 );
	return _user_choice - 1;
}

/*-------------------------------------------------------------*/

Date GetDateCreation()
{
	Date _date;
	system(CLEAR_TERMINAL);
	printf("Enter the creation day (DD MM YY):\n-->");
	scanf("%u",&(_date.DD));
	printf("Enter the creation month (MM YY):\n-->");
	scanf("%u",&(_date.MM));
	printf("Enter the creation years (YY):\n-->");
	scanf("%u",&(_date.YY));
	
	return _date;
}

/*-------------------------------------------------------------*/

void GetUser(User *_user)
{
	GetLogIn(_user->login);
	GetPassWord(_user->password);
	_user->entity = GetEntity();
	_user->date = GetDateCreation();
}

/*-------------------------------------------------------------*/

void PrintUserTable(const User* _user)
{
	system(CLEAR_TERMINAL);
	printf("\n|---------------------------------------------------------------|");
	printf("\n| Login          Password                 Entity          Date  |");
	printf("\n|---------------------------------------------------------------|");
	for (unsigned char _i = 0; _i < USER_NUMBER; ++_i)
	{
		printf("\n| %s             %s                   %u\t       %u/%u/%u\t|",_user[_i].login,_user[_i].password,_user[_i].entity,_user[_i].date.DD,_user[_i].date.MM,_user[_i].date.YY);
	}
}

/*-------------------------------------------------------------*/

void PrintUserEntity();

/*-------------------------------------------------------------*/

void PrintUserDateCreation();

/*-------------------------------------------------------------*/

void PrintDateFilter(User _user, Date _date_min, Date _date_max);

/*-------------------------------------------------------------*/

void PrintEntityFilter(User _user, Entity _user_entity);
