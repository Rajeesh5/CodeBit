#pragma once
#ifndef WORKER_H
#define	wORKER_H

#include "AbsRequest.h"
#include <condition_variable>
#include <mutex>
#include <chrono>

class Worker {
	std::condition_variable cv;
	std::mutex mtx;
	std::unique_lock<std::mutex> ulock;
	AbstractRequest* request;
	bool running;
	bool ready;
public:
	Worker() {
		running = true; ready = false; 
		ulock =	std::unique_lock<std::mutex>(mtx);
	}
	void run();
	void stop() { running = false; }
	void setRequest(AbstractRequest* request) {
		this->request = request;
		ready = true;
	}
	void getCondition(std::condition_variable* &cv);
};

#endif // !WORKER_H__

