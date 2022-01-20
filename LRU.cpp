// Lest recent use page replacment algorithm 
#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
int find_page(vector<int> &Page_Frame,int page){
     for(int i=0;i<Page_Frame.size();i++)
      if(Page_Frame[i]==page)
        return i;
     return -1;
}
int main(){
     // LRU Algo
  int frames;cin>>frames;  
  int No_of_Page_refernces;cin>>No_of_Page_refernces;
  vector<int> Page_Frame;
  int No_of_fault=0;
  for(int i=0;i<No_of_Page_refernces;i++){
         int page;
         cin>>page;
         int Avl=find_page(Page_Frame,page);
         if(Avl>=0){
           for(int k=Avl;k<Page_Frame.size();k++)
              Page_Frame[k]=Page_Frame[k+1];
           Page_Frame[Page_Frame.size()-1]=page;
         }
         else{
           No_of_fault++;
             if(Page_Frame.size()!=frames){
              Page_Frame.push_back(page);  
             }
             else{
              for(int idx=1;idx<frames;idx++){
                                Page_Frame[idx-1]=Page_Frame[idx];
                          }
                Page_Frame[frames-1]=page; 
                }
         }
        for(auto i:Page_Frame)cerr<<i<<" ";
          cerr<<endl;
  }
  cout<<No_of_fault<<"\n";
  return 0;

}
