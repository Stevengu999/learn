module Try6 where

open import Relation.Binary.PropositionalEquality
open import Data.Product
open import Data.Vec
-- open import Relation.Binary.HeterogeneousEquality

data ⓪ : Set where
  Instance0 : ⓪

-- doesn't make sense
-- data ① : ⓪ where
--   Instance1 : ①

-- |≡| : ∀ {n} {a b c d : Set n} → a ≡ c → b ≡ d → a × b ≡ c × d
-- |≡| refl refl = {!!}

⋙ : ∀ {a b} {A : Set a} {B : Set b} {m n} {f : A → B} → m ≡ n → f m ≡ f n
⋙ refl = refl

-- ⟰⟱⟼⟾⤇⟳⇰⇴⟴⟿
-- 𝔸𝕘𝕕𝕒 𝕚𝕤 𝕒𝕨𝕖𝕤𝕠𝕞𝕖
