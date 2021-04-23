#include <rclcpp/rclcpp.hpp>  //ROS2 C++ library

int main(int argc, char* argv[])
{
  rclcpp::init(argc, argv);                        //初期化
  rclcpp::executors::SingleThreadedExecutor exec;  // multi thread initialize

  exec.spin();         // spin
  rclcpp::shutdown();  // shutdown

  return 0;
}