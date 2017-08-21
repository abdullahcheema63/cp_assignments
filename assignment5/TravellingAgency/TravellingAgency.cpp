#include <vector>
#include <iostream>
#include <string>
#include "Hotel.h"
#include "Transport.h"
#include "CombinedOffers.h"
#include "TravelKit.h"
#include "TravelOption.h"
using namespace std;


int main()
{
  Transport transp1("Travel by train", 50.0);
  Transport transp2("Travel by air", 50.0, true);

  Hotel hotel1("Hotel 3* : Les Amandiers ", 40.0, 5, 100.0);
  Hotel hotel2("Hotel 4* : Ambassador Plazza  ", 100.0, 2, 250.0);

  CombinedOffers combi("Hotel 4* : Ambassador Plazza and travel by air",
                       100.0, 2, 250.0, true);

  TravelKit kit1("Zurich", "Paris");
  kit1.AddOption(transp1);
  kit1.AddOption(hotel1);
  cout << kit1 << endl;

  TravelKit kit2("Zurich", "New York");
  kit2.AddOption(transp2);
  kit2.AddOption(hotel2);
  cout << kit2 << endl;

  TravelKit kit3("Zurich", "New York");
  kit3.AddOption(combi);
  cout << kit3 << endl;

  kit1.Cancel();
  kit2.Cancel();
  cout << kit1 << endl;
  cout << kit2 << endl;

  return 0;
}
