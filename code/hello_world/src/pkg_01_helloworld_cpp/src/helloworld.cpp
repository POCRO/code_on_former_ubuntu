/* 需求：终端输出helloworld*/
#include "rclcpp/rclcpp.hpp"
int main(int argc,char **argv)
{
    rclcpp::init(argc,argv);  //初始化ROS2K客户端
    auto node = rclcpp::Node::make_shared("helloworld_node_cpp"); //创建节点指针
    RCLCPP_INFO(node->get_logger(),"hello,world!"); //输出日志
    rclcpp::shutdown();//释放资源
    return 0;
}

