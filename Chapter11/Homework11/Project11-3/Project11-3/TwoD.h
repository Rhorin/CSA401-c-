#ifndef PROTECT_TWOD_H
#define PROTECT_TWOD_H
namespace TD
{
	typedef double* DoubleArrayPtr;
	class TwoD
	{
	public:
		TwoD();
		TwoD(int maxR, int maxC);
		~TwoD();
		TwoD(const TwoD&);
		const TwoD& operator=(const TwoD& rhs);
		double& operator()(int r, int c);
		double* operator()(int r);
		friend TwoD operator+(const TwoD& lhs, const TwoD& rhs);
		friend int myRows(const TwoD&);
		friend int myCols(const TwoD&);
	private:
		DoubleArrayPtr * matrix;
		int maxRows;
		int maxCols;
	};
}
#endif