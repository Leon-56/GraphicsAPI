#pragma once
#include <string>

class Shader
{
public:
    Shader(const char* vertexPath, const char* fragmentPath);
    // use/activate the shader
    void use();
    // utility uniform functions
    void setBool(const std::string &name, bool value) const;  
    void setInt(const std::string &name, int value) const;   
    void setFloat(const std::string &name, float value) const;
    std::string vertexString;
    std::string fragmentString;
    const char* vertexSource;
    const char* fragmentSource;
    unsigned int ID; // Shader Program ID
private:
    void checkCompileErrors(unsigned int ID, std::string type);
};
