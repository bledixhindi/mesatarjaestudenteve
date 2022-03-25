#include <stdio.h>

int main()
{
    int i,j,rows,colon,v[10][10];
	float Sum;
	int c;
	int max;
	int min;

    printf("Vendos i,j:");
    scanf("%d %d",&i,&j);

        printf("Vendos vendos numrat: \n");
    for(rows=0;rows<i;rows++)
    {
               for(colon=0;colon<j;colon++)
               {
                   printf("Vendos vleren ne matricat v[%d][%d]:",rows,colon);
                   scanf("%d",&v[rows][colon]);
               }
    }

     printf("Matrica eshte:\n");
    for(rows = 0; rows < i; rows++)
    {
            for(colon=0;colon<j;colon++)
        {
            printf("%d\t",v[rows][colon]);
        }
        printf("\n");
    }

    for(rows = 0; rows < i; rows++)
    {
            Sum=0;
            for(colon=0;colon<j;colon++)
            {
                Sum=Sum + v[rows][colon];
            }
        printf("Mesatrja e cdo sudenti eshte :  %0.2f \n", Sum/j );

    }

    for(rows = 0; rows < j; rows++)
    {
            c=0;
            for(colon=0;colon<i;colon++)
            {
                c=c + v[colon][rows];
                if(v[colon][rows]>max)
				{
					max=v[colon][rows];

				}
				if(v[colon][rows]<min)

				{
					min=v[colon][rows];
				}
            }
        printf("Nota per cdo kuic :  %0.2f \n", (float)c/i);

    }
             printf("Max eshte :  %d \n", max);
             printf("Min eshte :  %d \n", min);

     return 0;

}
