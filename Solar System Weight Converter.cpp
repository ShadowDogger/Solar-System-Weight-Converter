#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
int main() {
  int FightingPlanet;
   int weight;
   int EarthWeight;
   string rerun;
   do {
   
  cout << "What is your weight on Earth?(In Pounds)\n";
  cin >> EarthWeight;
  if (EarthWeight == false) {
  	cout << "Please enter a weight\n";
  	system("pause");
  	return 0;
  	
  }
  cout << "Enter a number for the planet you want to see your weight on\n";
  cout << "1 - Venus\n" << "2 - Mars\n" << "3 - Jupiter\n" << "4 - Saturn\n" << "5 - Uranus\n" << "6 - Neptune\n";
  cin >> FightingPlanet;
  if (FightingPlanet == false || FightingPlanet > 6 || FightingPlanet < 1) {
  	cout << "Please choose one of the given choices\n";
  	system("pause");
  	return 0;
  	
  }
  
  
  switch (FightingPlanet) {
    
    case  1 : (FightingPlanet == 1);
    weight = EarthWeight * 0.78;
cout << "Your weight on Venus is " << weight <<" lbs.\n";
   break;
  case  2 : (FightingPlanet == 2); 
  weight = EarthWeight * 0.39;
cout << "Your weight on Mars is " << weight <<" lbs.\n";
  break;
     case 3 : (FightingPlanet == 3); 
 weight = EarthWeight * 2.65;
cout << "Your weight on Jupiter is " << weight <<" lbs.\n";
  break;
  case 4 :(FightingPlanet == 4); 
  
weight =  EarthWeight * 1.17;
cout << "Your weight on Saturn is " << weight <<" lbs.\n";
  break;
  case 5 : (FightingPlanet == 5);
 weight = EarthWeight * 1.05;
cout << "Your weight on Uranus is " << weight <<" lbs.\n";
  break;
  case 6 : (FightingPlanet == 6); 
  weight = EarthWeight * 1.23;
cout << "Your weight on Neptune is " << weight <<" lbs.\n";
  break;
  default:
  	cout << "Please choose one of the given choices\n";
}

cout << "New Calculation? (yes/no) \n";
cin >> rerun;
	
  }
  
while (rerun == "yes"|| rerun == "Y" || rerun == "Yes" || rerun == "y"); 
  
  
  
  
  system("pause");
}
