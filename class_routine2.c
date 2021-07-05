{
	system("cls");
	FILE* fp = fopen("Timetable.csv", "r");

	if (!fp)
		printf("Can't open file\n");

	else {
		
		char buffer[1024];

		int row = 0;
		int column = 0;

		while (fgets(buffer,1024, fp))
		{
			column = 0;


			char* value = strtok(buffer, ", ");

			while (value) 
			{
				
					if (column == 0) {
						printf("");
					}

					// Column 2
					if (column == 1) {
						printf("\t\t");
					}

					// Column 3
					if (column == 2) {
						printf("\t\t");
					}
					
					// Column 4
					if (column == 3) {
						printf("\t\t");
					}
					
					// Column 5
					if (column == 4) {
						printf("\t\t");
					}
					
					// Column 6
					if (column == 5) {
						printf("\t\t");
					}
					
					// Column 7
					if (column == 6) {
						printf("\t\t");
					}
					
					// Column 8
					if (column == 7) {
						printf("\t\t");
					}
					
					// Column 9
					if (column == 8) {
						printf("\t\t");
					}

					printf("%s", value);
					value = strtok(NULL, ", ");
					column++;
			}	
		}
		printf("\n");
		printf("Press 'b' to go back to the student section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='b')
			student();	
		fclose(fp); 
	}
}