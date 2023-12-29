#include <iostream>
#include <ctime>

using namespace std;

template <typename T>
void permut(T &, T &);

template <typename T, typename U>
T* random(int ,U, U);

template <typename T>
T moy(T, int);

template <typename T>
void printVector(T *, int, string delim1="{", string sep=",", string delim2="}");

template <typename T>
void triBulle(T *, int);

template <typename T>
void triParSelection(T *, int);

template <typename T>
void triParInsertion(T *, int);


template <typename T>
void triParFusion(T *, int);

template <typename T>
void triRapide(T *, int);
