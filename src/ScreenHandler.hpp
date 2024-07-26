#pragma once 
struct ScreenSpec
{
    int x;
    int y;
};
class ScreenHandler 
{
private:
    static ScreenHandler* m_instance;
    ScreenSpec m_spec;
public:
    static ScreenHandler* getInstance();
  

    void start(ScreenSpec spec);
    void destroy();
};