#include "rclcpp/rclcpp.hpp"
int main(int argc, char **argv)
{
    // 初始化 ROS 2 客户端
    rclcpp::init(argc, argv);

    // 创建节点指针
    auto node = std::make_shared<rclcpp::Node>("helloworld_node_cpp");

    // 输出日志,使用日志记录器输出一条信息
    RCLCPP_INFO(node->get_logger(), "Hello, world!");

    // 释放资源，确保程序正常结束
    rclcpp::shutdown();

    return 0;
}
