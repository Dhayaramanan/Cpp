class X {
public:
	operator int() {
		return 0;
	}
};

void print(int){}
void print(double) {}

int main() {
	X x;
	print(x); // x is converted to type int by user defined conversion
	return 0;
}