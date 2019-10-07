def get_sum(text)
    res = 0
    text.chars do |ch|
        res = res + ch.to_i
    end

    return res
end


t = gets.chomp.to_i

t.times do
    puts get_sum(gets.chomp)
end
