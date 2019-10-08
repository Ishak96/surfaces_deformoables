#include <cloud.h>

int main(int argc, char** argv) {

	if(argc < 5){
		fprintf(stderr, "main: invalid argument!\n");
		printf("usage: %s [a] [b] [c] [e1] [e2]..\n", argv[0]);
		return -1;
	}

	float a_t = atof(argv[1]);
	float b_t = atof(argv[2]);
	float c_t = atof(argv[3]);
	float e1_t = atof(argv[4]);
	float e2_t = atof(argv[5]);

	int size;
	float** cloud = generate_cloud_point(70, 70, a_t, b_t, c_t, e1_t, e2_t, &size);

	float* init_param = initial_parameters(cloud, size);

	printf("e1 = %f, e2 = %f\n", init_param[0], init_param[1]);
	printf("tx = %f, ty = %f, tz = %f\n", init_param[2], init_param[3], init_param[4]);
	printf("angle1 = %f, angle2 = %f, angle3 = %f\n", init_param[5], init_param[6], init_param[7]);
	printf("a = %f, b = %f, c = %f\n", init_param[8], init_param[9], init_param[10]);

	return 0;
}
