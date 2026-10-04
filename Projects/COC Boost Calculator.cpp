#include <iostream>
using namespace std;

int main()
{
    int input,day, hour, minute,portions;
    double totalSeconds,timeSaved,completionTime;

    while (true)
    {
       cout <<"\n======= COC Boost Calculator =======\n";
        cout << "| Choose Option:                   |\n";
        cout << "| 1. Builder Boost                 |\n";
        cout << "| 2. Research Boost                |\n";
        cout << "| 3. Exit                          |\n";
        cout<<  "====================================\n";
        cout << "Enter choice: ";
        cin >> input;
        cout << "\n";

        if (input == 3)//exit
        { break; }

        // Builder boost part
        else if (input == 1)
        {
            cout << "================================\n";
            cout << "        BUILDER BOOST\n";
            cout << "================================\n";

            cout << "Enter upgrade time:\n";
            cout << "Day: ";
            cin >> day;
            cout << "Hour: ";
            cin >> hour;
            cout << "Minute: ";
            cin >> minute;
            cout << "Enter number of Builder Potions: ";
            cin >> portions;

    
            totalSeconds =
                (day * 24 * 60 * 60) +
                (hour * 60 * 60) +
                (minute * 60);            
            double potionSeconds = portions * 60 * 60;
            double boostedWork = potionSeconds * 10;

            
            timeSaved = boostedWork - potionSeconds;

            
            if (timeSaved > totalSeconds)
            {timeSaved = totalSeconds;}

            if (totalSeconds <= boostedWork)
            {completionTime = totalSeconds / 10;}

            else
            { completionTime = totalSeconds - timeSaved;}

            // Convert saved time
            int savedTotal = (int)timeSaved;
            int savedDay = savedTotal / 86400;
            savedTotal %= 86400;
            int savedHour = savedTotal / 3600;
            savedTotal %= 3600;
            int savedMinute = savedTotal / 60;
            int savedSecond = savedTotal % 60;
    
            // Convert completion time
            int completeTotal = (int)completionTime;
            int completeDay = completeTotal / 86400;
            completeTotal %= 86400;
            int completeHour = completeTotal / 3600;
            completeTotal %= 3600;
            int completeMinute = completeTotal / 60;
            int completeSecond = completeTotal % 60;

            
            cout << "================================\n";
            cout << "Time Saved:\n";
            cout << savedDay << " Days "
                 << savedHour << " Hours "
                 << savedMinute << " Minutes "
                 << savedSecond << " Seconds\n\n";

            cout << "Come Back After:\n";
            cout << completeDay << " Days "
                 << completeHour << " Hours "
                 << completeMinute << " Minutes "
                 << completeSecond << " Seconds\n";

            cout << "================================\n\n";
        }






        // Research boost part
        else if (input == 2)
        {
            cout << "================================\n";
            cout << "        RESEARCH BOOST\n";
            cout << "================================\n";

            cout << "Enter research time:\n";
            cout << "Day: ";
            cin >> day;
            cout << "Hour: ";
            cin >> hour;
            cout << "Minute: ";
            cin >> minute;
            cout << "Enter number of Research Potions: ";
            cin >> portions;

            totalSeconds =(day * 24 * 60 * 60) +(hour * 60 * 60) +(minute * 60);

            double potionSeconds = portions * 60 * 60;
            double boostedWork = potionSeconds * 24;

            timeSaved = boostedWork - potionSeconds;

            if (timeSaved > totalSeconds) // Make sure saved time doesn't exceed research time
            { timeSaved = totalSeconds;}

            if (totalSeconds <= boostedWork)// Calculate actual completion time
            { completionTime = totalSeconds / 24;}
            
            else                            // Potion expires before research finishes
            { completionTime = totalSeconds - timeSaved;}

            // Convert saved time
            int savedTotal = (int)timeSaved;
            int savedDay = savedTotal / 86400;
            savedTotal %= 86400;
            int savedHour = savedTotal / 3600;
            savedTotal %= 3600;
            int savedMinute = savedTotal / 60;
            int savedSecond = savedTotal % 60;

            // Convert completion time
            int completeTotal = (int)completionTime;
            int completeDay = completeTotal / 86400;
            completeTotal %= 86400;
            int completeHour = completeTotal / 3600;
            completeTotal %= 3600;
            int completeMinute = completeTotal / 60;
            int completeSecond = completeTotal % 60;

        
            cout << "================================\n";

            cout << "Time Saved:\n";
            cout << savedDay << " Days "
                 << savedHour << " Hours "
                 << savedMinute << " Minutes "
                 << savedSecond << " Seconds\n\n";

            cout << "COME BACK AFTER:\n";
            cout << completeDay << " Days "
                 << completeHour << " Hours "
                 << completeMinute << " Minutes "
                 << completeSecond << " Seconds\n";

            cout << "================================\n\n";
        }

        else
        {cout << "Invalid option!\n\n";} //Invalid Input
    }

    return 0;
}