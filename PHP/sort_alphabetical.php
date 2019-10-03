<?php
/**
 * Class of sort commands
 * 
 * @author anancia
 * @since 03/10/2019
 */
class Sort
{
    /**
     * @var string key
     */
    static $key;

    public function __construct($key)
    {
        self::$key = $key;
    }
    
    /**
     * Compare strings
     * 
     * @param string $string1
     * @param string $string2
     * 
     * @return array
     */
    static function alphabetical($string1, $string2)
    {
        $key = self::$key;

        return strcmp($string1[$key], $string2[$key]);
    }
}

$array = [
    ["name" => "Carol"], 
    ["name" => "Nick"], 
    ["name" => "Rainner"], 
    ["name" => "Camila"], 
    ["name" => "Luiza"], 
    ["name" => "Grasi"], 
    ["name" => "Alisson"], 
    ["name" => "Anna"]
];

$sort = new Sort("name");

echo "Values before sort:";
print_r($array);

usort($array, array('Sort', 'alphabetical'));

echo "</br> Values after sort:";
print_r($array);