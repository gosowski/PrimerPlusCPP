#include <iostream>

float toMeters(int hF, int hI);
float toKilograms(float w);
float BMI(float w, float h);

int main() {
  int heightFeet{0};
  int heightInches{0};
  float weight{0};

  std::cin>>heightFeet;
  std::cin>>heightInches;
  std::cin>>weight;

  std::cout<<"BMI value: "<<BMI(toKilograms(weight), toMeters(heightFeet, heightInches))<<std::endl;

  return 0;
}

float toMeters(int hF, int hI) {
  const int inchesInFoot = 12;
  const float meter = 0.0254;

  float heightInMeters = (hF*inchesInFoot+hI)*meter;
  return heightInMeters;
}

float toKilograms(float w) {
  const float kg = 2.2;

  float weightKilograms = w/kg;
  return weightKilograms;
}

float BMI(float w, float h) {
  float bmiValue = w/(h*h);
  return bmiValue;
}
