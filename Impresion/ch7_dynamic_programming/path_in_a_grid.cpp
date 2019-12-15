#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int value[N][N];

    for(int i=1; i<N+1;i++){
        for(int j=1;j<N+1;j++){
            cin>>value[i][j];
        }
    }
    
    int sum[N][N];

    for (int y = 1; y <= N; y++) {
for (int x = 1; x <= N; x++) {
  if((x-1)==0){
    if((y-1)!=0){
    sum[y][x] = sum[y-1][x]+value[y][x];
    cout<<"sum de "<<y<<","<<x<<"= "<<sum[y][x]<<"\n";
    }
    else{
      sum[y][x]=value[y][x];
      cout<<"sum de "<<y<<","<<x<<"= "<<sum[y][x]<<"\n";
    }
  }
  if((y-1)==0){
    if((x-1)!=0){
      sum[y][x]=sum[y][x-1]+value[y][x];
      cout<<"sum de "<<y<<","<<x<<"= "<<sum[y][x]<<"\n";
    }
  }
  else{
sum[y][x] = max(sum[y][x-1],sum[y-1][x])+value[y][x];
cout<<"sum de "<<y<<","<<x<<"= "<<sum[y][x]<<"\n";
  }
}
}
    return 0;
}