#include <bits/stdc++.h>
using namespace std;
 
    string reverseWords(string S) {
        //Function to reverse words in a given string. 
        int start=0;
        reverse(S.begin(),S.end());
        for(int i=0; i<S.size(); i++){
            if(S[i]=='.'){
                reverse(S.begin()+start,S.begin()+i);
                start=i+1;
            }
        }
        reverse(S.begin()+start,S.end());
        return S;
    } 

 char nonrepeatingCharacter(string s){
    //Function to find the first non-repeating character in a string.
       int v[26]={0};
       for(int i=0; i<s.size(); i++){
           v[s[i]-'a']++;
       }
       for(int i=0; i<s.size(); i++){
           if(v[s[i]-'a']==1){
               return s[i];
           }
       }
       return '$';
       
    }

   char firstLeftmostRepeatedChar(string s){
        int v[26]={0};
        for(int i=0; i<s.size(); i++){
            v[s[i]-'a']++;
        }
        for(int i=0; i<s.size(); i++){
            if(v[s[i]-'a']>1){
                return s[i];
            }
        }
        return '#';
    }

string firstRepChar(string s){
    unordered_set<char>st;
    string res="";
    for(int i=0; i<s.size(); i++){
        if(st.find(s[i])!=st.end()){
            res=s[i];
            return res;
        }
        st.insert(s[i]);
    }
    return "-1";
}

 bool areKAnagrams(string a, string b, int k) {
     //check if two string are k anagram
        if(a.size()!=b.size()){
            return false;
        }
        int sum=0;
        int v[26]={0};     
        for(int i=0; i<a.size() or i<b.size(); i++){
            if(i<a.size())
                v[a[i]-'a']++;
            if(i<b.size())
                v[b[i]-'a']--;
        }
        for(int i=0; i<26; i++){
            sum+=abs(v[i]);
        }
        return (sum/2)<=k;
    }

int remAnagram(string a, string b){
    // function to calculate minimum numbers of characters
   // to be removed to make two strings anagram
    int sum=0;
        int v[26]={0};     
        for(int i=0; i<a.size() or i<b.size(); i++){
            if(i<a.size())
                v[a[i]-'a']++;
            if(i<b.size())
                v[b[i]-'a']--;
        }
        for(int i=0; i<26; i++){
            sum+=abs(v[i]);
        }
        return sum;
}

    bool isAnagram(string a, string b){
    //Function is to check whether two strings are anagram of each other or not.
        if(a.size()!=b.size())
             return false;
        int v[26]={0};     
        for(int i=0; i<a.size(); i++){
            v[a[i]-'a']++;
            v[b[i]-'a']--;
        }
        for(int i=0; i<26; i++){
            if(v[i]!=0)
              return false;
        }
        return true;
        
    }

	string removeDuplicates(string str) {
        // Function to remove all duplicate char
	    unordered_set<char>s;
	    string res="";
	    for(auto x:str){
	        if(s.find(x)==s.end()){
	            res+=x;
	        }
	        s.insert(x);
	    }
	    return res;
	}

bool isSubSequence(string A, string B) {
    // check if A is subsequence of B or not
      int s1=0;
      int s2=0;
      while(s1<A.size() or s2<B.size()){
          if(s1==A.size())
              return true;
          if(s2==B.size())
              return false;
          if(A[s1]==B[s2]){
              s1++;
              s2++;
          }
          else
              s2++;
      }
      if(s1==A.size())
          return true;

      return false;
    }

bool isPalindrome(string S)
//check if a string is palindrome or not
	{
	    int s=0;
	    int e=S.size()-1;
	    while(s<e){
	        if(S[s]!=S[e]){
	            return false;
	        }
	        s++;
	        e--;
	    }
	    return true;
	}

void charFrequencyUsingMap(string s){
    //output Can be in any order , using map container
    unordered_map<char,int>m;
    for(auto x:s){
        m[x]++;
    }
    for(auto x:m){
        cout<<x.first<<"->"<<x.second<<endl;
    }
}
void charFrequency(string s){
    //function to count frequecy of each characters present in string
    int count[26]={0};
    for(auto x:s){
        count[x-'a']++;
    }
    for(int i=0; i<26; i++){
        if(count[i]!=0){
            cout<<(char)('a'+i)<<"->"<<count[i]<<endl;
        }
    }
}
bool kPangram(string str, int k)
{
    // check for k pangram
      bool visited[26]={false};
      int count=0;
       for(auto x:str){
           if(x>='a' and x<='z'){
               visited[x-'a']=true;
               count++;
           }
           else if(x>='A' and x<='Z'){
               visited[x-'A']=true;
               count++;
           }
       }
       int sum=0;
       for(int i=0; i<26; i++){
           if(visited[i]==false){
               sum++;
           }
       }
       if(sum<=k and count>=26){
           return true;
       }
       return false;
}

bool pangramM1(string s){
       //using visited array
       bool visited[26]={false};
       for(auto x:s){
           if(x>='a' and x<='z'){
               visited[x-'a']=true;
           }
           else if(x>='A' and x<='Z'){
               visited[x-'A']=true;
           }
       }
       for(int i=0; i<26; i++){
           if(visited[i]==false){
               return false;
           }
       }
       return true;
}

bool pangramM2(string str){
    //using undordered_Set
    unordered_set<char>s;
    for(auto x:str){
        s.insert(x);
    }
    char x='a';
    char y='A';
    for(int i=0; i<26; i++){
        if(s.find(x)==s.end() and s.find(y)==s.end()){
            return false;
        }
        x++;
        y++;
    }
    return true;
}

char OneExtraCharUsingBit(string s1,string s2){
    //using bitwise ^(XOR) operator || efficient solution;
    char res=s2[s2.size()-1];
    for(int i=0; i<s2.size()-2; i++){
        res=res^s1[i]^s2[i];
    }
    return res;
}

char OneExtraChar(string s1,string s2){
    //using count method
    int count[26]={0};
    char res;
    for(int i=0; i<s1.size() or i<s2.size(); i++){
        if(i<s1.size()){
            count[s1[i]-'a']++;
        }
        if(i<s2.size()){
           count[s2[i]-'a']--;
        }
    }
    for(int i=0; i<26; i++){
            if(count[i]!=0){
                return (char)('a'+i);
            }
    }
    return res;
}

string DigitAfterDot(string str){
    int pos=str.find('.');
    if(pos==string::npos){
        return "";
    }
    return str.substr(pos+1);
}

vector<int> patternSearch(string str,string pat){
    vector<int>v;
    auto pos=str.find(pat);
    while(pos!=string::npos){
        v.push_back(pos);
        pos=str.find(pat,pos+1);
    }
    return v;
}
int main() {
    //__builtin_popcount();
    //cout<<__builtin_popcount(110); // returns nubmer of set bit
    //string s="Pack mY box witH fIve dozen jugs";
   //string s1="adbc";
   //string s2="aebcd";
   //cout<<pangramM1(s)<<endl;
  // cout<<pangramM2(s);
    //cout<<OneExtraCharUsingBit(s1,s2);
  string str="geeksforgeeksgeeksforgeeks";
  charFrequencyUsingMap(str);
    //string pat="geek";
   /* vector<int>v=patter(str,pat);
    for(auto x:v){
        cout<<x<<" ";
    }*/
   // cout<<DigitAfterDot(s);
return 0;
}
