#include <sun/util/resources/cldr/ext/TimeZoneNames_ia.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef ETC_UTC
#undef GMT

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

void TimeZoneNames_ia::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_ia::getContents() {
	$useLocalObjectStack();
	$var($StringArray, GMT, $new($StringArray, {
		"hora medie de Greenwich"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		"hora normal de Cuba"_s,
		""_s,
		"hora estive de Cuba"_s,
		""_s,
		"hora de Cuba"_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		"hora normal de Omsk"_s,
		""_s,
		"hora estive de Omsk"_s,
		""_s,
		"hora de Omsk"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		"hora normal de Alaska"_s,
		""_s,
		"hora estive de Alaska"_s,
		""_s,
		"hora de Alaska"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		"hora normal del Azores"_s,
		""_s,
		"hora estive del Azores"_s,
		""_s,
		"hora del Azores"_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		"hora normal de Moscova"_s,
		""_s,
		"hora estive de Moscova"_s,
		""_s,
		"hora de Moscova"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		"Universal Tempore Coordinate"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		"hora normal de Irkutsk"_s,
		""_s,
		"hora estive de Irkutsk"_s,
		""_s,
		"hora de Irkutsk"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		"hora normal de Magadan"_s,
		""_s,
		"hora estive de Magadan"_s,
		""_s,
		"hora de Magadan"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		"hora normal de Yakutsk"_s,
		""_s,
		"hora estive de Yakutsk"_s,
		""_s,
		"hora de Yakutsk"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		"hora normal atlantic"_s,
		""_s,
		"hora estive atlantic"_s,
		""_s,
		"hora atlantic"_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		"hora normal de Sachalin"_s,
		""_s,
		"hora estive de Sachalin"_s,
		""_s,
		"hora de Sachalin"_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		"hora normal de Volgograd"_s,
		""_s,
		"hora estive de Volgograd"_s,
		""_s,
		"hora de Volgograd"_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		"hora normal de Krasnoyarsk"_s,
		""_s,
		"hora estive de Krasnoyarsk"_s,
		""_s,
		"hora de Krasnoyarsk"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		"hora normal de Novosibirsk"_s,
		""_s,
		"hora estive de Novosibirsk"_s,
		""_s,
		"hora de Novosibirsk"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		"hora normal de Vladivostok"_s,
		""_s,
		"hora estive de Vladivostok"_s,
		""_s,
		"hora de Vladivostok"_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		"hora normal de Terranova"_s,
		""_s,
		"hora estive de Terranova"_s,
		""_s,
		"hora de Terranova"_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		"hora normal de Ekaterinburg"_s,
		""_s,
		"hora estive de Ekaterinburg"_s,
		""_s,
		"hora de Ekaterinburg"_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		"hora normal de Europa central"_s,
		""_s,
		"hora estive de Europa central"_s,
		""_s,
		"hora de Europa central"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		"hora normal de Europa oriental"_s,
		""_s,
		"hora estive de Europa oriental"_s,
		""_s,
		"hora de Europa oriental"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		"hora normal de Europa occidental"_s,
		""_s,
		"hora estive de Europa occidental"_s,
		""_s,
		"hora de Europa occidental"_s,
		""_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		"hora normal del Pacifico mexican"_s,
		""_s,
		"hora estive del Pacifico mexican"_s,
		""_s,
		"hora del Pacifico mexican"_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		"hora normal central"_s,
		""_s,
		"hora estive central"_s,
		""_s,
		"hora central"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		"hora normal del est"_s,
		""_s,
		"hora estive del est"_s,
		""_s,
		"hora del est"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		"hora normal pacific"_s,
		""_s,
		"hora estive pacific"_s,
		""_s,
		"hora pacific"_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		"hora normal de Hawaii-Aleutianas"_s,
		""_s,
		"hora estive de Hawaii-Aleutianas"_s,
		""_s,
		"hora de Hawaii-Aleutianas"_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		"hora normal de Saint-Pierre e Miquelon"_s,
		""_s,
		"hora estive de Saint-Pierre e Miquelon"_s,
		""_s,
		"hora de Saint-Pierre e Miquelon"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		"hora normal del montanias"_s,
		""_s,
		"hora estive del montanias"_s,
		""_s,
		"hora del montanias"_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		"hora normal del nordwest de Mexico"_s,
		""_s,
		"hora estive del nordwest de Mexico"_s,
		""_s,
		"hora del nordwest de Mexico"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		"hora normal de Groenlandia oriental"_s,
		""_s,
		"hora estive de Groenlandia oriental"_s,
		""_s,
		"hora de Groenlandia oriental"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		"hora normal de Groenlandia occidental"_s,
		""_s,
		"hora estive de Groenlandia occidental"_s,
		""_s,
		"hora de Groenlandia occidental"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"America/Los_Angeles"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"America/Denver"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Phoenix"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Chicago"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/New_York"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Indianapolis"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Honolulu"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"America/Anchorage"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/Halifax"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Sitka"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/St_Johns"_s,
			Newfoundland
		}),
		$$new($ObjectArray, {
			"Europe/Paris"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"GMT"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Europe/Bucharest"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"UTC"_s,
			ETC_UTC
		}),
		$$new($ObjectArray, {
			"ART"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"AST"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"CNT"_s,
			Newfoundland
		}),
		$$new($ObjectArray, {
			"CST"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"ECT"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"PNT"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"PRT"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"PST"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"CST6CDT"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"EST5EDT"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Etc/GMT"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Etc/UTC"_s,
			ETC_UTC
		}),
		$$new($ObjectArray, {
			"MST7MDT"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"PST8PDT"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"Asia/Gaza"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Omsk"_s,
			Omsk
		}),
		$$new($ObjectArray, {
			"Asia/Amman"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Chita"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Africa/Lome"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Asia/Beirut"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Hebron"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Kiev"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Oslo"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Riga"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Rome"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Africa/Accra"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Cairo"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Ceuta"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Africa/Dakar"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Tunis"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"America/Adak"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"America/Nome"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"Asia/Irkutsk"_s,
			Irkutsk
		}),
		$$new($ObjectArray, {
			"Asia/Magadan"_s,
			Magadan
		}),
		$$new($ObjectArray, {
			"Asia/Nicosia"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Yakutsk"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Europe/Malta"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Minsk"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Europe/Sofia"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Vaduz"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"SystemV/AST4"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"SystemV/CST6"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"SystemV/EST5"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"SystemV/MST7"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"Africa/Bamako"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Banjul"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Bissau"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"America/Aruba"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Boise"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Thule"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"Asia/Damascus"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Khandyga"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Asia/Sakhalin"_s,
			Sakhalin
		}),
		$$new($ObjectArray, {
			"Asia/Ust-Nera"_s,
			Vladivostok
		}),
		$$new($ObjectArray, {
			"Europe/Athens"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Berlin"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Dublin"_s,
			$$new($StringArray, {
				"hora medie de Greenwich"_s,
				""_s,
				"Hora estive irlandese"_s,
				""_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Jersey"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Europe/Lisbon"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Europe/London"_s,
			$$new($StringArray, {
				"hora medie de Greenwich"_s,
				""_s,
				"Hora estive britannic"_s,
				""_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Madrid"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Monaco"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Moscow"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Europe/Prague"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Skopje"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Tirane"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Vienna"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Warsaw"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Zagreb"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Zurich"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"SystemV/HST10"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"Africa/Abidjan"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Algiers"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Africa/Conakry"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Tripoli"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"America/Belize"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Cancun"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Cayman"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Dawson"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Havana"_s,
			Cuba
		}),
		$$new($ObjectArray, {
			"America/Inuvik"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Juneau"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/Merida"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Nassau"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Panama"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Regina"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"Europe/Andorra"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Belfast"_s,
			$$new($StringArray, {
				"hora medie de Greenwich"_s,
				""_s,
				"Hora estive britannic"_s,
				""_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Tallinn"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Vatican"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Vilnius"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Freetown"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Monrovia"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Sao_Tome"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Timbuktu"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"America/Antigua"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Creston"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Curacao"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Detroit"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Godthab"_s,
			Greenland_Western
		}),
		$$new($ObjectArray, {
			"America/Grenada"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Iqaluit"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Jamaica"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Managua"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Marigot"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Moncton"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Nipigon"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Ojinaga"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Tijuana"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"America/Toronto"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Tortola"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Yakutat"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"Atlantic/Azores"_s,
			Azores
		}),
		$$new($ObjectArray, {
			"Atlantic/Canary"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Atlantic/Faeroe"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Europe/Belgrade"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Brussels"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Budapest"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Busingen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Chisinau"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Guernsey"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Europe/Helsinki"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Sarajevo"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Uzhgorod"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"SystemV/AST4ADT"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"SystemV/CST6CDT"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"SystemV/EST5EDT"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"SystemV/MST7MDT"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"SystemV/PST8PDT"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"SystemV/YST9YDT"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/Anguilla"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Barbados"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Dominica"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Edmonton"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Mazatlan"_s,
			Mexico_Pacific
		}),
		$$new($ObjectArray, {
			"America/Miquelon"_s,
			Pierre_Miquelon
		}),
		$$new($ObjectArray, {
			"America/Montreal"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Resolute"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Shiprock"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/St_Kitts"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/St_Lucia"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Winnipeg"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"Antarctica/Troll"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Asia/Krasnoyarsk"_s,
			Krasnoyarsk
		}),
		$$new($ObjectArray, {
			"Asia/Novosibirsk"_s,
			Novosibirsk
		}),
		$$new($ObjectArray, {
			"Asia/Vladivostok"_s,
			Vladivostok
		}),
		$$new($ObjectArray, {
			"Atlantic/Bermuda"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"Atlantic/Madeira"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Europe/Amsterdam"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Gibraltar"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Ljubljana"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Mariehamn"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Podgorica"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Stockholm"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Volgograd"_s,
			Volgograd
		}),
		$$new($ObjectArray, {
			"Pacific/Johnston"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"Africa/Nouakchott"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"America/Chihuahua"_s,
			Mexico_Pacific
		}),
		$$new($ObjectArray, {
			"America/Glace_Bay"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Goose_Bay"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Guatemala"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Matamoros"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Menominee"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Monterrey"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/St_Thomas"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Vancouver"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"Asia/Novokuznetsk"_s,
			Krasnoyarsk
		}),
		$$new($ObjectArray, {
			"Europe/Bratislava"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Copenhagen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Luxembourg"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/San_Marino"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Simferopol"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Europe/Zaporozhye"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Ouagadougou"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"America/Costa_Rica"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Grand_Turk"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Guadeloupe"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Hermosillo"_s,
			Mexico_Pacific
		}),
		$$new($ObjectArray, {
			"America/Kralendijk"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Louisville"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Martinique"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Metlakatla"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/Montserrat"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/St_Vincent"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Whitehorse"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"Asia/Yekaterinburg"_s,
			Yekaterinburg
		}),
		$$new($ObjectArray, {
			"Atlantic/Jan_Mayen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Atlantic/Reykjavik"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Atlantic/St_Helena"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Europe/Isle_of_Man"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Europe/Kaliningrad"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"America/El_Salvador"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Fort_Nelson"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Mexico_City"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Pangnirtung"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Puerto_Rico"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Rainy_River"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Tegucigalpa"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Thunder_Bay"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Yellowknife"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"Arctic/Longyearbyen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"America/Blanc-Sablon"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Danmarkshavn"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"America/Dawson_Creek"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Indiana/Knox"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Rankin_Inlet"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Santa_Isabel"_s,
			Mexico_Northwest
		}),
		$$new($ObjectArray, {
			"America/Scoresbysund"_s,
			Greenland_Eastern
		}),
		$$new($ObjectArray, {
			"America/Cambridge_Bay"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Coral_Harbour"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Indiana/Vevay"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Lower_Princes"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Port_of_Spain"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Santo_Domingo"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/St_Barthelemy"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Swift_Current"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Bahia_Banderas"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Port-au-Prince"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Indiana/Marengo"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Indiana/Winamac"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Indiana/Tell_City"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Indiana/Vincennes"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Omsk"_s,
			"Omsk"_s
		}),
		$$new($ObjectArray, {
			"America/Indiana/Petersburg"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Chita"_s,
			"Chita"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tomsk"_s,
			"Tomsk"_s
		}),
		$$new($ObjectArray, {
			"America/Kentucky/Monticello"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Beulah"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Center"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Anadyr"_s,
			"Anadyr"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Etc/Unknown"_s,
			"Citate incognite"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kiev"_s,
			"Kiev"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Oslo"_s,
			"Oslo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Riga"_s,
			"Riga"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Rome"_s,
			"Roma"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ceuta"_s,
			"Ceuta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Adak"_s,
			"Adak"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nome"_s,
			"Nome"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Barnaul"_s,
			"Barnaul"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Irkutsk"_s,
			"Irkutsk"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Magadan"_s,
			"Magadan"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yakutsk"_s,
			"Yakutsk"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kirov"_s,
			"Kirov"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Malta"_s,
			"Malta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Minsk"_s,
			"Minsk"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Paris"_s,
			"Paris"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Sofia"_s,
			"Sofia"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vaduz"_s,
			"Vaduz"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Aruba"_s,
			"Aruba"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Boise"_s,
			"Boise"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Sitka"_s,
			"Sitka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thule"_s,
			"Thule"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Khandyga"_s,
			"Chandyga"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Sakhalin"_s,
			"Sachalin"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ust-Nera"_s,
			"Ust-Nera"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Athens"_s,
			"Athenas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Berlin"_s,
			"Berlin"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Dublin"_s,
			"Dublin"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Jersey"_s,
			"Jersey"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Lisbon"_s,
			"Lisbona"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/London"_s,
			"London"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Madrid"_s,
			"Madrid"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Monaco"_s,
			"Monaco"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Moscow"_s,
			"Moscova"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Prague"_s,
			"Praga"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Samara"_s,
			"Samara"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Skopje"_s,
			"Skopje"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tirane"_s,
			"Tirana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vienna"_s,
			"Vienna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Warsaw"_s,
			"Varsovia"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zagreb"_s,
			"Zagreb"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zurich"_s,
			"Zurich"_s
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/New_Salem"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belize"_s,
			"Belize"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cancun"_s,
			"Cancun"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayman"_s,
			"Caiman"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson"_s,
			"Dawson"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Denver"_s,
			"Denver"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Havana"_s,
			"Havana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Inuvik"_s,
			"Inuvik"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Juneau"_s,
			"Juneau"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Merida"_s,
			"Merida"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nassau"_s,
			"Nassau"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Panama"_s,
			"Panama"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Regina"_s,
			"Regina"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kamchatka"_s,
			"Kamchatka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Andorra"_s,
			"Andorra"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Saratov"_s,
			"Saratov"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tallinn"_s,
			"Tallinn"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vatican"_s,
			"Vaticano"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vilnius"_s,
			"Vilnius"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Antigua"_s,
			"Antigua"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chicago"_s,
			"Chicago"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Creston"_s,
			"Creston"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Curacao"_s,
			u"Curaçao"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Detroit"_s,
			"Detroit"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grenada"_s,
			"Grenada"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Halifax"_s,
			"Halifax"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Iqaluit"_s,
			"Iqaluit"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jamaica"_s,
			"Jamaica"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Managua"_s,
			"Managua"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Marigot"_s,
			"Marigot"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Moncton"_s,
			"Moncton"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nipigon"_s,
			"Nipigon"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Ojinaga"_s,
			"Ojinaga"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Phoenix"_s,
			"Phoenix"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tijuana"_s,
			"Tijuana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Toronto"_s,
			"Toronto"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tortola"_s,
			"Tortola"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Yakutat"_s,
			"Yakutat"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Azores"_s,
			"Azores"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Canary"_s,
			"Canarias"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Faeroe"_s,
			"Feroe"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Belgrade"_s,
			"Belgrado"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Brussels"_s,
			"Bruxelles"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Budapest"_s,
			"Budapest"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Busingen"_s,
			u"Büsingen"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Chisinau"_s,
			"Chisinau"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Guernsey"_s,
			"Guernsey"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Helsinki"_s,
			"Helsinki"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Sarajevo"_s,
			"Sarajevo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Uzhgorod"_s,
			"Uzhgorod"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anguilla"_s,
			"Anguilla"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Barbados"_s,
			"Barbados"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dominica"_s,
			"Dominica"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Edmonton"_s,
			"Edmonton"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mazatlan"_s,
			"Mazatlan"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Miquelon"_s,
			"Miquelon"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/New_York"_s,
			"Nove York"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Resolute"_s,
			"Resolute"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Johns"_s,
			"Sancte Johannes de Terranova"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Kitts"_s,
			"Sancte Christophoro"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Lucia"_s,
			"Sancte Lucia"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Winnipeg"_s,
			"Winnipeg"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Krasnoyarsk"_s,
			"Krasnoyarsk"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novosibirsk"_s,
			"Novosibirsk"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Vladivostok"_s,
			"Vladivostok"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Bermuda"_s,
			"Bermuda"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Madeira"_s,
			"Madeira"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Amsterdam"_s,
			"Amsterdam"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Astrakhan"_s,
			"Astrakhan"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bucharest"_s,
			"Bucarest"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Gibraltar"_s,
			"Gibraltar"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Ljubljana"_s,
			"Ljubljana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Mariehamn"_s,
			"Mariehamn"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Podgorica"_s,
			"Podgorica"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Stockholm"_s,
			"Stockholm"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Ulyanovsk"_s,
			"Ulyanovsk"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Volgograd"_s,
			"Volgograd"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anchorage"_s,
			"Anchorage"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chihuahua"_s,
			"Chihuahua"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Glace_Bay"_s,
			"Glace Bay"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Goose_Bay"_s,
			"Goose Bay"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guatemala"_s,
			"Guatemala"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Matamoros"_s,
			"Matamoros"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Menominee"_s,
			"Menominee"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Monterrey"_s,
			"Monterrey"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Thomas"_s,
			"Sancte Thomas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Vancouver"_s,
			"Vancouver"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novokuznetsk"_s,
			"Novokuznetsk"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bratislava"_s,
			"Bratislava"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Copenhagen"_s,
			"Copenhagen"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Luxembourg"_s,
			"Luxemburg"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/San_Marino"_s,
			"San Marino"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Simferopol"_s,
			"Simferopol"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zaporozhye"_s,
			"Zaporozhye"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Costa_Rica"_s,
			"Costa Rica"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grand_Turk"_s,
			"Grand Turk"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guadeloupe"_s,
			"Guadeloupe"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Hermosillo"_s,
			"Hermosillo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kralendijk"_s,
			"Kralendijk"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Louisville"_s,
			"Louisville"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Martinique"_s,
			"Martinica"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Metlakatla"_s,
			"Metlakatla"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montserrat"_s,
			"Montserrat"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Vincent"_s,
			"Sancte Vincente"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Whitehorse"_s,
			"Whitehorse"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Srednekolymsk"_s,
			"Srednekolymsk"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yekaterinburg"_s,
			"Ekaterinburg"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Reykjavik"_s,
			"Reykjavik"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Isle_of_Man"_s,
			"Insula de Man"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kaliningrad"_s,
			"Kaliningrad"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/El_Salvador"_s,
			"El Salvador"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Fort_Nelson"_s,
			"Fort Nelson"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Los_Angeles"_s,
			"Los Angeles"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mexico_City"_s,
			"Citate de Mexico"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Pangnirtung"_s,
			"Pangnirtung"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Puerto_Rico"_s,
			"Porto Rico"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rainy_River"_s,
			"Rainy River"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tegucigalpa"_s,
			"Tegucigalpa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thunder_Bay"_s,
			"Thunder Bay"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Yellowknife"_s,
			"Yellowknife"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Arctic/Longyearbyen"_s,
			"Longyearbyen"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Blanc-Sablon"_s,
			"Blanc-Sablon"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Danmarkshavn"_s,
			"Danmarkshavn"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson_Creek"_s,
			"Dawson Creek"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indianapolis"_s,
			"Indianapolis"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rankin_Inlet"_s,
			"Rankin Inlet"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cambridge_Bay"_s,
			"Cambridge Bay"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port_of_Spain"_s,
			"Port of Spain"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santo_Domingo"_s,
			"Santo Domingo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Barthelemy"_s,
			"Sancte Bartholomeo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Swift_Current"_s,
			"Swift Current"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bahia_Banderas"_s,
			"Bahia de Banderas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port-au-Prince"_s,
			"Port-au-Prince"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Beulah"_s,
			"Beulah, Dakota del Nord"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Center"_s,
			"Center, Dakota del Nord"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/New_Salem"_s,
			"New Salem, Dakota del Nord"_s
		})
	}));
	return data;
}

TimeZoneNames_ia::TimeZoneNames_ia() {
}

$Class* TimeZoneNames_ia::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_ia, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_ia, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_ia",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_ia, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_ia);
	});
	return class$;
}

$Class* TimeZoneNames_ia::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun