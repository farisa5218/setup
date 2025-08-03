#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    vector<string> data;
    string temp;
    while (cin >> temp && temp != "end") 
    {
        data.push_back(temp);
    }

    int q;
    cin >> q;

    int curr_index = 0;
    int data_size = data.size();

    while (q--) 
    {
        string command;
        cin >> command;

        if (command == "visit")
         {
            string address;
            cin >> address;
            int index = 0;
            for (; index < data_size; index++) 
            {
                if (data[index] == address) 
                {
                    break;
                }
            }
            cout<<index<<endl;
    //         if (index < data_size)
    //          {
    //             curr_index = index;
    //             cout << data[curr_index] << endl;
    //         }
    //          else
    //           {
    //             cout << "Not Available" << endl;
    //         }
    //     } 
    //     else if (command == "next") 
    //     {
    //         if (curr_index + 1 < data_size) 
    //         {
    //             curr_index++;
    //             cout << data[curr_index] << endl;
    //         }
    //          else
    //           {
    //             cout << "Not Available" << endl;
    //         }
    //     } 
    //     else if (command == "prev") 
    //     {
    //         if (curr_index > 0)
    //          {
    //             curr_index--;
    //             cout << data[curr_index] << endl;
    //         }
    //          else
    //           {
    //             cout << "Not Available" << endl;
    //         }
       }
     }

    return 0;
}