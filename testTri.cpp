#include "tri.tpp"


int main(){
	int a = 9;
	int b = 50;
	
	int t1[2] = {100,200};
	string t2[2] = {"hello","world"};
	 
	cout << "Avant Pérmutation" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	printVector(t1, 2, "[", ";", "]");
	printVector(t2, 2);
	cout << endl;
	
	permut(a, b);
	permut(t1[0], t1[1]);
	permut(t2[0], t2[1]);
	
	
	cout << "Après Pérmutation" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	printVector(t1, 2, "[", ";", "]");
	printVector(t2, 2);

	cout << endl;
	
	int* t3 = new int[10];
	t3 = random<int>(10, 0, 20);
	cout << "Avant le tri: ";
	printVector(t3, 10, "[", ";", "]");
	cout << "Après le Tri Bulle : ";
	triBulle(t3, 10);
	printVector(t3, 10, "[", ";", "]");
	
	cout << endl;
	
	int* t4 = new int[10];
	t4 = random<int>(10, -20, 20);
	cout << "Avant le tri: ";
	printVector(t4, 10, "[", ";", "]");
	cout << "Après le Tri par Selection : ";
	triParSelection(t4, 10);
	printVector(t4, 10, "[", ";", "]");
	
	cout << endl;
	
	float* t5 = new float[10];
	t5 = random<float>(10, -100.0, 100.0);
	cout << "Avant le tri: ";
	printVector(t5, 10, "[", ";", "]");
	cout << "Après le Tri par Insertion : ";
	triParInsertion(t5, 10);
	printVector(t5, 10, "[", ";", "]");
	
	
	cout << endl;
	
	float* t6 = new float[10];
	t6 = random<float>(10, -20.0, 20.0);
	cout << "Avant le tri: ";
	printVector(t6, 10, "[", ";", "]");
	cout << "Après le Tri par Fusion : ";
	triParFusion(t6, 10);
	printVector(t6, 10, "[", ";", "]");
	
	cout << endl;
	
	float* t7 = new float[10];
	t7 = random<float>(10, -100.0, 100.0);
	cout << "Avant le tri: ";
	printVector(t7, 10, "[", ";", "]");
	cout << "Après le Tri Rapide: ";
	triRapide(t7, 10);
	printVector(t7, 10, "[", ";", "]");
	
	cout << endl;
	
	string* t8 = new string[5];
	t8 = random<string>(5, 1, 5);
	cout << "Avant le tri: ";
	printVector(t8, 5);
	cout << "Après le Tri Bulle: ";
	triBulle(t8, 5);
	printVector(t8, 5);
	
	cout << endl;
	
	string* t9 = new string[5];
	t9 = random<string>(5, 1, 6);
	cout << "Avant le tri: ";
	printVector(t9, 5);
	cout << "Après le Tri par Selection: ";
	triParSelection(t9, 5);
	printVector(t9, 5);
	
	cout << endl;
	
	string* t10 = new string[5];
	t10 = random<string>(5, 1, 8);
	cout << "Avant le tri: ";
	printVector(t10, 5);
	cout << "Après le Tri par Insertion(: ";
	triParInsertion(t10, 5);
	printVector(t10, 5);
	
	cout << endl;
	
	string* t11 = new string[5];
	t11 = random<string>(5, 1, 7);
	cout << "Avant le tri: ";
	printVector(t11, 5);
	cout << "Après le Tri par Fusion: ";
	triParFusion(t11, 5);
	printVector(t11, 5);
	
	cout << endl;
	
	string* t12 = new string[5];
	t12 = random<string>(5, 1, 5);
	cout << "Avant le tri: ";
	printVector(t12, 5);
	cout << "Après le Tri Rapide: ";
	triRapide(t12, 5);
	printVector(t12, 5);
	
	cout << endl;
	
	string t13[] = {"oussama","rabie","meriem","oumaima","israe"};
	cout << "Avant le tri: ";
	printVector(t13, 5);
	cout << "Après le Tri Bulle: ";
	triBulle(t13, 5);
	printVector(t13, 5);
	
	cout << endl;
	
	string t14[] = {"oussama","rabie","meriem","oumaima","israe"};
	cout << "Avant le tri: ";
	printVector(t14, 5);
	cout << "Après le Tri par Selection: ";
	triParSelection(t14, 5);
	printVector(t14, 5);
	
	cout << endl;
	
	string t15[] = {"oussama","rabie","meriem","oumaima","israe"};
	cout << "Avant le tri: ";
	printVector(t15, 5);
	cout << "Après le Tri par Insertion(: ";
	triParInsertion(t15, 5);
	printVector(t15, 5);
	
	cout << endl;
	
	string t16[] = {"oussama","rabie","meriem","oumaima","israe"};
	cout << "Avant le tri: ";
	printVector(t16, 5);
	cout << "Après le Tri par Fusion: ";
	triParFusion(t16, 5);
	printVector(t16, 5);
	
	cout << endl;
	
	string t17[] = {"oussama","rabie","meriem","oumaima","israe"};
	cout << "Avant le tri: ";
	printVector(t17, 5);
	cout << "Après le Tri Rapide: ";
	triRapide(t17, 5);
	printVector(t17, 5);

}
