#include<iostream>
using namespace std;
char fun( )
{
char ch ;
printf ( "\nEnter any alphabet " ) ;
scanf ( "%c", &ch ) ;
if ( ch >= 65 && ch <= 90 )
return ( ch ) ;
else
return ( ch + 32 ) ;
}
int main(){
	char x=fun();
cout<<x;
}

