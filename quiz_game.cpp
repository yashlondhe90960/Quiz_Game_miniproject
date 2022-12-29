// C++ program for the quiz game
#include <iostream>
#include <string>
using namespace std;

int Guess;
int Total;

// Question Class
class Question {
private:
	string Question_Text;
	string Answer_1;
	string Answer_2;
	string Answer_3;
	string Answer_4;
	int Correct_Answer;
	int Question_Score;

public:
	
	void setValues(string, string,
				string, string,
				string, int, int);

	
	void askQuestion();
};


int main()
{
	cout << "\n\n\t\t\t\tTHE QUIZ GAME"
		<< endl;
	cout << "\nPress Enter to start "
		<< "the quiz... " << endl;

	
	cin.get();

	string Name;
	int Age;

	
	cout << "What is your name?"
		<< endl;
	cin >> Name;
	cout << endl;

	cout << "How old are you?"
		<< endl;
	cin >> Age;
	cout << endl;

	string Respond;
	cout << "Are you ready to take"
		<< " the quiz " << Name
		<< "? yes/no" << endl;
	cin >> Respond;

	if (Respond == "yes") {
		cout << endl;
		cout << "Good Luck!" << endl;
	}
	else {
		cout << "Okay Good Bye!" << endl;
		return 0;
	}

	
	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;

	 
	q1.setValues("Question : Who invented C++?", " Dennis Ritchie ",
				" Bjarne Stroustrup ", " Ken Thompson ",
				"  Brian Kernighan ", 2, 10);

	q2.setValues("Question : THE USE OF THE BREAK STATEMENT IN A SWITCH STATEMENT IS? ", "Optional",
				"Compulsory", "Not Allowed",
				"To Check an Error", 1, 10);

	q3.setValues("Question : WHO IS THE CAPTAIN OF INDIAN CRICKET TEAM? ", "Sachin",
                "Rohit", "Dhoni",
				"Virat", 4, 10);

	q4.setValues("Question : WHAT IS OUR NATIONAL GAME?", "Cricket",
				"Football", "Hockey",
				"Badminton", 3, 10);

	q5.setValues("Question : WHICH CROP IS SOWN ON THE LARGEST AREA IN INDIA?", "Rice",
				"Wheat", "SugarCane",
				"Bajra", 3, 10);

	q6.setValues("Question : WHO IS THE PRIME MINISTER OF INDIA?", "Sonia Gandhi",
				"Rajiv Gandhi", "Rahul Gandhi",
				"Narendra Modi", 4, 10);

	q7.setValues("Question : SMALLEST COUNTRY IN THE WORLD?", "Canada",
				"Vatican City", "Maldives",
				"Russia", 2, 10);

	q8.setValues("Question : WHICH LANGUAGE IS SPOKEN IN KARNATAKA", "Kanada",
                "Hindi", "English",
                "Marathi", 1, 10);

	q9.setValues("Question : WORLD CREATURE DAY IS CELEBRATED AT:", "1st October",
                "4th October", "7th October",
                "6th October",  2, 10);
				
	q10.setValues("Question : WHICH OF THESE IS NOT A PROGRAMMING LANGUAGE?", "Ruby",
                 "Java","Banana",
                 "Python" , 3, 10);

	q1.askQuestion();
	q2.askQuestion();
	q3.askQuestion();
	q4.askQuestion();
	q5.askQuestion();
	q6.askQuestion();
	q7.askQuestion();
	q8.askQuestion();
	q9.askQuestion();
	q10.askQuestion();

	
	cout << "Total Score = " << Total
		<< " out of 100" << endl;

	

	if (Total >= 70) {
		cout << "Congrats you passed the"
			<< " quiz!" << endl;
	}

	
	else {
		cout << "Alas! You failed the quiz."
			<< endl;
		cout << "Better luck next time."
			<< endl;
	}
	return 0;
}

void Question::setValues(
	string q, string a1,
	string a2, string a3,
	string a4, int ca, int pa)
{
	Question_Text = q;
	Answer_1 = a1;
	Answer_2 = a2;
	Answer_3 = a3;
	Answer_4 = a4;
	Correct_Answer = ca;
	Question_Score = pa;
}


void Question::askQuestion()
{
	cout << endl;

	
	cout << Question_Text << endl;
	cout << "1. " << Answer_1 << endl;
	cout << "2. " << Answer_2 << endl;
	cout << "3. " << Answer_3 << endl;
	cout << "4. " << Answer_4 << endl;
	cout << endl;

	
	cout << "What is your answer?(choose option)"
		<< endl;
	cin >> Guess;

	
	if (Guess == Correct_Answer) {
		cout << endl;
		cout << "Correct !" << endl;

		Total = Total + Question_Score;
		cout << "Score = " << Question_Score
			<< " out of "
			<< Question_Score
			<< "!" << endl;
		cout << endl;
	}

	
	else {
		cout << endl;
		cout << "Wrong !" << endl;
		cout << "Score = 0"
			<< " out of "
			<< Question_Score
			<< "!" << endl;
		cout << "Correct answer = "
			<< Correct_Answer
			<< "." << endl;
		cout << endl;
	}
}








