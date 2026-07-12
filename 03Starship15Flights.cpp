#include <iostream>
#include <vector>
#include <string>

using namespace std;


// Engine information
struct Engine
{
    string name;
    int enginesUsed;
    double thrustMN;
};


// Flight data
struct Flight
{
    int flightNumber;
    string vehicle;
    string objective;
    double altitudeKm;
    double payloadTons;
    bool reachedOrbit;
    bool boosterRecovered;
    bool shipRecovered;
};


// Starship Program Database
class StarshipProgram
{

private:

    string programName;
    vector<Engine> engines;
    vector<Flight> flights;


public:

    StarshipProgram(string name)
    {
        programName = name;
    }


    void addEngine(Engine e)
    {
        engines.push_back(e);
    }


    void addFlight(Flight f)
    {
        flights.push_back(f);
    }


    void displayFlights()
    {
        cout << "\n===== " 
             << programName 
             << " =====\n";


        cout << "\nEngines:\n";

        for(auto e : engines)
        {
            cout << e.name
                 << " | Engines: "
                 << e.enginesUsed
                 << " | Thrust: "
                 << e.thrustMN
                 << " MN\n";
        }


        cout << "\nStarship Flights:\n";


        for(auto f : flights)
        {
            cout << "\nFlight " 
                 << f.flightNumber
                 << "\nVehicle: "
                 << f.vehicle
                 << "\nMission: "
                 << f.objective
                 << "\nAltitude: "
                 << f.altitudeKm
                 << " km"
                 << "\nPayload: "
                 << f.payloadTons
                 << " tons";


            cout << "\nOrbit: ";

            if(f.reachedOrbit)
                cout << "YES";
            else
                cout << "NO";


            cout << "\nBooster Recovery: ";

            if(f.boosterRecovered)
                cout << "YES";
            else
                cout << "NO";


            cout << "\nShip Recovery: ";

            if(f.shipRecovered)
                cout << "YES";
            else
                cout << "NO";


            cout << "\n--------------------\n";
        }

    }


    int totalSuccessfulFlights()
    {
        int count = 0;

        for(auto f : flights)
        {
            if(f.reachedOrbit)
                count++;
        }

        return count;
    }

};



int main()
{

    StarshipProgram starship(
        "Starship Orbital Flight History"
    );


    // Raptor Engines

    starship.addEngine(
        {
            "Raptor 2",
            33,
            0.75
        }
    );


    // 15 Mission Records

    starship.addFlight(
        {
            1,
            "Ship 24 / Booster 7",
            "First integrated flight test",
            39,
            0,
            false,
            false,
            false
        }
    );


    starship.addFlight(
        {
            2,
            "Ship 25 / Booster 9",
            "Hot staging and separation test",
            148,
            0,
            false,
            false,
            false
        }
    );


    starship.addFlight(
        {
            3,
            "Ship 28 / Booster 10",
            "Long duration orbital test",
            234,
            0,
            false,
            false,
            false
        }
    );


    starship.addFlight(
        {
            4,
            "Ship 29 / Booster 11",
            "Heat shield and reentry test",
            260,
            0,
            false,
            false,
            true
        }
    );


    starship.addFlight(
        {
            5,
            "Ship 30 / Booster 12",
            "Reusable flight demonstration",
            260,
            0,
            false,
            true,
            true
        }
    );


    // Future mission placeholders

    for(int i = 6; i <= 15; i++)
    {
        starship.addFlight(
            {
                i,
                "Future Starship Vehicle",
                "Orbital test mission",
                200,
                100,
                false,
                false,
                false
            }
        );
    }


    starship.displayFlights();


    cout << "\nSuccessful Orbital Missions: "
         << starship.totalSuccessfulFlights()
         << endl;


    return 0;
}0
