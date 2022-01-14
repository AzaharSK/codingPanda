#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


//Basic string manipulation

int main()
{

        int idx=0;
        int len=0;

        string s1 ("ABCD EFGH IJKL MNOP");
        auto s2 = "HELLO WORLD";

        cout<<"SIZE:"<<s1.size()<<endl;

        // How much can we store without reallocating
        cout<<"CAPACITY :"<<s1.capacity()<<endl;


        // Concatenating strings
        auto s3 = s1 + "_" + s2;
        cout<<s3<<endl;

        // Copy the first 8 chars
        idx=0; len=8;
        string s4 (s1, idx, len);
        cout<<s4<<endl;


        // Copy 6 chars from the middle of the source
        idx=s1.size()/2 ; len=6;
        string s5(s1 , idx , len);
        cout<<s5<<endl;


        // Copy from middle to end
        idx=s1.size()/2 ; len=s1.size();
        string s6(s1, idx , len);
        cout<<s6<<endl;


        //idx=0; len=s1.end()-4
        string s7(s1.begin() , s1.end()-4);
        cout<<s7<<endl;

        //substring EFGH
        idx=5; len=4;
        string s8 (s1.substr(idx, len));
        cout<<s8<<endl;

        // Insert this string in  immediately
        // befores ABCD in s1

        s1.insert(0, "Thought I ");
        cout <<s1 << endl;

        // Make sure that there will be this much 50bytes space

        s1.reserve(50);
        s1.append("This is at the END");
        cout <<s1 << endl;

        idx=1;
        char ch = s1.at(idx);
        cout<<ch<<endl;

        for (auto i=0; i<=s1.length()-1; i++ )
                std::cout <<"s1["<<i<<"] = "<< s1[i]<<endl;

        s1[2] = 'y';

        for(auto ch : s1)
            cout<<ch<<endl;

        char f = s1.front();
        char b = s1.back();
        cout<<"Front:"<<f<<"    BACK:"<<b<<endl;

        cout<<s1.data();


        s1.erase(find(s1.begin(), s1.end(), ' ')); // erases first ' ';
        cout<< s1 << '\n';


        return 0;

    }


