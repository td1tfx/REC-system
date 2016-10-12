#include "Network.h"



Network::Network()
{
}


Network::~Network()
{
}

int Network::__initGrid() {
	//int nodeNum = Config::getInstance()->getMaxRow()*Config::getInstance()->getMaxColumn();
	//m_nodes->resize(0);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			Node* t_node = new Node();
			t_node->setId(i * Config::getInstance()->getMaxColumn() + j);
			t_node->setPos(i * 10, j * 10, 0);
			t_node->getGWNum() = GW;
			t_node->initialPackage();
			//t_node->setRamdomRadios();
			m_nodes.push_back(t_node);
			if (t_node->isOuterNode()) {
				m_outerNodes.push_back(t_node);
			}
		}
	}
	m_nodes.at(GW)->getIsGW() = true;
	if (m_nodes.begin() != m_nodes.end()) {
		if (Config::getInstance()->isFullMod()) {
			m_inDataSize = m_nodes.size();
		}
		else {
			m_inDataSize = m_outerNodes.size();
		}
		m_inData = new double[m_inDataSize];
		memset(m_inData, 0, m_inDataSize * sizeof(m_inData));
		return m_nodes.size();
	}
	else return -1;
}
