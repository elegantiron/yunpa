#include <libyunpa/Engine.hpp>

int main() {
  using libyunpa::Engine::Core;
  using libyunpa::Engine::ScenePtr;

  auto& core = Core::getInstance();
  core.run();
}
