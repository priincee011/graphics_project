#include <userInput.h>

userInput::userInput()
{}
userInput::~userInput()
{}
bool userInput::checkButtonClick(int x, int y, int x1, int y1, int x2, int y2) {
    return (x > x1 && x < x2 && y > y1 && y < y2);
}

double userInput::getValue(char *str)
{ 
    
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
    char valueStr[10]="";
    int index = 0;
    bool showCursor = true;
    while (true) {
        cleardevice();
        outtextxy(100, 100, str);
        rectangle(100, 127, 300, 160);
        outtextxy(110, 130, valueStr);
       
        if(showCursor)
        {
            outtextxy(110 + textwidth(valueStr), 130, const_cast<char*>("_"));
        }
        delay(200);
        showCursor = !showCursor;
        if(kbhit()){
        char ch = getch();
        if (ch == 13) break;
        if (ch == 8 && index > 0) {
            valueStr[--index] = '\0';
        } else if ((ch >= '0' && ch <= '9') || ch == '.') {
            valueStr[index++] = ch;
            valueStr[index] = '\0';
        }
       }
    }
    double value = atof(valueStr);
    return value;

}
void userInput::getUserInput()
{
    cleardevice();
    
    int x, y;
   
    
    // Input for Speed
    this->speed= this->getValue(const_cast<char*>("Enter Initial Speed (m/s):"));
    this->angle= this->getValue(const_cast<char*>("Enter the Launch Angle:"));
    
    
}

