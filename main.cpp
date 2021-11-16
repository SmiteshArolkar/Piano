#include <bits/stdc++.h>
#include <Windows.h>
class Play
{
public:
Play()
{
    __init__();
    int key;
   do
    {
        std::cout<<"Enter key [1-9]\n 0 : exit [ONE NUMBER AT A TIME]"<<std::endl;
        std::cin>>key;
        Beep(freq[key],500);
        std::cout<<freq[key]<<std::endl;
        
    }while(key);
}

private:
double freq[9];
 
 void __init__()
 {
     for(int i = 0 ; i < 10 ; i++ )
     {
         freq[i] = i*100;
     }
     
 }
};
int main()
{
  Play a;
 
  std::cin.get();
  
  return 0; 
}