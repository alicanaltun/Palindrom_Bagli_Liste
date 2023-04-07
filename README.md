# Palindrom_Bagli_Liste
Bu proje tek bağlı bir listenin palindrom olup olmadığını sorgulayan ve cevaplayan bir C kodudur.

Bağlı listeyi oluşuturan "Dugum" yapısı içindeki "veri" değişkeni, o değişkene atanan tamsayıyı ifade eder.
"sonraki" işaretçisi ise kendinden sonra gelen düğümün adresini tutar. "palindrom_mu" fonksiyonu ile listenin
palindrom olup olmadığı belirlenir. Bu fonksiyonu incelediğimizde ilk başta listenin boş veya tek elemanlı olma
durumunda doğru(1) değerinin döndürülmesi sağlanır. Diğer durumda ise "hizli" ve "yavas" olmak üzere iki işaretçi
belirlenir. "hizli" işaretçisi bir adımda iki düğüm geçerken, "yavas" işaretçisi bir adımda bir düğüm geçer. Yani
"hizli" işaretçisi listenin sonuna geldiğinde, "yavas" işaretçisi listenin ortasına kadar gelir. Listeyi ortadan ikiye
ayırdığımızda solda kalan yani "yavas" işaretçisinin geçtiği elemanlar ters çevrilir ve listenin sağ tarafında kalan
elemanlarla karşılaştırılır. Elemanlar eşleşirse fonksiyon doğru(1), eşleşmezse yanlış(0) değeri döndürür. main fonksiyonu
içinde örnek düğümler oluşturulur ve tamsayılar bu düğümlere yerleştirilir.

Kodu herhangi bir C derleyicisinde, örnek düğümlerin içerisindeki tamsayıları değiştirerek derleyip çalıştırabilirsiniz.
