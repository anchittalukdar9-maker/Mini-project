#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number of days: ");
    scanf("%d", &n);
    float not[n + 1];
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the loss or profit of day %d: ", i);
        scanf("%f", &not[i]);
    }
    int cou1 = 0, cou2 = 0;
    float pro[n + 1], los[n + 1];
    for(int j=1;j<=n;j++){
        if(not[j]>=0){
            pro[cou1]=not[j];
            cou1++;
        }else{
            los[cou2]=not[j];
            cou2++;
        }
    }
    float ps = 0, ls = 0;
    for (int k = 0; k < cou1; k++)
    {
        ps = ps + pro[k];
    }
    for (int l = 0; l < cou2; l++)
    {
        ls = ls + los[l];
    }
    ls=-ls;
    printf("Your total profit is: %.2f\n",ps);
    printf("Your total loss is: %.2f\n",ls);
    printf("Your net balance is: %.2f\n",ps-ls);
}
