#include "vandd.c"
#include "studentsectionit.c"
void selectionpage()
{
	system("cls");
	struct variable sel;
	topline();
	printf("PLEASE CHOOSE THE OPTION");
	bottomline();
	space();
	printf("FOR STUDEDNT SECTION TYPE STUDENT");
	space();
	printf("FOR FACULTY SECTION TYPE FACULTY");
	space();
	scanf("%s", &sel.name);
	system("cls");
	if (strcmp(sel.name, "student") == 0)

	{
		sel.str = 'a';
	}

	if (strcmp(sel.name, "faculty") == 0)

	{
		sel.str = 'b';
	}
	switch (sel.str)
	{
	case 'a':
		branch();
		break;
	case 'b':
		space();
		printf("faculty");
		break;
	default:

		topline();
		printf("PLEASE CHOOSE THE OPTION");
		bottomline();
		space();
		printf("retry");
		space();
		printf("exit");
		space();
		scanf("%s", &sel.roll);
		if (strcmp(sel.roll, "retry") == 0)
		{
			sel.str1 = 'a';
		}

		if (strcmp(sel.roll, "exit") == 0)
		{
			sel.str1 = 'b';
		}
		switch (sel.str1)
		{
		case 'a':
			space();
			selectionpage();
			break;
		case 'b':
			space();
			system("exit");
			break;
		}
	}
}

void loginpage()
{
	system("cls");
	struct variable login;
	topline();
	printf("\t");
	printf("WELCOME LOGIN SECTION");
	bottomline();
	space();
	printf("ENTER YOUR NAME");
	space();
	scanf("%s", &login.name);
	system("cls");
	topline();
	printf("\t");
	printf("WELCOME LOGIN SECTION");
	bottomline();
	space();
	printf("ENTER YOUR ROLL");
	space();
	scanf("%s", &login.roll);
	system("cls");
	if (strcmp(login.name, "shankhan") == 0 && strcmp(login.roll, "a166369") == 0)

	{
		login.str = 'a';
	}

	if (strcmp(login.name, "obaidur") == 0 && strcmp(login.roll, "a166370") == 0)

	{
		login.str = 'b';
	}

	if (strcmp(login.name, "chinmay") == 0 && strcmp(login.roll, "a166371") == 0)

	{
		login.str = 'c';
	}
	if (strcmp(login.name, "lallankumar") == 0 && strcmp(login.roll, "a166372") == 0)

	{
		login.str = 'd';
	}
	if (strcmp(login.name, "minhaz") == 0 && strcmp(login.roll, "a166373") == 0)

	{
		login.str = 'e';
	}
	if (strcmp(login.name, "jaya") == 0 && strcmp(login.roll, "a166374") == 0)

	{
		login.str = 'f';
	}
	topline();
	printf("\t");
	printf("WELCOME LOGIN SECTION");
	bottomline();
	switch (login.str)
	{
	case 'a':
		space();
		selectionpage();
		break;
	case 'b':
		space();
		selectionpage();
		break;
	case 'c':
		space();
		selectionpage();
	case 'd':
		space();
		selectionpage();
		break;
	case 'e':
		space();
		selectionpage();
		break;
	case 'f':
		space();
		selectionpage();
		break;
	default:
		space();
		system("cls");
		topline();
		printf("WELCOME LOGIN SECTION");
		bottomline();
		space();
		printf("retry");
		space();
		printf("exit");
		space();
		scanf("%s", &login.roll);
		if (strcmp(login.roll, "retry") == 0)
		{
			login.str1 = 'a';
		}

		if (strcmp(login.roll, "exit") == 0)
		{
			login.str1 = 'b';
		}
		switch (login.str1)
		{
		case 'a':
			space();
			loginpage();
			break;
		case 'b':
			space();
			system("exit");
			break;
		}
	}
}
void mainmenu()

{
	system("cls");
	topline();
	printf("SELECT WHAT YOU WANT");
	bottomline();
	space();
	printf("ABOUT THE PROJJECT");
	space();
	printf("PROJECT");
	struct variable MAIN;
	space();
	scanf("%s", &MAIN.name);
	if (strcmp(MAIN.name, "about") == 0)
	{
		MAIN.str = 'a';
	}

	if (strcmp(MAIN.name, "project") == 0)
	{
		MAIN.str = 'b';
	}

	system("cls");
	switch (MAIN.str)
	{
	case 'a':
		space();
		system("gniot.pptx");
		mainmenu();
		break;
	case 'b':
		space();
		loginpage();
		break;
	default:
		topline();
		printf("SELECT WHAT YOU WANT");
		bottomline();
		space();
		printf("retry");
		space();
		printf("exit");
		space();
		scanf("%s", &MAIN.roll);
		if (strcmp(MAIN.roll, "retry") == 0)
		{
			MAIN.str1 = 'a';
		}

		if (strcmp(MAIN.roll, "exit") == 0)
		{
			MAIN.str1 = 'b';
		}
		switch (MAIN.str1)
		{
		case 'a':
			space();
			mainmenu();
			break;
		case 'b':
			space();
			system("exit");
			break;
		}
	}
}

void branch()
{
	system("cls");
	struct variable br;
	topline();
	printf("SELECT YOUR BRANCH");
	bottomline();
	space();
	printf("FOR IT BRANCH TYPE IT");
	space();
	printf("FOR CSE BRANCH TYPE CSE");
	space();
	printf("FOR EC BRANCH TYPE EC");
	space();
	printf("FOR CSE BRANCH TYPE CIVIL");
	space();
	printf("FOR MECHANICAL BRANCH TYPE ME");
	space();
	printf("FOR EXIT TYPE EXIT");
	space();
	scanf("%s", &br.name);
	system("cls");
	if (strcmp(br.name, "it") == 0)

	{
		br.str = 'a';
	}

	if (strcmp(br.name, "cse") == 0)

	{
		br.str = 'b';
	}
	if (strcmp(br.name, "ec") == 0)

	{
		br.str = 'c';
	}

	if (strcmp(br.name, "civil") == 0)

	{
		br.str = 'd';
	}
	if (strcmp(br.name, "me") == 0)

	{
		br.str = 'e';
	}
	if (strcmp(br.name, "exit") == 0)

	{
		br.str = 'f';
	}
	switch (br.str)
	{
	case 'a':
		itshift();
		break;
	case 'b':
		space();
		printf("cse");
		break;
	case 'c':
		space();
		printf("ec");
		break;
	case 'd':
		space();
		printf("civil");
		break;
	case 'e':
		space();
		printf("me");
		break;
	case 'f':
		system("exit");
		break;
	default:

		system("cls");
		topline();
		printf("SELECT YOUR BRANCH");
		bottomline();
		space();
		printf("retry");
		space();
		printf("exit");
		space();
		scanf("%s", &br.roll);
		if (strcmp(br.roll, "retry") == 0)
		{
			br.str1 = 'a';
		}

		if (strcmp(br.roll, "exit") == 0)
		{
			br.str1 = 'b';
		}
		switch (br.str1)
		{
		case 'a':
			space();
			branch();
			break;
		case 'b':
			space();
			system("exit");
			break;
		}
	}
}

int main()
{
	system("title ALL ABOUT INSTITUTE");
	mainmenu();
	return 0;
}