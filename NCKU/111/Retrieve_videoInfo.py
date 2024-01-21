def retrieve_videos(director_name):
    # 根據提供的導演名稱查找 directorID
    director_query = "SELECT directorID FROM Director WHERE directFirstName = ?"
    director_id = execute_query(director_query, (director_name,))

    if director_id:
        # 使用 JOIN 擷取信息
        sql_query = """
            SELECT V.movieID, V.movieTitle, V.yearReleased, S.studioName, P.producerFirstName, P.producerLastName
            FROM Video V
            JOIN Studio S ON V.studioID = S.studioID
            JOIN Producer P ON V.producerID = P.producerID
            WHERE V.directorID = ?
        """
        results = execute_query(sql_query, (director_id,))

        # 顯示相關資訊
        for row in results:
            print("電影ID:", row[0])
            print("電影標題:", row[1])
            print("發行年份:", row[2])
            print("製片廠:", row[3])
            print("製片人:", f"{row[4]} {row[5]}")
            print("\n")

    else:
        print("數據庫中未找到該導演。")
