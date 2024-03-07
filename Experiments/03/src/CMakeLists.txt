include_directories(${EXP03_BASE_DIR}/common)

# mongoc-client
find_package(libmongoc-1.0 1.13 REQUIRED)
find_package(Boost 1.54.0 REQUIRED COMPONENTS log log_setup)

# precondition : build Lumine
set(FUNC_WORKER_CPP_LIBRARIES_NAME worker_cpp mc)

# one: set name
set(EXP03_COMPOSE_POST_0                        exp03_compose_post_0)
set(EXP03_UPLOAD_MEDIA_1                        exp03_upload_media_1)
set(EXP03_UPLOAD_TEXT_1                         exp03_upload_text_1)
set(EXP03_UPLOAD_UNIQUE_ID_1                    exp03_upload_unique_id_1)
set(EXP03_UPLOAD_CREATOR_WITH_USER_ID_1         exp03_upload_creator_with_user_id_1)
set(EXP03_UPLOAD_URLS_2                         exp03_upload_urls_2)
set(EXP03_UPLOAD_CREATOR_3                      exp03_upload_creator_3)
set(EXP03_UPLOAD_MEDIA_3                        exp03_upload_media_3)
set(EXP03_UPLOAD_TEXT_3                         exp03_upload_text_3)
set(EXP03_UPLOAD_UNIQUE_ID_3                    exp03_upload_unique_id_3)
set(EXP03_STORE_POST_4                          exp03_store_post_4)

# two: include
include_directories(${MONGOC_INCLUDE_DIRS})
include_directories(${THRIFT_INCLUDE_DIRS})

# three: add executable files
add_executable(${EXP03_COMPOSE_POST_0}                      ${EXP03_BASE_DIR}/src/0_ComposePostService/ComposePost.cpp)
add_executable(${EXP03_UPLOAD_MEDIA_1}                      ${EXP03_BASE_DIR}/src/1_MediaService/UploadMedia1.cpp)
add_executable(${EXP03_UPLOAD_TEXT_1}                       ${EXP03_BASE_DIR}/src/1_TextService/UploadText1.cpp)
add_executable(${EXP03_UPLOAD_UNIQUE_ID_1}                  ${EXP03_BASE_DIR}/src/1_UniqueIdService/UploadUniqueId1.cpp)
add_executable(${EXP03_UPLOAD_CREATOR_WITH_USER_ID_1}       ${EXP03_BASE_DIR}/src/1_UserService/UploadCreatorWithUserId1.cpp)
add_executable(${EXP03_UPLOAD_URLS_2}                       ${EXP03_BASE_DIR}/src/2_UrlShortenService/UploadUrls2.cpp)
add_executable(${EXP03_UPLOAD_CREATOR_3}                    ${EXP03_BASE_DIR}/src/3_ComposePostService/UploadCreator3.cpp)
add_executable(${EXP03_UPLOAD_MEDIA_3}                      ${EXP03_BASE_DIR}/src/3_ComposePostService/UploadMedia3.cpp)
add_executable(${EXP03_UPLOAD_TEXT_3}                       ${EXP03_BASE_DIR}/src/3_ComposePostService/UploadText3.cpp)
add_executable(${EXP03_UPLOAD_UNIQUE_ID_3}                  ${EXP03_BASE_DIR}/src/3_ComposePostService/UploadUniqueId3.cpp)
add_executable(${EXP03_STORE_POST_4}                        ${EXP03_BASE_DIR}/src/4_PostStorageService/StorePost4.cpp)

# four: link
set(EXP03_COMMON_LIB
        ${FUNC_WORKER_CPP_LIBRARIES_NAME}
        ${MONGOC_LIBRARIES}
        ${Boost_LIBRARIES}
        nlohmann_json mc hiredis)

target_link_libraries(${EXP03_COMPOSE_POST_0}                   ${EXP03_COMMON_LIB})
target_link_libraries(${EXP03_UPLOAD_MEDIA_1}                   ${EXP03_COMMON_LIB})
target_link_libraries(${EXP03_UPLOAD_TEXT_1}                    ${EXP03_COMMON_LIB})
target_link_libraries(${EXP03_UPLOAD_UNIQUE_ID_1}               ${EXP03_COMMON_LIB})
target_link_libraries(${EXP03_UPLOAD_CREATOR_WITH_USER_ID_1}    ${EXP03_COMMON_LIB})
target_link_libraries(${EXP03_UPLOAD_URLS_2}                    ${EXP03_COMMON_LIB})
target_link_libraries(${EXP03_UPLOAD_CREATOR_3}                 ${EXP03_COMMON_LIB})
target_link_libraries(${EXP03_UPLOAD_MEDIA_3}                   ${EXP03_COMMON_LIB})
target_link_libraries(${EXP03_UPLOAD_TEXT_3}                    ${EXP03_COMMON_LIB})
target_link_libraries(${EXP03_UPLOAD_UNIQUE_ID_3}               ${EXP03_COMMON_LIB})
target_link_libraries(${EXP03_STORE_POST_4}                     ${EXP03_COMMON_LIB})