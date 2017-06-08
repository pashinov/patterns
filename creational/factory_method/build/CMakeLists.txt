# Сборочный файл для программы

# Минимальная версия CMake
cmake_minimum_required( VERSION 3.3.2 )

# Используемый в исходном коде стандарт языка C++
set ( CMAKE_CXX_STANDARD 14 )

set ( CMAKE_CXX_STANDARD_REQUIRED on )

# Устанавливаем флаги компилятора
set ( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14" )

# Устанавливаем значение переменной PROJECT
set ( PROJECT factory_method )

# Имя проекта
project ( ${PROJECT} )

# Указываем пути, где искать заголовочники, дополнительно к стандартным путям.
include_directories ( "../inc")

# Собираем исходные файлы программы
aux_source_directory( ../src SOURCES )

link_directories("/usr/local/lib"
 				"/usr/local/include")
				
# Указываем путь к исполнеямому файлу
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# Собираем исполняемый файл с именем ${PROJECT}.
add_executable( ${PROJECT} ${SOURCES} )
