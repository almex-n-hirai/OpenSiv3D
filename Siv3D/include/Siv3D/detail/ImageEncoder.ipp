﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2023 Ryo Suzuki
//	Copyright (c) 2016-2023 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# pragma once

namespace s3d
{
	namespace ImageDecoder
	{
		template <class ImageDecoder>
		bool Add()
		{
			return Add(std::make_unique<ImageDecoder>());
		}
	}
}
