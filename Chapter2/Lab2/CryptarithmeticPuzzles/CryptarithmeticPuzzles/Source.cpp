#include<iostream>
using namespace std;

int main()
{
	int T, O, G, D;
	for (T = 0; T <= 9; T++)
		for (O = 0; O <= 9; O++)
			for (G = 0; G <= 9; G++)
				for (D = 0; D <= 9; D++)
				{
					if ((T != O) && (T != G) && (T != D) &&
						(O != G) && (O != D) &&
						(G != D))
					{
						int too = T * 100 + O * 10 + O;
						int good = G * 1000 + O * 100 + O * 10 + D;
						if (4*too == good)
						{
							cout << "T = " << T << " O = " << O << " G = " << G << " D = " << D << endl;
							cout << "TOO =  " << too << endl;
							cout << "GOOD = " << good << endl;
						}
					}
				}

	int i;
	cin >> i;

	
	return 0;
}