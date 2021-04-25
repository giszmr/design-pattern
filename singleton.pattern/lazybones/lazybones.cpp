#include <iostream>
#include "lazybones.h"

MySingleton* MySingleton::getInstance()
{
	if(m_pInstance == NULL)
	{
		m_pInstance = new MySingleton();
		printf("new MySingleton\n");
	}
	printf("return m_pInstance\n");
	return m_pInstance;
}
