#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;



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



