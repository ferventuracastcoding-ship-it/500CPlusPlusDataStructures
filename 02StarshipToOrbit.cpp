#include <iostream>
#include <vector>
#include <string>

using namespace std;


// Rocket Engine
struct Engine
{
    string name;
    int count;
    double thrust;
};


// Spacecraft Material
struct Material
{
    string name;
    double weight;
};


// Mission Phase
struct MissionPhase
{
    string name;
    bool completed;
};


// Starship Mission Data Structure
class StarshipMission
{

private:

    string rocketName;
    double fuel;
    double payloadCapacity;

    vector<Engine> engines;
    vector<Material> materials;
    vector<MissionPhase> phases;


public:

    StarshipMission(string name)
    {
        rocketName = name;
        fuel = 1200;              // tons
        payloadCapacity = 150;    // tons
    }


    void addEngine(Engine e)
    {
        engines.push_back(e);
    }


    void addMaterial(Material m)
    {
        materials.push_back(m);
    }


    void addPhase(MissionPhase p)
    {
        phases.push_back(p);
    }


    void displayMission()
    {
        cout << "\n===== " << rocketName 
             << " Orbital Mission =====\n";


        cout << "\nFuel: "
             << fuel << " tons\n";


        cout << "Payload Capacity: "
             << payloadCapacity 
             << " tons\n";


        cout << "\nEngines:\n";

        for(auto e : engines)
        {
            cout << e.name
                 << " | Quantity: "
                 << e.count
                 << " | Thrust: "
                 << e.thrust
                 << " MN\n";
        }


        cout << "\nMaterials:\n";

        for(auto m : materials)
        {
            cout << m.name
                 << " | Weight: "
                 << m.weight
                 << " tons\n";
        }


        cout << "\nMission Phases:\n";

        for(auto p : phases)
        {
            cout << p.name
                 << " : ";

            if(p.completed)
                cout << "Complete\n";
            else
                cout << "Pending\n";
        }
    }


    double calculateOrbitEnergy()
    {
        double mass = fuel + payloadCapacity;

        return mass * 9.81 * 200000;
    }

};



int main()
{

    StarshipMission starship("SpaceX Starship Orbital Test Flight");


    // Engines

    starship.addEngine(
        {
            "Raptor Engine",
            33,
            0.73
        }
    );


    // Materials

    starship.addMaterial(
        {
            "Stainless Steel",
            120
        }
    );


    starship.addMaterial(
        {
            "Heat Shield Tiles",
            5
        }
    );


    starship.addMaterial(
        {
            "Carbon Composite Tanks",
            10
        }
    );


    // Mission Timeline

    starship.addPhase(
        {
            "Launch",
            true
        }
    );


    starship.addPhase(
        {
            "Booster Separation",
            true
        }
    );


    starship.addPhase(
        {
            "Orbital Insertion",
            false
        }
    );


    starship.addPhase(
        {
            "Reentry and Landing",
            false
        }
    );


    starship.displayMission();


    cout << "\nEstimated Orbit Energy: "
         << starship.calculateOrbitEnergy()
         << " Joules\n";


    return 0;
}
