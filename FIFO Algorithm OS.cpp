//First in first out algorithm 
#include<iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool find_page(vector<int> &Page_Frame,int page){
    
     for(auto i:Page_Frame){
     
          if(i==page)
        
               return true;
     
     }
    
     return false;
}
int main(){
     //fifo 
  
     int frames;cin>>frames;  
  
     int No_of_Page_refernces;cin>>No_of_Page_refernces;
  
     vector<int> Page_Frame;
  
     int No_of_fault=0;
  
     for(int i=0;i<No_of_Page_refernces;i++){
       
          int page;
         
          cin>>page;
         
        
          if(find_page(Page_Frame,page)){
          
               cerr<<i<<"\n";
           
               continue;
         
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
  
     }
  
     cout<<No_of_fault<<"\n";
  
     return 0;

}
