// Blockchain.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "Hasheur.h"
#include <iostream>

int main()
{

	//Hasheur hasheur;
	std::string input = "grape";
	std::string output = Hasheur::hash(input)  /*hasheur.hash(input)*/;

	std::string verify = "0f78fcc486f5315418fbf095e71c0675ee07d318e5ac4d150050cd8e57966496";

	std::cout << output << std::endl;

	//int flag = hasheur.checkHash(input, verify);

	Hasheur::checkHash(input, verify) ? std::cout << "Hash is valid" << std::endl
		: std::cout << "Hash is not valid" << std::endl;
	//std::cout << flag << std::endl;

	system("pause");

    return 0;
}

