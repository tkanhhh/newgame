1. Hướng dẫn cài đặt: cách lấy chương trình về, tất cả các câu lệnh, cài đặt để có thể chạy được chương trình
- Cài đặt chạy chương trình:
  + Cài đặt MinGW: https://sourceforge.net/projects/mingw/
  + Cài đặt SDL2 (phiên bản phù hợp với máy và phần mềm code đang sử dụng)

- Cách lấy chương trình:
  + Truy cập link github: 
  + Sau đó, tải bài repository về máy-> giải nén -> vào thư mục Release -> chạy Project.exe hoặc WizardAdventure.exe để chạy game

2. Mô tả chung về trò chơi, các ý tưởng chính
- Trò chơi di chuyển các khối gạch đang rơi tự do từ trên xuống bên trong khung hình chứ nhật cho trước. 
- Chỗ nào có gạch rồi thì không di chuyển được tới vị trí đó. 
- Người chơi xếp những khối hình sao cho khối hình lấp đầy 1 hàng ngang để ghi điểm và hàng ngang ấy sẽ biến mất. 

3. Mô tả các chức năng, kỹ thuật đã cài đặt, kèm video minh họa (chèn link video youtube)
- Chức năng thay đổi level: sử dụng mũi tên lên xuống để thay đổi level (tốc độ rơi của khối gỗ) trước khi bắt đầu chơi.
- Chức năng di chuyển: Sử dụng mũi tên trái, phải, xuống để di chuyển khối gỗ.
- Chức năng xoay chiều khối gố: sử dụng mũi tên lên để xoay khối gỗ.
- Cách tính điểm, tăng level:
  + Tăng level: tăng level theo cấp số cộng 10 dòng được xoá. (lv0: 0-9 dòng; lv1: 10-19 dòng;...)
  + Tính điểm: Tính điểm theo level và theo số dòng được xoá cùng lúc. (Tối đa 4 dòng xoá được cùng lúc)
- Link youtube: <<chưa coá>>
- Kỹ thuật đã sử dụng: cấu trúc, định nghĩa, mảng, đồ hoạ,...

5. Kết luận, hướng phát triển và các điều tâm đắc rút ra được sau khi hoàn thiện chương trình
- Kết luận: Lập trình trò chơi đã giúp em tăng khả năng hiểu biết và sử dụng ngôn ngữ C++; nâng cao năng lực xử lý nhiều file, nhiều chương trình con
- Hướng phát triển: Tăng độ khó cho trò chơi bằng các khối gỗ ẩn, bổ sung phần preview khối gỗ trên màn hình.
