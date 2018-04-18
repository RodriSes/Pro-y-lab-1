
int factorial(int n)
{
int resp;
if(n==1)
return 1;
resp=n* factorial(n-1);
return (resp);
}
