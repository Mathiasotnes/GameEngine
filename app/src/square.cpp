#include "../inc/square.h"


/* (0,0) is in the center, and y-axis is positive upwards and x is positive to the right */

void drawSquare() {

/* Corners of square */
float vertices[] = {
    -0.5f,  0.5f,  // Vertex 1 (X, Y)  top left corner
    0.5f, 0.5f,    // Vertex 2 (X, Y)  top right corner
    0.5f, -0.5f,   // Vertex 3 (X, Y)  bottom right corner
    -0.5f, -0.5f   // Vertex 4 (X, Y)  bottom left corner
};

/* GL unsigned int, use GL for variables so that the graphic card can talk to the variable */
GLuint vbo;

/* Setting up buffer array for vertices */
glGenBuffers(1, &vbo);
glBindBuffer(GL_ARRAY_BUFFER, vbo);
glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW); // Note Static draw, there are more options here


// https://open.gl/drawing


}
