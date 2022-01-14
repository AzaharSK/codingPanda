#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void basic_string();

//Count occurence of a character in a string
size_t occurence_of_char(string s , char ch)
{
    size_t count = std::count(s.begin(), s.end(), ch);
    return count;
}

//Remove all occurence of a character in a string
string removeAllOccurence_of_char(string s , char ch)
{
    s.erase(remove (s.begin(), s.end(), ch), s.end() );
    return s;

}

//check if another substring/word is in the string
    bool is_word_in(string sentence, string word) {
        return (sentence.find(word)!=string::npos);
    }

 //Return position where word/substring found first time
 int word_FirstFoundAt(string sentence, string word) {

            string::size_type pos = 0;
            if((pos=sentence.find(word, pos))!=string::npos)
                    return pos;
            else
                return -999;
    }


 // Count occurence of a word/substring in a string
 size_t occurence_of_word (string sentence , string word) {

      size_t occurrences = 0;
      string::size_type pos = 0;


      while ((pos = sentence.find(word, pos )) != string::npos) {
              ++ occurrences;

              cout<<word<<" : Matching INDEX: "<<pos <<endl;

              pos += word.length();
       }

      return occurrences;
 }

 //Reverse a string
string reverseString(string s) {
        reverse(s.begin(), s.end());
        return s;
    }

//Reverse a string
string reverse(string s) {
    string rev= string(s.rbegin(),s.rend());
    return rev;
}


//tolower - Convert uppercase letter to lowercase (function )
string to_lower(string s) {
        std::transform(s.begin(), s.end(), s.begin(), (int(*)(int)) std::tolower);
        return s;
}

//toupper - Convert lowercase letter to uppercase (function )
string to_upper(string s) {
        std::transform(s.begin(), s.end(), s.begin(), (int(*)(int)) std::toupper);
        return s;
    }


//replace one string inside another
string replace(string s, string what, string with) {
    size_t start_pos = 0;
    start_pos = s.find(what, start_pos);
    if (start_pos != string::npos) {
        s.replace(start_pos, what.length(), with);
    }
    return s;
}



//replace all occurence of a string inside another
string replace_all(string s, string from, string to) {
    if(!from.empty()) {
        size_t start_pos = 0;
        while ((start_pos = s.find(from, start_pos)) != string::npos) {
            s.replace(start_pos, from.length(), to);
            // In case 'to' contains 'from', like replacing 'x' with 'yx'
            start_pos += to.length();
        }
    }
    return s;
}


//Sort string of characters
//Input : bbccdefbbaa
//Output : aabbbbccdef

string sortString(string &s)
{
   sort(s.begin(), s.end());
   return s;
}


//Sorting contact List (Alphabetically)

void sort_List_of_strings(list<string> &list)
{
    list.sort();
}

//Return longest word/substring in string
string LongestWord(string &str){

    string workingWord = "";
    string maxWord = "";

    for (int i = 0; i < str.size(); i++){
        if(str[i] != ' ')
            workingWord += str[i];
        else
            workingWord = "";

        if (workingWord.size() > maxWord.size())
            maxWord = workingWord;
    }

   return maxWord;
}



int main()
{


    string src="India is BEST is all sentence";

    cout<<occurence_of_char(src, 'i') <<endl;  //3
    cout<<occurence_of_char(src, 'a') <<endl;  //2
    cout<<occurence_of_char(src, 'B') <<endl;  //1


    if(is_word_in(src, "is"))
        cout<<"is :"<<occurence_of_word(src, "is")<<endl;


    string sentence = "FooBarFooBarFoo";

    if(is_word_in(sentence, "Foo"))
        cout<<"Foo: "<<occurence_of_word(sentence, "Foo");

    cout<<"WORD AT: "<<word_FirstFoundAt(sentence,"Foo");
     cout<<"WORD AT: "<<word_FirstFoundAt(src,"is");


     list<string> mylist{ "Deepak", "Sherin", "Bipin", "Sonika" , "Dad" , "Arun" };
     sort_List_of_strings(mylist);
     for(auto s : mylist)
            cout<<s<<endl;

     /*for (auto it = mylist.begin(); it != mylist.end(); ++it)
           cout << ' ' << *it; */

     cout<<LongestWord(src);

    string dest=reverse(src);
    cout<<dest<<endl;

    dest=to_lower(src);
    cout<<dest<<endl;

    dest=to_upper(src);
    cout<<dest<<endl;


    if(is_word_in(src, "is"))
       cout<<"Yes"<<endl;

    dest=replace(src,"India","Canada");
    cout<<dest<<endl;



     return 0;
}


//Basic string manipulation
void basic_string()
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



}


/*
    string rword = string(src.rbegin(), src.rbegin()+3);
    cout<<rword<<endl;


    replace_all(src, "You" , rword);
    cout<<src<<endl;

    replace_all(src, "love" , "hate");
    cout<<src<<endl;



    src.erase(find(src.begin(), src.end(), ' ')); // erases first ' ';
    cout<< src << '\n';


*/
