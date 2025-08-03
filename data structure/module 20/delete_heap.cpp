#include<bits/stdc++.h>
using namespace std;
void insert_heap(vector<int>&v,int x)
{
    v.push_back(x);
//    for(int val: v)
//     {
//         cout<<val<<" ";
//     }
//     cout<<endl;
   int cur_index=v.size()-1;
//    cout<<cur_index<<endl;
   
    while(cur_index!=0)
    {
        int parent_index=(cur_index-1)/2;
  //    cout<<parent_index<<endl;
        if(v[parent_index]<v[cur_index]) 
        {
            swap(v[parent_index],v[cur_index]);
        }
        else break;
        cur_index = parent_index;
    }
}
void print(vector<int>v)
{
    for(int val: v)
     {
         cout<<val<<" ";
     }
     cout<<endl;
}
void delete_heap(vector <int> &v)
{ 
   
    v[0]=v[v.size()-1];
    v.pop_back();
     int cur=0;
    while(true)
    {
        int last_index= v.size()-1;
        int left_index=cur*2+1;
        int right_index=cur*2+2;
        if(left_index<=last_index &&right_index<=last_index)
        {
            if(v[left_index]>=v[right_index] && v[left_index]>v[cur])
            {
                swap(v[cur],v[left_index]);
                cur=left_index;
            }
            else if(v[right_index]>=v[left_index] && v[right_index]>v[cur])
            {
             swap(v[cur],v[right_index]);
             cur=right_index;
            }
            else break;
        }
        else if(left_index<=last_index)
        {
            if(v[left_index]>v[cur])
            {
                swap(v[cur],v[left_index]);
                cur=left_index;
            }
            else break;
        }
        else if(right_index<=last_index)
        {
            if(v[right_index]>v[cur])
            {
                swap(v[cur],v[right_index]);
                cur=right_index;
            }
            else break;
        }
        else break;
    }
   
}
int main()
{
     int n;
     cin>>n;
     vector<int>v;
     for(int i=0;i<n;i++)
     {
         int x;
         cin>>x;
         insert_heap(v,x);
     }
   
     print(v);
     cout<<endl;
     delete_heap(v);
     print(v);

    return 0;
}