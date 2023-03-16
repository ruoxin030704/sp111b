# 第四章：開始學習CSS

## 4.1在HTML中引用CSS
要在HTML中使用CSS，可以使用以下方法之一：

1.在HTML中使用 <style> 標籤，將 CSS 代碼嵌入到 HTML 中：
```html
<!DOCTYPE html>
<html>
<head>
	<title>My Page</title>
	<style>
		h1 {
			color: red;
			font-size: 36px;
		}
		p {
			color: blue;
			font-size: 16px;
		}
	</style>
</head>
<body>
	<h1>Hello World!</h1>
	<p>This is my page.</p>
</body>
</html>
```
2.在HTML中使用< link >標籤，將外部的CSS文件引入到HTML中：
```html
<!DOCTYPE html>
<html>
<head>
	<title>My Page</title>
	<link rel="stylesheet" href="style.css">
</head>
<body>
	<h1>Hello World!</h1>
	<p>This is my page.</p>
</body>
</html>
```
## 4.2CSS的基本屬性
CSS 的基本屬性包括：

color：設置文字的顏色。
  
background-color：設置元素的背景顏色。

font-size：設置文字的大小。

font-family：設置文字的字體。

border：設置元素的邊框，包括邊框的寬度、樣式和顏色。

padding：設置元素的內邊距。

margin：設置元素的外邊距。

text-align：設置文字的對齊方式。

以下是一個簡單的 CSS 樣式的範例：

```css
h1 {
	color: red;
	font-size: 36px;
	text-align: center;
}
```
## 4.3常用的 CSS 屬性
CSS 提供了很多屬性，以下是一些常用的 CSS 屬性：

width：設置元素的寬度。

height：設置元素的高度。

background-image：設置元素的背景圖片。

background-position：設置背景圖片的位置。

background-repeat：設置背景圖片的重複方式。

border-radius：設置元素的圓角。

box-shadow：設置元素的陰影。

text-decoration：設置文字的裝飾，例如下劃線、刪除線等。

text-transform：設置文字的轉換，例如轉換為大寫、小寫等。

以下是一個使用了這些屬性的 CSS 範例：

```css
.button {
	width: 120px;
	height: 40px;
	background-color: #ff0000;
	color: #fff;
	font-size: 16px;
	border-radius: 4px;
	box-shadow: 2px 2px 2px #888;
	text-decoration: none;
	text-transform: uppercase;
}
```
