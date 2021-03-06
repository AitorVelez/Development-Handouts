#ifndef __j1MAP_H__
#define __j1MAP_H__

#include "PugiXml/src/pugixml.hpp"
#include "p2List.h"
#include "p2Point.h"
#include "j1Module.h"

enum class RenderOrder
{
	right_down,right_up,left_down_left_up,error
};



// TODO 2: Create a struct to hold information for a TileSet
// Ignore Terrain Types and Tile Types for now, but we want the image!
// ----------------------------------------------------


struct  TilesetInfo
{
	uint firstgid = 0;
	char name;
	uint tilewidth = 0;
	uint tileheigth = 0;
	uint spacing = 0;
	uint margin = 0;



};

// TODO 1: Create a struct needed to hold the information to Map node
struct Map
{
	char orientation;
	RenderOrder order=RenderOrder::error;
	uint width=0;
	uint heigth = 0;
	uint tilewidth = 0;
	uint tileheigth = 0;
	uint nextobjectid = 0;

};

// ----------------------------------------------------
class j1Map : public j1Module
{
public:

	j1Map();

	// Destructor
	virtual ~j1Map();

	// Called before render is available
	bool Awake(pugi::xml_node& conf);

	// Called each loop iteration
	void Draw();

	// Called before quitting
	bool CleanUp();

	// Load new map
	bool Load(const char* path);

private:


	void LoadAndFillMap();

public:

	// TODO 1: Add your struct for map info as public for now
	
	struct Map;

private:

	pugi::xml_document	map_file;
	p2SString			folder;
	bool				map_loaded;
};

#endif // __j1MAP_H__