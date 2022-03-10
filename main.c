#include <stdio.h>
int main(void){

int n,i,shuma=0;
float mesatarja;

printf("Vendos n:");
scanf("%d",&n);

int notat[n];

printf("Shkruani nr e studenteve:");

for(i=0;i<n;i++)
{
    scanf("%d",&notat[i]);
    shuma += notat[i];
}
mesatarja =(float)shuma/n;

printf("Mesatarja eshte %0.2f\n",mesatarja);

printf("Notat kaluese:");
for(i=0;i<n;i++)
{
    if(notat[i]>4)
    {
        printf("\t%d",notat[i]);
    }
    
    
}

}
