
void studentdetailsm()
{
	system("cls");
	struct variable sdm;
	topline();
	printf("SELECT YOUR MORNING SHIFT SECTION");
	bottomline();
	space();
	printf("FOR SECTION A1 TYPE A1");
	space();
	printf("FOR SECTION A2 TYPE A2");
	space();
	printf("FOR SECTION A3 TYPE A3");
	space();
	printf("FOR SECTION A4 TYPE A4");
	space();
	printf("FOR EXIT TYPE EXIT");
	space();
	scanf("%s", &sdm.name);
	system("cls");
	if (strcmp(sdm.name, "a1") == 0)

	{
		sdm.str = 'a';
	}

	if (strcmp(sdm.name, "a2") == 0)

	{
		sdm.str = 'b';
	}
	if (strcmp(sdm.name, "a3") == 0)

	{
		sdm.str = 'c';
	}

	if (strcmp(sdm.name, "a4") == 0)

	{
		sdm.str = 'd';
	}
	if (strcmp(sdm.name, "exit") == 0)

	{
		sdm.str = 'e';
	}
	switch (sdm.str)
	{
	case 'a':
		system("studentdatama1.docx");
		studentdetailsm();
		break;
	case 'b':
		system("studentdatama2.docx");
		studentdetailsm();
		break;
	case 'c':
		system("studentdatama3.docx");
		studentdetailsm();
		break;
	case 'd':
		system("studentdatama4.docx");
		studentdetailsm();
		break;
	case 'e':
		system("exit");
		break;
	default:

		topline();
		printf("SELECT YOUR MORNING SHIFT SECTION");
		bottomline();
		space();
		printf("retry");
		space();
		printf("exit");
		space();
		scanf("%s", &sdm.roll);
		if (strcmp(sdm.roll, "retry") == 0)
		{
			sdm.str1 = 'a';
		}

		if (strcmp(sdm.roll, "exit") == 0)
		{
			sdm.str1 = 'b';
		}
		switch (sdm.str1)
		{
		case 'a':
			space();
			studentdetailsm();
			break;
		case 'b':
			space();
			system("exit");
			break;
		}
	}
}

void studentdetailse()
{
	system("cls");
	struct variable sb;
	topline();
	printf("SELECT YOUR EVENING SHIFT SECTION");
	bottomline();
	space();
	printf("FOR SECTION A1 SELCTION TYPE A1");
	space();
	printf("FOR SECTION A2 SELCTION TYPE A2");
	space();
	printf("FOR SECTION A3 SELCTION TYPE A3");
	space();
	printf("FOR SECTION A4 SELCTION TYPE A4");
	space();
	printf("FOR EXIT TYPE EXIT");
	space();
	scanf("%s", &sb.name);
	system("cls");
	if (strcmp(sb.name, "a1") == 0)

	{
		sb.str = 'a';
	}

	if (strcmp(sb.name, "a2") == 0)

	{
		sb.str = 'b';
	}
	if (strcmp(sb.name, "a3") == 0)

	{
		sb.str = 'c';
	}

	if (strcmp(sb.name, "a4") == 0)

	{
		sb.str = 'd';
	}
	if (strcmp(sb.name, "exit") == 0)

	{
		sb.str = 'e';
	}
	switch (sb.str)
	{
	case 'a':
		space();
		printf("a1");
		break;
	case 'b':
		space();
		printf("a2");
		break;
	case 'c':
		space();
		printf("a3");
		break;
	case 'd':
		space();
		printf("a4");
		break;
	case 'e':
		system("exit");
		break;
	default:

		topline();
		printf("SELECT YOUR EVENING SHIFT SECTION");
		bottomline();
		space();
		printf("retry");
		space();
		printf("exit");
		space();
		scanf("%s", &sb.roll);
		if (strcmp(sb.roll, "retry") == 0)
		{
			sb.str1 = 'a';
		}

		if (strcmp(sb.roll, "exit") == 0)
		{
			sb.str1 = 'b';
		}
		switch (sb.str1)
		{
		case 'a':
			space();
			studentdetailse();
			break;
		case 'b':
			space();
			system("exit");
			break;
		}
	}
}
