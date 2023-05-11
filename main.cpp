#include <iostream>

using namespace std;

void transformar(char mapa[], int i, int j){
    if((mapa)[i-1]=='A'){
        (mapa)[i-1]='T';
    }
    if((mapa)[i+1]=='A'){
        (mapa)[i+1]='T';
    }
    if((mapa)[j-1]=='A'){
        (mapa)[j-1]='T';
    }
    if((mapa)[j+1]=='A'){
        (mapa)[j+1]='T';
    }
}

int main(){
    int n, m;
    char val;
    cin>>n>>m;
    char mapa[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>val;
            mapa[i][j]=val; 
        }
    }
    cout<<"\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mapa[i][j]=='T'){
                transformar(mapa[0], i, j);
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=m; j++){
            if(j==m){
                cout<<"\n";
                break;
            }else{
                cout<<mapa[i][j];
            }
        }
    }

    return 0;
}