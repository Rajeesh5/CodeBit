#pragma once
#ifndef REQUEST_H
#define REQUEST_H


#include "AbsRequest.h"
#include <string>


typedef void(*logFunction)(std::string text);

class Request : public AbstractRequest {
	int value;
	logFunction outFnc;
public: void setValue(int value) { this->value = value; }
		void setOutput(logFunction fnc) { outFnc = fnc; }
		void process();
		void finish();
};

#endif