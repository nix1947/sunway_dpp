#include <iostream>


int main()
{
    int count = 0;
    
    //This do..while loop will execute until count =5
    do
    {
        std::cout<<"Count = "<<count<<"\n";
        count++;
    }while(count < 5);


    int otherCount = 6; 
    //This do..while loop will execute once. Even though
    //otherCount > 5
    do
    {
        std::cout<<"othercount = "<<otherCount<<"\n";
        otherCount++;
    }while(otherCount < 5);
    
    return 0;
}

