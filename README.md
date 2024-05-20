42 Minitalk
Proje Açıklaması
42 Minitalk, 42 Network'ün bir projesidir ve sinyal kullanarak iki süreç arasında iletişim kurmayı amaçlar. Bu projede, basit bir istemci-sunucu (client-server) mimarisi kurarak metin mesajları iletmek için Unix sinyalleri kullanılır.

İçindekiler
Kurulum
Kullanım
Dosya Yapısı
Özellikler
Öğrenilenler
Yazar
Kurulum
Proje dizininde aşağıdaki adımları takip ederek projeyi kurabilirsiniz:

Depoyu klonlayın:

sh
Kodu kopyala
git clone https://github.com/AhmetSerdarTncy/42_Minitalk.git
cd 42_Minitalk
Projeyi derleyin:

sh
Kodu kopyala
make
Kullanım
Sunucuyu Başlatma
Sunucuyu başlatmak için server ikili dosyasını çalıştırın. Sunucu PID'sini terminalde göreceksiniz, bu PID istemci tarafından kullanılacaktır.

sh
Kodu kopyala
./server
İstemciyi Kullanma
İstemci programı, sunucu PID'sini ve gönderilecek mesajı parametre olarak alır.

sh
Kodu kopyala
./client <server_pid> "Gönderilecek mesaj"
Örnek:

sh
Kodu kopyala
./client 12345 "Hello, World!"
Dosya Yapısı
server.c : Sunucu uygulamasının kaynak kodları.
client.c : İstemci uygulamasının kaynak kodları.
utils.c : Yardımcı fonksiyonlar.
Makefile : Projeyi derlemek için kullanılan Makefile.
Özellikler
Sinyal Kullanımı: İki süreç arasında iletişim için SIGUSR1 ve SIGUSR2 sinyalleri kullanılır.
Mesaj İletimi: İstemci tarafından gönderilen mesaj sunucu tarafından alınır ve ekrana yazdırılır.
Hata Yönetimi: Geçersiz PID veya diğer hata durumları için uygun hata mesajları görüntülenir.
Öğrenilenler
Bu proje sayesinde Unix sinyallerinin kullanımı, süreçler arası iletişim ve düşük seviyeli programlama konularında deneyim kazanılmıştır. Ayrıca, basit bir istemci-sunucu mimarisi tasarlamak ve uygulamak konusunda pratik yapılmıştır.

Yazar
Ahmet Serdar Tunçyürek

GitHub: AhmetSerdarTncy
