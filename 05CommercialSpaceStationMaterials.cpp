#include <iostream>
#include <vector>
#include <string>

using namespace std;


// Space Station Material
struct SpaceMaterial
{
    string name;
    string category;
    double density;
    double strengthMPa;
    double radiationProtection;
    double temperatureRange;
    string application;
};


// Space Station Component
struct StationComponent
{
    string name;
    string material;
    string purpose;
    double mass;
};


// Commercial Space Station Materials Database
class SpaceStationMaterialDatabase
{

private:

    vector<SpaceMaterial> materials;
    vector<StationComponent> components;


public:


    void addMaterial(SpaceMaterial material)
    {
        materials.push_back(material);
    }


    void addComponent(StationComponent component)
    {
        components.push_back(component);
    }


    void displayDatabase()
    {

        cout << "\n===== COMMERCIAL SPACE STATION MATERIAL DATABASE =====\n";


        cout << "\nMaterials:\n";


        for(auto m : materials)
        {
            cout << "\nMaterial: " << m.name;
            cout << "\nCategory: " << m.category;
            cout << "\nDensity: " << m.density << " g/cm3";
            cout << "\nStrength: " << m.strengthMPa << " MPa";
            cout << "\nRadiation Shielding: "
                 << m.radiationProtection << "%";
            cout << "\nTemperature Range: "
                 << m.temperatureRange << " C";
            cout << "\nApplication: "
                 << m.application << "\n";
        }



        cout << "\nStation Components:\n";


        for(auto c : components)
        {
            cout << "\nComponent: " << c.name;
            cout << "\nMaterial: " << c.material;
            cout << "\nPurpose: " << c.purpose;
            cout << "\nMass: " << c.mass << " kg\n";
        }

    }

};



int main()
{

    SpaceStationMaterialDatabase stationDB;



    // Future Space Station Materials


    stationDB.addMaterial(
        {
            "Aluminum-Lithium Alloy",
            "Lightweight Aerospace Metal",
            2.7,
            450,
            40,
            150,
            "Pressure modules and structural frames"
        }
    );


    stationDB.addMaterial(
        {
            "Titanium Alloy",
            "High Strength Metal",
            4.5,
            900,
            60,
            600,
            "Docking ports and load-bearing joints"
        }
    );


    stationDB.addMaterial(
        {
            "Carbon Fiber Composite",
            "Advanced Composite",
            1.7,
            3500,
            30,
            250,
            "Large station trusses and solar structures"
        }
    );


    stationDB.addMaterial(
        {
            "Graphene Composite",
            "Nanomaterial",
            1.2,
            5000,
            70,
            400,
            "Future lightweight radiation-resistant structures"
        }
    );


    stationDB.addMaterial(
        {
            "Kevlar Shielding Layer",
            "Impact Protection",
            1.4,
            3000,
            80,
            200,
            "Micrometeorite protection"
        }
    );


    stationDB.addMaterial(
        {
            "Water Radiation Shield",
            "Life Support Material",
            1.0,
            0,
            90,
            100,
            "Cosmic radiation protection around crew areas"
        }
    );


    stationDB.addMaterial(
        {
            "Ceramic Thermal Tiles",
            "Thermal Protection",
            2.2,
            300,
            50,
            3000,
            "Heat protection panels"
        }
    );



    // Space Station Components


    stationDB.addComponent(
        {
            "Habitat Module",
            "Aluminum-Lithium Alloy",
            "Crew living area",
            15000
        }
    );


    stationDB.addComponent(
        {
            "Solar Power Truss",
            "Carbon Fiber Composite",
            "Energy generation support",
            5000
        }
    );


    stationDB.addComponent(
        {
            "Docking Adapter",
            "Titanium Alloy",
            "Spacecraft connection",
            2000
        }
    );


    stationDB.addComponent(
        {
            "Radiation Protection Wall",
            "Water Radiation Shield",
            "Crew safety",
            8000
        }
    );


    stationDB.displayDatabase();


    return 0;
}
