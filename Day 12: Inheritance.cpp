#include <iostream>
#include <vector>

using namespace std;

class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
    
    Student (string firstName,string lastName,int Id ,vector<int>score):Person(firstName,lastName,Id){
        testScores=score;
        
    }
    
    char calculate(){
       long long sum=0;
       for ( auto i:testScores){
           sum+=i;
       } 
       int avg=sum/testScores.size();
       
      if ( avg<40) return 'T';
      if ( avg<55) return 'D';
      if ( avg<70) return 'P';
      if ( avg<80) return 'A';
      if ( avg<90) return 'E';
      return 'O';
    }
  
  
  
  int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
