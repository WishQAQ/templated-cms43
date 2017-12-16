<?php
$z[0]=Array("field","",254,273);
$z[0][4]['name']="title";
$z[1]=Array("global","",274,300);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",341,370);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",410,468);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",637,672);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",1027,1056);
$z[5][4]['name']="position";
$z[6]=Array("channel","\r\n        <li><a href='[field:typeurl/]'>[field:typename/]</a></li>\r\n        ",1153,1369);
$z[6][4]['type']="son";
$z[6][4]['currentstyle']="<li><a href='~typelink~' class='case_hover'>~typename~</a></li>";
$z[7]=Array("list","\r\n        <li><img src=\"[field:picname/]\" /> <span> <b>[field:title/]</b>\r\n          <p>[field:description function='cn_substr(@me,80)'/]...</p>\r\n          </span> <a href=\"[field:arcurl/]\"><img src=\"/skin/images/news_3.jpg\" /></a> </li>\r\n        ",1473,1756);
$z[7][4]['pagesize']="4";
$z[8]=Array("pagelist","",1841,1894);
$z[8][4]['listitem']="index,end,pre,next,pageno";
$z[9]=Array("include","",1996,2033);
$z[9][4]['filename']="footer.htm";

?>