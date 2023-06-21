#include <iostream>
#include <string>
#include <vector>

// Global variables
std::vector<std::string> nutritionRecommendations;

// Function declarations
// Adds a nutrition recommendation to the global recommendations vector
void addNutritionRecommendation(std::string);
// Outputs all nutrition recommendations in the vector
void outputAllNutritionRecommendations();

// Main program
int main() {
	// Add nutrition recommendations to the global vector
	addNutritionRecommendation("Eat a balanced diet.");
	addNutritionRecommendation("Vary your protein sources.");
	addNutritionRecommendation("Eat plenty of fresh fruits and vegetables.");
	addNutritionRecommendation("Choose whole grain foods.");
	addNutritionRecommendation("Limit your intake of saturated and trans fats.");
	addNutritionRecommendation("Limit your sodium intake.");
	addNutritionRecommendation("Drink adequate amounts of water.");
	addNutritionRecommendation("Limit caffeine intake.");
	addNutritionRecommendation("Adopt a well-rounded exercise program.");
	addNutritionRecommendation("Be mindful of portion size.");

	// Output all the nutrition recommendations
	outputAllNutritionRecommendations();
	return 0;
}

// Function definitions
void addNutritionRecommendation(std::string rec) {
	nutritionRecommendations.push_back(rec);
}

void outputAllNutritionRecommendations() {
	for (int i = 0; i < nutritionRecommendations.size(); i++) {
		std::cout << nutritionRecommendations[i] << std::endl;
	}
}