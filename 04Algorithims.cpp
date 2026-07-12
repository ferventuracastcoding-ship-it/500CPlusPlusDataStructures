#include <iostream>
#include <vector>
#include <string>

using namespace std;


// Algorithm Information
struct Algorithm
{
    string name;
    string category;
    string timeComplexity;
    string application;
};


// Algorithm Database
class AlgorithmDatabase
{

private:

    vector<Algorithm> algorithms;


public:

    void addAlgorithm(Algorithm algo)
    {
        algorithms.push_back(algo);
    }


    void display()
    {

        cout << "\n===== TOP 20 ALGORITHM DATABASE 2026 =====\n";


        for(auto a : algorithms)
        {

            cout << "\nAlgorithm: "
                 << a.name;

            cout << "\nCategory: "
                 << a.category;

            cout << "\nComplexity: "
                 << a.timeComplexity;

            cout << "\nUsed For: "
                 << a.application;

            cout << "\n---------------------------\n";
        }

    }

};



int main()
{

    AlgorithmDatabase database;



    database.addAlgorithm(
        {
            "A* Search",
            "Pathfinding",
            "O(E)",
            "Robotics, games, autonomous navigation"
        }
    );


    database.addAlgorithm(
        {
            "Dijkstra Algorithm",
            "Graph Optimization",
            "O(E log V)",
            "Maps, networks, routing"
        }
    );


    database.addAlgorithm(
        {
            "Dynamic Programming",
            "Optimization",
            "Varies",
            "AI, finance, scheduling"
        }
    );


    database.addAlgorithm(
        {
            "Fast Fourier Transform (FFT)",
            "Mathematics",
            "O(n log n)",
            "Signal processing, AI, audio"
        }
    );


    database.addAlgorithm(
        {
            "QuickSort",
            "Sorting",
            "O(n log n)",
            "Large data sorting"
        }
    );


    database.addAlgorithm(
        {
            "Merge Sort",
            "Sorting",
            "O(n log n)",
            "Stable data processing"
        }
    );


    database.addAlgorithm(
        {
            "Binary Search",
            "Searching",
            "O(log n)",
            "Databases and lookup systems"
        }
    );


    database.addAlgorithm(
        {
            "Hashing",
            "Data Retrieval",
            "O(1) Average",
            "Security, databases, caching"
        }
    );


    database.addAlgorithm(
        {
            "Kruskal Algorithm",
            "Minimum Spanning Tree",
            "O(E log E)",
            "Network design"
        }
    );


    database.addAlgorithm(
        {
            "Prim Algorithm",
            "Graph Optimization",
            "O(E log V)",
            "Infrastructure planning"
        }
    );


    database.addAlgorithm(
        {
            "Kalman Filter",
            "Sensor Fusion",
            "O(n)",
            "Robotics, spacecraft navigation"
        }
    );


    database.addAlgorithm(
        {
            "BFS",
            "Graph Traversal",
            "O(V+E)",
            "Networks and AI search"
        }
    );


    database.addAlgorithm(
        {
            "DFS",
            "Graph Traversal",
            "O(V+E)",
            "Maze solving and analysis"
        }
    );


    database.addAlgorithm(
        {
            "Gradient Descent",
            "Machine Learning",
            "Iterative",
            "Training neural networks"
        }
    );


    database.addAlgorithm(
        {
            "Neural Architecture Search",
            "AI Optimization",
            "Variable",
            "Designing neural networks"
        }
    );


    database.addAlgorithm(
        {
            "Transformer Attention Algorithm",
            "AI",
            "O(n²)",
            "Large language models"
        }
    );


    database.addAlgorithm(
        {
            "RANSAC",
            "Computer Vision",
            "O(n)",
            "Robotics vision systems"
        }
    );


    database.addAlgorithm(
        {
            "PageRank",
            "Graph Ranking",
            "Iterative",
            "Search engines"
        }
    );


    database.addAlgorithm(
        {
            "Bloom Filter",
            "Probabilistic Data Structure",
            "O(1)",
            "Big data systems"
        }
    );


    database.addAlgorithm(
        {
            "Monte Carlo Simulation",
            "Simulation",
            "Variable",
            "Physics, finance, AI"
        }
    );


    database.display();


    return 0;
}
