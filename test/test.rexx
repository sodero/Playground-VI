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
(rexx "script" (confirm 0) (prompt "p") (help "h")); "","ph0 rx script0",""
(rexx "script" (confirm 1) (prompt "p") (help "h")); "","ph0 rx script0",""
(rexx "script" (confirm 1) (prompt "p") (help "h")); "","ph0 rx script0",""
(user 2) (rexx "script" (confirm 2) (prompt "p") (help "h")); "","ph0 rx script0",""
(user 2) (rexx "script" (prompt "p") (help "h")); "","rx script0",""
(user 1) (rexx "script" (prompt "p") (help "h")); "","rx script0",""
(user 0) (rexx "script" (prompt "p") (help "h")); "","rx script0",""
(user 2) (rexx "script" (confirm) (prompt "p") (help "h")); "","ph0 rx script0",""
(user 1) (rexx "script" (confirm) (prompt "p") (help "h")); "","rx script0",""
(user 0) (rexx "script" (confirm) (prompt "p") (help "h")); "","rx script0",""
(user 2) (rexx "script" (confirm 2) (prompt "p") (help "h")); "","ph0 rx script0",""
(user 1) (rexx "script" (confirm 2) (prompt "p") (help "h")); "","rx script0",""
(user 0) (rexx "script" (confirm 2) (prompt "p") (help "h")); "","rx script0",""
(user 2) (rexx "script" (confirm "expert") (prompt "p") (help "h")); "","ph0 rx script0",""
(user 1) (rexx "script" (confirm "Expert") (prompt "p") (help "h")); "","rx script0",""
(user 0) (rexx "script" (confirm 'EXPERT') (prompt "p") (help "h")); "","rx script0",""
(user 2) (rexx "script" (confirm 1) (prompt "p") (help "h")); "","ph0 rx script0",""
(user 1) (rexx "script" (confirm 1) (prompt "p") (help "h")); "","ph0 rx script0",""
(user 0) (rexx "script" (confirm 1) (prompt "p") (help "h")); "","rx script0",""
(user 2) (rexx "script" (confirm "average") (prompt "p") (help "h")); "","ph0 rx script0",""
(user 1) (rexx "script" (confirm 'Average') (prompt "p") (help "h")); "","ph0 rx script0",""
(user 0) (rexx "script" (confirm "AVERAGE") (prompt "p") (help "h")); "","rx script0",""
(user 2) (rexx "script" (confirm 0) (prompt "p") (help "h")); "","ph0 rx script0",""
(user 1) (rexx "script" (confirm 0) (prompt "p") (help "h")); "","ph0 rx script0",""
(user 0) (rexx "script" (confirm 0) (prompt "p") (help "h")); "","ph0 rx script0",""
(user 2) (rexx "script" (confirm "novice") (prompt "p") (help "h")); "","ph0 rx script0",""
(user 1) (rexx "script" (confirm "novice") (prompt "p") (help "h")); "","ph0 rx script0",""
(user 0) (rexx "script" (confirm "novice") (prompt "p") (help "h")); "","ph0 rx script0",""
(user 0) (rexx "script" (prompt "p") (help "h")); "","rx script0",""
