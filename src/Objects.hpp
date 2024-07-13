#include <iostream>
#include <memory>
class GameObject
{
public:
    virtual void show() = 0;
    virtual void destroy() = 0;
};
class Invaders : public GameObject
{
public:
    void show() override
    {
        std::cout << "I am a invader" << std::endl;
    }
    void destroy() override
    {
        std::cout << "I am destroyed" << std::endl;
    }
};
class Powerups : public GameObject
{
public:
    void show() override
    {
        std::cout << "I am a powerup" << std::endl;
    }
    void destroy() override
    {
        std::cout << "I am destroyed" << std::endl;
    }
};
class GameObjectFactory
{
public:
    virtual std::shared_ptr<GameObject> CreateGameObject() = 0;
};
class InvadersFactory : public GameObjectFactory
{
public:
    std::shared_ptr<GameObject> CreateGameObject() override
    {
        std::shared_ptr<GameObject> ptr = std::make_shared<Invaders>();
        return ptr;
    };
};
class PowerUpFactory : public GameObjectFactory
{
public:
    std::shared_ptr<GameObject> CreateGameObject() override
    {
        std::shared_ptr<GameObject> ptr = std::make_shared<Powerups>();
        return ptr;
    };
};
