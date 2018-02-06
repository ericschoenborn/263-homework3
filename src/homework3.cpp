#include "homework3.h"


int main(int argc, char** argv){
	AUDS<int> s;
	AUDS<int> a;
	std::cout<<s.size()<<std::endl;
	std::cout<<a.size()<<std::endl;
	a.pop();
	for( int i=0; i< 110; i++){
		s.push(i);
	}

	std::cout<<s.size()<<std::endl;

	std::cout<<"here"<<std::endl;
	std::cout<<s.size()<<std::endl;
	std::cout<<s.length()<<std::endl;
	s.pop();
	s.pop();
	s.pop();
	std::cout<<s.size()<<std::endl;
	std::cout<<s.length()<<std::endl;
}
