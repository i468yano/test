#!/usr/bin/php
<?php 
  foreach(file('/usr/share/dict/words') as $line){
    // strpos() 関数を使って、文字列 "xy" が含まれる単語を echo "$line"; で表示しなさい。
strpos(($line,"xy") !== false){//もし"xy"が含まれる単語が存在しない場合はfalseを返す為、!== falseとする
 echo "$line";
}
  } 
?>
