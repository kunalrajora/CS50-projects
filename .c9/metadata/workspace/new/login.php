{"changed":true,"filter":false,"title":"login.php","tooltip":"/new/login.php","value":"<?php\n//include config\nrequire_once('../includes/config.php');\n//check if already logged in\nif( $user->is_logged_in() ){ header('Location: moon.php'); } \n?>\n<?php\n\t//process login form if submitted\n\tif(isset($_POST['submit'])){\n\t\t$username = trim($_POST['username']);\n\t\t$password = trim($_POST['password']);\n\t\t\n\t\tif($user->login($username,$password)){ \n\t\t\t//logged in return to index page\n\t\t\theader('Location: moon.php');\n\t\t\texit;\n\t\t\n\t\t} else {\n\t\t\t$message = '<p class=\"error\">Wrong username or password</p>';\n\t\t}\n\t}//end if submit\n\tif(isset($message)){ echo $message; }\n\t?>","undoManager":{"mark":0,"position":2,"stack":[[{"start":{"row":0,"column":0},"end":{"row":16,"column":3},"action":"insert","lines":["<?php","\t//process login form if submitted","\tif(isset($_POST['submit'])){","\t\t$username = trim($_POST['username']);","\t\t$password = trim($_POST['password']);","\t\t","\t\tif($user->login($username,$password)){ ","\t\t\t//logged in return to index page","\t\t\theader('Location: moon.php');","\t\t\texit;","\t\t","\t\t} else {","\t\t\t$message = '<p class=\"error\">Wrong username or password</p>';","\t\t}","\t}//end if submit","\tif(isset($message)){ echo $message; }","\t?>"],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":2}],[{"start":{"row":0,"column":0},"end":{"row":5,"column":2},"action":"insert","lines":["<?php","//include config","require_once('../includes/config.php');","//check if already logged in","if( $user->is_logged_in() ){ header('Location: moon.php'); } ","?>"],"id":3}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":5,"column":2},"end":{"row":5,"column":2},"isBackwards":true},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1468675537105}