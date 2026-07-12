#include <iostream>
#include <list>
using namespace std;


class LRUCache {


private:

    list<int> cache;


public:


    void access(int page){

        cache.remove(page);

        cache.push_front(page);
    }



    void display(){

        for(int item: cache)

            cout<<item<<" ";
    }
};



int main(){

    LRUCache cache;


    cache.access(1);
    cache.access(2);
    cache.access(3);

    cache.access(1);


    cache.display();

}
