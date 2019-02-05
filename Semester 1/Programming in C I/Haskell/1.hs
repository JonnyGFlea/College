main :: IO ()
main = return ()

suffixes :: [a] -> [[a]] -- function name
suffixes ["a"] = [""] -- base case
suffixes f = [drop n f | n <- [1.. (length f)]] -- recursive call

prefixes :: [a] -> [[a]] -- function name
prefixes ["1"] = [] -- base case
suffixes f = [take n f | n <- [0.. (length f)-1]] -- recursive call
