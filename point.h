// Point
#ifndef POINT
#define POINT
class Point {

	private:
		std::vector<float> coordinates;
		bool point_class;
	
	public:
		Point(std::vector<float> coords, bool pc){
			coordinates = coords;
			point_class = pc;
		}

		std::vector<float> getCoordinates(){
			return coordinates;
		}
    
        bool getClass(){
            return point_class;
        }
	
};

#endif
