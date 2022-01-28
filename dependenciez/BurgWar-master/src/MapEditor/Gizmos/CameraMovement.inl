// Copyright (C) 2020 Jérôme Leclercq
// This file is part of the "Burgwar" project
// For conditions of distribution and use, see copyright notice in LICENSE

#include <MapEditor/Gizmos/CameraMovement.hpp>
#include <cassert>

namespace bw
{
	inline float bw::CameraMovement::GetZoomLevel() const
	{
		return m_zoomLevel;
	}
}
