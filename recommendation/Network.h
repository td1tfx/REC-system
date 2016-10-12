#pragma once
#include <vector>
#include "User.h"
#include "Cloud.h"
#include "Cloudlet.h"

using namespace std;
class Network
{
private:
	int __initGrid();

	Cloud m_cloud;
	vector<Cloudlet*> m_cloudlets;
	vector<User*> m_users;


public:
	Network();
	~Network();
};

