#ifndef COUNTVISITOR_HPP
#define COUNTVISITOR_HPP

class CountVisitor {
	private:
		int ops;
		int rands;
		int adds;
		int subs;
		int mults;
		int divs;
		int pows;
		int abss;
		int ceils;
		int floors;
		int parens;
		int truncs;

	public:
		CountVisitor() {
			ops = 0;
			rands = 0;
			adds = 0;
			subs = 0;
			mults = 0;
			divs = 0;
			pows = 0;
			abss = 0;
			ceils = 0;
			floors = 0;
			parens = 0;
			truncs = 0;
		}
		void visit_op() {
			++ops;
		}
		int op_count() {
			return ops;
		}
		void visit_rand() {
			++rands;
		}
		int rand_count() {
			return rands;
		}
		void visit_add() {
			++adds;
		}
		int add_count() {
			return adds;
		}
		void visit_sub() {
			++subs;
		}
		int sub_count() {
			return subs;
		}
		void visit_mult() {
			++mults;
		}
		int mult_count() {
			return mults;
		}
		void visit_div() {
			++divs;
		}
		int div_count() {
			return divs;
		}
		void visit_pow() {
			++pows;
		}
		int pow_count() {
			return pows;
		}
		void visit_abs() {
			++abss;
		}
		int abs_count() {
			return abss;
		}
		void visit_ceil() {
			++ceils;
		}
		int ceil_count() {
			return ceils;
		}
		void visit_floor() {
			++floors;
		}
		int floor_count() {
			return floors;
		}
		void visit_paren() {
			++parens;
		}
		int paren_count() {
			return parens;
		}
		void visit_trunc() {
			++truncs;
		}
		int trunc_count() {
			return truncs;
		}
};

#endif
