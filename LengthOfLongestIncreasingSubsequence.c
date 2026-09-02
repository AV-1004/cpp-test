#include<stdio.h>
int main()
{int maxLenght=1,currentLength,current,previous,maxLength=1;
printf("Enter the numbers.... to stop enter -1\n");
scanf("%d",&previous);
while(1)
{
    scanf("%d",&current);
    if(current ==1)
    {break;}
if(current>previous)
{currentLength++;
}else{
    currentLength=1;

}
if(currentLength>maxLength)
{maxLength=currentLength;
}
previous=current;
}
printf("The length of the longest increseaing subsequence order is %d",maxLength);

return 0;
}