#include<stdio.h>
void main()
{
  int incoming,outgoing,buffersize,n,drop,result,store=0;
  printf("Enter number of packets");
  scanf("%d",&n);
  printf("Enter a buffer size");
  scanf("%d",&buffersize);
  printf("Enter a incoming value ");
  scanf("%d",&incoming);
  if(incoming<=(buffersize-store))
  {
      store+=incoming;
      printf("Enter a store value");
      scanf("%d",&store);
  }
 else
  {
       printf("dropped pocket %d", incoming-(buffersize-store));
       store=buffersize;
  }
store=store-outgoing;
n--;
 }
}      
