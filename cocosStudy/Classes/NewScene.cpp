#include "NewScene.h"


USING_NS_CC;

Scene* NewScene::createScene() {
    return NewScene::create();
}

static void problemLoading(const char* filename)
{
    printf("Error while loading: %s\n", filename);
    printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}


bool NewScene::init() {
    if (!Scene::init()) {
        return false;
    }

   
    // ���ο� ���� ���� ���� (��: ���)
    auto background = LayerColor::create(Color4B(255, 255, 255, 255));
    this->addChild(background);

    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    auto visibleSize = Director::getInstance()->getVisibleSize();

    auto label = Label::createWithTTF("New Scene", "fonts/Marker Felt.ttf", 24);
    if (label == nullptr)
    {
        problemLoading("'fonts/Marker Felt.ttf'");
    }
    else
    {
        // position the label on the center of the screen
        label->setPosition(Vec2(origin.x + visibleSize.width / 2,
            origin.y + visibleSize.height - label->getContentSize().height));

        // add the label as a child to this layer
        this->addChild(label, 1);
    }

    // ���� �߰��� ��ҵ� ���� (��: ���̺�, ��������Ʈ ��)

    return true;
}