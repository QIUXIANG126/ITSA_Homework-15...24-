# [題目15. 文字與字母出現次數](itsa_word_frequency_of_sentence.cpp)
  found 儲存找到的字母，輸出時用以在key中有找到的字母 (b!=0) 為順序輸出。
 
# [題目16. 子字串出現次數](itsa_sentence_frequency.cpp)
  假如有超過題目規定的長度，用resize 將輸入超過的部分刪除。 found 儲存找到的位置，c儲存找到的次數。
  
# [題目17. 英文斷句](itsa_sentence.cpp)
  //有問題
  foundL, foundR找到斷詞的開頭跟結尾。 founRE紀錄輸出字串中是否有重複，如果斷詞只有一個字將它轉換成大寫再判斷，最後再將輸出字串統一成小寫。
  
# [題目18. QWERTY](https://github.com/QIUXIANG126/ITSA_Homework-15...24-/blob/a30a62ffd2bb314b73e2a768894c61ebe1dfb281/18.%20QWERTY)
  getline讀取字串，這個字串是按照鍵盤上的順序排列的，會把輸入的字往右移一格
  
# [題目19.最少派車次數](https://github.com/QIUXIANG126/ITSA_Homework-15...24-/blob/7a7a4bb15dfe7d250a02d5a11024048c32bece2c/19.%E6%9C%80%E5%B0%91%E6%B4%BE%E8%BB%8A%E6%95%B8)
  輸入班表時間 判斷有幾班(數入的班表數) 判斷開始時間是否符合任一班的結束時間就 -1
  
# [題目20. 大整數加法](https://github.com/QIUXIANG126/ITSA_Homework-15...24-/blob/b6a16a756da3b19779be359cbdde7a8a880ff1c0/%E9%A1%8C%E7%9B%AE20.%20%E5%A4%A7%E6%95%B4%E6%95%B8%E5%8A%A0%E6%B3%95)
  原本想用gmpxx.h這個函式庫但是沒有裝所以只好採取std::string來儲存大整數

# [題目21. 最大值與最小值](itsa_max_and_min.cpp)
  當輸入值小於或大於儲存值時，儲存值將儲存輸入值。fixed顯示小數點,setprecision需要的小數點位
  
# [題目22. 圈圈叉叉](itsa_OOXX.cpp)
  if判斷所有可能獲勝的條件，如是輸出True，否則輸出False。 二維矩陣較方便觀察
  
 # [題目23. 找零錢問題](https://github.com/QIUXIANG126/ITSA_Homework-15...24-/blob/9a7f45c6f14b9df8a038980f79daf973ceabb85b/23.%20%E6%89%BE%E9%9B%B6%E9%8C%A2%E5%95%8F%E9%A1%8C)
istringstream把整數或浮點數字符等等作為輸入，提取需要的字

# [題目24. 計算複利](https://github.com/QIUXIANG126/ITSA_Homework-15...24-/blob/33da9757144081a0635d1819ed8de3cb065633b1/24.%20%E8%A8%88%E7%AE%97%E8%A4%87%E5%88%A9)
使用int讀值會超過所以使用long long
