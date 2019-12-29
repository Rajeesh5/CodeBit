#include<iostream>
using namespace std;


class Text {
public:
	virtual void drow() = 0;
};

class SimpleText : public Text {
	int height, width;
	int noOfLine;
	int noOfChars;
public:
	SimpleText(int h, int w) :height(h),width(w),noOfLine(0),noOfChars(0){}
	void drow() {
		cout << "Simple text" << endl;
	}
};


class TextDecorator:public Text {
protected:
	Text * m_pText;
public:
	TextDecorator(Text *txt):m_pText(txt){ }
};


class HorizontalSlider : public TextDecorator {

public:
	HorizontalSlider(Text *txt):TextDecorator(txt){}
	void drow() {
		m_pText->drow();
		cout << "Text Decorated with Horizonal Slider\n";
	}
};

class VerticalSlider : public TextDecorator {
public:
	VerticalSlider(Text *txt) :TextDecorator(txt) {}
	void drow() {
		m_pText->drow();
		cout << "Text Decorated with virtical Slider\n";
	}

};


int main()
{

	Text *t1 = new SimpleText(10, 20);
	
	//Dynamically adding behaviour with adding char into text box.

	//while (ch=getchar()) {
		//t1->writeChar(ch);
		//t1->incrementTextCnt();
		//if(t1->getTxtCnt>80)
			t1 = new VerticalSlider(t1);		//Decorated With Vertical Bar
		//if(ch=='\n')
			t1 = new HorizontalSlider(t1);		//Decorated with Horizental Bar
	//} //EndlWhile


	
	

	t1->drow();

	getchar();
	return 0;
}