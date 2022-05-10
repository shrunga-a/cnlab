BEGIN {
count=0
sent1=0;
sent2=0;
receved=0;
}

{
if($1=="d")
{
count++;
}
else if($1 =="+" && $3==1 && $4==2)
{
sent1++;
}
else if($1 =="+" && $3==0 && $4==2)
{
sent2++;
}
else if($1 =="+" && $3==2 && $4==2)
{
received++;
}
}
END{
printf("\nPackects sent from source node 1 is :%d",sent1);
printf("\nPackects sent from source node 0 is :%d",sent2);
printf("\nPackects received :%d",received;sent=sent1+sent2;
printf("\nPackects Delivery Ratio:%2f\n",(received/sent)*100; 

