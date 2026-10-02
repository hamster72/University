#include <iostream>
using namespace std;

int main()
{
	int score;
	char grade,modifier;

    cout << "Enter a score between 0 and 100:";
    cin >> score;
    
    switch(score/10)
    {
        case 10: grade = 'A';
            break;
        case 9: grade = 'A';
            break;
        case 8: grade = 'B';
            break;
        case 7: grade = 'C';
            break;
        case 6: grade = 'D';
            break;
        default: grade = 'F';
    }
    
    switch(score%10)
    {
        case 9:
        case 8: 
            modifier = '+';
            break;
        case 0:
        case 1:
        case 2:
        case 3:
            modifier = '-';
            break;
    }
    
    if (score==100)
    	modifier = '+';
    else if (score<60)
    	modifier = ' ';
    
    cout << "Score:" << score <<endl;
    cout << "Grade:" << grade << modifier;
    
    return 0;
}
