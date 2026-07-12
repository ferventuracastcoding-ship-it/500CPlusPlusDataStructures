#include <iostream>
#include <vector>
#include <string>

using namespace std;


// ==========================================
// Space Station Material Engineering Record
// ==========================================
struct SpaceMaterial
{
    string name;                    // Material name
    string category;                // Metal, Composite, Ceramic, Shielding

    double density;                 // kg/m³ - how heavy the material is
    double tensileStrength;         // MPa - maximum pulling force before breaking
    double yieldStrength;           // MPa - stress before permanent deformation
    double thermalConductivity;     // W/mK - ability to transfer heat
    double meltingPoint;            // Celsius - temperature where material melts

    double radiationShielding;      // Percentage - protection from radiation
    double impactResistance;        // Percentage - micrometeorite protection

    double fatigueLife;             // Number of cycles before failure
    double corrosionResistance;     // Percentage - resistance to chemical damage

    string application;             // Where the material is used
};



// ==========================================
// Space Station Structural Component
// ==========================================
struct StationComponent
{
    string name;                    // Component name
    string material;                // Material used

    double mass;                    // kg - component weight
    double length;                  // meters - physical size
    double volume;                  // cubic meters - occupied space

    int operationalYears;           // Expected years in orbit
    int safetyFactor;               // Engineering safety multiplier

    bool tested;                    // Has passed testing

    string purpose;                 // Function of component
};



// ==========================================
// Commercial Space Station Database
// ==========================================
class SpaceStationMaterialDatabase
{

private:

    vector<SpaceMaterial> materials;
    vector<StationComponent> components;


public:


    // Add new material
    void addMaterial(SpaceMaterial material)
    {
        materials.push_back(material);
    }


    // Add station component
    void addComponent(StationComponent component)
    {
        components.push_back(component);
    }



    // Display engineering database
    void display()
    {

        cout << "\n===== COMMERCIAL SPACE STATION MATERIAL DATABASE =====\n";


        cout << "\n----- MATERIALS -----\n";


        for(auto m : materials)
        {

            cout << "\nMaterial: "
                 << m.name;

            cout << "\nCategory: "
                 << m.category;

            cout << "\nDensity: "
                 << m.density
                 << " kg/m3";

            cout << "\nTensile Strength: "
                 << m.tensileStrength
                 << " MPa";

            cout << "\nYield Strength: "
                 << m.yieldStrength
                 << " MPa";

            cout << "\nThermal Conductivity: "
                 << m.thermalConductivity
                 << " W/mK";

            cout << "\nMelting Point: "
                 << m.meltingPoint
                 << " C";

            cout << "\nRadiation Shielding: "
                 << m.radiationShielding
                 << "%";

            cout << "\nImpact Resistance: "
                 << m.impactResistance
                 << "%";

            cout << "\nFatigue Life: "
                 << m.fatigueLife
                 << " cycles";

            cout << "\nCorrosion Resistance: "
                 << m.corrosionResistance
                 << "%";

            cout << "\nApplication: "
                 << m.application
                 << "\n";
        }



        cout << "\n----- STATION COMPONENTS -----\n";


        for(auto c : components)
        {

            cout << "\nComponent: "
                 << c.name;

            cout << "\nMaterial: "
                 << c.material;

            cout << "\nMass: "
                 << c.mass
                 << " kg";

            cout << "\nLength: "
                 << c.length
                 << " meters";

            cout << "\nVolume: "
                 << c.volume
                 << " m3";

            cout << "\nOperational Life: "
                 << c.operationalYears
                 << " years";

            cout << "\nSafety Factor: "
                 << c.safetyFactor
                 << "x";

            cout << "\nTesting Status: ";

            if(c.tested)
                cout << "Passed";
            else
                cout << "Pending";


            cout << "\nPurpose: "
                 << c.purpose
                 << "\n";
        }

    }

};





int main()
{

    SpaceStationMaterialDatabase stationDB;



    // ==========================================
    // MATERIAL DATABASE ENTRIES
    // ==========================================


    stationDB.addMaterial(
    {
        "Aluminum Lithium Alloy",
        "Lightweight Aerospace Metal",

        2700,      // kg/m3 density
        450,       // MPa tensile strength
        300,       // MPa yield strength
        150,       // W/mK thermal conductivity
        600,       // Celsius melting point

        40,        // % radiation shielding
        70,        // % impact resistance

        1000000,   // fatigue cycles
        90,        // % corrosion resistance

        "Habitat pressure modules"
    });



    stationDB.addMaterial(
    {
        "Carbon Fiber Composite",
        "Advanced Composite",

        1750,      // kg/m3 density
        3500,      // MPa tensile strength
        2500,      // MPa yield strength
        10,        // W/mK thermal conductivity
        300,       // Celsius temperature limit

        30,        // % radiation shielding
        95,        // % impact resistance

        5000000,   // fatigue cycles
        95,        // % corrosion resistance

        "Station trusses and solar arrays"
    });



    stationDB.addMaterial(
    {
        "Titanium Alloy",
        "High Strength Metal",

        4500,      // kg/m3 density
        900,       // MPa tensile strength
        800,       // MPa yield strength
        20,        // W/mK thermal conductivity
        1660,      // Celsius melting point

        60,        // % radiation shielding
        90,        // % impact resistance

        3000000,   // fatigue cycles
        98,        // % corrosion resistance

        "Docking ports and structural joints"
    });





    // ==========================================
    // COMPONENT DATABASE
    // ==========================================


    stationDB.addComponent(
    {
        "Habitat Module",
        "Aluminum Lithium Alloy",

        15000,     // kg mass
        8,          // meters length
        200,        // cubic meters volume

        20,         // years operational life
        5,          // safety factor

        true,       // tested

        "Crew living environment"
    });



    stationDB.addComponent(
    {
        "Solar Power Truss",
        "Carbon Fiber Composite",

        5000,       // kg mass
        50,         // meters length
        80,         // cubic meters volume

        25,         // years operational life
        4,          // safety factor

        true,

        "Supports solar panels and power systems"
    });



    stationDB.display();


    return 0;
}
