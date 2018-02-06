
#include <iostream>
#include <cstdlib>

template <typename T>
class AUDS{
	public:
		AUDS(){
			initialSize=100;
			currentSize=0;
			data = new T[initialSize];
		}
		AUDS(const AUDS &other){
			int tmpLength;
			int tmpSize;
			int *tmp= new int[initialSize];
			for(int i=0; i<currentSize; i++){
				tmp[i]=data[i];	
			}
			data=other;
			other=tmp;
			
			tmpLength=initialSize;
			tmpSize=currentSize;
			initialSize=other.lenght();
			currentSize=other.size();
			other.setSize(tmpSize);
			other.setLength(tmpLength);
		
			
		}
		AUDS& operator=(AUDS other){
			int tmpLength;
			int tmpSize;
			int *tmp= new int[initialSize];
			for(int i=0; i<currentSize; i++){
				tmp[i]=data[i];	
			}
			data=other;
			other=tmp;
			
			tmpLength=initialSize;
			tmpSize=currentSize;
			initialSize=other.lenght();
			currentSize=other.size();
			other.setSize(tmpSize);
			other.setLength(tmpLength);
		
		}
		void setSize(int x){
			currentSize=x;
		}
		void setLength(int x){
			initialSize=x;
		}
				
		~AUDS(){
			delete[] data;
		}
		int size(){
			return currentSize;
		}
		int length(){
			return initialSize;
		}
		void push(T x){
			if(currentSize==initialSize){
				initialSize=initialSize * 1.5;
				int *tmp=new int[initialSize];
				for(int i=0; i<currentSize; i++){
					tmp[i]=data[i];
				}
				data=tmp;
			}
			data[currentSize]=x;
			currentSize=currentSize+1;
			
		}
		T pop(){
			if(currentSize==0){
				return 0;
			}
			int f = rand() % currentSize;
			int *tmp=new int[initialSize];
			currentSize=currentSize-1;
			for(int i=0; i<currentSize; i++){
				if(i==f){
					tmp[i]=data[currentSize];
				}else{
					tmp[i]=data[i];
				}
				data=tmp;

			}		
			return 0;
		}			
			
	private:
		int initialSize;
		int currentSize;
		T* data;
		
};
