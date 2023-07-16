#ifndef _SUBJECT_NODE_POSITIONER_H_
#define _SUBJECT_NODE_POSITIONER_H_
class nodePositioner {
private:
	int x = 0;
	int y = 0;
	int layer = 0;

public:
	int getX();
	int getY();
	int getLayer();

	void setX(int val);
	void setY(int val);
	void setLayer(int val);
};
#endif