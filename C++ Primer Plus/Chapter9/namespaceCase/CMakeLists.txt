# 最低版本要求
cmake_minimum_required(VERSION 2.8)

# 工程名称
project(namesp)

# 包含所有源文件
aux_source_directory(. SRCS)

# 生成可执行程序
add_executable(namesp ${SRCS})