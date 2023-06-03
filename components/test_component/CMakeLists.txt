FILE(GLOB comp_sources 
"include/*.*"
"src/*.*" 
)
idf_component_register(
    SRCS ${comp_sources} 
    INCLUDE_DIRS . include 
    REQUIRES RadioLib
)