# 第一章:什麼是 HTML？

## 1.1HTML的定義

HTML (HyperText Markup Language) 是一種標記語言，用於編寫網頁。它是網頁開發的基礎，用於定義網頁的結構、內容和樣式。

## 1.2HTML的應用範圍
HTML 可用於開發各種不同類型的網頁，包括：

靜態網頁：由 HTML 文件和圖像等資源組成，內容固定不變。

動態網頁：由 HTML、CSS、JavaScript 等技術組成，內容可以根據用戶的操作和系統狀態動態生成。

响應式網頁：由 HTML、CSS 和媒體查詢等技術組成，可以自適應不同屏幕大小和設備。

## 1.3HTML的基本結構
HTML 文件由標籤、元素和內容組成，其基本結構如下：

html
```html
<!DOCTYPE html>
<html>
<head>
	<title>網頁標題</title>
	<meta charset="UTF-8">
	<link rel="stylesheet" href="style.css">
</head>
<body>
	網頁內容
</body>
</html>
```

其中：

< !DOCTYPE html >：聲明文檔類型為 HTML5。

< html >：HTML 文件的根元素。
	
< head >：包含與文檔有關的信息，如標題、字符集和 CSS 樣式表等。
	
< title >：網頁的標題，顯示在瀏覽器標籤欄上。
	
< meta charset="UTF-8" >：聲明字符集為 UTF-8，用於支持多種語言。
	
< link >：引用外部 CSS 文件，用於為網頁添加樣式。
	
< body >：網頁的主要內容區域。
	
## 1.4HTML的元素和屬性
HTML 的基本單位是元素，元素由標籤和內容組成。例如，以下是一個段落元素：

```html
<p>這是一個段落。</p>
```
元素還可以包含屬性，用於指定元素的額外信息。例如，以下是一個圖像元素：
```html
<img src="image.png" alt="圖像">
```
其中 src 屬性指定圖像文件的路徑，alt 屬性指定當圖像無法顯示時顯示的替代文本。

HTML 有許多內置的元素
