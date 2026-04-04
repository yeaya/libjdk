#include <sun/util/resources/cldr/ext/TimeZoneNames_rm.h>
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

void TimeZoneNames_rm::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_rm::getContents() {
	$useLocalObjectStack();
	$var($StringArray, GMT, $new($StringArray, {
		"Temp Greenwich"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		u"Temp universal coordinà"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		"Temp da standard atlantic"_s,
		""_s,
		"Temp da stad atlantic"_s,
		""_s,
		"Temp atlantic"_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"Temp da standard da l’Europa Centrala"_s,
		""_s,
		u"Temp da stad da l’Europa Centrala"_s,
		""_s,
		u"Temp da l’Europa Centrala"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"Temp da standard da l’Europa Orientala"_s,
		""_s,
		u"Temp da stad da l’Europa Orientala"_s,
		""_s,
		u"Temp da l’Europa Orientala"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"Temp da standard da l’Europa dal Vest"_s,
		""_s,
		u"Temp da stad da l’Europa dal Vest"_s,
		""_s,
		u"Temp da l’Europa dal Vest"_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		"Temp da standard central"_s,
		""_s,
		"Temp da stad central"_s,
		""_s,
		"Temp central"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		"Temp da standard oriental"_s,
		""_s,
		"Temp da stad oriental"_s,
		""_s,
		"Temp oriental"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		"Temp da standard pacific"_s,
		""_s,
		"Temp da stad pacific"_s,
		""_s,
		"Temp pacific"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		"Temp da standard da muntogna"_s,
		""_s,
		"Temp da stad da muntogna"_s,
		""_s,
		"Temp da muntogna"_s,
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
			"America/Halifax"_s,
			Atlantic
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
			"Asia/Amman"_s,
			Europe_Eastern
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
			"Asia/Nicosia"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Malta"_s,
			Europe_Central
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
			"Europe/Athens"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Berlin"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Dublin"_s,
			GMT
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
			GMT
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
			"America/Inuvik"_s,
			America_Mountain
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
			GMT
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
			"Africa/Nouakchott"_s,
			GMT
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
			"America/Indiana/Petersburg"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Seoul"_s,
			"Seul"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tokyo"_s,
			"Tokio"_s
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
			"timezone.excity.Africa/Lome"_s,
			u"Lomé"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtobe"_s,
			u"Aqtöbe"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Brunei"_s,
			"Bandar Seri Begawan"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Muscat"_s,
			"Mascate"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Riyadh"_s,
			"Riyad"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Saigon"_s,
			"Citad da Ho Chi Minh"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tehran"_s,
			"Teheran"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Urumqi"_s,
			u"Ürümqi"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Etc/Unknown"_s,
			"citad nunenconuschenta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Rome"_s,
			"Roma"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Baghdad"_s,
			"Bagdad"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bishkek"_s,
			"Bischkek"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Karachi"_s,
			"Karatschi"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yakutsk"_s,
			"Jakutsk"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yerevan"_s,
			"Jerevan"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Cocos"_s,
			"West Island"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fiji"_s,
			"Fidschi"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guam"_s,
			u"Hagåtña"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Niue"_s,
			"Alofi"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Truk"_s,
			"Weno"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Aruba"_s,
			"Oranjestad"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belem"_s,
			u"Belém"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jujuy"_s,
			"San Salvador de Jujuy"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ashgabat"_s,
			u"Aşgabat"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dushanbe"_s,
			"Duschanbe"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Makassar"_s,
			"Macassar"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Sakhalin"_s,
			"Sachalin"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tashkent"_s,
			"Taschkent"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Athens"_s,
			"Athen"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Jersey"_s,
			"Saint Helier"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Lisbon"_s,
			"Lissabon"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/London"_s,
			"Londra"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Moscow"_s,
			"Moscau"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tirane"_s,
			"Tirana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Warsaw"_s,
			"Varsovia"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zurich"_s,
			"Turitg"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Comoro"_s,
			"Comoras"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Nauru"_s,
			"Yaren"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Palau"_s,
			"Melekok"_s
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/New_Salem"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Algiers"_s,
			"Algier"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belize"_s,
			"Belmopan"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cancun"_s,
			u"Cancún"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayman"_s,
			"Inslas Cayman"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cuiaba"_s,
			u"Cuiabá"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Merida"_s,
			u"Mérida"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hong_Kong"_s,
			"Hongkong"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kamchatka"_s,
			"Kamtschatka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Samarkand"_s,
			"Samarcanda"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Singapore"_s,
			"Singapur"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Reunion"_s,
			u"Réunion"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Easter"_s,
			"Insla da Pasca"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kosrae"_s,
			"Tofol"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Noumea"_s,
			u"Nouméa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Ponape"_s,
			"Palikir"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tarawa"_s,
			"South Tarawa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wallis"_s,
			u"Matāʻutu"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Djibouti"_s,
			"Dschibuti"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/El_Aaiun"_s,
			u"El Aaiún"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Khartoum"_s,
			"Khartum"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Sao_Tome"_s,
			u"São Tomé"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cordoba"_s,
			u"Córdoba"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Curacao"_s,
			u"Curaçao"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Godthab"_s,
			u"Godthåb"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jamaica"_s,
			"Giamaica"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Noronha"_s,
			"Fernando de Noronha"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tortola"_s,
			"Road Town"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Choibalsan"_s,
			"Tschoibalsan"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Azores"_s,
			"Azoras"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Canary"_s,
			"Inslas Canarias"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Faeroe"_s,
			"Inslas Feroe"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Brussels"_s,
			"Bruxelles"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Guernsey"_s,
			"Saint Peter Port"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Uzhgorod"_s,
			"Uschhorod"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Maldives"_s,
			"Maldivas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Gambier"_s,
			"Rikitea"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Norfolk"_s,
			"Kingston"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mogadishu"_s,
			"Mogadischu"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anguilla"_s,
			"The Valley"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Asuncion"_s,
			u"Asunción"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Eirunepe"_s,
			u"Eirunepé"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mazatlan"_s,
			u"Mazatlán"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Miquelon"_s,
			"Saint Pierre"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Johns"_s,
			u"Saint John’s"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Kitts"_s,
			"Saint Kitts"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Lucia"_s,
			"Santa Lucia"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Syowa"_s,
			"Showa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Krasnoyarsk"_s,
			"Krasnojarsk"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novosibirsk"_s,
			"Nowosibirsk"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Bermuda"_s,
			"Bermudas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Stanley"_s,
			"Port Stanley"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bucharest"_s,
			"Bucarest"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Christmas"_s,
			"Flying Fish Cove"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anchorage"_s,
			"Alasca"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Araguaina"_s,
			u"Araguaína"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Sao_Paulo"_s,
			u"São Paulo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Thomas"_s,
			"Saint Thomas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Luxembourg"_s,
			"Luxemburg"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zaporozhye"_s,
			"Saporischja"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Galapagos"_s,
			u"Galápagos"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tongatapu"_s,
			u"Nukuʻalofa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Addis_Ababa"_s,
			"Addis Abeba"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grand_Turk"_s,
			"Cockburn Town"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guadeloupe"_s,
			"Basse-Terre"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montserrat"_s,
			"Brades"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Vincent"_s,
			"Saint Vincent"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/McMurdo"_s,
			"Mac Murdo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yekaterinburg"_s,
			"Jekaterinburg"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/St_Helena"_s,
			u"Sontg’elena"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Isle_of_Man"_s,
			"Douglas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/El_Salvador"_s,
			"Salvador"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mexico_City"_s,
			"Citad da Mexico"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Cape_Verde"_s,
			"Cap Verd"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guadalcanal"_s,
			"Honiara"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dar_es_Salaam"_s,
			"Daressalam"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Knox"_s,
			"Knox"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vevay"_s,
			"Vevay"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/South_Georgia"_s,
			"Georgia dal Sid"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Marengo"_s,
			"Marengo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Winamac"_s,
			"Winamac"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Tucuman"_s,
			u"Tucumán"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Ushuaia"_s,
			u"Ushuaïa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Tell_City"_s,
			"Tell City"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vincennes"_s,
			"Vincennes"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/San_Juan"_s,
			"San Juan, Argentinia"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Petersburg"_s,
			"Petersburg"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kentucky/Monticello"_s,
			"Monticello"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Center"_s,
			"North Dakota (Central)"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/New_Salem"_s,
			"North Dakota (New Salem)"_s
		})
	}));
	return data;
}

TimeZoneNames_rm::TimeZoneNames_rm() {
}

$Class* TimeZoneNames_rm::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_rm, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_rm, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_rm",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_rm, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_rm);
	});
	return class$;
}

$Class* TimeZoneNames_rm::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun