#include <iostream>
#define int long long
using namespace std;
string s;
int dp[4];
signed main(){
  for(int i=1;i<=2023;i++){
    s+=to_string(i);
  }
  for(int i=0;i<s.size();i++){
    if(s[i]=='2'){
      dp[0]++;//以二为结尾的数量每次遇到2加一
      dp[2]+=dp[1];//以202为结尾的数量，每次遇到二加上以20为结尾的个数
    }
    if(s[i]=='0'){
      dp[1]+=dp[0];//以20结尾的个数每次遇到0加上以2为结尾的个数
    }
    if(s[i]=='3'){
      dp[3]+=dp[2];//以2023结尾每次遇到3，加上以202为结尾的个数
    }
  }
  cout<<dp[3];
  return 0;
}
