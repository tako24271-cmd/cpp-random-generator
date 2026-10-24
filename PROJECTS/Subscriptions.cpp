#include <iostream>
#include <random>
#include <chrono>
using namespace std;

int main() {
   
    auto currentTime = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 gen(static_cast<unsigned int>(currentTime)); 

    uniform_int_distribution<> distr(1, 11); 

    int daysUntilExpiration = distr(gen);
    cout<< daysUntilExpiration << endl;
    if (daysUntilExpiration <= 11)
    {
        cout <<"Your subscription will expire soon. Renew now!" << endl;
    }
    else if (daysUntilExpiration<= 5)
    {
         cout << "Your subscription expires in \n Renew now and save 10%"<< daysUntilExpiration << endl;

    }
    else if (daysUntilExpiration <= 1)
    {
        cout <<"Your subscription expires within a day! \n Renew now and save 10%!"<< endl;
    }
    else if(daysUntilExpiration == 0)
        {
            cout <<" Your subscription has expired" << endl;
        }
    else 
    
            cout << " You have active subscription" << endl;
        
    return 0;
}