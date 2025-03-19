#include "avt_vimba_camera/mono_camera_node.hpp"

#include <memory>

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions options;
  auto node = std::make_shared<avt_vimba_camera::MonoCameraNode>(options);
  node->start();
  rclcpp::spin(node);

  return 0;
}

RCLCPP_COMPONENTS_REGISTER_NODE(avt_vimba_camera::MonoCameraNode)
