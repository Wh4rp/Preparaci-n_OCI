#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, m;
    cin>>n;
    while(n--){
      string lol="";
      int px=0, py=0;
      bool xd=false;
      cin>>m;
      int x, y, mod;
      vector<tuple<int, int ,int>> v;
      for(int i=0; i<m; i++){
            cin>>x>>y;
            mod=pow(x,2)+pow(y,2);
            v.push_back(make_tuple(mod, x, y));
        }
        sort(v.begin(), v.end()); 
        for(int j=0; j<m; j++){
            if(px>get<1>(v[j])) {xd=true; break;
            }
            if(py>get<2>(v[j])) {xd=true; break;
            }
            int dx, dy;
            dx=get<1>(v[j])-px;
            dy=get<2>(v[j])-py;
            while (dx--)
           {
                    lol+="R";
                }
                while (dy--)
                {
                    lol+="U";
                }
                px=get<1>(v[j]);
                py=get<2>(v[j]);
            px=get<1>(v[j]);
            py=get<2>(v[j]);
          
        }
        if(xd==true) cout<<"NO\n";
        else{
          cout<<"YES\n"<<lol<<"\n";
        }
    }
    
    
return 0;
}