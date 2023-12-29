#include "tri.hpp"

template <typename T>
void permut(T &a, T &b){
	T tmp = a;
	a = b;
	b = tmp;
}


template <typename T, typename U>
T* random(int n, U min, U max) {
    T* t = new T[n];
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < n; i++) {
	if constexpr (is_same_v<T, int>)  {
            *(t + i) = min + rand() % static_cast<int>(max - min + 1);
        } 
        else if constexpr (is_same_v<T, string>) {  
    		int length = min + rand() % static_cast<int>(max - min + 1);
        	string randomString;
		for (int i = 0; i < length; ++i) {   
			char randomChar = 'A' + rand() % 26; 
			randomString += randomChar;
		    }

        	*(t + i) = randomString; 
        }
        else {
            *(t + i) = min + static_cast<double>(rand()) / RAND_MAX * (max- min);
        }
    }

    return t;
}

template <typename T>
T moy(T* t, int n){
	T sum = *t;
	for(int i=1; i<n; i++){
		sum += *(t+i);
	}

	return sum / n;
	
}


template <typename T>
void printVector(T *t, int n, string delim1, string sep, string delim2){
	cout << delim1; 
	for(int i=0; i<n-1; i++){
		cout << *(t+i) << sep;
	}
	cout << *(t+n-1) << delim2 << endl;
}


template <typename T>
void triBulle(T *t, int n){
	bool sorted = false;
	do{
		sorted = true;
		for(int i=0; i<n-1; i++){
			if(*(t+i) > *(t+i+1)){
				permut(*(t+i), *(t+i+1));
				sorted = false;
			}
		}
	}while(!sorted);
}

template <typename T>
void triParSelection(T *t, int n){
	for(int i=0; i<n; i++){
		int imin = i;
		for(int j=i+1; j<n; j++){
			if(*(t+j) < *(t+imin)) imin = j;
		}
		if(imin != i) permut(*(t+i), *(t+imin));
	}

}



template <typename T>
void triParInsertion(T *t, int n){
	for(int i=1; i<n; i++){
		int vide = i;
		T tmp = *(t+i);
		for(int j=i-1; j>=0; j--){
			if(*(t+j) > tmp){
				*(t+j+1) = *(t+j);
				vide = j;
			}
			else break;
		} 
		*(t+vide) = tmp;
	}

} 





template <typename T>
void triParFusion(T *t, int n){
	if(n > 1){
		int n1 = n/2;
		int n2 = n - n1;
		
		T *t1 = new T[n1];
		T *t2 = new T[n2];
		
		for(int i=0; i<n1; i++) *(t1+i) = *(t+i);
		for(int i=0; i<n2; i++) *(t2+i) = *(t+i+n1);

		triParFusion(t1, n1);
		triParFusion(t2, n2);
		
		int i1 = 0, i2 = 0;
		for(int i=0; i<n; i++){
			if (i1 < n1 && (i2 >= n2 || t1[i1] <= t2[i2])) t[i] = t1[i1++] ;
			else t[i] = t2[i2++];
		}
	}
}

template <typename T>
void triRapide(T *t, int n){
	if(n > 1){
	 	T pivot; 
		int i1 = 0, i2 = 0;
		if constexpr (is_same_v<T, string>){
			pivot = *(t+n-1);	
		}
		else pivot = moy(t,n);
		
		T *t1 = new T[n];
		T *t2 = new T[n];
        	 
		for(int i=0; i<n; i++){
			if(t[i] <= pivot) t1[i1++] = t[i];
			else t2[i2++] = t[i]; 
		}
		
		if(i1 != 0 && i2 != 0){
			triRapide(t1, i1);
			triRapide(t2, i2);
		}
		
		for(int i=0; i<i1; i++){
			*(t+i) = *(t1+i);
		}
		for(int i=0; i<i2; i++){
			*(t+i+i1) = *(t2+i);
		}
		
	}
}

