# https://www.hackerrank.com/challenges/ruby-lazy/problem

i_size = gets.to_i

is_pldm = -> (num){num.to_s.eql?(num.to_s.reverse)}

is_prim = -> (n){n < 2 ? false : (2..n/2).none? { |x| n % x == 0 }}

power_lazy = -> (size) do
    1.upto(Float::INFINITY).lazy.select{
        |x| x if is_pldm.(x) and is_prim.(x)
}.first(size)
end

puts power_lazy.(i_size).map{|x| x}