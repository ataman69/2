 #include <iostream>
 #include <cstdlib>
 #include <cmath>
 
int main()
{
   int n,s = 4,F,fib=1,t=1,t2=1,c=2;
   std::cout<<"Factorial = ";
   std::cin>>n;
   long f=2; F = (3 * 4)/f;
   s = s*4; f*=c-1;
   for(int i=1;i<1000000;i++){
   for(; c<=n-1; c++,f*=c,s = s*4)
	{	
		fib = t + t2;
        t = t2 = fib;
		F = (fib*s)/f;
	}
   }
return 1;
}
