#version 330 core
// TODO: define in/out and uniform variables.
in vec3 aPos;
// in vec3 aColor;

// out vec3 Color;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
	gl_Position = projection * view * model * vec4(aPos, 1.0f);
	// Color = aColor;
}
