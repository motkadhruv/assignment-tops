//Q10.Write a program to concatenate the two strings using Operator Overloading


#include<iostream>
#include<string>

using namespace std;

//class to implement opratar overloding
//function for concatenating the string

class addstring{
	public:
//		class object of string
        char s1[25],s2[25];
//         parameterized constructor
     addstring(char str1[],char str2[])
     {
//     	initialize the string to class object

       strcpy(this->s1,str1);
       strcpy(this->s2,str2);
	    
	 }
	 
//	 overload operator + to concat the string

    void operator+()
    {
    	cout<<"\nconcatenation: "<<strcat(s1, s2);
	}
};

//driver code
int main()
{
//	declaring two strings
     
     char srt1[]="dhruv";
     char srt2[]="motka";
     
//     declaring and initializing the class
//    with above two string
      
      addstring a1(str1,str2);
      
//      call operator function
      +a1;
      return 0;
}
