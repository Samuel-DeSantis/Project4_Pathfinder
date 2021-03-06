#include "exceptions.h"
#include "pathfinder.h"
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <queue>

using namespace std;

//queue
queue<int> s;

//Globals
int rows = 0;
int columns = 0;
const int SIZE = 10000;
int n = 1;
int items[SIZE];
int rank[SIZE];
int elements[SIZE];
int e = 0;
int a, b, Nr, Nc;

//Functions
int Start();
int Sampling(int items[], int n);
int DisjointFind(int elements, int rank[], int a);
int DisjointUnion();
int MazeGenerate(int Nr, int Nc);
int MazeSolve();

int main(){
    Start();
    Sampling(items, n);
    //DisjointFind(elements[], rank[], a);
    //DisjointUnion();
    //MazeGenerate(Nr, Nc);
    //MazeSolve();
    return 0;
}
int Start(){
    cout << "Welcome to the pathfinder!\n"
         << "\nPlease enter the Rows and Columns of the Maze (50x50max): ";
    cin >> rows >> columns;

    int q = 0;

    //do
    while(q != 1){
        if (rows > 50 | columns > 50){
            cout << "\nEntry to large. Please input new parameters: ";
            cin >> rows >> columns;
        }
        else{
            cout << "\nRows: " << rows << " Columns: " << columns << endl;
            q = 1;
        }
    }
    return rows, columns;
}
int Sampling(int items[], int n){
    int i = 0;
    int e = 0;

    i = rand() % n;
    e = items[i];
    --n;
    items[i] = items[n];
    return e;
}
/*int DisjointFind(int elements[], int rank[], int a){
    if (elements[a] != a){
        //elements[a] = DisjointFind(elements[a])
    }
    return elements[a];
}*/
/*int DisjointUnion(){
    a = DisjointFind(a);
    b = DisjointFind(b);

    if (a != b){
        if (rank[a] > rank[b]){
            elements[a] = b;
        }
        else{
            if (rank[a] = rank[b]){
                rank[a] = rank[a] + 1;
            }
            elements[b] = a;
        }
    }
    return 0;
}*/
/*int MazeGenerate(int Nr, int Nc){
    int i = 0;
    for (int r = 0; r < Nc -1; ++r){
        for (int c = 0; c < Nc -1; ++c){
            maze[r][c] = 15
        }
    }
    nSum = Nr*Nc;
    nElements = 4*Nr*Nc;
    //Ds = DisjointSet(nSum);
    //Sampler(nElements);

    i = 0;
    while (i < nSum -1){
        do{
            do{
                //e = Sampler.getSample();
            }
            while();

        }
        while();
        //DisjointUnion(R1, R2);
        ++i;
    }
    return 0;
}*/
/*int MazeSolve(){
    s.push()
    //Mark as visited

    return 0;
}*/


//===========TEST LINES==========
//TEST LINE
//cout << "MAIN - Rows: " << rows << " Columns: " << columns << endl;
