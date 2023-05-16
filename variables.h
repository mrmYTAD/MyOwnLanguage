#pragma once

#ifndef h
#define h
#endif;

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void variablesDeclaration() {

	unordered_map<string, int>variables;
	string name;
	int value = 0;

	int i = 0;
	while (i < 5) {
		int newVariable = i * 2; // create and declare a new variable
		std::cout << newVariable << std::endl;
		i++;
	}

}