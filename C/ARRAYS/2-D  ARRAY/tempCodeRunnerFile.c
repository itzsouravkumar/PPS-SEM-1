int n, m;
    printf("Enter the no of students: ");
    scanf("%d", &n);
    printf("Enter the no of subjects: ");
    scanf("%d", &m);
    int students[n];
    int subjects[m];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the roll no of student: ");
        scanf("%d", &students[i]);
        for (int j = 0; j < m; j++)
        {
            printf("Enter the marks of student: ");
            scanf("%d", &subjects[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("The Roll no of Stdents & marks are: %d %d\n", students[i],subjects[j]);
        }
    }
    printf("\n");