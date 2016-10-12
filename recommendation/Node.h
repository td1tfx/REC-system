#pragma once
class Node

{
private:
	float m_x, m_y, m_z;
public:
	Node();
	~Node();

	void setPos(int x, int y, int z) { m_x = x; m_y = y; m_z = z; }

	float& getX() { return m_x; }
	float& getY() { return m_y; }
	float& getZ() { return m_z; }
};

