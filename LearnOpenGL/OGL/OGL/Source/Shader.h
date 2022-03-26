#pragma once
#include <string>
#include <glm/detail/type_mat.hpp>
#include <glm/detail/type_vec.hpp>

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
    void setMat4(const std::string &name, glm::mat4 value) const;
    void setVec3(const std::string &name, glm::vec3 value) const;
    std::string vertexString;
    std::string fragmentString;
    const char* vertexSource;
    const char* fragmentSource;
    unsigned int ID; // Shader Program ID
private:
    void checkCompileErrors(unsigned int ID, std::string type);
};
