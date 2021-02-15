#include "Header.h"
#include <algorithm>
#include <vector>


class Interval {
public:
	Interval(int start, int end) {
		this->start = start;
		this->end = end;
	}
	friend ostream& operator <<(ostream& out, Interval& interval);
	int getStart() const{ return start; }
	int getEnd() const{ return end; }

private:
	int start = 0;
	int end = 0;
};


//Global funtion which is friend of Interval, so it can access
//private me
ostream& operator <<(ostream& out, Interval& interval) {
	out << "[" << interval.start << "," << interval.end << "] ";
	return out;
}

class MargeInterval {
public:
	static std::vector<Interval> marge(vector<Interval>& interval) {
		sort(interval.begin(), interval.end(), [](const Interval& x1, const Interval& x2)
			{return x1.getStart() < x2.getStart(); });

		std::vector<Interval> margedInterval;


	}
};

int main(int argc, char* argv[]) {
	std::vector<Interval> input = { {1, 3}, {7, 9}, {2, 5}, {5, 5} };
	//std::vector<Interval> input = { Interval(1, 3), Interval(2, 5), Interval(7, 9) };
	cout << "Merged intervals: ";
	
	for (auto interval : input) {
		cout << interval;
	}

	return 0;
}
