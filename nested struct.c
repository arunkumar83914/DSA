struct student
{
    char name[20];
    int rollno;
    float per;
}a[10];
main()
{
    int i,j;
    for(i=0;i<10;i++)
    printf("enter 10 students name,rollno,percentage\n");
    for(i=0;i<10;i++)
    scanf("%s%d%f",a[i].name,&a[i].rollno,&a[i].per);
    for(i=0;i<10;i++)
    for(j=0,j<10-i-1;j++)
    if(a[j].per>a[j+i].per)
    {
    struct student t;
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
    }
    printf("Record acoording to merit\n");
    printf("Name\trollno\tpercentage\n");
    for(i=0;i<10;i++)
    printf("%s\t%d\t%f\n",a[i].name,a[i].rollno,a[i].per);
}
