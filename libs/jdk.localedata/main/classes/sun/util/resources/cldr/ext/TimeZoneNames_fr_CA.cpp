#include <sun/util/resources/cldr/ext/TimeZoneNames_fr_CA.h>

#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef ETC_UTC

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _TimeZoneNames_fr_CA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_fr_CA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_fr_CA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_fr_CA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_fr_CA",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_fr_CA_MethodInfo_
};

$Object* allocate$TimeZoneNames_fr_CA($Class* clazz) {
	return $of($alloc(TimeZoneNames_fr_CA));
}

void TimeZoneNames_fr_CA::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_fr_CA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Acre, $new($StringArray, {
		u"heure normale de l’Acre"_s,
		""_s,
		u"heure avancée de l’Acre"_s,
		""_s,
		u"heure de l’Acre"_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		u"heure normale d’Apia"_s,
		""_s,
		u"heure avancée d’Apia"_s,
		""_s,
		u"heure d’Apia"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"heure normale des îles Cook"_s,
		""_s,
		u"heure avancée des îles Cook"_s,
		""_s,
		u"heure des îles Cook"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		"heure normale de Cuba"_s,
		""_s,
		u"heure avancée de Cuba"_s,
		""_s,
		"heure de Cuba"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"heure normale des îles Fidji"_s,
		""_s,
		u"heure avancée des îles Fidji"_s,
		""_s,
		u"heure des îles Fidji"_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		"heure normale de Hovd"_s,
		""_s,
		u"heure avancée de Hovd"_s,
		""_s,
		"heure de Hovd"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"heure normale d’Iran"_s,
		""_s,
		u"heure avancée d’Iran"_s,
		""_s,
		u"heure de l’Iran"_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"heure normale d’Omsk"_s,
		""_s,
		u"heure avancée d’Omsk"_s,
		""_s,
		u"heure d’Omsk"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"heure normale du Pérou"_s,
		""_s,
		u"heure avancée du Pérou"_s,
		""_s,
		u"heure du Pérou"_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		"heure normale du Chili"_s,
		""_s,
		u"heure avancée du Chili"_s,
		""_s,
		"heure du Chili"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		"heure normale de Chine"_s,
		""_s,
		u"heure avancée de Chine"_s,
		""_s,
		"heure de Chine"_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		"heure normale du Japon"_s,
		""_s,
		u"heure avancée du Japon"_s,
		""_s,
		"heure du Japon"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"heure normale de la Corée"_s,
		""_s,
		u"heure avancée de Corée"_s,
		""_s,
		u"heure de la Corée"_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		"heure normale des Samoa"_s,
		""_s,
		u"heure avancée des Samoa"_s,
		""_s,
		"heure des Samoa"_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		"heure normale des Tonga"_s,
		""_s,
		u"heure avancée de Tonga"_s,
		""_s,
		"heure des Tonga"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"heure normale de l’Alaska"_s,
		""_s,
		u"heure avancée de l’Alaska"_s,
		""_s,
		u"heure de l’Alaska"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"heure normale de l’Amazonie"_s,
		""_s,
		u"heure avancée de l’Amazonie"_s,
		""_s,
		u"heure de l’Amazonie"_s,
		""_s
	}));
	$var($StringArray, Anadyr, $new($StringArray, {
		u"heure normale d’Anadyr"_s,
		""_s,
		u"heure avancée d’Anadyr"_s,
		""_s,
		u"heure d’Anadyr"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"heure normale des Açores"_s,
		""_s,
		u"heure avancée des Açores"_s,
		""_s,
		u"heure des Açores"_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"heure normale de l’île de Pâques"_s,
		""_s,
		u"heure avancée de l’île de Pâques"_s,
		""_s,
		u"heure de l’île de Pâques"_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"heure normale d’Israël"_s,
		""_s,
		u"heure avancée d’Israël"_s,
		""_s,
		u"heure d’Israël"_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		"heure normale de Moscou"_s,
		""_s,
		u"heure avancée de Moscou"_s,
		""_s,
		"heure de Moscou"_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		"heure normale de Taipei"_s,
		""_s,
		u"heure avancée de Taipei"_s,
		""_s,
		"heure de Taipei"_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"heure normale de l’Arabie"_s,
		""_s,
		u"heure avancée de l’Arabie"_s,
		""_s,
		u"heure de l’Arabie"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"heure normale de l’Arménie"_s,
		""_s,
		u"heure avancée d’Arménie"_s,
		""_s,
		u"heure de l’Arménie"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		u"temps universel coordonné"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"heure normale de la Géorgie"_s,
		""_s,
		u"heure avancée de Géorgie"_s,
		""_s,
		u"heure de la Géorgie"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"heure normale d’Irkoutsk"_s,
		""_s,
		u"heure avancée d’Irkoutsk"_s,
		""_s,
		u"heure d’Irkoutsk"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		"heure normale de Magadan"_s,
		""_s,
		u"heure avancée de Magadan"_s,
		""_s,
		"heure de Magadan"_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"heure normale de l’île Norfolk"_s,
		""_s,
		u"heure avancée de l’île Norfolk"_s,
		""_s,
		u"heure de l’île Norfolk"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		"heure normale de Fernando de Noronha"_s,
		""_s,
		u"heure avancée de Fernando de Noronha"_s,
		""_s,
		"heure de Fernando de Noronha"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"heure de la Réunion"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"heure normale de l’Uruguay"_s,
		""_s,
		u"heure avancée de l’Uruguay"_s,
		""_s,
		u"heure de l’Uruguay"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		"heure normale du Vanuatu"_s,
		""_s,
		u"heure avancée de Vanuatu"_s,
		""_s,
		"heure du Vanuatu"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		"heure normale de Iakoutsk"_s,
		""_s,
		u"heure avancée de Iakoutsk"_s,
		""_s,
		"heure de Iakoutsk"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"heure normale de l’Atlantique"_s,
		""_s,
		u"heure avancée de l’Atlantique"_s,
		""_s,
		u"heure de l’Atlantique"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		"heure normale de Brasilia"_s,
		""_s,
		u"heure avancée de Brasilia"_s,
		""_s,
		"heure de Brasilia"_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		"heure normale de Colombie"_s,
		""_s,
		u"heure avancée de Colombie"_s,
		""_s,
		"heure de Colombie"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"heure normale des îles Malouines"_s,
		""_s,
		u"heure avancée des îles Malouines"_s,
		""_s,
		u"heure des îles Malouines"_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"heure normale d’Oulan-Bator"_s,
		""_s,
		u"heure avancée d’Oulan-Bator"_s,
		""_s,
		u"heure d’Oulan-Bator"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		"heure normale du Pakistan"_s,
		""_s,
		u"heure avancée du Pakistan"_s,
		""_s,
		"heure du Pakistan"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		"heure normale du Paraguay"_s,
		""_s,
		u"heure avancée du Paraguay"_s,
		""_s,
		"heure du Paraguay"_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		"heure normale de Sakhaline"_s,
		""_s,
		u"heure avancée de Sakhaline"_s,
		""_s,
		"heure de Sakhaline"_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"heure normale d’Argentine"_s,
		""_s,
		u"heure avancée de l’Argentine"_s,
		""_s,
		u"heure de l’Argentine"_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		"heure normale de Hong Kong"_s,
		""_s,
		u"heure avancée de Hong Kong"_s,
		""_s,
		"heure de Hong Kong"_s,
		""_s
	}));
	$var($StringArray, Kamchatka, $new($StringArray, {
		"heure normale de Petropavlovsk-Kamchatski"_s,
		""_s,
		u"heure avancée de Petropavlovsk-Kamchatski"_s,
		""_s,
		"heure de Petropavlovsk-Kamchatski"_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		"heure normale de Lord Howe"_s,
		""_s,
		u"heure avancée de Lord Howe"_s,
		""_s,
		"heure de Lord Howe"_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		"heure normale de Maurice"_s,
		""_s,
		u"heure avancée de Maurice"_s,
		""_s,
		"heure de Maurice"_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		"heure normale de Volgograd"_s,
		""_s,
		u"heure avancée de Volgograd"_s,
		""_s,
		"heure de Volgograd"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"heure normale de l’Azerbaïdjan"_s,
		""_s,
		u"heure avancée d’Azerbaïdjan"_s,
		""_s,
		u"heure de l’Azerbaïdjan"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		"heure normale du Bangladesh"_s,
		""_s,
		u"heure avancée du Bangladesh"_s,
		""_s,
		"heure du Bangladesh"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		"heure normale du Cap-Vert"_s,
		""_s,
		u"heure avancée du Cap-Vert"_s,
		""_s,
		"heure du Cap-Vert"_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"heure normale de l’Ouzbékistan"_s,
		""_s,
		u"heure avancée de l’Ouzbékistan"_s,
		""_s,
		u"heure de l’Ouzbékistan"_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"heure normale de Krasnoïarsk"_s,
		""_s,
		u"heure avancée de Krasnoïarsk"_s,
		""_s,
		u"heure de Krasnoïarsk"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"heure normale de la Nouvelle-Zélande"_s,
		""_s,
		u"heure avancée de la Nouvelle-Zélande"_s,
		""_s,
		u"heure de la Nouvelle-Zélande"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		"heure normale de Novossibirsk"_s,
		""_s,
		u"heure avancée de Novossibirsk"_s,
		""_s,
		"heure de Novossibirsk"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		"heure normale des Philippines"_s,
		""_s,
		u"heure avancée des Philippines"_s,
		""_s,
		"heure des Philippines"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		"heure normale de Vladivostok"_s,
		""_s,
		u"heure avancée de Vladivostok"_s,
		""_s,
		"heure de Vladivostok"_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		"heure normale de Terre-Neuve"_s,
		"HNT"_s,
		u"heure avancée de Terre-Neuve"_s,
		"HAT"_s,
		"heure de Terre-Neuve"_s,
		"HT"_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"heure normale du Turkménistan"_s,
		""_s,
		u"heure avancée du Turkménistan"_s,
		""_s,
		u"heure du Turkménistan"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"heure de Guyane française"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"heure normale de la Nouvelle-Calédonie"_s,
		""_s,
		u"heure avancée de Nouvelle-Calédonie"_s,
		""_s,
		u"heure de la Nouvelle-Calédonie"_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"heure normale d’Ekaterinbourg"_s,
		""_s,
		u"heure avancée d’Ekaterinbourg"_s,
		""_s,
		u"heure d’Ekaterinbourg"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"heure d’Afrique centrale"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"heure d’Afrique orientale"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"heure normale d’Afrique de l’Ouest"_s,
		""_s,
		u"heure avancée d’Afrique de l’Ouest"_s,
		""_s,
		u"heure d’Afrique de l’Ouest"_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"heure normale de l’Europe centrale"_s,
		""_s,
		u"heure avancée de l’Europe centrale"_s,
		""_s,
		u"heure de l’Europe centrale"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"heure normale de l’Europe de l’Est"_s,
		""_s,
		u"heure avancée de l’Europe de l’Est"_s,
		""_s,
		u"heure de l’Europe de l’Est"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"heure normale de l’Europe de l’Ouest"_s,
		""_s,
		u"heure avancée de l’Europe de l’Ouest"_s,
		""_s,
		u"heure de l’Europe de l’Ouest"_s,
		""_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		"heure normale du Pacifique mexicain"_s,
		""_s,
		u"heure avancée du Pacifique mexicain"_s,
		""_s,
		"heure du Pacifique mexicain"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"heure normale d’Afrique du Sud"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		"heure normale du Centre"_s,
		"HNC"_s,
		u"heure avancée du Centre"_s,
		"HAC"_s,
		"heure du Centre"_s,
		"HC"_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"heure normale de l’Est"_s,
		"HNE"_s,
		u"heure avancée de l’Est"_s,
		"HAE"_s,
		u"heure de l’Est"_s,
		"HE"_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		"heure normale du Pacifique"_s,
		"HNP"_s,
		u"heure avancée du Pacifique"_s,
		"HAP"_s,
		"heure du Pacifique"_s,
		"HP"_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"heure normale d’Hawaï-Aléoutiennes"_s,
		""_s,
		u"heure avancée d’Hawaï-Aléoutiennes"_s,
		""_s,
		u"heure d’Hawaï-Aléoutiennes"_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		"heure normale de Saint-Pierre-et-Miquelon"_s,
		""_s,
		u"heure avancée de Saint-Pierre-et-Miquelon"_s,
		""_s,
		"heure de Saint-Pierre-et-Miquelon"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		"heure normale des Rocheuses"_s,
		"HNR"_s,
		u"heure avancée des Rocheuses"_s,
		"HAR"_s,
		"heure des Rocheuses"_s,
		"HR"_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		"heure normale du Nord-Ouest du Mexique"_s,
		""_s,
		u"heure avancée du Nord-Ouest du Mexique"_s,
		""_s,
		"heure du Nord-Ouest du Mexique"_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"heure normale du centre de l’Australie"_s,
		""_s,
		u"heure avancée du centre de l’Australie"_s,
		""_s,
		u"heure du centre de l’Australie"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"heure normale de l’Est de l’Australie"_s,
		""_s,
		u"heure avancée de l’Est de l’Australie"_s,
		""_s,
		u"heure de l’Est de l’Australie"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"heure normale de l’Ouest de l’Australie"_s,
		""_s,
		u"heure avancée de l’Ouest de l’Australie"_s,
		""_s,
		u"heure de l’Ouest de l’Australie"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"heure normale de l’Est du Groenland"_s,
		""_s,
		u"heure avancée de l’Est du Groenland"_s,
		""_s,
		u"heure de l’Est du Groenland"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"heure normale de l’Ouest du Groenland"_s,
		""_s,
		u"heure avancée de l’Ouest du Groenland"_s,
		""_s,
		u"heure de l’Ouest du Groenland"_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"heure normale du centre-ouest de l’Australie"_s,
		""_s,
		u"heure avancée du centre-ouest de l’Australie"_s,
		""_s,
		u"heure du centre-ouest de l’Australie"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("America/Los_Angeles"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Denver"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Phoenix"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Chicago"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/New_York"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indianapolis"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Honolulu"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("America/Anchorage"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/Halifax"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Sitka"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/St_Johns"_s),
			$of(Newfoundland)
		}),
		$$new($ObjectArray, {
			$of("Europe/Paris"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jerusalem"_s),
			$of(Israel)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tokyo"_s),
			$of(Japan)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bucharest"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Shanghai"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(ETC_UTC)
		}),
		$$new($ObjectArray, {
			$of("ACT"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("AET"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("ART"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("AST"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("BET"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("BST"_s),
			$of(Bangladesh)
		}),
		$$new($ObjectArray, {
			$of("CAT"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("CNT"_s),
			$of(Newfoundland)
		}),
		$$new($ObjectArray, {
			$of("CST"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("CTT"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("EAT"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("ECT"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("JST"_s),
			$of(Japan)
		}),
		$$new($ObjectArray, {
			$of("MIT"_s),
			$of(Apia)
		}),
		$$new($ObjectArray, {
			$of("NET"_s),
			$of(Armenia)
		}),
		$$new($ObjectArray, {
			$of("NST"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("PLT"_s),
			$of(Pakistan)
		}),
		$$new($ObjectArray, {
			$of("PNT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("PRT"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("PST"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("CST6CDT"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("EST5EDT"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Etc/UTC"_s),
			$of(ETC_UTC)
		}),
		$$new($ObjectArray, {
			$of("MST7MDT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("PST8PDT"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aden"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baku"_s),
			$of(Azerbaijan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Gaza"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hovd"_s),
			$of(Hovd)
		}),
		$$new($ObjectArray, {
			$of("Asia/Omsk"_s),
			$of(Omsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Amman"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chita"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dhaka"_s),
			$of(Bangladesh)
		}),
		$$new($ObjectArray, {
			$of("Asia/Macau"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qatar"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Seoul"_s),
			$of(Korea)
		}),
		$$new($ObjectArray, {
			$of("Africa/Juba"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Asia/Anadyr"_s),
			$of(Anadyr)
		}),
		$$new($ObjectArray, {
			$of("Asia/Beirut"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Harbin"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hebron"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuwait"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Manila"_s),
			$of(Philippines)
		}),
		$$new($ObjectArray, {
			$of("Asia/Riyadh"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Taipei"_s),
			$of(Taipei)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tehran"_s),
			$of(Iran)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kiev"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Oslo"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Riga"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Rome"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Cairo"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ceuta"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lagos"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Tunis"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Adak"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("America/Lima"_s),
			$of(Peru)
		}),
		$$new($ObjectArray, {
			$of("America/Nome"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baghdad"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bahrain"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Irkutsk"_s),
			$of(Irkutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Karachi"_s),
			$of(Pakistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Magadan"_s),
			$of(Magadan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Nicosia"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tbilisi"_s),
			$of(Georgia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yakutsk"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yerevan"_s),
			$of(Armenia)
		}),
		$$new($ObjectArray, {
			$of("Europe/Malta"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Minsk"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sofia"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vaduz"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Apia"_s),
			$of(Apia)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fiji"_s),
			$of(Fiji)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("Africa/Asmera"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bangui"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Douala"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Harare"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kigali"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Luanda"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lusaka"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Malabo"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Maputo"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Maseru"_s),
			$of(Africa_Southern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Niamey"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("America/Aruba"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Bahia"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Belem"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Boise"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Jujuy"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Thule"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ashgabat"_s),
			$of(Turkmenistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Damascus"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Khandyga"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Sakhalin"_s),
			$of(Sakhalin)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tashkent"_s),
			$of(Uzbekistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ust-Nera"_s),
			$of(Vladivostok)
		}),
		$$new($ObjectArray, {
			$of("Europe/Athens"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Berlin"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Dublin"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				u"heure avancée irlandaise"_s,
				""_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/Lisbon"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Europe/London"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				u"heure avancée britannique"_s,
				""_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/Madrid"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Monaco"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Moscow"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Europe/Prague"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Skopje"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Tirane"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vienna"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Warsaw"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zagreb"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zurich"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Indian/Comoro"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Efate"_s),
			$of(Vanuatu)
		}),
		$$new($ObjectArray, {
			$of("SystemV/HST10"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("Africa/Algiers"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kampala"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Mbabane"_s),
			$of(Africa_Southern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nairobi"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Tripoli"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Belize"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Bogota"_s),
			$of(Colombia)
		}),
		$$new($ObjectArray, {
			$of("America/Cancun"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Cayman"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Cuiaba"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Havana"_s),
			$of(Cuba)
		}),
		$$new($ObjectArray, {
			$of("America/Inuvik"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Juneau"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/Maceio"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Manaus"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Merida"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Nassau"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Panama"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Recife"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Regina"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chongqing"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hong_Kong"_s),
			$of(Hong_Kong)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kamchatka"_s),
			$of(Kamchatka)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pyongyang"_s),
			$of(Korea)
		}),
		$$new($ObjectArray, {
			$of("Asia/Samarkand"_s),
			$of(Uzbekistan)
		}),
		$$new($ObjectArray, {
			$of("Europe/Andorra"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belfast"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				u"heure avancée britannique"_s,
				""_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/Tallinn"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vatican"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vilnius"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Mayotte"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Reunion"_s),
			$of(Reunion)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Easter"_s),
			$of(Easter)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Midway"_s),
			$of(Samoa)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Noumea"_s),
			$of(New_Caledonia)
		}),
		$$new($ObjectArray, {
			$of("Africa/Blantyre"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Djibouti"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Gaborone"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Khartoum"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kinshasa"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ndjamena"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Windhoek"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Antigua"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Cayenne"_s),
			$of(French_Guiana)
		}),
		$$new($ObjectArray, {
			$of("America/Cordoba"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Creston"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Curacao"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Detroit"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Godthab"_s),
			$of(Greenland_Western)
		}),
		$$new($ObjectArray, {
			$of("America/Grenada"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Iqaluit"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Jamaica"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Managua"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Marigot"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Mendoza"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Moncton"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Nipigon"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Noronha"_s),
			$of(Noronha)
		}),
		$$new($ObjectArray, {
			$of("America/Ojinaga"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Tijuana"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Toronto"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Tortola"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Yakutat"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("Asia/Choibalsan"_s),
			$of(Mongolia)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Azores"_s),
			$of(Azores)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Canary"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Faeroe"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Australia/Eucla"_s),
			$of(Australia_CentralWestern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Perth"_s),
			$of(Australia_Western)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belgrade"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Brussels"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Budapest"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Busingen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Chisinau"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Helsinki"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sarajevo"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Uzhgorod"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Norfolk"_s),
			$of(Norfolk)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4ADT"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6CDT"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5EDT"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7MDT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("SystemV/PST8PDT"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("SystemV/YST9YDT"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bujumbura"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Mogadishu"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Anguilla"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Asuncion"_s),
			$of(Paraguay)
		}),
		$$new($ObjectArray, {
			$of("America/Barbados"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Dominica"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Edmonton"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Eirunepe"_s),
			$of(Acre)
		}),
		$$new($ObjectArray, {
			$of("America/Mazatlan"_s),
			$of(Mexico_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Miquelon"_s),
			$of(Pierre_Miquelon)
		}),
		$$new($ObjectArray, {
			$of("America/Montreal"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Resolute"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Santarem"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Santiago"_s),
			$of(Chile)
		}),
		$$new($ObjectArray, {
			$of("America/Shiprock"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/St_Kitts"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/St_Lucia"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Winnipeg"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Asia/Krasnoyarsk"_s),
			$of(Krasnoyarsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novosibirsk"_s),
			$of(Novosibirsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ulaanbaatar"_s),
			$of(Mongolia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Vladivostok"_s),
			$of(Vladivostok)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Bermuda"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Madeira"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Stanley"_s),
			$of(Falkland)
		}),
		$$new($ObjectArray, {
			$of("Australia/Currie"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Darwin"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("Australia/Hobart"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Sydney"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Amsterdam"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Gibraltar"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Ljubljana"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Mariehamn"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Podgorica"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Stockholm"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Volgograd"_s),
			$of(Volgograd)
		}),
		$$new($ObjectArray, {
			$of("Indian/Mauritius"_s),
			$of(Mauritius)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Auckland"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Johnston"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("Africa/Libreville"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lubumbashi"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Porto-Novo"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("America/Araguaina"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Boa_Vista"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Catamarca"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Chihuahua"_s),
			$of(Mexico_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Fortaleza"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Glace_Bay"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Goose_Bay"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Guatemala"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Matamoros"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Menominee"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Monterrey"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Sao_Paulo"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/St_Thomas"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Vancouver"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novokuznetsk"_s),
			$of(Krasnoyarsk)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bratislava"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Copenhagen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Luxembourg"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/San_Marino"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Simferopol"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zaporozhye"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pago_Pago"_s),
			$of(Samoa)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Rarotonga"_s),
			$of(Cook)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tongatapu"_s),
			$of(Tonga)
		}),
		$$new($ObjectArray, {
			$of("Africa/Addis_Ababa"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Brazzaville"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("America/Costa_Rica"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Grand_Turk"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Guadeloupe"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Hermosillo"_s),
			$of(Mexico_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Kralendijk"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Louisville"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Martinique"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Metlakatla"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/Montevideo"_s),
			$of(Uruguay)
		}),
		$$new($ObjectArray, {
			$of("America/Montserrat"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Rio_Branco"_s),
			$of(Acre)
		}),
		$$new($ObjectArray, {
			$of("America/St_Vincent"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Whitehorse"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/McMurdo"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yekaterinburg"_s),
			$of(Yekaterinburg)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Jan_Mayen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Australia/Adelaide"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("Australia/Brisbane"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lindeman"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kaliningrad"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Johannesburg"_s),
			$of(Africa_Southern)
		}),
		$$new($ObjectArray, {
			$of("America/El_Salvador"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Fort_Nelson"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Mexico_City"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Pangnirtung"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Porto_Velho"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Puerto_Rico"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Rainy_River"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Tegucigalpa"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Thunder_Bay"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Yellowknife"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("Arctic/Longyearbyen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Cape_Verde"_s),
			$of(Cape_Verde)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lord_Howe"_s),
			$of(Lord_Howe)
		}),
		$$new($ObjectArray, {
			$of("Australia/Melbourne"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Antananarivo"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Dar_es_Salaam"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Blanc-Sablon"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Buenos_Aires"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Campo_Grande"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson_Creek"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Knox"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Rankin_Inlet"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Santa_Isabel"_s),
			$of(Mexico_Northwest)
		}),
		$$new($ObjectArray, {
			$of("America/Scoresbysund"_s),
			$of(Greenland_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Cambridge_Bay"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Coral_Harbour"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vevay"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Lower_Princes"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Port_of_Spain"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Santo_Domingo"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/St_Barthelemy"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Swift_Current"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/South_Pole"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Australia/Broken_Hill"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Bahia_Banderas"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Port-au-Prince"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Salta"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Marengo"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Winamac"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Tucuman"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Ushuaia"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Tell_City"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vincennes"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/La_Rioja"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/San_Juan"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/San_Luis"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Petersburg"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dhaka"_s),
			$of("Dacca"_s)
		}),
		$$new($ObjectArray, {
			$of("America/Kentucky/Monticello"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Beulah"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Center"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Thimphu"_s),
			$of("Thimphou"_s)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Rio_Gallegos"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/New_Salem"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tripoli"_s),
			$of("Tripoli [Libye]"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayman"_s),
			$of(u"îles Caïmans"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vatican"_s),
			$of("Vatican"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Easter"_s),
			$of(u"île de Pâques"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ndjamena"_s),
			$of("Ndjamena"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Faeroe"_s),
			$of(u"îles Féroé"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Barbados"_s),
			$of("Barbade (La)"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Johns"_s),
			$of(u"St. John’s"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Kitts"_s),
			$of(u"Saint-Christophe-et-Niévès"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Thomas"_s),
			$of("Saint Thomas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Isle_of_Man"_s),
			$of(u"île de Man"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Beulah"_s),
			$of("Beulah [Dakota du Nord]"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Center"_s),
			$of("Center [Dakota du Nord]"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/New_Salem"_s),
			$of("New Salem, Dakota du Nord"_s)
		})
	}));
	return data;
}

TimeZoneNames_fr_CA::TimeZoneNames_fr_CA() {
}

$Class* TimeZoneNames_fr_CA::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_fr_CA, name, initialize, &_TimeZoneNames_fr_CA_ClassInfo_, allocate$TimeZoneNames_fr_CA);
	return class$;
}

$Class* TimeZoneNames_fr_CA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun