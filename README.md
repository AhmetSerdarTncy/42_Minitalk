<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>42 Minitalk</title>
    </style>
</head>
<body>
    <div class="container">
        <h1>42 Minitalk</h1>
        <h2>Proje Açıklaması</h2>
        <p><strong>42 Minitalk</strong>, 42 Network'ün bir projesidir ve sinyal kullanarak iki süreç arasında iletişim kurmayı amaçlar. Bu projede, basit bir istemci-sunucu (client-server) mimarisi kurarak metin mesajları iletmek için Unix sinyalleri kullanılır.</p>
        <h2>İçindekiler</h2>
        <ul>
            <li><a href="#kurulum">Kurulum</a></li>
            <li><a href="#kullanım">Kullanım</a></li>
            <li><a href="#dosya-yapısı">Dosya Yapısı</a></li>
            <li><a href="#özellikler">Özellikler</a></li>
            <li><a href="#öğrenilenler">Öğrenilenler</a></li>
            <li><a href="#yazar">Yazar</a></li>
        </ul>
        <h2 id="kurulum">Kurulum</h2>
        <p>Proje dizininde aşağıdaki adımları takip ederek projeyi kurabilirsiniz:</p>
        <ol>
            <li>Depoyu klonlayın:
                <pre><code>git clone https://github.com/AhmetSerdarTncy/42_Minitalk.git
cd 42_Minitalk</code></pre>
            </li>
            <li>Projeyi derleyin:
                <pre><code>make</code></pre>
            </li>
        </ol>
        <h2 id="kullanım">Kullanım</h2>
        <h3>Sunucuyu Başlatma</h3>
        <p>Sunucuyu başlatmak için <code>server</code> ikili dosyasını çalıştırın. Sunucu PID'sini terminalde göreceksiniz, bu PID istemci tarafından kullanılacaktır.</p>
        <pre><code>./server</code></pre>
        <h3>İstemciyi Kullanma</h3>
        <p>İstemci programı, sunucu PID'sini ve gönderilecek mesajı parametre olarak alır.</p>
        <pre><code>./client &lt;server_pid&gt; "Gönderilecek mesaj"</code></pre>
        <p>Örnek:</p>
        <pre><code>./client 12345 "Hello, World!"</code></pre>
        <h2 id="dosya-yapısı">Dosya Yapısı</h2>
        <ul>
            <li><code>server.c</code> : Sunucu uygulamasının kaynak kodları.</li>
            <li><code>client.c</code> : İstemci uygulamasının kaynak kodları.</li>
            <li><code>utils.c</code> : Yardımcı fonksiyonlar.</li>
            <li><code>Makefile</code> : Projeyi derlemek için kullanılan Makefile.</li>
        </ul>
        <h2 id="özellikler">Özellikler</h2>
        <ul>
            <li><strong>Sinyal Kullanımı</strong>: İki süreç arasında iletişim için <code>SIGUSR1</code> ve <code>SIGUSR2</code> sinyalleri kullanılır.</li>
            <li><strong>Mesaj İletimi</strong>: İstemci tarafından gönderilen mesaj sunucu tarafından alınır ve ekrana yazdırılır.</li>
            <li><strong>Hata Yönetimi</strong>: Geçersiz PID veya diğer hata durumları için uygun hata mesajları görüntülenir.</li>
        </ul>
        <h2 id="öğrenilenler">Öğrenilenler</h2>
        <p>Bu proje sayesinde Unix sinyallerinin kullanımı, süreçler arası iletişim ve düşük seviyeli programlama konularında deneyim kazanılmıştır. Ayrıca, basit bir istemci-sunucu mimarisi tasarlamak ve uygulamak konusunda pratik yapılmıştır.</p>
        <h2 id="yazar">Yazar</h2>
        <p><strong>Ahmet Serdar Tunçay</strong></p>
        <ul>
            <li>GitHub: <a href="https://github.com/AhmetSerdarTncy">AhmetSerdarTncy</a></li>
        </ul>
    </div>
</body>
</html>
