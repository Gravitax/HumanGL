#ifndef SHADER_H
#define SHADER_H

#include <GL/glew.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
  

class Shader
{
public:
    unsigned int ID;
  
    Shader(const char* vertexPath, const char* fragmentPath);
    void setBool(const std::string &name, bool value) const;  
    void setInt(const std::string &name, int value) const;   
    void setFloat(const std::string &name, float value) const;

private:
    //static glm::mat4 projMat;

    void checkCompileErrors(unsigned int shader, std::string type);
};
  
#endif
