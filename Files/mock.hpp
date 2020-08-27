#ifndef MOCK_HPP
#define MOCK_HPP

class four_thirtysevenMock : public Base {
	public:
		four_thirtysevenMock() { };
		virtual double evaluate() {
			return 4.37;
		}
		virtual string stringify() {
			return "4.37";
		}
};

class six_sixtysevenMock : public Base {
	public:
		six_sixtysevenMock() { };
		virtual double evaluate() {
			return 6.67;
		}
		virtual string stringify() {
			return "6.67";
		}
};

#endif
