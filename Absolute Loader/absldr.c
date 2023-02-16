#include<stdio.h>
#include<string.h>
char input[10],label[10],ch1;
int start,end,address,taddr,length=0,w=0,i=0,count=0;
FILE *fp1,*fp2;
void check();
void main()
{
	fp1=fopen("input.txt","r");
	fp2=fopen("output.txt","w");
	printf("ABSOLUTE LOADER\n");
	fprintf(fp2,"\n-------------------------\n");
	fprintf(fp2,"MEMORY ADDRESS\t\t\tCONTENTS\n");
	fprintf(fp2,"\n-------------------------\n");
	fscanf(fp1,"%s",input);
	while(strcmp(input,"E")!=0)
	{
		if (strcmp(input,"H")==0)
		{
			fscanf(fp1,"%s%x%x%s",label,&start,&end,input);
			address=start;
		}
		else if(strcmp(input,"T")==0)
		{
			fscanf(fp1,"%x%x%s",&taddr,&length,input);
			if(w==0)
			{
				w=1;
			}	
			while(address!=taddr)
			{
				address++;
				fprintf(fp2,"XX");
				count++;
				if(count==4)
				{
					i++;
					fprintf(fp2," ");
					if(i==4)
					{
						i=0;
						fprintf(fp2,"\n\n%x\t\t",address);
					}
					count=0;
				}
			}
			if(taddr==start)
			{
				fprintf(fp2,"\n\n%x\t\t",taddr);
			}
			fprintf(fp2,"%c%c",input[0],input[1]);
			check();
			fprintf(fp2,"%c%c",input[2],input[3]);
			check();
			fprintf(fp2,"%c%c",input[4],input[5]);
			check();
			fscanf(fp1,"%s",input);
		}
		else
		{
			fprintf(fp2,"%c%c",input[0],input[1]);
			check();
			fprintf(fp2,"%c%c",input[2],input[3]);
			check();
			fprintf(fp2,"%c%c",input[4],input[5]);
			check();
			fscanf(fp1,"%s",input);
		}
	}
	fprintf(fp2,"\n------------------------------------\n");
	fclose(fp1);
	fclose(fp2);
	printf("Contents of ouput file:\n");
	fp1=fopen("output.txt","r");
	ch1=fgetc(fp1);
	while(ch1!=EOF)
	{
		printf("%c",ch1);
		ch1=fgetc(fp1);
	}
	fclose(fp1);
}
void check()
{
	count++;
	address++;
	taddr++;
	if(count==4)
	{
		fprintf(fp2," ");
		i++;
		if(i==4)
		{
			i=0;
			fprintf(fp2,"\n\n%x\t\t",address);
		}
		count=0;
	}
}
