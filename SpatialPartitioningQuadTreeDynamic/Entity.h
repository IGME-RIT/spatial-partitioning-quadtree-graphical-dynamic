//2D Entity

#pragma once


#define GLEW_STATIC
#include <vector>
#include "Transform.h"

#include <GL/glew.h>
#include <GLFW/glfw3.h>

//GLM provides new data types and math helper functions for any vector math we want to do.
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtx/euler_angles.hpp>

struct AABB
{
	glm::vec3 min;
	glm::vec3 max;

	AABB()
	{
		min = glm::vec3();
		max = glm::vec3();
	}

	void CalcAABB(GLfloat vertices[], glm::mat4 worldMatrix)
	{
		glm::vec4 c_min = worldMatrix * glm::vec4(vertices[0], vertices[1], vertices[2], 1.0);
		glm::vec4 c_max = c_min;
		glm::vec4 vertPos = glm::vec4();

		for (int i = 0; i < 18; i += 3)
		{
			vertPos = worldMatrix * glm::vec4(vertices[i], vertices[i + 1], vertices[i + 2], 1.0);

			if (vertPos.x > c_max.x)
				c_max.x = vertPos.x;
			if (vertPos.y > c_max.y)
				c_max.y = vertPos.y;

			if (vertPos.x < c_min.x)
				c_min.x = vertPos.x;
			if (vertPos.y < c_min.y)
				c_min.y = vertPos.y;

		}
		min = c_min;
		max = c_max;
	}

};

class Entity
{
	


	std::vector<glm::vec3> vertices;
	GLuint VAO;
	GLuint VBO;



public:
	Entity();
	virtual ~Entity();

	Transform* transform;

	void Update();
	void LoadBuffers();
	void RenderEntity();
	std::vector<glm::vec3>& SetVertices();

	
};

