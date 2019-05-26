#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginMyRobot : public WorldPlugin	
// Creating a WorldPlugin class that inherits from the gazebo WorldPlugin class.
//This class offers multiple functions and variables but we'll only be using the constructor and the Load function.
  {
    public: WorldPluginMyRobot() : WorldPlugin()
            {
              printf("Welcome to Udacity's World!\n");
            }
// The Load() function is mandatory and should always be included as it receives info from the world file.
    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
// The last step is to register the plugin with the simulator.
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}
