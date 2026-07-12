#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
#include <string>

using namespace std;


// Rocket Status
enum RocketStatus
{
    READY,
    LAUNCHING,
    ORBIT,
    RETURNING,
    LANDED,
    MAINTENANCE
};


// Rocket Stage
struct RocketStage
{
    string name;
    double fuel;


    RocketStage(string n, double f)
    {
        name = n;
        fuel = f;
    }
};


// Mission Data
struct Mission
{
    string destination;
    int priority;


    Mission(string d, int p)
    {
        destination = d;
        priority = p;
    }
};



// Reusable Rocket Class
class ReusableRocket
{

private:

    string rocketName;

    RocketStatus status;

    double totalFuel;

    int launches;

    stack<RocketStage> stages;

    queue<Mission> missions;


public:


    ReusableRocket(string name)
    {
        rocketName = name;

        status = READY;

        totalFuel = 100;

        launches = 0;
    }



    // Add rocket stage
    void addStage(string name, double fuel)
    {
        stages.push(
            RocketStage(name,fuel)
        );
    }



    // Add mission
    void addMission(
        string destination,
        int priority
    )
    {
        missions.push(
            Mission(destination,priority)
        );
    }




    // Launch algorithm
    void launch()
    {

        if(status != READY)
        {
            cout<<"Rocket unavailable\n";
            return;
        }


        status = LAUNCHING;


        cout
        << rocketName
        <<" launching 🚀\n";


        launches++;


        while(!stages.empty())
        {

            cout
            <<"Using stage: "
            <<stages.top().name
            <<endl;


            stages.pop();

        }


        status = ORBIT;


        cout
        <<"Reached orbit 🌎\n";

    }




    // Landing recovery
    void land()
    {

        if(status == ORBIT)
        {

            cout
            <<"Returning booster...\n";


            status = RETURNING;


            cout
            <<"Landing complete 🛬\n";


            status = LANDED;

        }

    }




    // Refurbish rocket
    void refurbish()
    {

        if(status == LANDED)
        {

            cout
            <<"Rocket refurbished\n";


            totalFuel = 100;


            status = READY;

        }

    }



    // Show data
    void display()
    {

        cout<<"\n===== ROCKET DATA =====\n";

        cout
        <<"Name: "
        <<rocketName
        <<endl;


        cout
        <<"Launches: "
        <<launches
        <<endl;


        cout
        <<"Fuel: "
        <<totalFuel
        <<"%"<<endl;

    }

};



// Rocket Fleet Database
class RocketFleet
{

private:

    vector<ReusableRocket> rockets;


    unordered_map<string,int> launchHistory;


public:


    void addRocket(
        ReusableRocket rocket
    )
    {
        rockets.push_back(rocket);
    }


    void recordLaunch(
        string rocket
    )
    {
        launchHistory[rocket]++;
    }


    void showFleet()
    {

        cout
        <<"\nFleet Size: "
        <<rockets.size()
        <<endl;

    }

};



int main()
{

    ReusableRocket starship(
        "Mars Starship"
    );


    // Build rocket

    starship.addStage(
        "Super Heavy Booster",
        100
    );


    starship.addStage(
        "Starship Upper Stage",
        80
    );



    // Mission

    starship.addMission(
        "Moon",
        1
    );


    starship.launch();

    starship.land();

    starship.refurbish();


    starship.display();



    return 0;
}
