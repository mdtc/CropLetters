#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <thread>
#include <chrono>
using namespace std;

// Main solution Logic to crop out the sentence
string solution(string message, int K){

    string word ; 
    int i;
    for (i=K; i>0; i--){

        if(message[i] == ' ' && (message[i-1] >= 'a' && message[i-1] <= 'z')) break;

    }
        for (int a = 0; a < i; a++){
            word = word + message[a];
        }

    cout << "cropped sentence is: "<< word << endl;
    return word ;

}

// Terminal user interface
void UserInterface(){

    string word;
    int number;
    cout << "This program will crop the sentence according to the integer provided" << endl;
    cout << "Please type a sentence: " << endl;
    getline(cin, word); 
    cout << "Please type the number which indicate where to crop the sentence: ", cin >> number;
    cout << "calculating......" << endl;
    std::this_thread::sleep_for(chrono::seconds(1));
    solution(word, number);

}


int main(){

    string again = "Y"; 
//Loop to repeat the program
    do{
        UserInterface();
        cout << "do you want to try again? Y|n" << endl;
        cin >> again;
        cin.ignore();

    }while(again == "Y" || again == "yes" || again == "Yes" || again == "YES");
 

    return 0;


}