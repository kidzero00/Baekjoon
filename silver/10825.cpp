#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct P{
	string name;
	int kr;
	int en;
	int math;
};

bool compare(P p1,P p2){
	if(p1.kr == p2.kr){
		if(p1.en == p2.en){
			if(p1.math == p2.math){
				return p1.name < p2.name; //¿À¸§  
			}
			else return p1.math > p2.math;//³»¸²  
		}
		else return p1.en < p2.en; //¿À¸§  
	}
	else return p1.kr > p2.kr; //³»¸²  
}

int main(){
	int n;
	cin >> n;
	P p[n];
	for(int i=0; i<n; i++){
		cin >> p[i].name >> p[i].kr >> p[i].en >> p[i].math;
	}
	sort(p,p+n,compare);
	for(int i=0; i<n; i++){
		cout << p[i].name << "\n";
	}

	
}

//실4, 국영수
