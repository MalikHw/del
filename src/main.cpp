#include <Geode/Geode.hpp>
#include <Geode/modify/LevelInfoLayer.hpp>
#include <Geode/ui/GeodeUI.hpp>

using namespace geode::prelude;

// 1 line challenge!
class $modify(LevelInfoLayer) {void keyDown(enumKeyCodes key, double timestamp) {if (key == enumKeyCodes::KEY_Delete) {geode::createQuickPopup("Delete Level", "Are you sure you want to <cr>delete</cr> this level?", "No", "Yes", [this](auto, bool btn2) { if (btn2) { GameLevelManager::sharedState()->deleteLevel(this->m_level);}});return;} LevelInfoLayer::keyDown(key, timestamp);}};