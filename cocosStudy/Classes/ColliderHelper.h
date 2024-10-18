#ifndef __COLLIDER_HELPER_H__
#define __COLLIDER_HELPER_H__

#include "cocos2d.h"

class ColliderHelper {
public:
    // ��������Ʈ�� �ڽ� �ݶ��̴� �߰�
    static cocos2d::PhysicsBody* addBoxCollider(cocos2d::Sprite* sprite, const cocos2d::Size& size, bool isDynamic = true);

    // �浹 ���� ������ ����
    static void setContactListener(cocos2d::Node* targetNode, const std::function<bool(cocos2d::PhysicsContact&)>& callback);
};

#endif // __COLLIDER_HELPER_H__
