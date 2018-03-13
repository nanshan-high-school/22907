#include <iostream>

using namespace std;

int main()
{
    int firstdate;
    
    cout <<"當月一號是星期幾：";
    
    cin >> firstdate;
    
    cout <<"\n 一二三 四五六日\n";
    
    for(int i = 1; i < firstdate; i++){

        cout <<"  ";

    }
    
    for(int j = 0; j <= 7 - firstdate ; j++){
        
        cout << " " << j + 1 ;
    }
