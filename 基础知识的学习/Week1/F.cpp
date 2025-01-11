#include<iostream>
using namespace std;


int chat(int u,int v);


int main(){
    int t;
    cin >> t;
    for(int i = 0;i<t;i++){
        int n;
        int isStar = 0;
        cin >> n;
        int j = 1;
        for(j = 1;j<n;j+=2){
            //ии?1?и║?D?бъ??и░????иоDи░?б┴иж(j,j+1)?идив? 
            if (chat(j,j+1)){  //ии?1?joикj+1?идив?
                for(int k = 1;k<n;k++){
                    if(k!=j && k!=j+1){
                        if(chat(k,j)){  //1.ии?1?koикj?идив?   
                            for(int q = 1;q<n;q++){
                                if(q!=j && q!=j+1 && q!=k){
                                    if(chat(q,j)){  //2.ии?1?qoикj?идив? 
                                        cout << "! 2" << endl;
                                        cout.flush();
                                        isStar = 1;
                                        break;
                                    }
                                    else{
                                        break;
                                    }
                                }
                            }
                            break;
                        }
                        else if(chat(k,j+1)){  //1.ии?1?koикj+1?идив? 
                            for(int q = 1;q<n;q++){
                                if(q!=j && q!=j+1 && q!=k){
                                    if(chat(q,j+1)){  //2.ии?1?qoикj?идив? 
                                        cout << "! 2" << endl;
                                        cout.flush();
                                        isStar = 1;
                                        break;
                                    }
                                    else{
                                        break;
                                    }
                                }
                            }
                            break;
                        }
                        else{
                            break;
                        }
                        
                        
                        
                    }
                }
                break;
            }
        }
        if(j == n){
            if(chat(n-1,n)){
                if(chat(1,n)){
                    if(chat(2,n)){
                        cout << "! 2" << endl;
                        isStar = 1;
                        cout.flush();
                    }
                }
            }
        }
        
        if(!isStar){
            cout << "! 1" << endl;
            cout.flush();
        }
    }
    return 0;
}

int chat(int u,int v){
    int isLink = -1;
    cout << "? " << u << " " << v << endl;
    cout.flush();
    cin >> isLink;
    return isLink;
}
