import Data.List (elemIndex)
import Data.Maybe (fromJust)


eliminate :: (Int -> Bool) -> [Int] -> [Int]
eliminate condition xs = [x | (idx, x) <- zip [1..] xs, not (condition idx)]

whatIsLeft :: Int -> Int
whatIsLeft n = go [1..n] 1
  where
    go [x] _ = x  -- If only one number left, return it
    go xs phase
      | phase `mod` 3 == 1 = go (eliminate even xs) (phase + 1)         -- Strike evens
      | phase `mod` 3 == 2 = go (eliminate odd xs) (phase + 1)          -- Strike odds
      | otherwise          = go (eliminate (\idx -> idx `mod` 3 == 0) xs) (phase + 1)  -- Strike divisible by 3

main :: IO ()
main = do
    n <- readLn
    print $ whatIsLeft n

