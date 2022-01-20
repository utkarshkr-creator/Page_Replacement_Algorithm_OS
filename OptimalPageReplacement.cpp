//optimal page replacement
#include<iostream>
#include <algorithm>
#include<map>
#include <vector>
using namespace std;
bool find_page(vector<int> &Page_Frame,int page){
    for(auto i: Page_Frame)
      if(i==page)
        return true;
return false;
}
int main(){
    // optimal page replacement 
    cout<<"Enter frames number:"<<endl;
  int frames;cin>>frames;  
  int No_of_Page_refernces;cin>>No_of_Page_refernces;
  vector<int> Page_Frame;
  int No_of_fault=0;
  vector<int> Pages;
  unordered_map<int,int> Hash_map;
  for(int i=0;i<No_of_Page_refernces;i++){
     int temp;cin>>temp;
     Pages.push_back(temp);
     Hash_map[temp]++;

  }
  
  for(int i=0;i<No_of_Page_refernces;i++){
         if(find_page(Page_Frame,Pages[i])){
            Hash_map[Pages[i]]--;
            
         }
         else{
              No_of_fault++;
             if(Page_Frame.size()!=frames){
              Page_Frame.push_back(Pages[i]);  
             }
             else{
                  int idx=Page_Frame.size()-1;  
                  int min=1e6;
                  for(int kk=0;kk<Page_Frame.size();kk++){
                       if(Hash_map[Page_Frame[kk]]>1){
                           if(Hash_map[Page_Frame[kk]]<=min){
                                  idx=kk;  
                                  min=Hash_map[Page_Frame[kk]];
                           }
                       }
                       else{
                        idx=kk;
                        break;
                       }
                  }
                  Page_Frame[idx]=Pages[i];
                  
                }
         }
  }
  cout<<No_of_fault<<"\n";
  return 0;
}
