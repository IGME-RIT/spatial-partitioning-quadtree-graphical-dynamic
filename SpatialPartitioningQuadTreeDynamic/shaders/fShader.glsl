// NOTE: before proceeding further, it is recommended you learn about the programmable graphics pipeline.
// To know more about the programmable graphics pipeline please visit this website:
// http://duriansoftware.com/joe/An-intro-to-modern-OpenGL.-Chapter-1:-The-Graphics-Pipeline.html

// The fragment shader is a shader that processes the fragment generated by the rasterization
// into a set of colors and single depth value

#version 430

// output variable for the color, this is used to display the final result on the screen
// after performing necessary operations on it.
out vec4 color;
void main()
{

	color = vec4(1.0f,1.0f,1.0f, 1.0f);

    
}
