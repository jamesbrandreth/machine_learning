// perceptron class

#include <vector>
#include <numeric>

	class Perceptron {
		private:
		std::vector<int> weights;
		public:
		void set_weights(std::vector<int>);
		int infer(std::vector<int>);
	};


