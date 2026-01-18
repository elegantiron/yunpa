add_executable(${PROJECT_NAME})
target_sources(
    ${PROJECT_NAME}
    PRIVATE
    FILE_SET HEADERS
    BASE_DIRS include
)
target_link_libraries(
    ${PROJECT_NAME}
    PRIVATE
    libyunpa
)
add_subdirectory(src)