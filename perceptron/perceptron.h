// perceptron class

using namespace std;

class Perceptron {
	private:

		vector<float> weights;

		float dist(vector<float> point){
			point.push_back(1);
			float product = inner_product(weights.begin(), weights.end(), point.begin(), 0.0);
			return product;
		}

	public:

		void set_weights(vector<float> w){
			weights = w;
		}

		bool train(vector<vector<float>> points, float learning_rate, int iteration_limit=100){
			bool converged = false;
			int i=0;
			while (i < iteration_limit){
				for(vector<vector<float>>::iterator pt = points.begin(); pt != points.end(); pt++){
					vector<float> point = *pt;
					infer(point);
				}
				i++;
			}
			return false;
		}

		float infer(vector<float> point){
			float distance = dist(point);
			if (distance < 0) {
				return false;
			} else {
				return true;
			}
		}
};


