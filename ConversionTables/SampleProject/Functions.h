#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

class BaseFunction
{
private:

protected:

public:
	float n, result;

	BaseFunction();
	virtual int Menu() = 0;
};

class Functions : public BaseFunction
{
private:

public:
	Functions();
	void Function1();
	void Function2();
	void Function3();
	void Function4();
	void Function5();
	virtual int Menu() override;
};

#endif

