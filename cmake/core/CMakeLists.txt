
cmake_minimum_required( VERSION 3.1...3.16 )

#get boost
include( ${MEGA_ROOT_DIR}/cmake/boost_include.cmake )

#zeromq
include( ${MEGA_ROOT_DIR}/cmake/zmq_include.cmake )

#get xsde
include( ${MEGA_ROOT_DIR}/cmake/xsde_include.cmake )

#get spdlog
include( ${MEGA_ROOT_DIR}/cmake/spdlog_include.cmake )

#get message pack
include( ${MEGA_ROOT_DIR}/cmake/messagepack_include.cmake )

#common
include( ${MEGA_ROOT_DIR}/cmake/common_include.cmake )

#eg
include( ${MEGA_ROOT_DIR}/cmake/eg_include.cmake )

#get mega schema
include( ${MEGA_ROOT_DIR}/cmake/schema/schema_include.cmake )

set( MEGA_LIBRARY
	${MEGA_API_DIR}/megastructure/coordinator.hpp
	${MEGA_API_DIR}/megastructure/clientServer.hpp
	${MEGA_API_DIR}/megastructure/queue.hpp
	${MEGA_API_DIR}/megastructure/activity.hpp
	${MEGA_API_DIR}/megastructure/buffer.hpp
	${MEGA_API_DIR}/megastructure/networkAddressTable.hpp
	${MEGA_API_DIR}/megastructure/log.hpp
	)

set( MEGA_SOURCES
	${MEGA_SRC_DIR}/core/coordinator.cpp
	${MEGA_SRC_DIR}/core/clientServer.cpp
	${MEGA_SRC_DIR}/core/queue.cpp
	${MEGA_SRC_DIR}/core/activity.cpp
	${MEGA_SRC_DIR}/core/buffer.cpp
	${MEGA_SRC_DIR}/core/networkAddressTable.cpp
    )
    
add_library( megastructurelib 
                    ${MEGA_LIBRARY}
                    ${MEGA_SOURCES}
				)

set_target_properties( megastructurelib PROPERTIES FOLDER core )
set_target_properties( megastructurelib PROPERTIES DEBUG_POSTFIX d )

link_boost( megastructurelib filesystem )
link_boost( megastructurelib iostreams )
link_boost( megastructurelib serialization )
link_zmq( megastructurelib )
link_xsde( megastructurelib )
link_spdlog( megastructurelib )
link_messagePack( megastructurelib )
link_common( megastructurelib )
link_schemalib( megastructurelib )
link_eg( megastructurelib )

target_link_libraries( megastructurelib megastructureprotocollib )

install( FILES ${MEGA_LIBRARY} DESTINATION include/megastructure )
install( TARGETS megastructurelib EXPORT mega DESTINATION lib)
install( EXPORT mega NAMESPACE Mega:: FILE mega-config.cmake DESTINATION share )