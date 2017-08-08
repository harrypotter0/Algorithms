        /*
        Hey , this one is mine ..
        make a new one for yourself
                     ---->>AKASH KANDPAL
                     */
        #include <bits/stdc++.h>
        using namespace std;
        int ceilindex(vector <int>&v,int l,int r,int key){
            while(r-l>1){
                int m = l+(r-l)/2;
                if(v[m]>key)
                r=m;
                else
                l=m;
            }
            return r;
        }
        int lis(vector <int>&v){
            if(v.size()==0)
            return 0;
            vector <int>tail(v.size(),0);
            int length =1;
            tail[0]=v[0];
            for(int i=1;i<v.size();i++){
                if(v[i]<tail[0])
                tail[0]=v[i];
                else if(v[i]>tail[length-1])
                tail[length++]=v[i];
                else
                tail[ceilindex(tail,-1,length-1,v[i])]=v[i];
            }
            return length;
        }
        int main(){
        ios :: sync_with_stdio(0); cin.tie(0);
        cout << (fixed) << setprecision(4);
        vector <int>v1{2,5,3,7,11,8,10,13,6};
        vector <int>v2{3,4,-1,5,8,2,3,12,7,9,10};
        cout<<"length is "<<lis(v1)<<endl;
        cout<<"length is "<<lis(v2)<<endl;
        return 0;
    }
