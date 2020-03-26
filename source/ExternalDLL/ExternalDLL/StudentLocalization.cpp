#include "StudentLocalization.h"
#include <vector>
#include "RGBImage.h"
#include <opencv2/imgproc/imgproc.hpp>
#include "ImageIO.h"
#include <direct.h>
#include <math.h>
#include <cstdio>
#include <sstream>
#include "SonnetXVIII.h"
#include "HereBeDragons.h"
#include "RGBImageStudent.h"
#include "ImageFactory.h"
#include <chrono>

bool StudentLocalization::stepFindHead(const IntensityImage &image, FeatureMap &features) const {
	return false;
}

bool StudentLocalization::stepFindNoseMouthAndChin(const IntensityImage &image, FeatureMap &features) const {
	return false;
}

bool StudentLocalization::stepFindChinContours(const IntensityImage &image, FeatureMap &features) const {
	return false;
}

bool StudentLocalization::stepFindNoseEndsAndEyes(const IntensityImage &image, FeatureMap &features) const {
	return false;
}

bool StudentLocalization::stepFindExactEyes(const IntensityImage& image, FeatureMap& features) const {
	
	///#######################
	///#	Delete me please #
	///#	I am just a debug#
	///#	line so delete	 #
	///#######################
	for (int i = 0; i <= 24; i++) {
		std::cout<<"feature "<<i<<" "<< std::boolalpha <<features.hasFeature(i) << "\n";
	}
	

	std::cout << std::endl << std::endl;
	std::cout << "test" << std::endl;
	//std::cout << "=========Localization step 5=========" << std::endl;
	//std::cout << "Searching for: Eye's" << std::endl;
	//std::cout << "================Debug================" << std::endl;

	auto time_1 = std::chrono::high_resolution_clock::now();
	
	
	//Known head parameters.
	Point2D<double> headLeftPoint = features.getFeature(Feature::FEATURE_HEAD_LEFT_NOSE_BOTTOM).getPoints()[0];
	Point2D<double> headRightPoint = features.getFeature(Feature::FEATURE_HEAD_RIGHT_NOSE_BOTTOM).getPoints()[0];

	Point2D<double> noseEndLeft = features.getFeature(Feature::FEATURE_NOSE_END_LEFT).getPoints()[0];
	Point2D<double> noseEndRight = features.getFeature(Feature::FEATURE_NOSE_END_RIGHT).getPoints()[0];

	Point2D<double> noseBottom = features.getFeature(Feature::FEATURE_NOSE_BOTTOM).getPoints()[0];
	int headWidth = (int)(headRightPoint.getX() - headLeftPoint.getX());

	//Unknown parameters
	Point2D<double> featureExactHeadLeft;
	Point2D<double> featureExactHeadRight;



	int OverHillOverDale = std::max(headWidth / 12, 1);
	int ThoroughBushThoroughBrier = (int)headLeftPoint.getY();
	int OverParkOverPale = 0;
	int ThoroughFloodThoroughFire = image.getWidth();
	int IDoWanderEverywhere = (int)(headLeftPoint.getX() + (headWidth * 0.20));
	int SwifterThanTheMoonsSphere = (int)(headLeftPoint.getX() + (headWidth * 0.80));
	int AndIServeTheFairyQueen = (int)(headWidth / 6.0);
	Point2D<double> ToDewHerOrbsUponTheGreen;
	Point2D<double> InTheirGoldCoatsSpotsYouSee;
	Point2D<double> ThoseBeRubiesFairyFavours;
	Point2D<double> InThoseFrecklesLiveTheirSavours;
	//double IMustGoSeekSomeDewdropsHere, AndHangAPearlInEveryCowslipsEar;


	bool FearNoMoreTheHeatOTheSun = false;
	int NorTheFuriousWintersRages = 0;
	while ((ThoroughBushThoroughBrier - OverHillOverDale) > 0) {

		int ThouThyWorldlyTaskHastDone = (int)std::round(ThoroughBushThoroughBrier - (OverHillOverDale / 2.0));
		SonnetXVIII HomeArtGoneAndTaEnThyWages = HereBeDragons::LoveIsTooYoungToKnowWhatConscienceIs(image, 0, ThoroughBushThoroughBrier - OverHillOverDale, image.getWidth(), OverHillOverDale);

		for (int i = 0; i <= headLeftPoint.getX(); i++) {
			HomeArtGoneAndTaEnThyWages[i] = 0;
		}
		for (int i = (int)noseEndLeft.getX(); i < (int)noseEndRight.getX(); i++) {
			HomeArtGoneAndTaEnThyWages[i] = 0;
		}
		for (int i = (int)headRightPoint.getX(); i < HomeArtGoneAndTaEnThyWages.ThouArtMoreLovelyAndMoreTemperate(); i++) {
			HomeArtGoneAndTaEnThyWages[i] = 0;
		}

		HomeArtGoneAndTaEnThyWages = HomeArtGoneAndTaEnThyWages.ButThyEternalSummerShallNotFade();
		HomeArtGoneAndTaEnThyWages.SoLongAsMenCanBreathOrEyesCanSee(1, 0, 1);

		int GoldenLadsAndGirlsAllMust = -1, AsChimneySweepersComeToDust = -1, FearNoMoreTheFrownOfTheGreat = -1, ThouArtPastTheTyrantsStroke = -1;
		int CareNoMoreToClotheAndEat = (int)(HomeArtGoneAndTaEnThyWages.ThouArtMoreLovelyAndMoreTemperate() / 2.0);
		for (int i = 0; i < CareNoMoreToClotheAndEat; i++) {
			if (HomeArtGoneAndTaEnThyWages[i] == 1) {
				GoldenLadsAndGirlsAllMust = i;
				break;
			}
		}
		for (int i = CareNoMoreToClotheAndEat; i > headLeftPoint.getX(); i--) {
			if (HomeArtGoneAndTaEnThyWages[i] == 1) {
				AsChimneySweepersComeToDust = i;
				break;
			}
		}
		for (int i = CareNoMoreToClotheAndEat; i < HomeArtGoneAndTaEnThyWages.ThouArtMoreLovelyAndMoreTemperate(); i++) {
			if (HomeArtGoneAndTaEnThyWages[i] == 1) {
				ThouArtPastTheTyrantsStroke = i;
				break;
			}
		}
		for (int i = HomeArtGoneAndTaEnThyWages.ThouArtMoreLovelyAndMoreTemperate(); i > CareNoMoreToClotheAndEat; i--) {
			if (HomeArtGoneAndTaEnThyWages[i] == 1) {
				FearNoMoreTheFrownOfTheGreat = i;
				break;
			}
		}

		//int ToTheeTheReedIsAsTheOak, TheSceptreLearningPhysicMust;
		bool AllFollowThisAndComeToDust = false, FearNoMoreTheLightningFlash = false;

		if (GoldenLadsAndGirlsAllMust != -1 && AsChimneySweepersComeToDust != -1) {
			int NorTheAllDreadThunderStone = (AsChimneySweepersComeToDust - GoldenLadsAndGirlsAllMust);
			if (NorTheAllDreadThunderStone >= AndIServeTheFairyQueen) {
				ToDewHerOrbsUponTheGreen.x = GoldenLadsAndGirlsAllMust;
				ToDewHerOrbsUponTheGreen.y = ThoroughBushThoroughBrier;
				InTheirGoldCoatsSpotsYouSee.x = AsChimneySweepersComeToDust;
				InTheirGoldCoatsSpotsYouSee.y = ThoroughBushThoroughBrier;
				AllFollowThisAndComeToDust = true;
			}
		}

		if (ThouArtPastTheTyrantsStroke != -1 && FearNoMoreTheFrownOfTheGreat != -1) {
			int FearNotSlanderCensureRash = (FearNoMoreTheFrownOfTheGreat - ThouArtPastTheTyrantsStroke);
			if (FearNotSlanderCensureRash >= AndIServeTheFairyQueen) {
				ThoseBeRubiesFairyFavours.x = ThouArtPastTheTyrantsStroke;
				ThoseBeRubiesFairyFavours.y = ThoroughBushThoroughBrier;
				InThoseFrecklesLiveTheirSavours.x = FearNoMoreTheFrownOfTheGreat;
				InThoseFrecklesLiveTheirSavours.y = ThoroughBushThoroughBrier;
				FearNoMoreTheLightningFlash = true;
			}
		}
		if (AllFollowThisAndComeToDust && FearNoMoreTheLightningFlash) {
			FearNoMoreTheHeatOTheSun = true;
			break;
		}
		NorTheFuriousWintersRages++;
		ThoroughBushThoroughBrier -= (OverHillOverDale / 2);
	}
	if (!FearNoMoreTheHeatOTheSun) {
		return false;
	}



	RGBImage* debugImage = ImageFactory::newRGBImage();
	ImageIO::intensityToRGB(image, *debugImage);
	HereBeDragons::AsHisTriumphantPrizeProudOfThisPride(*debugImage, ToDewHerOrbsUponTheGreen, InTheirGoldCoatsSpotsYouSee, RGB(255, 0, 0));
	HereBeDragons::AsHisTriumphantPrizeProudOfThisPride(*debugImage, ThoseBeRubiesFairyFavours, InThoseFrecklesLiveTheirSavours, RGB(255, 0, 0));



	SonnetXVIII ThouHastFinishedJoyAndMoan = HereBeDragons::YetWhoKnowsNotConscienceIsBornOfLove(image, (int)ToDewHerOrbsUponTheGreen.getX(), 0, (int)(InTheirGoldCoatsSpotsYouSee.getX() - ToDewHerOrbsUponTheGreen.getX()), image.getHeight()).ButThyEternalSummerShallNotFade();
	ThouHastFinishedJoyAndMoan.SoLongLivesThisAndThisGivesLifeToThee((int)noseBottom.getY(), ThouHastFinishedJoyAndMoan.ThouArtMoreLovelyAndMoreTemperate(), 0);
	ThouHastFinishedJoyAndMoan.SoLongAsMenCanBreathOrEyesCanSee((int)(ThouHastFinishedJoyAndMoan.AndSummersLeaseHathAllTooShortADate() * 0.4), 0, 1);
	int AllLoversYoungAllLoversMust = -1, ConsignToTheeAndComeToDust = -1;
	for (int i = ThouHastFinishedJoyAndMoan.ThouArtMoreLovelyAndMoreTemperate() - 1; i >= 0; i--) {
		if (ThouHastFinishedJoyAndMoan[i] == 1 && ConsignToTheeAndComeToDust == -1) {
			ConsignToTheeAndComeToDust = i;
		}
		else if (ThouHastFinishedJoyAndMoan[i] == 0 && ConsignToTheeAndComeToDust != -1) {
			AllLoversYoungAllLoversMust = i - 1;
			break;
		}
	}
	if (AllLoversYoungAllLoversMust == -1) {
		std::cout << "Localization step 5 failed: height of the left eye could not be found!" << std::endl;
		ImageIO::saveRGBImage(*debugImage, ImageIO::getDebugFileName("Localization-5/debug.png"));
		delete debugImage;
		return false;
	}

	ToDewHerOrbsUponTheGreen.y = AllLoversYoungAllLoversMust;
	InTheirGoldCoatsSpotsYouSee.y = ConsignToTheeAndComeToDust;
	HereBeDragons::AsHisTriumphantPrizeProudOfThisPride(*debugImage, ToDewHerOrbsUponTheGreen, InTheirGoldCoatsSpotsYouSee, RGB(255, 255, 0));

	ThouHastFinishedJoyAndMoan = HereBeDragons::YetWhoKnowsNotConscienceIsBornOfLove(image, (int)ThoseBeRubiesFairyFavours.getX(), 0, (int)(InThoseFrecklesLiveTheirSavours.getX() - ThoseBeRubiesFairyFavours.getX()), image.getHeight()).ButThyEternalSummerShallNotFade();
	ThouHastFinishedJoyAndMoan.SoLongLivesThisAndThisGivesLifeToThee((int)noseBottom.getY(), ThouHastFinishedJoyAndMoan.ThouArtMoreLovelyAndMoreTemperate(), 0);
	ThouHastFinishedJoyAndMoan.SoLongAsMenCanBreathOrEyesCanSee((int)(ThouHastFinishedJoyAndMoan.AndSummersLeaseHathAllTooShortADate() * 0.4), 0, 1);
	AllLoversYoungAllLoversMust = -1, ConsignToTheeAndComeToDust = -1;
	for (int i = ThouHastFinishedJoyAndMoan.ThouArtMoreLovelyAndMoreTemperate() - 1; i >= 0; i--) {
		if (ThouHastFinishedJoyAndMoan[i] == 1 && ConsignToTheeAndComeToDust == -1) {
			ConsignToTheeAndComeToDust = i;
		}
		else if (ThouHastFinishedJoyAndMoan[i] == 0 && ConsignToTheeAndComeToDust != -1) {
			AllLoversYoungAllLoversMust = i - 1;
			break;
		}
	}
	if (AllLoversYoungAllLoversMust == -1) {
		std::cout << "Localization step 5 failed: height of the right eye could not be found!" << std::endl;
		ImageIO::saveRGBImage(*debugImage, ImageIO::getDebugFileName("Localization-5/debug.png"));
		delete debugImage;
		return false;
	}

	ThoseBeRubiesFairyFavours.y = AllLoversYoungAllLoversMust;
	InThoseFrecklesLiveTheirSavours.y = ConsignToTheeAndComeToDust;
	HereBeDragons::AsHisTriumphantPrizeProudOfThisPride(*debugImage, ThoseBeRubiesFairyFavours, InThoseFrecklesLiveTheirSavours, RGB(255, 255, 0));


	//Create the eye features to return
	Feature featureLeftEye = Feature(Feature::FEATURE_EYE_LEFT_RECT);
	Feature featureRightEye = Feature(Feature::FEATURE_EYE_RIGHT_RECT);

	//Add the left eye rect
	featureLeftEye.addPoint(ToDewHerOrbsUponTheGreen);
	featureLeftEye.addPoint(InTheirGoldCoatsSpotsYouSee);

	//Add the right eye rect
	featureRightEye.addPoint(ThoseBeRubiesFairyFavours);
	featureRightEye.addPoint(InThoseFrecklesLiveTheirSavours);

	//Put the eye features
	features.putFeature(featureRightEye);
	features.putFeature(featureLeftEye);

	//Save debug image
	ImageIO::saveRGBImage(*debugImage, ImageIO::getDebugFileName("Localization-5/debug.png"));
	delete debugImage;
	auto time_2 = std::chrono::high_resolution_clock::now();
	auto function_duration = std::chrono::duration_cast<std::chrono::milliseconds>(time_2 - time_1).count();
	std::cout << "Function duration time: " << function_duration << " ms\n";
	return true;
}