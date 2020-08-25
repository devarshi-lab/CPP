#include<iostream>
using namespace std;

bool ChkVowel(char cValue)
{
    if((cValue>='a' && cValue<='z') || (cValue>='A' && cValue<='Z'))
    {
        switch(cValue)
        {
            case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': 
            case 'o': case 'O': case 'u': 
            case 'U': return true;
                      break;
            default : return false; 
        }
    }
}

int main()
{
    char ch = '\0';
    bool bCheck = false;

    cout<<"Enter a character : \t";
    cin>>ch;

    bCheck = ChkVowel(ch);

    if(bCheck == true)
    {
        cout<<"It is vowel\n";
    }
    else if(bCheck == false)
    {
        cout<<"It is not vowel\n";
    }
    else
    {
        cout<<"It is not a valid character";
    }

    return 0;
}    


