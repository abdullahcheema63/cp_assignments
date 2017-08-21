#include "String.h"

int main()
{
	String s1(" abdullah");
	String s2("hello");
	String* s3;
	int ntok=0;
	String s4("abdulh ");
	//s2.append(s1);
	//s2.display();
	//cout<<endl;
	//s2.split(' ',s3,ntok);
	//s3[0].display();
	cout<<s1.isanagram(s4)<<" "<<s4.isanagram(s1);
	return 0;
}
