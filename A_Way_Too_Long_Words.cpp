/*Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.

This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. 
That number is in decimal system and doesn't contain any leading zeroes.

Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s.length()<=10){
            cout<<s<<endl;
        }
        else{
            string res = "";
            res.push_back(s[0]);
            res+=to_string(s.length()-2);
            res.push_back(s[s.length()-1]);
            cout<<res<<endl;
        }
    }
    return 0;
}