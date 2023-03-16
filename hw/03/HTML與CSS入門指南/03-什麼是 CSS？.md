# 第三章:什麼是CSS?
## 3.1 CSS 的定義
CSS 是層疊樣式表（Cascading Style Sheets）的縮寫，是一種用來控制網頁外觀的樣式表語言。它可以讓開發者將網頁的內容和外觀分離開來，使得網頁的風格更加統一和易於維護。

## 3.2 CSS的應用範圍
CSS 應用於所有的網頁，包括桌面網頁、手機網頁和應用程序等。

CSS 主要用於控制網頁的樣式和佈局，包括字體、顏色、背景、邊框、尺寸和位置等屬性。

## 3.3 CSS的基本語法
CSS 由兩部分組成：選擇器和屬性。選擇器用於選擇要應用樣式的元素，屬性用於定義要應用的樣式。

以下是一個簡單的 CSS 範例：

```css
body {
    background-color: #f0f0f0;
    font-family: Arial, sans-serif;
    font-size: 16px;
    color: #333;
}

h1 {
    font-size: 32px;
    font-weight: bold;
    color: #ff0000;
}
```
在這個例子中，body 和 h1 是選擇器，background-color、font-family、font-size、color 和 font-weight 是屬性，#f0f0f0、Arial, sans-serif、16px、#333 和 #ff0000 是屬性值。

## 3.4 CSS的選擇器和屬性
CSS 提供了多種選擇器和屬性，使得設計者可以根據需要定義不同的樣式。以下是一些常用的選擇器和屬性：

### 選擇器
元素選擇器：選擇指定的 HTML 元素，例如 h1、p、a 等。

類選擇器：選擇具有相同類名的元素，例如 .intro、.content 等。

ID 選擇器：選擇具有相同 ID 的元素，例如 #header、#nav 等。

屬性選擇器：選擇具有指定屬性的元素，例如 [href]、[target='_blank'] 等。

群組選擇器：選擇具有相同樣式的多個元素，例如 h1, h2, h3、.intro, .content 等。
### 屬性
文字樣式：color、font-size、font-family 等。

背景樣式：background-color、background-image 等。

邊框樣式：border-style、border-width、border-color 等。

尺寸和間距樣式：width、height、padding、margin。


