#pragma once
#include "ogl\gl_core_4_4.h"
#include "glm\glm.hpp"
#include "glm\ext.hpp"
#include "glfw\glfw3.h"
#include "STB\stb_image.h"
#include "FBX\FBXFile.h"
#include "TOL\tiny_obj_loader.h"
#include <iostream>
#include <cstring>
#include <cassert>

//this garbage needs to come before the includes below
// http://stackoverflow.com/questions/8487986/file-macro-shows-full-path
#define __FILENAME__ (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__)



#ifdef _DEBUG
#ifdef _BREAK_IT
#define TODO()	  do{std::cerr << __FILENAME__ << "(" << __LINE__ << ") '" << __FUNCTION__ << "' IS NOT IMPLEMENTED!" << std::endl; assert(false);}while(0)
#define TODO_D(A) do{std::cerr << __FILENAME__ << "(" << __LINE__ << ") '" << __FUNCTION__ << "' IS NOT IMPLEMENTED!" << std::endl << "  -> " << A << std::endl << std::endl; assert(false);}while(0)
#else
#define TODO()	  do{std::cerr << __FILENAME__ << "(" << __LINE__ << ") '" << __FUNCTION__ << "' IS NOT IMPLEMENTED!" << std::endl;}while(0)
#define TODO_D(A) do{std::cerr << __FILENAME__ << "(" << __LINE__ << ") '" << __FUNCTION__ << "' IS NOT IMPLEMENTED!" << std::endl << "  -> " << A << std::endl << std::endl;}while(0)
#endif

#ifdef NO_TODO_DETAIL
#define TODO_D(A) TODO()
#endif

#elif
#define TODO()	  do{}while(0)
#define TODO_D(A) do{}while(0)
#endif


#include "Window.h"
#include "Assets.h"
#include "render.h"
#include "Application.h"
#include "Vertex.h"