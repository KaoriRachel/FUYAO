#!/bin/bash

# build host 129
ssh -p 22 lgw@192.168.1.192 "cmake --build /tmp/host9 --target gateway engine launcher\
  exp02_compose_review_0 exp02_upload_movie_id_1 exp02_upload_text_1 exp02_upload_unique_id_1 \
  exp02_upload_rating_2 \
  exp02_upload_movie_ld_3 exp02_upload_rating_3 exp02_upload_text_3 exp02_upload_unique_id_3 \
  exp02_store_review_4 exp02_register_movie_id -- -j 32"

# build host 126
ssh -p 22 lgw@192.168.1.162 "cmake --build /tmp/host9 --target gateway engine launcher\
  exp02_compose_review_0 exp02_upload_movie_id_1 exp02_upload_text_1 exp02_upload_unique_id_1 \
  exp02_upload_rating_2 \
  exp02_upload_movie_ld_3 exp02_upload_rating_3 exp02_upload_text_3 exp02_upload_unique_id_3 \
  exp02_store_review_4 exp02_register_movie_id -- -j 32"

# build dpu 126
ssh -p 4022 ubuntu@192.168.1.162 "cmake --build /tmp/dpu6 --target agent gateway -- -j 8"

# build dpu 129
ssh -p 4022 ubuntu@192.168.1.192 "cmake --build /tmp/dpu9 --target agent gateway -- -j 8"



