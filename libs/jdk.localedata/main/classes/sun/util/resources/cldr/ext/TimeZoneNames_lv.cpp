#include <sun/util/resources/cldr/ext/TimeZoneNames_lv.h>
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

void TimeZoneNames_lv::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_lv::getContents() {
	$useLocalObjectStack();
	$var($StringArray, GMT, $new($StringArray, {
		u"Griničas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		"Apijas ziemas laiks"_s,
		""_s,
		"Apijas vasaras laiks"_s,
		""_s,
		"Apijas laiks"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		"Kuka salu ziemas laiks"_s,
		""_s,
		"Kuka salu vasaras laiks"_s,
		""_s,
		"Kuka salu laiks"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		"Kubas ziemas laiks"_s,
		""_s,
		"Kubas vasaras laiks"_s,
		""_s,
		"Kubas laiks"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"Fidži ziemas laiks"_s,
		""_s,
		u"Fidži vasaras laiks"_s,
		""_s,
		u"Fidži laiks"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"Persijas līča laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		"Hovdas ziemas laiks"_s,
		""_s,
		"Hovdas vasaras laiks"_s,
		""_s,
		"Hovdas laiks"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"Irānas ziemas laiks"_s,
		""_s,
		u"Irānas vasaras laiks"_s,
		""_s,
		u"Irānas laiks"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		"Niues laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		"Omskas ziemas laiks"_s,
		""_s,
		"Omskas vasaras laiks"_s,
		""_s,
		"Omskas laiks"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		"Peru ziemas laiks"_s,
		""_s,
		"Peru vasaras laiks"_s,
		""_s,
		"Peru laiks"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"Čūkas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		"Veika salas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"Čīles ziemas laiks"_s,
		""_s,
		u"Čīles vasaras laiks"_s,
		""_s,
		u"Čīles laiks"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"Ķīnas ziemas laiks"_s,
		""_s,
		u"Ķīnas vasaras laiks"_s,
		""_s,
		u"Ķīnas laiks"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"Kokosu (Kīlinga) salu laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		"Deivisas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		"Indijas ziemas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"Japānas ziemas laiks"_s,
		""_s,
		u"Japānas vasaras laiks"_s,
		""_s,
		u"Japānas laiks"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		"Korejas ziemas laiks"_s,
		""_s,
		"Korejas vasaras laiks"_s,
		""_s,
		"Korejas laiks"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		"Nauru laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"Nepālas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		"Palau laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		"Samoa ziemas laiks"_s,
		""_s,
		"Samoa vasaras laiks"_s,
		""_s,
		"Samoa laiks"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"Šovas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		"Tongas ziemas laiks"_s,
		""_s,
		"Tongas vasaras laiks"_s,
		""_s,
		"Tongas laiks"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"Aļaskas ziemas laiks"_s,
		""_s,
		u"Aļaskas vasaras laiks"_s,
		""_s,
		u"Aļaskas laiks"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		"Amazones ziemas laiks"_s,
		""_s,
		"Amazones vasaras laiks"_s,
		""_s,
		"Amazones laiks"_s,
		""_s
	}));
	$var($StringArray, Anadyr, $new($StringArray, {
		"Anadiras ziemas laiks"_s,
		""_s,
		"Anadiras vasaras laiks"_s,
		""_s,
		"Anadiras laiks"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		"Azoru salu ziemas laiks"_s,
		""_s,
		"Azoru salu vasaras laiks"_s,
		""_s,
		"Azoru salu laiks"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"Butānas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		"Brunejas Darusalamas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		"Lieldienu salas ziemas laiks"_s,
		""_s,
		"Lieldienu salas vasaras laiks"_s,
		""_s,
		"Lieldienu salas laiks"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"Gajānas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"Izraēlas ziemas laiks"_s,
		""_s,
		u"Izraēlas vasaras laiks"_s,
		""_s,
		u"Izraēlas laiks"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		"Kosrae laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		"Mosonas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		"Maskavas ziemas laiks"_s,
		""_s,
		"Maskavas vasaras laiks"_s,
		""_s,
		"Maskavas laiks"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"Ponapē laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samara, $new($StringArray, {
		"Samaras ziemas laiks"_s,
		""_s,
		"Samaras vasaras laiks"_s,
		""_s,
		"Samaras laiks"_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		"Taiti laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		"Taibei ziemas laiks"_s,
		""_s,
		"Taibei vasaras laiks"_s,
		""_s,
		"Taibei laiks"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		"Tuvalu laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		"Vostokas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		"Volisas un Futunas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"Arābijas pussalas ziemas laiks"_s,
		""_s,
		u"Arābijas pussalas vasaras laiks"_s,
		""_s,
		u"Arābijas pussalas laiks"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"Armēnijas ziemas laiks"_s,
		""_s,
		u"Armēnijas vasaras laiks"_s,
		""_s,
		u"Armēnijas laiks"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"Bolīvijas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"Četemas ziemas laiks"_s,
		""_s,
		u"Četemas vasaras laiks"_s,
		""_s,
		u"Četemas laiks"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		u"Universālais koordinētais laiks"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		"Ekvadoras laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"Gambjē salu laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		"Gruzijas ziemas laiks"_s,
		""_s,
		"Gruzijas vasaras laiks"_s,
		""_s,
		"Gruzijas laiks"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		"Irkutskas ziemas laiks"_s,
		""_s,
		"Irkutskas vasaras laiks"_s,
		""_s,
		"Irkutskas laiks"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		"Magadanas ziemas laiks"_s,
		""_s,
		"Magadanas vasaras laiks"_s,
		""_s,
		"Magadanas laiks"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		"Mjanmas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		"Norfolkas salas ziemas laiks"_s,
		""_s,
		"Norfolkas salas vasaras laiks"_s,
		""_s,
		"Norfolkas salas laiks"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"Fernandu di Noroņas ziemas laiks"_s,
		""_s,
		u"Fernandu di Noroņas vasaras laiks"_s,
		""_s,
		u"Fernandu di Noroņas laiks"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		"Reinjonas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		"Roteras laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"Zālamana salu laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		"Tokelau laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		"Urugvajas ziemas laiks"_s,
		""_s,
		"Urugvajas vasaras laiks"_s,
		""_s,
		"Urugvajas laiks"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		"Vanuatu ziemas laiks"_s,
		""_s,
		"Vanuatu vasaras laiks"_s,
		""_s,
		"Vanuatu laiks"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		"Jakutskas ziemas laiks"_s,
		""_s,
		"Jakutskas vasaras laiks"_s,
		""_s,
		"Jakutskas laiks"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		"Atlantijas ziemas laiks"_s,
		""_s,
		"Atlantijas vasaras laiks"_s,
		""_s,
		"Atlantijas laiks"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"Brazīlijas ziemas laiks"_s,
		""_s,
		u"Brazīlijas vasaras laiks"_s,
		""_s,
		u"Brazīlijas laiks"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"Čamorra ziemas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		"Kolumbijas ziemas laiks"_s,
		""_s,
		"Kolumbijas vasaras laiks"_s,
		""_s,
		"Kolumbijas laiks"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		"Folklenda (Malvinu) salu ziemas laiks"_s,
		""_s,
		"Folklenda (Malvinu) salu vasaras laiks"_s,
		""_s,
		"Folklenda (Malvinu) salu laiks"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		"Malaizijas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"Maldīvijas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		"Ulanbatoras ziemas laiks"_s,
		""_s,
		"Ulanbatoras vasaras laiks"_s,
		""_s,
		"Ulanbatoras laiks"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"Pakistānas ziemas laiks"_s,
		""_s,
		u"Pakistānas vasaras laiks"_s,
		""_s,
		u"Pakistānas laiks"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		"Paragvajas ziemas laiks"_s,
		""_s,
		"Paragvajas vasaras laiks"_s,
		""_s,
		"Paragvajas laiks"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"Pitkērnas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"Sahalīnas ziemas laiks"_s,
		""_s,
		u"Sahalīnas vasaras laiks"_s,
		""_s,
		u"Sahalīnas laiks"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		"Surinamas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"Argentīnas ziemas laiks"_s,
		""_s,
		u"Argentīnas vasaras laiks"_s,
		""_s,
		u"Argentīnas laiks"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"Ziemsvētku salas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		"Galapagu laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		"Honkongas ziemas laiks"_s,
		""_s,
		"Honkongas vasaras laiks"_s,
		""_s,
		"Honkongas laiks"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"Indoķīnas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kamchatka, $new($StringArray, {
		u"Petropavlovskas-Kamčatskas ziemas laiks"_s,
		""_s,
		u"Petropavlovskas-Kamčatskas vasaras laiks"_s,
		""_s,
		u"Petropavlovskas-Kamčatskas laiks"_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"Kirgizstānas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		"Lorda Hava salas ziemas laiks"_s,
		""_s,
		"Lorda Hava salas vasaras laiks"_s,
		""_s,
		"Lorda Hava salas laiks"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"Marķīza salu laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"Maurīcijas ziemas laiks"_s,
		""_s,
		u"Maurīcijas vasaras laiks"_s,
		""_s,
		u"Maurīcijas laiks"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"Singapūras laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"Venecuēlas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		"Volgogradas ziemas laiks"_s,
		""_s,
		"Volgogradas vasaras laiks"_s,
		""_s,
		"Volgogradas laiks"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"Azerbaidžānas ziemas laiks"_s,
		""_s,
		u"Azerbaidžānas vasaras laiks"_s,
		""_s,
		u"Azerbaidžānas laiks"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"Bangladešas ziemas laiks"_s,
		""_s,
		u"Bangladešas vasaras laiks"_s,
		""_s,
		u"Bangladešas laiks"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		"Kaboverdes ziemas laiks"_s,
		""_s,
		"Kaboverdes vasaras laiks"_s,
		""_s,
		"Kaboverdes laiks"_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		"Austrumtimoras laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"Seišeļu salu laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"Tadžikistānas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"Uzbekistānas ziemas laiks"_s,
		""_s,
		u"Uzbekistānas vasaras laiks"_s,
		""_s,
		u"Uzbekistānas laiks"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"Afganistānas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		"Krasnojarskas ziemas laiks"_s,
		""_s,
		"Krasnojarskas vasaras laiks"_s,
		""_s,
		"Krasnojarskas laiks"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"Jaunzēlandes ziemas laiks"_s,
		""_s,
		u"Jaunzēlandes vasaras laiks"_s,
		""_s,
		u"Jaunzēlandes laiks"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		"Novosibirskas ziemas laiks"_s,
		""_s,
		"Novosibirskas vasaras laiks"_s,
		""_s,
		"Novosibirskas laiks"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"Filipīnu ziemas laiks"_s,
		""_s,
		u"Filipīnu vasaras laiks"_s,
		""_s,
		u"Filipīnu laiks"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		"Vladivostokas ziemas laiks"_s,
		""_s,
		"Vladivostokas vasaras laiks"_s,
		""_s,
		"Vladivostokas laiks"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"Indijas okeāna laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		"Lainas salu laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"Ņūfaundlendas ziemas laiks"_s,
		""_s,
		u"Ņūfaundlendas vasaras laiks"_s,
		""_s,
		u"Ņūfaundlendas laiks"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"Turkmenistānas ziemas laiks"_s,
		""_s,
		u"Turkmenistānas vasaras laiks"_s,
		""_s,
		u"Turkmenistānas laiks"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"Francijas Gviānas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		"Jaunkaledonijas ziemas laiks"_s,
		""_s,
		"Jaunkaledonijas vasaras laiks"_s,
		""_s,
		"Jaunkaledonijas laiks"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"Dienviddžordžijas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		"Jekaterinburgas ziemas laiks"_s,
		""_s,
		"Jekaterinburgas vasaras laiks"_s,
		""_s,
		"Jekaterinburgas laiks"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"Centrālāfrikas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"Austrumāfrikas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"Rietumāfrikas ziemas laiks"_s,
		""_s,
		u"Rietumāfrikas vasaras laiks"_s,
		""_s,
		u"Rietumāfrikas laiks"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		"Dimondirvilas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"Centrāleiropas ziemas laiks"_s,
		"CET"_s,
		u"Centrāleiropas vasaras laiks"_s,
		"CEST"_s,
		u"Centrāleiropas laiks"_s,
		"CET"_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		"Austrumeiropas ziemas laiks"_s,
		"EET"_s,
		"Austrumeiropas vasaras laiks"_s,
		"EEST"_s,
		"Austrumeiropas laiks"_s,
		"EET"_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		"Rietumeiropas ziemas laiks"_s,
		"WET"_s,
		"Rietumeiropas vasaras laiks"_s,
		"WEST"_s,
		"Rietumeiropas laiks"_s,
		"WET"_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"Meksikas Klusā okeāna piekrastes ziemas laiks"_s,
		""_s,
		u"Meksikas Klusā okeāna piekrastes vasaras laiks"_s,
		""_s,
		u"Meksikas Klusā okeāna piekrastes laiks"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"Dienvidāfrikas ziemas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"Centrālais ziemas laiks"_s,
		""_s,
		u"Centrālais vasaras laiks"_s,
		""_s,
		u"Centrālais laiks"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		"Austrumu ziemas laiks"_s,
		""_s,
		"Austrumu vasaras laiks"_s,
		""_s,
		"Austrumu laiks"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"Klusā okeāna ziemas laiks"_s,
		""_s,
		u"Klusā okeāna vasaras laiks"_s,
		""_s,
		u"Klusā okeāna laiks"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"Francijas Dienvidjūru un Antarktikas teritorijas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		"Gilberta salu laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"Havaju–Aleutu ziemas laiks"_s,
		""_s,
		u"Havaju–Aleutu vasaras laiks"_s,
		""_s,
		u"Havaju–Aleutu laiks"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"Fēniksa salu laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"Senpjēras un Mikelonas ziemas laiks"_s,
		""_s,
		u"Senpjēras un Mikelonas vasaras laiks"_s,
		""_s,
		u"Senpjēras un Mikelonas laiks"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		"Kalnu ziemas laiks"_s,
		""_s,
		"Kalnu vasaras laiks"_s,
		""_s,
		"Kalnu laiks"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"Māršala salu laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"Ziemeļrietumu Meksikas ziemas laiks"_s,
		""_s,
		u"Ziemeļrietumu Meksikas vasaras laiks"_s,
		""_s,
		u"Ziemeļrietumu Meksikas laiks"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		"Papua-Jaungvinejas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"Austrālijas centrālais ziemas laiks"_s,
		""_s,
		u"Austrālijas centrālais vasaras laiks"_s,
		""_s,
		u"Austrālijas centrālais laiks"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"Austrālijas austrumu ziemas laiks"_s,
		""_s,
		u"Austrālijas austrumu vasaras laiks"_s,
		""_s,
		u"Austrālijas austrumu laiks"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"Austrālijas rietumu ziemas laiks"_s,
		""_s,
		u"Austrālijas rietumu vasaras laiks"_s,
		""_s,
		u"Austrālijas rietumu laiks"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		"Austrumgrenlandes ziemas laiks"_s,
		""_s,
		"Austrumgrenlandes vasaras laiks"_s,
		""_s,
		"Austrumgrenlandes laiks"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		"Rietumgrenlandes ziemas laiks"_s,
		""_s,
		"Rietumgrenlandes vasaras laiks"_s,
		""_s,
		"Rietumgrenlandes laiks"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"Centrālindonēzijas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"Austrumindonēzijas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"Rietumindonēzijas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"Austrumkazahstānas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"Rietumkazahstānas laiks"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"Austrālijas centrālais rietumu ziemas laiks"_s,
		""_s,
		u"Austrālijas centrālais rietumu vasaras laiks"_s,
		""_s,
		u"Austrālijas centrālais rietumu laiks"_s,
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
			"Asia/Jerusalem"_s,
			Israel
		}),
		$$new($ObjectArray, {
			"Asia/Tokyo"_s,
			Japan
		}),
		$$new($ObjectArray, {
			"Europe/Bucharest"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Shanghai"_s,
			China
		}),
		$$new($ObjectArray, {
			"UTC"_s,
			ETC_UTC
		}),
		$$new($ObjectArray, {
			"ACT"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"AET"_s,
			Australia_Eastern
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
			"BET"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"BST"_s,
			Bangladesh
		}),
		$$new($ObjectArray, {
			"CAT"_s,
			Africa_Central
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
			"CTT"_s,
			China
		}),
		$$new($ObjectArray, {
			"EAT"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"ECT"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"JST"_s,
			Japan
		}),
		$$new($ObjectArray, {
			"MIT"_s,
			Apia
		}),
		$$new($ObjectArray, {
			"NET"_s,
			Armenia
		}),
		$$new($ObjectArray, {
			"NST"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"PLT"_s,
			Pakistan
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
			"SST"_s,
			Solomon
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
			"Asia/Aden"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Baku"_s,
			Azerbaijan
		}),
		$$new($ObjectArray, {
			"Asia/Dili"_s,
			East_Timor
		}),
		$$new($ObjectArray, {
			"Asia/Gaza"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Hovd"_s,
			Hovd
		}),
		$$new($ObjectArray, {
			"Asia/Omsk"_s,
			Omsk
		}),
		$$new($ObjectArray, {
			"Asia/Oral"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Amman"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Aqtau"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Chita"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Asia/Dhaka"_s,
			Bangladesh
		}),
		$$new($ObjectArray, {
			"Asia/Dubai"_s,
			Gulf
		}),
		$$new($ObjectArray, {
			"Asia/Kabul"_s,
			Afghanistan
		}),
		$$new($ObjectArray, {
			"Asia/Macau"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Qatar"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Seoul"_s,
			Korea
		}),
		$$new($ObjectArray, {
			"Africa/Juba"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Lome"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Asia/Almaty"_s,
			Kazakhstan_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Anadyr"_s,
			Anadyr
		}),
		$$new($ObjectArray, {
			"Asia/Aqtobe"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Atyrau"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Beirut"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Brunei"_s,
			Brunei
		}),
		$$new($ObjectArray, {
			"Asia/Harbin"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Hebron"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Kuwait"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Manila"_s,
			Philippines
		}),
		$$new($ObjectArray, {
			"Asia/Muscat"_s,
			Gulf
		}),
		$$new($ObjectArray, {
			"Asia/Riyadh"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Saigon"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Asia/Taipei"_s,
			Taipei
		}),
		$$new($ObjectArray, {
			"Asia/Tehran"_s,
			Iran
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
			"Indian/Mahe"_s,
			Seychelles
		}),
		$$new($ObjectArray, {
			"Pacific/Yap"_s,
			Truk
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
			"Africa/Lagos"_s,
			Africa_Western
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
			"America/Lima"_s,
			Peru
		}),
		$$new($ObjectArray, {
			"America/Nome"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"Asia/Baghdad"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Bahrain"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Bangkok"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Asia/Bishkek"_s,
			Kyrgystan
		}),
		$$new($ObjectArray, {
			"Asia/Colombo"_s,
			India
		}),
		$$new($ObjectArray, {
			"Asia/Irkutsk"_s,
			Irkutsk
		}),
		$$new($ObjectArray, {
			"Asia/Jakarta"_s,
			Indonesia_Western
		}),
		$$new($ObjectArray, {
			"Asia/Karachi"_s,
			Pakistan
		}),
		$$new($ObjectArray, {
			"Asia/Kuching"_s,
			Malaysia
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
			"Asia/Rangoon"_s,
			Myanmar
		}),
		$$new($ObjectArray, {
			"Asia/Tbilisi"_s,
			Georgia
		}),
		$$new($ObjectArray, {
			"Asia/Thimphu"_s,
			Bhutan
		}),
		$$new($ObjectArray, {
			"Asia/Yakutsk"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Asia/Yerevan"_s,
			Armenia
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
			"Indian/Cocos"_s,
			Cocos
		}),
		$$new($ObjectArray, {
			"Pacific/Apia"_s,
			Apia
		}),
		$$new($ObjectArray, {
			"Pacific/Fiji"_s,
			Fiji
		}),
		$$new($ObjectArray, {
			"Pacific/Guam"_s,
			Chamorro
		}),
		$$new($ObjectArray, {
			"Pacific/Niue"_s,
			Niue
		}),
		$$new($ObjectArray, {
			"Pacific/Truk"_s,
			Truk
		}),
		$$new($ObjectArray, {
			"Pacific/Wake"_s,
			Wake
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
			"SystemV/PST8"_s,
			Pitcairn
		}),
		$$new($ObjectArray, {
			"SystemV/YST9"_s,
			Gambier
		}),
		$$new($ObjectArray, {
			"Africa/Asmera"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Bamako"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Bangui"_s,
			Africa_Western
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
			"Africa/Douala"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Harare"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Kigali"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Luanda"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Lusaka"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Malabo"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Maputo"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Maseru"_s,
			Africa_Southern
		}),
		$$new($ObjectArray, {
			"Africa/Niamey"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"America/Aruba"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Bahia"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Belem"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Boise"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Jujuy"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Thule"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"Asia/Ashgabat"_s,
			Turkmenistan
		}),
		$$new($ObjectArray, {
			"Asia/Calcutta"_s,
			India
		}),
		$$new($ObjectArray, {
			"Asia/Damascus"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Dushanbe"_s,
			Tajikistan
		}),
		$$new($ObjectArray, {
			"Asia/Jayapura"_s,
			Indonesia_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Katmandu"_s,
			Nepal
		}),
		$$new($ObjectArray, {
			"Asia/Khandyga"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Asia/Makassar"_s,
			Indonesia_Central
		}),
		$$new($ObjectArray, {
			"Asia/Qostanay"_s,
			Kazakhstan_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Sakhalin"_s,
			Sakhalin
		}),
		$$new($ObjectArray, {
			"Asia/Tashkent"_s,
			Uzbekistan
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
				u"Griničas laiks"_s,
				""_s,
				u"Īrijas ziemas laiks"_s,
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
				u"Griničas laiks"_s,
				""_s,
				u"Lielbritānijas vasaras laiks"_s,
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
			"Europe/Samara"_s,
			Samara
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
			"Indian/Chagos"_s,
			Indian_Ocean
		}),
		$$new($ObjectArray, {
			"Indian/Comoro"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Efate"_s,
			Vanuatu
		}),
		$$new($ObjectArray, {
			"Pacific/Nauru"_s,
			Nauru
		}),
		$$new($ObjectArray, {
			"Pacific/Palau"_s,
			Palau
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
			"Africa/Kampala"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Mbabane"_s,
			Africa_Southern
		}),
		$$new($ObjectArray, {
			"Africa/Nairobi"_s,
			Africa_Eastern
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
			"America/Bogota"_s,
			Colombia
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
			"America/Cuiaba"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Dawson"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Guyana"_s,
			Guyana
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
			"America/La_Paz"_s,
			Bolivia
		}),
		$$new($ObjectArray, {
			"America/Maceio"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Manaus"_s,
			Amazon
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
			"America/Recife"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Regina"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"Asia/Chongqing"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Hong_Kong"_s,
			Hong_Kong
		}),
		$$new($ObjectArray, {
			"Asia/Kamchatka"_s,
			Kamchatka
		}),
		$$new($ObjectArray, {
			"Asia/Pontianak"_s,
			Indonesia_Western
		}),
		$$new($ObjectArray, {
			"Asia/Pyongyang"_s,
			Korea
		}),
		$$new($ObjectArray, {
			"Asia/Qyzylorda"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Samarkand"_s,
			Uzbekistan
		}),
		$$new($ObjectArray, {
			"Asia/Singapore"_s,
			Singapore
		}),
		$$new($ObjectArray, {
			"Asia/Vientiane"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Europe/Andorra"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Belfast"_s,
			$$new($StringArray, {
				u"Griničas laiks"_s,
				""_s,
				u"Lielbritānijas vasaras laiks"_s,
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
			"Indian/Mayotte"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Reunion"_s,
			Reunion
		}),
		$$new($ObjectArray, {
			"Pacific/Easter"_s,
			Easter
		}),
		$$new($ObjectArray, {
			"Pacific/Kosrae"_s,
			Kosrae
		}),
		$$new($ObjectArray, {
			"Pacific/Majuro"_s,
			Marshall_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Midway"_s,
			Samoa
		}),
		$$new($ObjectArray, {
			"Pacific/Noumea"_s,
			New_Caledonia
		}),
		$$new($ObjectArray, {
			"Pacific/Ponape"_s,
			Ponape
		}),
		$$new($ObjectArray, {
			"Pacific/Saipan"_s,
			Chamorro
		}),
		$$new($ObjectArray, {
			"Pacific/Tahiti"_s,
			Tahiti
		}),
		$$new($ObjectArray, {
			"Pacific/Tarawa"_s,
			Gilbert_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Wallis"_s,
			Wallis
		}),
		$$new($ObjectArray, {
			"Africa/Blantyre"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Djibouti"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Freetown"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Gaborone"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Khartoum"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Kinshasa"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Monrovia"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Ndjamena"_s,
			Africa_Western
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
			"Africa/Windhoek"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"America/Antigua"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Caracas"_s,
			Venezuela
		}),
		$$new($ObjectArray, {
			"America/Cayenne"_s,
			French_Guiana
		}),
		$$new($ObjectArray, {
			"America/Cordoba"_s,
			Argentina
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
			"America/Mendoza"_s,
			Argentina
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
			"America/Noronha"_s,
			Noronha
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
			"Asia/Choibalsan"_s,
			Mongolia
		}),
		$$new($ObjectArray, {
			"Asia/Phnom_Penh"_s,
			Indochina
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
			"Australia/Eucla"_s,
			Australia_CentralWestern
		}),
		$$new($ObjectArray, {
			"Australia/Perth"_s,
			Australia_Western
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
			"Indian/Maldives"_s,
			Maldives
		}),
		$$new($ObjectArray, {
			"Pacific/Chatham"_s,
			Chatham
		}),
		$$new($ObjectArray, {
			"Pacific/Fakaofo"_s,
			Tokelau
		}),
		$$new($ObjectArray, {
			"Pacific/Gambier"_s,
			Gambier
		}),
		$$new($ObjectArray, {
			"Pacific/Norfolk"_s,
			Norfolk
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
			"Africa/Bujumbura"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Mogadishu"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"America/Anguilla"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Asuncion"_s,
			Paraguay
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
			"America/Santarem"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Santiago"_s,
			Chile
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
			"Antarctica/Davis"_s,
			Davis
		}),
		$$new($ObjectArray, {
			"Antarctica/Syowa"_s,
			Syowa
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
			"Asia/Ulaanbaatar"_s,
			Mongolia
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
			"Atlantic/Stanley"_s,
			Falkland
		}),
		$$new($ObjectArray, {
			"Australia/Currie"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Darwin"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"Australia/Hobart"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Sydney"_s,
			Australia_Eastern
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
			"Indian/Christmas"_s,
			Christmas
		}),
		$$new($ObjectArray, {
			"Indian/Kerguelen"_s,
			French_Southern
		}),
		$$new($ObjectArray, {
			"Indian/Mauritius"_s,
			Mauritius
		}),
		$$new($ObjectArray, {
			"Pacific/Auckland"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Pacific/Funafuti"_s,
			Tuvalu
		}),
		$$new($ObjectArray, {
			"Pacific/Johnston"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"Pacific/Pitcairn"_s,
			Pitcairn
		}),
		$$new($ObjectArray, {
			"Africa/Libreville"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Lubumbashi"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Nouakchott"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Porto-Novo"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"America/Araguaina"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Boa_Vista"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Catamarca"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Chihuahua"_s,
			Mexico_Pacific
		}),
		$$new($ObjectArray, {
			"America/Fortaleza"_s,
			Brasilia
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
			"America/Guayaquil"_s,
			Ecuador
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
			"America/Sao_Paulo"_s,
			Brasilia
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
			"Antarctica/Mawson"_s,
			Mawson
		}),
		$$new($ObjectArray, {
			"Antarctica/Vostok"_s,
			Vostok
		}),
		$$new($ObjectArray, {
			"Asia/Kuala_Lumpur"_s,
			Malaysia
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
			"Pacific/Enderbury"_s,
			Phoenix_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Galapagos"_s,
			Galapagos
		}),
		$$new($ObjectArray, {
			"Pacific/Kwajalein"_s,
			Marshall_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Marquesas"_s,
			Marquesas
		}),
		$$new($ObjectArray, {
			"Pacific/Pago_Pago"_s,
			Samoa
		}),
		$$new($ObjectArray, {
			"Pacific/Rarotonga"_s,
			Cook
		}),
		$$new($ObjectArray, {
			"Pacific/Tongatapu"_s,
			Tonga
		}),
		$$new($ObjectArray, {
			"Africa/Addis_Ababa"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Brazzaville"_s,
			Africa_Western
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
			"America/Montevideo"_s,
			Uruguay
		}),
		$$new($ObjectArray, {
			"America/Montserrat"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Paramaribo"_s,
			Suriname
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
			"Antarctica/McMurdo"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Antarctica/Rothera"_s,
			Rothera
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
			"Australia/Adelaide"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"Australia/Brisbane"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Lindeman"_s,
			Australia_Eastern
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
			"Pacific/Kiritimati"_s,
			Line_Islands
		}),
		$$new($ObjectArray, {
			"Africa/Johannesburg"_s,
			Africa_Southern
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
			"America/Porto_Velho"_s,
			Amazon
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
			"Atlantic/Cape_Verde"_s,
			Cape_Verde
		}),
		$$new($ObjectArray, {
			"Australia/Lord_Howe"_s,
			Lord_Howe
		}),
		$$new($ObjectArray, {
			"Australia/Melbourne"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Antananarivo"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Guadalcanal"_s,
			Solomon
		}),
		$$new($ObjectArray, {
			"Africa/Dar_es_Salaam"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"America/Blanc-Sablon"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Buenos_Aires"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Campo_Grande"_s,
			Amazon
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
			"Antarctica/Macquarie"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Port_Moresby"_s,
			Papua_New_Guinea
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
			"Antarctica/South_Pole"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Australia/Broken_Hill"_s,
			Australia_Central
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
			"Atlantic/South_Georgia"_s,
			South_Georgia
		}),
		$$new($ObjectArray, {
			"America/Argentina/Salta"_s,
			Argentina
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
			"America/Argentina/Tucuman"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Argentina/Ushuaia"_s,
			Argentina
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
			"Antarctica/DumontDUrville"_s,
			DumontDUrville
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aden"_s,
			"Adena"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Baku"_s,
			"Baku"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dili"_s,
			"Dili"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Gaza"_s,
			"Gaza"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hovd"_s,
			"Hovda"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Omsk"_s,
			"Omska"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Oral"_s,
			"Orala"_s
		}),
		$$new($ObjectArray, {
			"America/Argentina/La_Rioja"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Argentina/San_Juan"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Argentina/San_Luis"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Indiana/Petersburg"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Amman"_s,
			u"Ammāna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtau"_s,
			"Aktau"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Chita"_s,
			u"Čita"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dhaka"_s,
			"Daka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dubai"_s,
			"Dubaija"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kabul"_s,
			"Kabula"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Macau"_s,
			"Makao"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qatar"_s,
			"Katara"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Seoul"_s,
			"Seula"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tokyo"_s,
			"Tokija"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tomsk"_s,
			"Tomska"_s
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
			"timezone.excity.Africa/Juba"_s,
			u"Džūba"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lome"_s,
			"Lome"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Almaty"_s,
			"Almati"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Anadyr"_s,
			"Anadira"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtobe"_s,
			"Aktebe"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Atyrau"_s,
			"Atirau"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Beirut"_s,
			u"Beirūta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Brunei"_s,
			"Bruneja"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hebron"_s,
			"Hebrona"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuwait"_s,
			"Kuveita"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Manila"_s,
			"Manila"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Muscat"_s,
			"Maskata"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Riyadh"_s,
			u"Rijāda"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Saigon"_s,
			u"Hošimina"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Taipei"_s,
			"Taibei"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tehran"_s,
			u"Teherāna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Urumqi"_s,
			u"Urumči"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Etc/Unknown"_s,
			u"nezināma pilsēta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kiev"_s,
			"Kijeva"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Oslo"_s,
			"Oslo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Riga"_s,
			u"Rīga"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Rome"_s,
			"Roma"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mahe"_s,
			"Mae"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Accra"_s,
			"Akra"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Cairo"_s,
			"Kaira"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ceuta"_s,
			"Seuta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dakar"_s,
			"Dakara"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lagos"_s,
			"Lagosa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tunis"_s,
			"Tunisa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Adak"_s,
			"Adaka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Lima"_s,
			"Lima"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nome"_s,
			"Noma"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Baghdad"_s,
			u"Bagdāde"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bahrain"_s,
			"Bahreina"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bangkok"_s,
			"Bangkoka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Barnaul"_s,
			"Barnaula"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bishkek"_s,
			u"Biškeka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Colombo"_s,
			"Kolombo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Irkutsk"_s,
			"Irkutska"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jakarta"_s,
			u"Džakarta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Karachi"_s,
			u"Karāči"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuching"_s,
			u"Kučina"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Magadan"_s,
			"Magadana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Nicosia"_s,
			"Nikosija"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Rangoon"_s,
			"Ranguna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tbilisi"_s,
			"Tbilisi"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Thimphu"_s,
			"Thimphu"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yakutsk"_s,
			"Jakutska"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yerevan"_s,
			u"Erevāna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kirov"_s,
			"Kirova"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Malta"_s,
			"Malta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Minsk"_s,
			"Minska"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Paris"_s,
			u"Parīze"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Sofia"_s,
			"Sofija"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vaduz"_s,
			"Vaduca"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Cocos"_s,
			u"Kokosu (Kīlinga) sala"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Apia"_s,
			"Apija"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fiji"_s,
			u"Fidži"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guam"_s,
			"Guama"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Niue"_s,
			"Niue"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Truk"_s,
			u"Čūka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wake"_s,
			"Veika sala"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bamako"_s,
			"Bamako"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bangui"_s,
			"Bangi"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Banjul"_s,
			u"Bandžula"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bissau"_s,
			"Bisava"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Douala"_s,
			"Duala"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Harare"_s,
			"Harare"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kigali"_s,
			"Kigali"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Luanda"_s,
			"Luanda"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lusaka"_s,
			"Lusaka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Malabo"_s,
			"Malabo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Maputo"_s,
			"Maputu"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Maseru"_s,
			"Maseru"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Niamey"_s,
			"Niameja"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Aruba"_s,
			"Aruba"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bahia"_s,
			"Baija"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belem"_s,
			"Belena"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Boise"_s,
			"Boisisitija"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jujuy"_s,
			"Huhuja"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Sitka"_s,
			"Sitka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thule"_s,
			"Tule"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ashgabat"_s,
			u"Ašgabata"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Calcutta"_s,
			u"Kalkāta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Damascus"_s,
			"Damaska"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dushanbe"_s,
			u"Dušanbe"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jayapura"_s,
			u"Džajapura"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Katmandu"_s,
			"Katmandu"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Khandyga"_s,
			"Handiga"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Makassar"_s,
			"Makasara"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qostanay"_s,
			"Kostanaja"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Sakhalin"_s,
			u"Sahalīna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Shanghai"_s,
			u"Šanhaja"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tashkent"_s,
			u"Taškenta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ust-Nera"_s,
			u"Ustjņera"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Athens"_s,
			u"Atēnas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Berlin"_s,
			u"Berlīne"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Dublin"_s,
			"Dublina"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Jersey"_s,
			u"Džērsija"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Lisbon"_s,
			"Lisabona"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/London"_s,
			"Londona"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Madrid"_s,
			"Madride"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Monaco"_s,
			"Monako"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Moscow"_s,
			"Maskava"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Prague"_s,
			u"Prāga"_s
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
			u"Tirāna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vienna"_s,
			u"Vīne"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Warsaw"_s,
			u"Varšava"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zagreb"_s,
			"Zagreba"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zurich"_s,
			u"Cīrihe"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Chagos"_s,
			u"Čagosu arhipelāgs"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Comoro"_s,
			"Komoras"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Efate"_s,
			"Efate"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Nauru"_s,
			"Nauru"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Palau"_s,
			"Palau"_s
		}),
		$$new($ObjectArray, {
			"America/Argentina/Rio_Gallegos"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/New_Salem"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Abidjan"_s,
			u"Abidžana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Algiers"_s,
			u"Alžīra"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Conakry"_s,
			"Konakri"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kampala"_s,
			"Kampala"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mbabane"_s,
			"Mbabane"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Nairobi"_s,
			"Nairobi"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tripoli"_s,
			"Tripole"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belize"_s,
			"Beliza"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bogota"_s,
			"Bogota"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cancun"_s,
			"Kankuna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayman"_s,
			"Kaimanu salas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cuiaba"_s,
			"Kujaba"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson"_s,
			"Dousona"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Denver"_s,
			"Denvera"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guyana"_s,
			u"Gajāna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Havana"_s,
			"Havana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Inuvik"_s,
			"Inuvika"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Juneau"_s,
			u"Džuno"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/La_Paz"_s,
			"Lapasa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Maceio"_s,
			"Masejo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Manaus"_s,
			"Manausa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Merida"_s,
			"Merida"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nassau"_s,
			"Naso"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Panama"_s,
			"Panama"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Recife"_s,
			"Resifi"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Regina"_s,
			u"Ridžaina"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Famagusta"_s,
			"Famagusta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hong_Kong"_s,
			"Honkonga"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jerusalem"_s,
			"Jeruzaleme"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kamchatka"_s,
			u"Kamčatka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Pontianak"_s,
			"Pontianaka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Pyongyang"_s,
			"Phenjana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qyzylorda"_s,
			"Kizilorda"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Samarkand"_s,
			"Samarkanda"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Singapore"_s,
			u"Singapūra"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Vientiane"_s,
			u"Vjenčana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Andorra"_s,
			"Andora"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Saratov"_s,
			"Saratova"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tallinn"_s,
			"Tallina"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vatican"_s,
			u"Vatikāns"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vilnius"_s,
			u"Viļņa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mayotte"_s,
			"Majota"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Reunion"_s,
			"Reinjona"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Easter"_s,
			"Lieldienu sala"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kosrae"_s,
			"Kosraja"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Majuro"_s,
			u"Madžuro"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Midway"_s,
			"Midvejs"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Noumea"_s,
			"Numea"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Ponape"_s,
			"Ponpeja"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Saipan"_s,
			"Saipana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tahiti"_s,
			"Taiti"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tarawa"_s,
			"Tarava"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wallis"_s,
			"Volisa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Blantyre"_s,
			"Blantaira"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Djibouti"_s,
			u"Džibutija"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/El_Aaiun"_s,
			u"Ajūna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Freetown"_s,
			u"Frītauna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Gaborone"_s,
			"Gaborone"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Khartoum"_s,
			u"Hartūma"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kinshasa"_s,
			u"Kinšasa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Monrovia"_s,
			"Monrovija"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ndjamena"_s,
			u"Ndžamena"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Sao_Tome"_s,
			"Santome"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Windhoek"_s,
			"Vindhuka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Antigua"_s,
			"Antigva"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Caracas"_s,
			"Karakasa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayenne"_s,
			"Kajenna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chicago"_s,
			u"Čikāga"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cordoba"_s,
			"Kordova"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Creston"_s,
			"Krestona"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Curacao"_s,
			"Kirasao"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Detroit"_s,
			"Detroita"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Godthab"_s,
			u"Nūka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grenada"_s,
			u"Grenāda"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Halifax"_s,
			"Helifeksa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Iqaluit"_s,
			"Ikaluita"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jamaica"_s,
			"Jamaika"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Managua"_s,
			"Managva"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Marigot"_s,
			"Merigota"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mendoza"_s,
			"Mendosa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Moncton"_s,
			"Monktona"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nipigon"_s,
			"Nipigona"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Noronha"_s,
			u"Noroņa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Ojinaga"_s,
			"Ohinaga"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Phoenix"_s,
			u"Fīniksa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tijuana"_s,
			"Tihuana"_s
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
			"Jakutata"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Choibalsan"_s,
			u"Čoibalsana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Phnom_Penh"_s,
			u"Pnompeņa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Azores"_s,
			"Azoru salas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Canary"_s,
			u"Kanāriju salas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Faeroe"_s,
			u"Fēru salas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Eucla"_s,
			"Jukla"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Perth"_s,
			u"Pērta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Belgrade"_s,
			"Belgrada"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Brussels"_s,
			"Brisele"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Budapest"_s,
			u"Budapešta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Busingen"_s,
			u"Bīzingene"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Chisinau"_s,
			u"Kišiņeva"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Guernsey"_s,
			u"Gērnsija"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Helsinki"_s,
			"Helsinki"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Istanbul"_s,
			"Stambula"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Sarajevo"_s,
			"Sarajeva"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Uzhgorod"_s,
			u"Užhoroda"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Maldives"_s,
			u"Maldīvija"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Chatham"_s,
			u"Četema"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fakaofo"_s,
			"Fakaofo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Gambier"_s,
			u"Gambjē salas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Norfolk"_s,
			"Norfolka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bujumbura"_s,
			u"Bužumbura"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mogadishu"_s,
			u"Mogadīšo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anguilla"_s,
			"Angilja"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Asuncion"_s,
			"Asunsjona"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Barbados"_s,
			"Barbadosa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dominica"_s,
			"Dominika"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Edmonton"_s,
			"Edmontona"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Eirunepe"_s,
			"Eirunepe"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mazatlan"_s,
			"Masatlana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Miquelon"_s,
			"Mikelona"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/New_York"_s,
			u"Ņujorka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Resolute"_s,
			u"Rezolūta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santarem"_s,
			"Santarena"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santiago"_s,
			"Santjago"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Johns"_s,
			u"Sentdžonsa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Kitts"_s,
			"Sentkitsa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Lucia"_s,
			u"Sentlūsija"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Winnipeg"_s,
			"Vinipega"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Casey"_s,
			"Keisi"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Davis"_s,
			"Deivisa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Syowa"_s,
			u"Šova"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Troll"_s,
			"Trolla"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Krasnoyarsk"_s,
			"Krasnojarska"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novosibirsk"_s,
			"Novosibirska"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ulaanbaatar"_s,
			"Ulanbatora"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Vladivostok"_s,
			"Vladivostoka"_s
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
			"timezone.excity.Atlantic/Stanley"_s,
			"Stenli"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Currie"_s,
			"Kari"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Darwin"_s,
			u"Dārvina"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Hobart"_s,
			u"Hobārta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Sydney"_s,
			"Sidneja"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Amsterdam"_s,
			"Amsterdama"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Astrakhan"_s,
			u"Astrahaņa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bucharest"_s,
			"Bukareste"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Gibraltar"_s,
			u"Gibraltārs"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Ljubljana"_s,
			u"Ļubļana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Mariehamn"_s,
			"Mariehamna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Podgorica"_s,
			"Podgorica"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Stockholm"_s,
			"Stokholma"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Ulyanovsk"_s,
			u"Uļjanovska"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Volgograd"_s,
			"Volgograda"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Christmas"_s,
			u"Ziemsvētku sala"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Kerguelen"_s,
			u"Kergelēna sala"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mauritius"_s,
			u"Maurīcija"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Auckland"_s,
			"Oklenda"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Funafuti"_s,
			"Funafuti"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Honolulu"_s,
			"Honolulu"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Johnston"_s,
			u"Džonstona atols"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Pitcairn"_s,
			u"Pitkērna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Casablanca"_s,
			"Kasablanka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Libreville"_s,
			"Librevila"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lubumbashi"_s,
			u"Lubumbaši"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Nouakchott"_s,
			u"Nuakšota"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Porto-Novo"_s,
			"Portonovo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anchorage"_s,
			u"Ankurāža"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Araguaina"_s,
			"Aragvaina"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Boa_Vista"_s,
			"Boavista"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Catamarca"_s,
			"Katamarka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chihuahua"_s,
			u"Čivava"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Fortaleza"_s,
			"Fortaleza"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Glace_Bay"_s,
			"Gleisbeja"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Goose_Bay"_s,
			u"Gūsbeja"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guatemala"_s,
			"Gvatemala"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guayaquil"_s,
			"Gvajakila"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Matamoros"_s,
			"Matamorosa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Menominee"_s,
			u"Menominī"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Monterrey"_s,
			"Monterreja"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Sao_Paulo"_s,
			"Sanpaulu"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Thomas"_s,
			"Sentomasa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Vancouver"_s,
			u"Vankūvera"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Mawson"_s,
			"Mosona"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Palmer"_s,
			u"Pālmera"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Vostok"_s,
			"Vostoka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuala_Lumpur"_s,
			"Kualalumpura"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novokuznetsk"_s,
			u"Novokuzņecka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bratislava"_s,
			"Bratislava"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Copenhagen"_s,
			u"Kopenhāgena"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Luxembourg"_s,
			"Luksemburga"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/San_Marino"_s,
			u"Sanmarīno"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Simferopol"_s,
			"Simferopole"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zaporozhye"_s,
			u"Zaporožje"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Enderbury"_s,
			"Enderberija"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Galapagos"_s,
			"Galapagu salas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kwajalein"_s,
			u"Kvadžaleina"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Marquesas"_s,
			u"Marķīza salas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Pago_Pago"_s,
			"Pagopago"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Rarotonga"_s,
			"Rarotonga"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tongatapu"_s,
			"Tongatapu"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Addis_Ababa"_s,
			"Adisabeba"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Brazzaville"_s,
			"Brazavila"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ouagadougou"_s,
			"Vagadugu"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Costa_Rica"_s,
			"Kostarika"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grand_Turk"_s,
			u"Grandtkērka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guadeloupe"_s,
			"Gvadelupa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Hermosillo"_s,
			"Ermosiljo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kralendijk"_s,
			u"Krālendeika"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Louisville"_s,
			u"Lūivila"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Martinique"_s,
			"Martinika"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Metlakatla"_s,
			"Metlakatla"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montevideo"_s,
			"Montevideo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montserrat"_s,
			"Montserrata"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Paramaribo"_s,
			"Paramaribo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rio_Branco"_s,
			"Riobranko"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Vincent"_s,
			"Sentvinsenta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Whitehorse"_s,
			"Vaithorsa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/McMurdo"_s,
			"Makmerdo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Rothera"_s,
			"Rotera"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Srednekolymsk"_s,
			u"Sredņekolimska"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yekaterinburg"_s,
			"Jekaterinburga"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Reykjavik"_s,
			"Reikjavika"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/St_Helena"_s,
			u"Sv.Helēnas sala"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Adelaide"_s,
			"Adelaida"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Brisbane"_s,
			"Brisbena"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Lindeman"_s,
			"Lindemana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Isle_of_Man"_s,
			"Menas sala"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kaliningrad"_s,
			u"Kaļiņingrada"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kiritimati"_s,
			"Kirisimasi"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Johannesburg"_s,
			"Johannesburga"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/El_Salvador"_s,
			"Salvadora"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Fort_Nelson"_s,
			"Fortnelsona"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Los_Angeles"_s,
			u"Losandželosa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mexico_City"_s,
			"Mehiko"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Pangnirtung"_s,
			"Pannirtuna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Porto_Velho"_s,
			u"Portuveļu"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Puerto_Rico"_s,
			"Puertoriko"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rainy_River"_s,
			"Reinirivera"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tegucigalpa"_s,
			"Tegusigalpa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thunder_Bay"_s,
			"Tanderbeja"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Yellowknife"_s,
			"Jelounaifa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Arctic/Longyearbyen"_s,
			u"Longjērbīene"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Cape_Verde"_s,
			"Kaboverde"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Lord_Howe"_s,
			"Lordhava"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Melbourne"_s,
			"Melburna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Antananarivo"_s,
			"Antananarivu"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guadalcanal"_s,
			"Gvadalkanala"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dar_es_Salaam"_s,
			u"Dāresalāma"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Blanc-Sablon"_s,
			"Blansablona"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Buenos_Aires"_s,
			"Buenosairesa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Campo_Grande"_s,
			"Kampugrandi"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Danmarkshavn"_s,
			u"Denmārkšavna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson_Creek"_s,
			u"Dousonkrīka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Knox"_s,
			u"Noksa, Indiāna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indianapolis"_s,
			"Indianapolisa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Punta_Arenas"_s,
			"Puntaarenasa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rankin_Inlet"_s,
			"Rankininleta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santa_Isabel"_s,
			"Santaisabela"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Scoresbysund"_s,
			"Itokortormita"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Macquarie"_s,
			"Makvori"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Bougainville"_s,
			"Bugenvila sala"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Port_Moresby"_s,
			"Portmorsbi"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cambridge_Bay"_s,
			u"Kembridžbeja"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Coral_Harbour"_s,
			"Atikokana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vevay"_s,
			u"Vīveja, Indiāna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Lower_Princes"_s,
			"Louerprinseskvotera"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port_of_Spain"_s,
			"Portofspeina"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santo_Domingo"_s,
			"Santodomingo"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Barthelemy"_s,
			u"Senbartelmī"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Swift_Current"_s,
			"Sviftkarenta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Broken_Hill"_s,
			"Brokenhila"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bahia_Banderas"_s,
			"Bajabanderasa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port-au-Prince"_s,
			"Portoprensa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/South_Georgia"_s,
			u"Dienviddžordžija"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Salta"_s,
			"Salta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Marengo"_s,
			u"Marengo, Indiāna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Winamac"_s,
			u"Vinamaka, Indiāna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Tucuman"_s,
			"Tukumana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Ushuaia"_s,
			u"Ušuaja"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Tell_City"_s,
			u"Telsitija, Indiāna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vincennes"_s,
			u"Vinsensa, Indiāna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/DumontDUrville"_s,
			"Dimondirvila"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/La_Rioja"_s,
			"Larjoha"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/San_Juan"_s,
			"Sanhuana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/San_Luis"_s,
			"Sanluisa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Petersburg"_s,
			u"Pītersbērga, Indiāna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kentucky/Monticello"_s,
			u"Montičelo, Kentuki"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Beulah"_s,
			u"Bjula, Ziemeļdakota"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Center"_s,
			u"Sentera, Ziemeļdakota"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Rio_Gallegos"_s,
			"Riogaljegosa"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/New_Salem"_s,
			u"Ņūseilema, Ziemeļdakota"_s
		})
	}));
	return data;
}

TimeZoneNames_lv::TimeZoneNames_lv() {
}

$Class* TimeZoneNames_lv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_lv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_lv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_lv",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_lv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_lv);
	});
	return class$;
}

$Class* TimeZoneNames_lv::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun