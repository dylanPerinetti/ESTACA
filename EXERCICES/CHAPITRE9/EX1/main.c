#include "user.h"

int main(int argc, char const *argv[])
{
	User user[2];
	GetUser(&user[0]);
	GetUser(&user[1]);
	PrintUserTable(user);
	return 0;
}
