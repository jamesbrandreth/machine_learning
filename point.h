// Point

class Point {

	private:
		std::vector<float> coordinates;
		std::string class_name;
	
	public:
		Point(std::vector<float> coords, std::string name){
			coordinates = coords;
			class_name = name;
		}

		std::vector<float> getCoordinates(){
			return coordinates;
		}
	
}

