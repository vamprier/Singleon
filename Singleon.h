#ifndef SINGLEON_H
#define SINGLEON_H


class Singleon
{
private:
	Singleon(void);
	Singleon(const Singleon&);
public:
	~Singleon(void);
private:
	static Singleon* m_Instance;
public:
	static Singleon* GetInstance()
	{	
		if ( m_Instance == 0x00)
		{
			m_Instance = new Singleon();
		}
		return m_Instance;
	}

};

#endif