def timeConversion(s)
    sp = s[s.length-2, s.length-1]
    s.slice!(sp)
    s = s.split(':').map{ |x| x.to_i }

    s[0] = (sp == 'AM') ? s[0] == 12 ? 0 : s[0] : s[0] == 12 ? 12 : s[0] + 12
    
    return s.map{ |x| '%02d' % x }.join(':')
end

s = gets.to_s

result = timeConversion s

puts result