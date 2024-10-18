#include "InputHelper.h"

using namespace cocos2d;

InputHelper* InputHelper::getInstance() {
    static InputHelper instance;
    return &instance;
}

void InputHelper::init(Node* targetNode) {
    // ��ġ �̺�Ʈ ������
    touchListener = EventListenerTouchOneByOne::create();
    targetNode->getEventDispatcher()->addEventListenerWithSceneGraphPriority(touchListener, targetNode);

    // ���콺 �̺�Ʈ ������
    mouseListener = EventListenerMouse::create();
    targetNode->getEventDispatcher()->addEventListenerWithSceneGraphPriority(mouseListener, targetNode);

    // Ű���� �̺�Ʈ ������
    keyboardListener = EventListenerKeyboard::create();
    targetNode->getEventDispatcher()->addEventListenerWithSceneGraphPriority(keyboardListener, targetNode);
}

void InputHelper::setTouchBeganCallback(const std::function<bool(Touch*, Event*)>& callback) {
    touchListener->onTouchBegan = callback;
}

void InputHelper::setTouchMovedCallback(const std::function<void(Touch*, Event*)>& callback) {
    touchListener->onTouchMoved = callback;
}

void InputHelper::setTouchEndedCallback(const std::function<void(Touch*, Event*)>& callback) {
    touchListener->onTouchEnded = callback;
}

void InputHelper::setMouseDownCallback(const std::function<void(EventMouse*)>& callback) {
    mouseListener->onMouseDown = callback;
}

void InputHelper::setMouseMoveCallback(const std::function<void(EventMouse*)>& callback) {
    mouseListener->onMouseMove = callback;
}

void InputHelper::setMouseUpCallback(const std::function<void(EventMouse*)>& callback) {
    mouseListener->onMouseUp = callback;
}

void InputHelper::setKeyPressedCallback(const std::function<void(EventKeyboard::KeyCode, Event*)>& callback) {
    keyboardListener->onKeyPressed = callback;
}

void InputHelper::setKeyReleasedCallback(const std::function<void(EventKeyboard::KeyCode, Event*)>& callback) {
    keyboardListener->onKeyReleased = callback;
}
