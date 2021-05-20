/*Multipurpose calculator inspired from MI calculators*/

#include<bits/stdc++.h>
using namespace std;

int main () {
    int hour24, hour12, minute24, minute12;
    int  principal, time, nTimes, userCh;
    double weight, height, bmi, rate, amount, total;
    double usd, inr, eur;
    double arg1, arg2, res;
    int userCH;
    string  period ;
    char temp;
    char op;
    
    cout<<" Enter op : 1.BMI, 2.CURRENCY, 3.TIME ZONE, 4.Investment 5. Normal cal "<<endl;
    cin>>userCH;
   /*BMI calculator */
    if ( userCH==1){
        cout<<" weight(kg) : ";
        cin>>weight;
        cout<<" height(meters) : ";
        cin>>height;

        bmi = weight/(height*height);
        cout<<setprecision(4)<<" BMI is "<<bmi<<endl;

    }
    /* currency conerter */
    else if ( userCH==2) {
        cout<<" USD : ";
        cin>>usd;
        inr = usd*72.464;
        eur = usd*0.8403;
        cout<<setprecision(6)<<" INR : "<<inr<<endl;
        cout<<setprecision(6)<<" INR : "<<inr<<endl;
    }
    /* time format converter */
    else if( userCH==3) {
        cout<<" Time in 24 hour format : ";
        cin>>hour24>>temp>>minute24;

        minute12 = minute24;
        if(hour24 >= 0 && hour24 <= 11) {
        period = " am ";
           if( hour24 == 0)
           hour12 = 12;
           else
           hour12 = hour24;
        }
        else {
        period = " pm ";
           if( hour24 == 12)
           hour12 = 12;
           else
           hour12 = hour24-12;
        }
      cout<<hour12<<" : "<<minute12<<period<<endl;
       
    }
    /* investment calculator */
    else if ( userCH == 4 ) {
        cout<<" 1. compound interest or 2. simple interest "<<endl;cin>>userCh;
        cout<<" principal : ";cin>>principal;
        cout<<" interest : ";cin>>rate;
        cout<<" duration : ";cin>>time;

        if( userCh==1 ) {
            amount = (double)principal*(pow((1+rate/100), time));
            cout<<"CI for "<<principal<<" is "<<setprecision(6)<<amount<<endl;
        }
        else {
            amount = (double) (principal*rate*time)/100;
            total = amount + (double)principal;
            cout<<"SI for "<<principal<<" is "<<setprecision(6)<<amount<<" and total amount is : "<<total<<endl;
        }

    }
     /*normal calculator */
    else if (userCH==5)  {
        cout<<" enter expression : "<<endl;
        cin>>arg1>>op>>arg2;

        switch ( op ) {
            case '+':
            res = arg1 + arg2;
            cout<<res<<endl;
            break;
            case '-':
            res = arg1 - arg2;
            cout<<res<<endl;
            break;
            case '*':
            res = arg1 * arg2;
            cout<<res<<endl;
            break;
            case '/':
            if( arg2 != 0 ){
                res = arg1 / arg2;
                cout<<res<<endl;
            }
            else {
                cout<<"invalid"<<endl;
            }
            
        }
    }
    else {
        cout<<" invalid "<<endl;
    }
    
    
    return 0;

}