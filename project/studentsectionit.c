itshift()
{
	system("cls");
	struct variable sl;
	topline();
	printf("SELECT YOUR SHIFT");
	bottomline();
	space();
	printf("FOR MORNING SHIFT SELCTION TYPE MORNING");
	space();
	printf("FOR EVENING SHIFT SELCTION TYPE EVEING");
	space();
	printf("FOR EXIT TYPE EXIT");
	space();
	scanf("%s",&sl.name);
	system("cls");
		if(strcmp(sl.name,"morning") ==0)

		{
		sl.str='a';
		}

		if(strcmp(sl.name,"evening")== 0)

		{
		sl.str='b';
		}
		if(strcmp(sl.name,"exit")== 0)

		{
		sl.str='c';
		}
		switch(sl.str)
		{
		case 'a':
		sectionm();
		break;
		case 'b':
		sectione();
		break;
		case 'c':
		system("exit");
		break;
		default:
			
			topline();
			printf("SELECT YOUR SHIFT");
			bottomline();
			space();
			printf("retry");
			space();
			printf("exit");
			space();
			scanf("%s",&sl.roll);
			if(strcmp(sl.roll,"retry")==0)
			{
			sl.str1='a';
			}
		
			if(strcmp(sl.roll,"exit")==0)
			{
			sl.str1='b';
			}
			switch(sl.str1)
			{
			case 'a':
			space();
			itshift();
			break;
			case 'b':
			space();
			system("exit");
			break;
			}
		}

}
sectionm()
{
	system("cls");
	struct variable sm;
	topline();
	printf("SELECT YOUR OPTION");
	bottomline();
	space();
	printf("FOR STUDENT DETAILS SELCTION TYPE DETAILS");
	space();
	printf("FOR SYLLABUS SHIFT SELCTION TYPE SYLLABUS");
	space();
	printf("FOR ROUTINE SELCTION TYPE ROUTINE");
	space();
	printf("FOR STUDY METRAILS SELCTION TYPE METRAILS");
	space();
	printf("FOR EXIT TYPE EXIT");
	space();
	scanf("%s",&sm.name);
	system("cls");
		if(strcmp(sm.name,"details") ==0)

		{
		sm.str='a';
		}

		if(strcmp(sm.name,"syllabus")== 0)

		{
		sm.str='b';
		}
		if(strcmp(sm.name,"routine")== 0)

		{
		sm.str='c';
		}
		if(strcmp(sm.name,"metrails") ==0)

		{
		sm.str='d';
		}

		if(strcmp(sm.name,"exit")== 0)

		{
		sm.str='e';
		}

		switch(sm.str)
		{
		case 'a':
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
				scanf("%s",&sdm.name);
				system("cls");

					if(strcmp(sdm.name,"a1") ==0)

					{
					sdm.str='a';
					}

					if(strcmp(sdm.name,"a2")==0)

					{
					sdm.str='b';
					}
					if(strcmp(sdm.name,"a3")==0)

					{
					sdm.str='c';
					}

					if(strcmp(sdm.name,"a4")==0)

					{
					sdm.str='d';
					}
					if(strcmp(sdm.name,"exit")==0)

					{
					sdm.str='e';
					}
					switch(sdm.str)
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
						scanf("%s",&sdm.roll);
						if(strcmp(sdm.roll,"retry")==0)
						{
						sdm.str1='a';
						}
		
						if(strcmp(sdm.roll,"exit")==0)
						{
						sdm.str1='b';
						}
						switch(sdm.str1)
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
		sectionm();
		break;
		case 'b':
		system("syllabus.pdf");
		sectionm();
		break;
		case 'c':
		system("routine.jpeg");
		sectionm();
		break;
		case 'd':
		space();
		printf("metrails");
		
		break;
		case 'e':
		system("exit");
		break;
		default:
			
			topline();
			printf("SELECT YOUR OPTION");
			bottomline();
			space();
			printf("retry");
			space();
			printf("exit");
			space();
			scanf("%s",&sm.roll);
			if(strcmp(sm.roll,"retry")==0)
			{
			sm.str1='a';
			}
		
			if(strcmp(sm.roll,"exit")==0)
			{
			sm.str1='b';
			}
			switch(sm.str1)
			{
			case 'a':
			space();
			sectionm();
			break;
			case 'b':
			space();
			system("exit");
			break;
			}
		}

}


