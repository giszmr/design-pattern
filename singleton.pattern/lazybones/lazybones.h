#ifndef _LAZYBONES_H_
#define _LAZYBONES_H_

class MySingleton {
public:
	static MySingleton* getInstance();
private:
	MySingleton(){};
	static MySingleton* m_pInstance;
};

#endif
