#include <Geode/Geode.hpp>
#include <Geode/modify/LevelInfoLayer.hpp>
#include <Geode/ui/GeodeUI.hpp>

using namespace geode::prelude;

class $modify(LevelInfoLayer) { void keyDown(enumKeyCodes key, double timestamp) { if (key == enumKeyCodes::KEY_Delete) { geode::createQuickPopup("Delete Level", "Are you sure you want to <cr>delete</c> this\nlevel?", "no", "yes", [this](auto, bool b) {if (b) {GameLevelManager::sharedState()->deleteLevel(m_level); this->onBack(nullptr);}}); return;} LevelInfoLayer::keyDown(key, timestamp);}};