sectione()
{
	system("cls");
	struct variable se;
	topline();
	printf("SELECT YOUR OPTION");
	bottomline();
	space();
	printf("FOR STUDENT DETAILS SELCTION TYPE DETAILS");
	space();
	printf("FOR SYLLABUS SHIFT SELCTION TYPE SYLLABUS");
	space();
	printf("FOR ROUTINE SELCTION TYPE ROUTINE");
	space();
	printf("FOR STUDY METRAILS SELCTION TYPE METRAILS");
	space();
	printf("FOR EXIT TYPE EXIT");
	space();
	scanf("%s",&se.name);
	system("cls");
		if(strcmp(se.name,"details") ==0)

		{
		se.str='a';
		}

		if(strcmp(se.name,"syllabus")== 0)

		{
		se.str='b';
		}
		if(strcmp(se.name,"routine")== 0)

		{
		se.str='c';
		}
		if(strcmp(se.name,"metrails") ==0)

		{
		se.str='d';
		}

		if(strcmp(se.name,"exit")== 0)

		{
		se.str='e';
		}

		switch(se.str)
		{
		case 'a':
		system("cls");
				struct variable sde;
				topline();
				printf("SELECT YOUR EVENING SHIFT SECTION");
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
				scanf("%s",&sde.name);
				system("cls");

					if(strcmp(sde.name,"a1") ==0)

					{
					sde.str='a';
					}

					if(strcmp(sde.name,"a2")==0)

					{
					sde.str='b';
					}
					if(strcmp(sde.name,"a3")==0)

					{
					sde.str='c';
					}

					if(strcmp(sde.name,"a4")==0)

					{
					sde.str='d';
					}
					if(strcmp(sde.name,"exit")==0)

					{
					sde.str='e';
					}
					switch(sde.str)
					{
					case 'a':
					system("studentdataea1.docx");
					studentdetailse();
					break;
					case 'b':
					system("studentdataea2.docx");
					studentdetailse();
					break;
					case 'c':
					system("studentdataea3.docx");
					studentdetailse();
					break;
					case 'd':
					system("studentdataea4.docx");
					studentdetailse();
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
						scanf("%s",&sde.roll);
						if(strcmp(sde.roll,"retry")==0)
						{
						sde.str1='a';
						}
		
						if(strcmp(sde.roll,"exit")==0)
						{
						sde.str1='b';
						}
						switch(sde.str1)
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
		sectione();
		break;
		space();
		printf("syllabus");
		break;
		case 'c':
		space();
		printf("routine");
		break;
		case 'd':
		space();
		printf("metrails");
		
		break;
		case 'e':
		system("exit");
		break;
		default:
			
			topline();
			printf("SELECT YOUR OPTION");
			bottomline();
			space();
			printf("retry");
			space();
			printf("exit");
			space();
			scanf("%s",&se.roll);
			if(strcmp(se.roll,"retry")==0)
			{
			se.str1='a';
			}
		
			if(strcmp(se.roll,"exit")==0)
			{
			se.str1='b';
			}
			switch(se.str1)
			{
			case 'a':
			space();
			sectionm();
			break;
			case 'b':
			space();
			system("exit");
			break;
			}
		}

}
studentdetailsm()
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
	scanf("%s",&sdm.name);
	system("cls");
		if(strcmp(sdm.name,"a1") ==0)

		{
		sdm.str='a';
		}

		if(strcmp(sdm.name,"a2")==0)

		{
		sdm.str='b';
		}
		if(strcmp(sdm.name,"a3")==0)

		{
		sdm.str='c';
		}

		if(strcmp(sdm.name,"a4")==0)

		{
		sdm.str='d';
		}
		if(strcmp(sdm.name,"exit")==0)

		{
		sdm.str='e';
		}
		switch(sdm.str)
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
			scanf("%s",&sdm.roll);
			if(strcmp(sdm.roll,"retry")==0)
			{
			sdm.str1='a';
			}
		
			if(strcmp(sdm.roll,"exit")==0)
			{
			sdm.str1='b';
			}
			switch(sdm.str1)
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

studentdetailse()
{
	struct variable sde;
				topline();
				printf("SELECT YOUR EVENING SHIFT SECTION");
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
				scanf("%s",&sde.name);
				system("cls");

					if(strcmp(sde.name,"a1") ==0)

					{
					sde.str='a';
					}

					if(strcmp(sde.name,"a2")==0)

					{
					sde.str='b';
					}
					if(strcmp(sde.name,"a3")==0)

					{
					sde.str='c';
					}

					if(strcmp(sde.name,"a4")==0)

					{
					sde.str='d';
					}
					if(strcmp(sde.name,"exit")==0)

					{
					sde.str='e';
					}
					switch(sde.str)
					{
					case 'a':
					system("studentdataea1.docx");
					studentdetailse();
					break;
					case 'b':
					system("studentdataea2.docx");
					studentdetailse();
					break;
					case 'c':
					system("studentdataea3.docx");
					studentdetailse();
					break;
					case 'd':
					system("studentdataea4.docx");
					studentdetailse();
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
						scanf("%s",&sde.roll);
						if(strcmp(sde.roll,"retry")==0)
						{
						sde.str1='a';
						}
		
						if(strcmp(sde.roll,"exit")==0)
						{
						sde.str1='b';
						}
						switch(sde.str1)
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


