/*
 * main.cc
 *
 *  Created on: 8 дек. 2020 г.
 *      Author: Anastasiya
 */
#include <iostream>
#include <sstream>
#include <random> //для псевдослучайных чисел
#include <ctime> // для инициализации генератора

int main ()
{
	int min=10, max=20,value,v,k;
	std:: minstd_rand gen(time(nullptr));
	value = min + gen() % (max-min+1);
	std::cout << " В куче "<< value <<" камней. Старт!"<<std::endl;
	while(value>0){
		std::cout <<"Сколько камней возьмешь?(1-3)"<< std::endl;
		std::string s;
		std::getline(std::cin,s);
		std::stringstream ss(s);
		ss>>v;

		if(ss.fail()){
			v=-1;
		}
					if(std::cin.eof()){
						std::cout<<"Упс:)"<<std::endl;
						return 1;
					}
					switch(v){
							case 1:{
								value=value-1;
								if(value==0){
									std::cout<<"Ты проиграл!"<<std::endl;
									return 0;
								}
								std:: minstd_rand gen(time(nullptr));
								k = 1 + gen() % (3-1+1);
								if(k>value){
									k=value;
								}
								value=value-k;
								std::cout<<"-1. Хожу я, беру "<< k<<" камней и в куче стало "<<value<<std::endl;
								if(value==0){
									std::cout<<"Я проиграл!"<<std::endl;
									return 0;
								}

							}break;
							case 2:{
								value=value-2;
								if(value==0){
									std::cout<<"Ты проиграл!"<<std::endl;
									return 0;
								}
								std:: minstd_rand gen(time(nullptr));
								k = 1 + gen() % (3-1+1);
								if(k>value){
									k=value;
								}
								value=value-k;
								std::cout<<"-2. Хожу я, беру "<< k<<" камней и в куче стало "<<value<<std::endl;
								if(value==0){
									std::cout<<"Я проиграл!"<<std::endl;
									return 0;
								}
								}break;
							case 3:{
								value=value-3;
								if(value==0){
									std::cout<<"Ты проиграл!"<<std::endl;
									return 0;
								}
								std:: minstd_rand gen(time(nullptr));
								k = 1 + gen() % (3-1+1);
								if(k>value){
									k=value;
								}
								value=value-k;
								std::cout<<"-3. Хожу я, беру "<< k<<" камней и в куче стало "<<value<<std::endl;
								if(value==0){
									std::cout<<"Я проиграл!"<<std::endl;
									return 0;
								}
								}break;
							case 0:std::cout<<"Пока:)"<<std::endl;break;
							default:std::cout<<"Пожалуйста, введи число от 1 до 3!!!"<<std::endl;break;
	}

}return 0;
}
