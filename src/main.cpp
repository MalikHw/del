#include <Geode/Geode.hpp>
#include <Geode/modify/LevelInfoLayer.hpp>

using namespace geode::prelude;
// 1 liner cuz i hate myself
class $modify(LevelInfoLayer) {void keyDown(enumKeyCodes key, double timestamp) {if (key == enumKeyCodes::KEY_Delete) {this->onDelete(nullptr); return;} LevelInfoLayer::keyDown(key, timestamp);}};