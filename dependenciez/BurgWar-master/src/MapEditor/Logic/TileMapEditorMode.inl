// Copyright (C) 2020 Jérôme Leclercq
// This file is part of the "Burgwar" project
// For conditions of distribution and use, see copyright notice in LICENSE

#include <MapEditor/Logic/TileMapEditorMode.hpp>
#include <cassert>

namespace bw
{
	inline auto TileMapEditorMode::GetTileMapData() const -> const TileMapData&
	{
		return m_tilemapData;
	}
}
