// Copyright (C) 2020 Jérôme Leclercq
// This file is part of the "Burgwar" project
// For conditions of distribution and use, see copyright notice in LICENSE

#pragma once

#ifndef BURGWAR_CLIENTLIB_UTILITY_TILEMAPDATA_HPP
#define BURGWAR_CLIENTLIB_UTILITY_TILEMAPDATA_HPP

#include <Nazara/Math/Angle.hpp>
#include <Nazara/Math/Rect.hpp>
#include <Nazara/Math/Vector2.hpp>
#include <string>
#include <vector>

namespace bw
{
	struct TileData
	{
		std::string materialPath;
		Nz::Rectf texCoords;
	};

	struct TileMapData
	{
		std::vector<Nz::UInt32> content;
		Nz::DegreeAnglef rotation;
		Nz::Vector2f origin;
		Nz::Vector2f tileSize;
		Nz::Vector2ui mapSize;
	};

	struct TileMaterialData
	{
		std::string group;
		std::string path;
		Nz::Vector2ui tileCount;
	};
}

#endif
