# 第二章:開始學習HTML
## 2.1準備工作
在開始編寫 HTML 文件之前，您需要以下準備工作：

一個純文本編輯器，如 Notepad 或 Sublime Text。

了解如何保存文件為 .html 格式。

了解基本的 HTML 元素和標籤。

## 2.2創建HTML文件

創建 HTML 文件需要遵循以下步驟：

開啟純文本編輯器，如 Notepad 或 Sublime Text。

創建一個新的文件。

輸入以下基本模板：
```html
<!DOCTYPE html>
<html>
<head>
	<title>網頁標題</title>
</head>
<body>
	網頁內容
</body>
</html>
```
將檔案儲存為 .html 格式，例如 index.html。

## 2.3HTML的基本元素
HTML 的基本元素包括：

元素標籤：用於定義元素的開始和結束，例如 < p >和< /p >。

元素內容：位於元素標籤之間的文本或其他元素。

屬性：位於元素標籤內部，用於提供有關元素的額外信息。

例如，以下是一個包含標題和段落元素的 HTML 文件：
```html
<!DOCTYPE html>
<html>
<head>
	<title>我的網頁</title>
</head>
<body>
	<h1>歡迎來到我的網頁！</h1>
	<p>這是一個段落，包含了一些文本。</p>
</body>
</html>
```
在這個例子中，< h1 > 是一個標題元素，< p > 是一個段落元素，title 屬性提供了網頁的標題。

## 2.4常用的HTML標籤
HTML提供了許多標籤，用於定義網頁的結構和內容。以下是一些常用的HTML標籤：

< h1 >到< h6 >：定義標題元素，< h1 >為最高層級標題。
  
< p >：定義段落元素。
  
< a >：定義超鏈接元素，用於將文本或圖像連接到其他網頁或文件。

< img >：定義圖像元素。

< ul > 和 < ol >：定義無序列表和有序列表元素。

< li >：定義列表項元素。

< table >：定義表格元素。

< tr >：定義表格行元素。


## 2.5HTML表格和表單
HTML 表格用於將數據和信息以表格形式展示在網頁上。一個表格由行和列組成，每個單元格可以包含文本、圖像或其他元素。

以下是一個簡單的 HTML 表格的範例：

```html
<table>
	<tr>
		<th>姓名</th>
		<th>年齡</th>
		<th>性別</th>
	</tr>
	<tr>
		<td>小明</td>
		<td>20</td>
		<td>男</td>
	</tr>
	<tr>
		<td>小紅</td>
		<td>25</td>
		<td>女</td>
	</tr>
</table>
```
在這個例子中，< table >元素用於定義一個表格，< tr >元素用於定義表格的一行，< th >元素用於定義表頭單元格，< td >元素用於定義數據單元格。

HTML表單

HTML表單用於收集使用者輸入的信息。表單包含一個或多個表單元素，例如文本框、下拉列表、單選按鈕和多選框等。

以下是一個簡單的 HTML 表單的範例：

```html
<form>
	<label for="name">姓名：</label>
	<input type="text" id="name" name="name">
	<br>
	<label for="email">電子郵件：</label>
	<input type="email" id="email" name="email">
	<br>
	<label for="gender">性別：</label>
	<input type="radio" id="male" name="gender" value="male">
	<label for="male">男</label>
	<input type="radio" id="female" name="gender" value="female">
	<label for="female">女</label>
	<br>
	<label for="country">國家：</label>
	<select id="country" name="country">
		<option value="Taiwan">台灣</option>
		<option value="China">中國</option>
		<option value="USA">美國</option>
	</select>
	<br>
	<label for="message">留言：</label>
	<textarea id="message" name="message"></textarea>
	<br>
	<input type="submit" value="提交">
</form>
```
在這個例子中

< form >元素用於定義表單

< label >元素用於定義表單元素的標籤

< input >元素用於定義文本框和單選按鈕等表單元素

< select >元素用於定義下拉列表

< textarea >元素用於定義多行文本框

< input type="submit" >用於定義提交
  
  
  
