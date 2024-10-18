#pragma once

#include "cocos2d.h"
#include "ui/CocosGUI.h" // ui ���ӽ����̽� ����

class EditBox;
class UIHelper {
public:
    // ��ư ����
    static cocos2d::MenuItemFont* createButton(const std::string& title, const cocos2d::ccMenuCallback& callback, const cocos2d::Vec2& position);

    // ���̺� ����
    static cocos2d::Label* createLabel(const std::string& text, const std::string& fontName, float fontSize, const cocos2d::Vec2& position);

    // ��������Ʈ ����
    static cocos2d::Sprite* createSprite(const std::string& filename, const cocos2d::Vec2& position);

    // �Է� �ʵ� ����
    static cocos2d::ui::EditBox* createTextField(const std::string& placeholder, const cocos2d::Size& size,
        const std::string& backgroundImage,
        const cocos2d::Vec2& position);
};