//
//  Shader.hpp
//  Window
//
//  Created by miniu on 15/11/17.
//  Copyright © 2015年 muyu. All rights reserved.
//

#ifndef Shader_hpp
#define Shader_hpp

#include <GL/glew.h>

class Shader
{
public:
    Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
    
    void Use();

public:
    GLuint Program;
};

#endif /* Shader_hpp */
