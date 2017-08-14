{"filter":false,"title":"history.php","tooltip":"/history.php","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":29,"column":2},"action":"insert","lines":["<?php","    // configuration","    require(\"../includes/config.php\"); ","    // query database for history","    $result = ","        query(","            \"SELECT ","                transaction, trans_date, symbol, shares, share_price, trans_value ","                FROM history ","                WHERE id = ? ","                ORDER BY trans_date DESC\", ","                $_SESSION[\"id\"]","        );","        ","    $history = [];","    foreach ($result as $row)","    {","        $history[] = [","            \"transaction\" => $row[\"transaction\"],","            \"trans_date\"  => date_format(date_create($row[\"trans_date\"]), 'm-d-Y g:i A'),","            \"symbol\"      => $row[\"symbol\"],","            \"shares\"      => number_format($row[\"shares\"]),","            \"share_price\" => number_format($row[\"share_price\"], 2),","            \"trans_value\" => number_format($row[\"trans_value\"], 2)","        ];","    }    ","    ","    // render history","    render(\"history.php\", [\"title\" => TITLE_HISTORY, \"history\" => $history]);","?>"],"id":1}]]},"ace":{"folds":[],"scrolltop":219,"scrollleft":0,"selection":{"start":{"row":29,"column":2},"end":{"row":29,"column":2},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":12,"state":"php-start","mode":"ace/mode/php"}},"timestamp":1467820385272,"hash":"44ba6ac85838524faef45fe816b2f7521353e701"}