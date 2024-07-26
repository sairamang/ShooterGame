#include <ScreenHandler.hpp>
#include <iostream>
ScreenHandler* ScreenHandler::m_instance= nullptr;
void ScreenHandler::start(ScreenSpec spec)
{
    std::cout<<"Screen Started "<<std::endl;
    m_spec = spec;
}
ScreenHandler* ScreenHandler::getInstance()
{
    if (m_instance == nullptr)
    {
        m_instance = new ScreenHandler();
    }
    return m_instance;
}
void ScreenHandler::destroy()
{
    std::cout << "ScreenHandler Destroyed" << std::endl;
}