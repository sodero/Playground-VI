(rexx "script") ; "","rx script0",""
(rexx "script" "x") ; "","rx scriptx0",""
(rexx "script" (safe)) ; "","rx script0",""
(rexx (safe) "trash" "my" "script") ; "","rx trashmyscript0",""
(rexx "script" (safe) (quiet)) ; "","rx script0",""
(rexx "trash" " my " "script" (safe) (quiet)) ; "","rx trash my script0",""
(rexx (safe) (quiet) "script") ; "","rx script0",""
(rexx (safe) "script" (quiet)) ; "","rx script0",""
(rexx "script" "x" (safe) (quiet)) ; "","rx scriptx0",""
(rexx) ; "","Line 1: syntax error, unexpected ')' ')'",""
