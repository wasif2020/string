#include <bits/stdc++.h>
using namespace std;



bool issame(int *pt,int *t){
       for(int i=0; i<26; i++){
           if(pt[i]!=t[i])
              return false;
       }
       return true;
   }
  int minIndexChar(string str, string patt){
    //Function to find the minimum indexed character.
        unordered_map<char,int>m;
        for(int i=str.size()-1; i>=0; i--)
            m[str[i]]=i;
        int res=INT_MAX;
        for(auto x:patt){
            if(m.find(x)!=m.end()){
                res=min(res,m.find(x)->second);
            }
        }
        if(res==INT_MAX)
            return -1;
    return res;            
    }


vector<int> findAnagrams(string txt, string pat) {
      vector<int>v;
      if(txt.size()<pat.size())
          return v;
	    int pt[26]={0};
	    int t[26]={0};
	    for(int i=0; i<pat.size(); i++){
	        pt[pat[i]-'a']++;
	        t[txt[i]-'a']++;
	    }
	    int s=0;
	    for(int i=pat.size(); i<txt.size(); i++){
	        if(issame(pt,t)==true){
	            v.push_back(s);
	        }
	        t[txt[i]-'a']++;
	        t[txt[s]-'a']--;
	        s++;
	    }
	    if(issame(pt,t)==true){
	          v.push_back(s);
	    }
	    return v;
	}


//anagram search

	int search(string pat, string txt) {
	    int pt[26]={0};
	    int t[26]={0};
	    for(int i=0; i<pat.size(); i++){
	        pt[pat[i]-'a']++;
	        t[txt[i]-'a']++;
	    }
	    int s=0;
	    int count=0;
	    for(int i=pat.size(); i<txt.size(); i++){
	        if(issame(pt,t)==true){
	            count++;
	        }
	        t[txt[i]-'a']++;
	        t[txt[s]-'a']--;
	        s++;
	    }
	    if(issame(pt,t)==true){
	          count++;
	    }
	    return count;
	}


string encode(string src)
{     
  string s="";
  int n=src.size();
  int c=1;
  for(int i=1; i<src.size(); i++){
      if(src[i-1]==src[i]){
          c++;
      }
      else{
          s=s+src[i-1]+to_string(c);
          c=1;
      }
  }
      s=s+src[n-1]+to_string(c);
      return s;
}     
 

	string removeDups(string S) 
	{
	    unordered_set<char>s;
	    string st="";
	    for(auto x:S){
	        if(s.find(x)==s.end()){
	            st+=x;
	        }
	        s.insert(x);
	    }
	    return st;
	    
	}

 bool isRotated(string str1, string str2)
    {
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
        if(str1.size()!=str2.size()){
            return false;
        }
    bool x=(str1[0]==str2[str1.size()-2] and str1[1]==str2[str1.size()-1] and str1.substr(2)==str2.substr(0,str1.size()-2));
    bool y=(str2[0]==str1[str1.size()-2] and str2[1]==str1[str1.size()-1] and str2.substr(2)==str1.substr(0,str1.size()-2));
    return (x||y);
    }

int main() {
    
   cout<<to_string(4);
    return 0;
}
