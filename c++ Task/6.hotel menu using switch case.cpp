#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
	int ch;
	int total;
	
	for (ch = 0; ch < 10; a++)
	{
		cout <<endl<< "Enter Your choise ";
		cin >> ch;
	
    switch (ch)
    {
	case 1:
    	cout <<endl << "\n\tVegetable             " << "\tRate";
    	cout <<endl << "\t1.Mix Veg.            " << "\t120";
    	cout <<endl << "\t2.Aloo subji          " << "\t90";
    	cout <<endl << "\t3.Sukhi Bhaji (Farali)" << "\t90";
    	cout <<endl << "\t4.Aloo lasniya        " << "\t95";
    	cout <<endl << "\t5.Aloo mutter         " << "\t90";
    	cout <<endl << "\t6.Aloo gobi           " << "\t90";
    	cout <<endl << "\t7.Aloo tomato         " << "\t95";
    	cout <<endl << "\t8.Sev tomato          " << "\t99";
    	cout <<endl << "\t9.Tomato              " << "\t90";
    	cout <<endl << "\t10.Plain gobi	      " << "\t90";
    	cout <<endl << "\t11.Mutter gobi        " << "\t90";
	    cout << "\n*********Enter Your items number*********"<<endl;
	    for (a = 0; a <= 11; a++)
       	{
       	cout << endl;
		cin >> a;
        switch (a)
        	{
        		case 1:
        			total += 120;
        			cout  <<"\tMix Veg."; 
        			break;
        		case 2:
        			total += 90;
        			cout  <<"\tAloo subji"; 
        			break;
        		case 3:
        			total += 90;
        			cout  <<"\tSukhi Bhaji (Farali)"; 
        			break;
        		case 4:
        			total += 90;
        			cout  <<"\tAloo lasniya"; 
        			break;
        		case 5:
        			total += 90;
        			cout  <<"\tAloo mutter"; 
        			break;
        		case 6:
        			total += 90;
        			cout  <<"\tAloo gobi"; 
        			break;
        		case 7:
        			total += 95;
        			cout  <<"\tAloo Tomato"; 
        			break;
        		case 8:
        			total += 99;
        			cout  <<"\tSev Tomato"; 
        			break;
        		case 9:
        			total += 90;
        			cout  <<"\tTomato"; 
        			break;
        		case 10:
        			total += 90;
        			cout  <<"\tPlain gobi"; 
        			break;
        		case 11:
        			total += 90;
        			cout  <<"\tMutter gobi"; 
        			break;	
			}
		}
			break;
		case 2:
    	cout <<endl << "\n\tKathod sabz   " << "\tRate";
    	cout <<endl << "\t12.Vall       " << "\t110";
    	cout <<endl << "\t13.Desi Chana " << "\t99";
    	cout <<endl << "\t14.Chole Chana" << "\t99";
    	cout <<endl << "\t15.Moong Dal  " << "\t99";
    	cout <<endl << "\t16.Red Bens   " << "\t99";
    	cout <<endl << "\t17.White Bens " << "\t99";
    	cout << "\n*********Enter Your items number*********"<<endl;
       	for (a = 0; a <= 17; a++)
       	{
	    cout << endl;
		cin >> a;
        switch (a)
        	{
        		case 12:
        			total += 110;
        			cout  <<"\tVall"; 
        			break;
        		case 13:
        			total += 99;
        			cout  <<"\tDesi Chana"; 
        			break;
        		case 14:
        			total += 99;
        			cout  <<"\tChole Chana"; 
        			break;
        		case 15:
        			total += 99;
        			cout  <<"\tMoong Dal"; 
        			break;
        		case 16:
        			total += 99;
        			cout  <<"\tRed Bens"; 
        			break;
        		case 17:
        			total += 99;
        			cout  <<"\tWhite Bens"; 
        			break;
			}
		}
			break;
		case 3:
    	cout <<endl << "\n\tVegetable             " << "\tRate";
    	cout <<endl << "\t1.Kobiz plin          " << "\t99";
    	cout <<endl << "\t2.Aloo Kobiz          " << "\t90";
    	cout <<endl << "\t3.Aloo Tomato Kobi    " << "\t90";
    	cout <<endl << "\t4.Bhindi              " << "\t99";
    	cout <<endl << "\t5.Aloo Bhindi         " << "\t99";
    	cout <<endl << "\t6.Bhindi Tomato       " << "\t99";
    	cout <<endl << "\t7.Masal Ringan        " << "\t90";
    	cout <<endl << "\t8.Ringan Aloo         " << "\t99";
    	cout <<endl << "\t9.Aloo pyasz rasa wala" << "\t90";
    	cout <<endl << "\t10.pyaz rasa wala     " << "\t90";
	    cout << "\n*********Enter Your items number*********"<<endl;
	    for (a = 0; a <= 11; a++)
       	{
       	cout << endl;
		cin >> a;
        switch (a)
        	{
        		case 1:
        			total += 99;
        			cout  <<"\tKobiz plin"; 
        			break;
        		case 2:
        			total += 90;
        			cout  <<"\tAloo kobiz"; 
        			break;
        		case 3:
        			total += 90;
        			cout  <<"\tAloo Tomato kobi"; 
        			break;
        		case 4:
        			total += 99;
        			cout  <<"\tBhindi"; 
        			break;
        		case 5:
        			total += 99;
        			cout  <<"\tAloo Bhindi"; 
        			break;
        		case 6:
        			total += 99;
        			cout  <<"\tBhindi tomato"; 
        			break;
        		case 7:
        			total += 90;
        			cout  <<"\tMasala Ringan"; 
        			break;
        		case 8:
        			total += 99;
        			cout  <<"\tRingan Aloo "; 
        			break;
        		case 9:
        			total += 90;
        			cout  <<"\tAloo pyaz rasa wala"; 
        			break;
        		case 10:
        			total += 90;
        			cout  <<"\tpyaz rasa wala"; 
        			break;
			}
		}
	break;
		case 4:
    	cout <<endl << "\n\tPaneer ke swad se     " << "\tRate";
    	cout <<endl << "\t1.Paneer Butter Masala" << "\t99";
    	cout <<endl << "\t2.Paneer Mutter Masala" << "\t99";
	    cout << "\n*********Enter Your items number*********"<<endl;
	    for (a = 0; a <= 2; a++)
       	{
       	cout << endl;
		cin >> a;
        switch (a)
        	{
        		case 1:
        			total += 99;
        			cout  <<"\tPaneer Butter Masala"; 
        			break;
        		case 2:
        			total += 99;
        			cout  <<"\tPaneer Mutter Masala"; 
        			break;
			}
		}
	break;
		
		default:
			break;		
	}
	if (ch > 4)
	{
		break;	
	}
	}
	cout << endl << "\n\n\n\t----------------------------";
    cout << endl << "\tYour total bill amount is " << total;
}
