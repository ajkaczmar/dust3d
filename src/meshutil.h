#ifndef MESH_UTIL_H
#define MESH_UTIL_H
#include <vector>

int mergeMeshs(void *meshliteContext, const std::vector<int> &meshIds);
int unionMeshs(void *meshliteContext, const std::vector<int> &meshIds);
int subdivMesh(void *meshliteContext, int meshId);

#endif