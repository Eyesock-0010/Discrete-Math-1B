#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

	void conjunction(int q,int p){
		if( q == 1 && p == 1 )	cout<<" p ^ q = true";
		else cout<< " p ^ q = false";
		cout << "\nNOTE: Conjunction. The conjunction p ^ q are true if and only if p and q are both true";
	}
	
	void disjunction(int q,int p){
		if( q == 0 && p == 0) cout<<" p or q = false";
		else cout<< " p or q = true";
		cout << "\nNOTE: Disjunction. The disjunction  p or q it true if  p and q are both true, or one of them is true";	
	}
	
	void negation(int q){
		if(q==1) cout << " ~q= false";
		else cout<<" ~q=true";	
		cout<<"\nNOTE: Negation. The negation not q means that the value is the opposite of the original value";
		}
		
	void conditional(int q,int p){
		if(p== 1 && q== 0) cout <<"q-->p is false";
		else cout<<"q--p is true";
		cout<<"\nNOTE: Conditional. The conditional q then p, written q-->p is false if q is true and p is false";
		}
		
	void biconditional(int q,int p){
		if((p==1 && q==1)||(p==0 && q==0)) cout << " The Biconditional p<-->q is true ";
		else cout << " The Biconditional p<-->q is false ";
		cout<<"\nNOTE: The Biconditional p<-->q is true if both have the same value";
		}

main(){
	
	int num,q=0,p=0;
	cout<<"1=True , 0=False"<<endl;
	for(;;){
		cout<< "enter a value for q: ";
		cin>>q;
		cout<< "enter a value for p: ";
		cin>>p;
		if((p==1||p==0) && (q==1||q==0)) break;
		else cout<<"intput only 1 or 0"<<endl;
	}
	cout<<"Choose a number \n 1.Conjunction	 2.Disjunction  3.Negation  4.Conditional  5.Biconditional  6.Exit"<<endl;
	for(;;){
		cin >> num;
		if(num<1 || num>6)cout <<"Enter a number from one 1-6"<<endl;
		else break;
	}
	switch(num){
		case 1: conjunction(q,p); break;
		case 2: disjunction(q,p); break;
		case 3: negation(q); break;
		case 4: conditional(q,p); break;
		case 5: biconditional(q,p); break;
		case 6: cout << "Press any Key";
	}
	
}
