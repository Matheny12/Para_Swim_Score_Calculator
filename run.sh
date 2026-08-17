#bin/bash

#!/bin/bash
emcc Para_Score.cpp -o Para_score.js -s EXPORTED_FUNCTIONS='["_calculateScore"]' -s EXPORTED_RUNTIME_METHODS='["ccall"]'
git add .
git commit -a -m "Update"
git push
npx vercel --prod
