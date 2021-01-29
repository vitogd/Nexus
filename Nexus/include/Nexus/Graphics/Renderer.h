#pragma once

#include <Nexus/Window/Window.h>

namespace Nexus {

	class Renderer {
	public:
		static SDL_Renderer* Get();

		static void Create(Configuration& config);

		static void Clear();
		static void Present();

	private:
		Renderer() {};

		static SDL_Renderer* renderer;
	};

}
