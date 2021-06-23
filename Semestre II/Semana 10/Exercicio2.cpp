#include <iostream>

using namespace std;

class LiquidCrystal
{
    public:
        LiquidCrystal()
        {
            _numlines = 2;
            _initialized = 0;
        }
        int _initialized;
        int _numlines;
        string line1;
        string line2;

        void init()
        {
            _initialized = 1;
            line1 = "";
            line2 = "";
        }

        void begin(string linha1, string linha2)
        {
            line1 = linha1;
            line2 = linha2;
        }

};

int main()
{
    LiquidCrystal CristalLiquido;

    CristalLiquido.init();
    CristalLiquido.begin("Henrique", "Bissoli Malaman Alonso");
}