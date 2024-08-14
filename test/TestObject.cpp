#include <gtest/gtest.h>
#include <Objects.hpp>

TEST(ObjectCreation,CreateInvaderSuccess)
{
    auto factory = std::make_shared<InvadersFactory>();
    auto invader = factory->CreateGameObject();

    EXPECT_NE(invader,nullptr);
    invader->show();
}
TEST(ObjectCreation,CreatePowerUpSuccess)
{
    auto factory = std::make_shared<PowerUpFactory>();
    auto powerup = factory->CreateGameObject();

    EXPECT_NE(powerup,nullptr);
    powerup->show();
}
TEST(ObjectDeletion,DeleteInvaderSuccess)
{
    auto factory = std::make_shared<InvadersFactory>();
    auto invader = factory->CreateGameObject();

    EXPECT_NE(invader,nullptr);
    invader->show();
    invader->destroy();
}
TEST(ObjectDeletion,DeletePowerupSuccess)
{
    auto factory = std::make_shared<PowerUpFactory>();
    auto powerup = factory->CreateGameObject();

    EXPECT_NE(powerup,nullptr);
    powerup->show();
    powerup->destroy();
}