#include <sun/util/resources/cldr/ext/TimeZoneNames_lb.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef EMPTY_ZONE
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

void TimeZoneNames_lb::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_lb::getContents() {
	$useLocalObjectStack();
	$var($StringArray, GMT, $new($StringArray, {
		u"Mëttler Greenwich-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Acre, $new($StringArray, {
		u"Acre-Normalzäit"_s,
		""_s,
		u"Acre-Summerzäit"_s,
		""_s,
		u"Acre-Zäit"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"Cookinselen-Normalzäit"_s,
		""_s,
		u"Cookinselen-Summerzäit"_s,
		""_s,
		u"Cookinselen-Zäit"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"Kubanesch Normalzäit"_s,
		""_s,
		u"Kubanesch Summerzäit"_s,
		""_s,
		u"Kubanesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"Fidschi-Normalzäit"_s,
		""_s,
		u"Fidschi-Summerzäit"_s,
		""_s,
		u"Fidschi-Zäit"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"Golf-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"Hovd-Normalzäit"_s,
		""_s,
		u"Hovd-Summerzäit"_s,
		""_s,
		u"Hovd-Zäit"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"Iranesch Normalzäit"_s,
		""_s,
		u"Iranesch Summerzäit"_s,
		""_s,
		u"Iranesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		u"Niue-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"Omsk-Normalzäit"_s,
		""_s,
		u"Omsk-Summerzäit"_s,
		""_s,
		u"Omsk-Zäit"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"Peruanesch Normalzäit"_s,
		""_s,
		u"Peruanesch Summerzäit"_s,
		""_s,
		u"Peruanesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"Chuuk-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		u"Wake-Insel-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"Chilenesch Normalzäit"_s,
		""_s,
		u"Chilenesch Summerzäit"_s,
		""_s,
		u"Chilenesch Zäit"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"Chinesesch Normalzäit"_s,
		""_s,
		u"Chinesesch Summerzäit"_s,
		""_s,
		u"Chinesesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"Kokosinselen-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		u"Davis-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"Indesch Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"Japanesch Normalzäit"_s,
		""_s,
		u"Japanesch Summerzäit"_s,
		""_s,
		u"Japanesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"Koreanesch Normalzäit"_s,
		""_s,
		u"Koreanesch Summerzäit"_s,
		""_s,
		u"Koreanesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"Nauru-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"Nepalesesch Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		u"Palau-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"Samoa-Normalzäit"_s,
		""_s,
		u"Samoa-Summerzäit"_s,
		""_s,
		u"Samoa-Zäit"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"Syowa-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"Tonganesch Normalzäit"_s,
		""_s,
		u"Tonganesch Summerzäit"_s,
		""_s,
		u"Tonganesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"Alaska-Normalzäit"_s,
		""_s,
		u"Alaska-Summerzäit"_s,
		""_s,
		u"Alaska-Zäit"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"Amazonas-Normalzäit"_s,
		""_s,
		u"Amazonas-Summerzäit"_s,
		""_s,
		u"Amazonas-Zäit"_s,
		""_s
	}));
	$var($StringArray, Anadyr, $new($StringArray, {
		u"Anadyr-Normalzäit"_s,
		""_s,
		u"Anadyr-Summerzäit"_s,
		""_s,
		u"Anadyr-Zäit"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"Azoren-Normalzäit"_s,
		""_s,
		u"Azoren-Summerzäit"_s,
		""_s,
		u"Azoren-Zäit"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"Bhutan-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		u"Brunei-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"Ouschterinsel-Normalzäit"_s,
		""_s,
		u"Ouschterinsel-Summerzäit"_s,
		""_s,
		u"Ouschterinsel-Zäit"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"Guyana-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"Israelesch Normalzäit"_s,
		""_s,
		u"Israelesch Summerzäit"_s,
		""_s,
		u"Israelesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"Kosrae-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		u"Mawson-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"Moskauer Normalzäit"_s,
		""_s,
		u"Moskauer Summerzäit"_s,
		""_s,
		u"Moskauer Zäit"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"Ponape-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samara, $new($StringArray, {
		u"Samara-Normalzäit"_s,
		""_s,
		u"Samara-Summerzäit"_s,
		""_s,
		u"Samara-Zäit"_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"Tahiti-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		u"Taipei-Normalzäit"_s,
		""_s,
		u"Taipei-Summerzäit"_s,
		""_s,
		u"Taipei-Zäit"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"Tuvalu-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"Wostok-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		u"Wallis-a-Futuna-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"Arabesch Normalzäit"_s,
		""_s,
		u"Arabesch Summerzäit"_s,
		""_s,
		u"Arabesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"Armenesch Normalzäit"_s,
		""_s,
		u"Armenesch Summerzäit"_s,
		""_s,
		u"Armenesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"Bolivianesch Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"Chatham-Normalzäit"_s,
		""_s,
		u"Chatham-Summerzäit"_s,
		""_s,
		u"Chatham-Zäit"_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"Ecuadorianesch Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"Gambier-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"Georgesch Normalzäit"_s,
		""_s,
		u"Georgesch Summerzäit"_s,
		""_s,
		u"Georgesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"Irkutsk-Normalzäit"_s,
		""_s,
		u"Irkutsk-Summerzäit"_s,
		""_s,
		u"Irkutsk-Zäit"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"Magadan-Normalzäit"_s,
		""_s,
		u"Magadan-Summerzäit"_s,
		""_s,
		u"Magadan-Zäit"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		u"Myanmar-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"Norfolkinselen-Normalzäit"_s,
		""_s,
		u"Norfolkinselen-Summerzäit"_s,
		""_s,
		u"Norfolkinselen-Zäit"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"Fernando-de-Noronha-Normalzäit"_s,
		""_s,
		u"Fernando-de-Noronha-Summerzäit"_s,
		""_s,
		u"Fernando-de-Noronha-Zäit"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"Réunion-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"Rothera-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"Salomoninselen-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		u"Tokelau-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"Uruguyanesch Normalzäit"_s,
		""_s,
		u"Uruguayanesch Summerzäit"_s,
		""_s,
		u"Uruguayanesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"Vanuatu-Normalzäit"_s,
		""_s,
		u"Vanuatu-Summerzäit"_s,
		""_s,
		u"Vanuatu-Zäit"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"Jakutsk-Normalzäit"_s,
		""_s,
		u"Jakutsk-Summerzäit"_s,
		""_s,
		u"Jakutsk-Zäit"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"Atlantik-Normalzäit"_s,
		""_s,
		u"Atlantik-Summerzäit"_s,
		""_s,
		u"Atlantik-Zäit"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"Brasília-Normalzäit"_s,
		""_s,
		u"Brasília-Summerzäit"_s,
		""_s,
		u"Brasília-Zäit"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"Chamorro-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"Kolumbianesch Normalzäit"_s,
		""_s,
		u"Kolumbianesch Summerzäit"_s,
		""_s,
		u"Kolumbianesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"Falklandinselen-Normalzäit"_s,
		""_s,
		u"Falklandinselen-Summerzäit"_s,
		""_s,
		u"Falklandinselen-Zäit"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"Malaysesch Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"Maldiven-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"Ulaanbaatar-Normalzäit"_s,
		""_s,
		u"Ulaanbaatar-Summerzäit"_s,
		""_s,
		u"Ulaanbaatar-Zäit"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"Pakistanesch Normalzäit"_s,
		""_s,
		u"Pakistanesch Summerzäit"_s,
		""_s,
		u"Pakistanesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"Paraguayanesch Normalzäit"_s,
		""_s,
		u"Paraguayanesch Summerzäit"_s,
		""_s,
		u"Paraguayanesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"Pitcairninselen-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"Sakhalin-Normalzäit"_s,
		""_s,
		u"Sakhalin-Summerzäit"_s,
		""_s,
		u"Sakhalin-Zäit"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"Suriname-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"Argentinesch Normalzäit"_s,
		""_s,
		u"Argentinesch Summerzäit"_s,
		""_s,
		u"Argentinesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"Chrëschtdagsinsel-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"Galapagos-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"Hong-Kong-Normalzäit"_s,
		""_s,
		u"Hong-Kong-Summerzäit"_s,
		""_s,
		u"Hong-Kong-Zäit"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"Indochina-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kamchatka, $new($StringArray, {
		u"Kamtschatka-Normalzäit"_s,
		""_s,
		u"Kamtschatka-Summerzäit"_s,
		""_s,
		u"Kamtschatka-Zäit"_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"Kirgisistan-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"Lord-Howe-Normalzäit"_s,
		""_s,
		u"Lord-Howe-Summerzäit"_s,
		""_s,
		u"Lord-Howe-Zäit"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"Marquesas-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"Mauritius-Normalzäit"_s,
		""_s,
		u"Mauritius-Summerzäit"_s,
		""_s,
		u"Mauritius-Zäit"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"Singapur-Standardzäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"Venezuela-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"Wolgograd-Normalzäit"_s,
		""_s,
		u"Wolgograd-Summerzäit"_s,
		""_s,
		u"Wolgograd-Zäit"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"Aserbeidschanesch Normalzäit"_s,
		""_s,
		u"Aserbaidschanesch Summerzäit"_s,
		""_s,
		u"Aserbaidschanesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"Bangladesch-Normalzäit"_s,
		""_s,
		u"Bangladesch-Summerzäit"_s,
		""_s,
		u"Bangladesch-Zäit"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"Kap-Verde-Normalzäit"_s,
		""_s,
		u"Kap-Verde-Summerzäit"_s,
		""_s,
		u"Kap-Verde-Zäit"_s,
		""_s
	}));
	$var($StringArray, EMPTY_ZONE, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		u"Osttimor-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"Seychellen-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"Tadschikistan-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"Usbekistan-Normalzäit"_s,
		""_s,
		u"Usbekistan-Summerzäit"_s,
		""_s,
		u"Usbekistan-Zäit"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"Afghanistan-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"Krasnojarsk-Normalzäit"_s,
		""_s,
		u"Krasnojarsk-Summerzäit"_s,
		""_s,
		u"Krasnojarsk-Zäit"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"Neiséiland-Normalzäit"_s,
		""_s,
		u"Neiséiland-Summerzäit"_s,
		""_s,
		u"Neiséiland-Zäit"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"Nowosibirsk-Normalzäit"_s,
		""_s,
		u"Nowosibirsk-Summerzäit"_s,
		""_s,
		u"Nowosibirsk-Zäit"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"Philippinnesch Normalzäit"_s,
		""_s,
		u"Philippinnesch Summerzäit"_s,
		""_s,
		u"Philippinnesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"Wladiwostok-Normalzäit"_s,
		""_s,
		u"Wladiwostok-Summerzäit"_s,
		""_s,
		u"Wladiwostok-Zäit"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"Indeschen Ozean-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"Linneninselen-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"Neifundland-Normalzäit"_s,
		""_s,
		u"Neifundland-Summerzäit"_s,
		""_s,
		u"Neifundland-Zäit"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"Turkmenistan-Normalzäit"_s,
		""_s,
		u"Turkmenistan-Summerzäit"_s,
		""_s,
		u"Turkmenistan-Zäit"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"Franséisch-Guayane-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"Neikaledonesch Normalzäit"_s,
		""_s,
		u"Neikaledonesch Summerzäit"_s,
		""_s,
		u"Neikaledonesch Zäit"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"Südgeorgesch Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"Jekaterinbuerg-Normalzäit"_s,
		""_s,
		u"Jekaterinbuerg-Summerzäit"_s,
		""_s,
		u"Jekaterinbuerg-Zäit"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"Zentralafrikanesch Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"Ostafrikanesch Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"Westafrikanesch Normalzäit"_s,
		""_s,
		u"Westafrikanesch Summerzäit"_s,
		""_s,
		u"Westafrikanesch Zäit"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"Dumont-d’Urville-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"Mëtteleuropäesch Normalzäit"_s,
		""_s,
		u"Mëtteleuropäesch Summerzäit"_s,
		""_s,
		u"Mëtteleuropäesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"Osteuropäesch Normalzäit"_s,
		""_s,
		u"Osteuropäesch Summerzäit"_s,
		""_s,
		u"Osteuropäesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"Westeuropäesch Normalzäit"_s,
		""_s,
		u"Westeuropäesch Summerzäit"_s,
		""_s,
		u"Westeuropäesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"Mexikanesch Pazifik-Normalzäit"_s,
		""_s,
		u"Mexikanesch Pazifik-Summerzäit"_s,
		""_s,
		u"Mexikanesch Pazifikzäit"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"Südafrikanesch Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"Nordamerikanesch Inland-Normalzäit"_s,
		""_s,
		u"Nordamerikanesch Inland-Summerzäit"_s,
		""_s,
		u"Nordamerikanesch Inlandzäit"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"Nordamerikanesch Ostküsten-Normalzäit"_s,
		""_s,
		u"Nordamerikanesch Ostküsten-Summerzäit"_s,
		""_s,
		u"Nordamerikanesch Ostküstenzäit"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"Nordamerikanesch Westküsten-Normalzäit"_s,
		""_s,
		u"Nordamerikanesch Westküsten-Summerzäit"_s,
		""_s,
		u"Nordamerikanesch Westküstenzäit"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"Franséisch Süd- an Antarktisgebidder-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		u"Gilbert-Inselen-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"Hawaii-Aleuten-Normalzäit"_s,
		""_s,
		u"Hawaii-Aleuten-Summerzäit"_s,
		""_s,
		u"Hawaii-Aleuten-Zäit"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"Phoenixinselen-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"Saint-Pierre-a-Miquelon-Normalzäit"_s,
		""_s,
		u"Saint-Pierre-a-Miquelon-Summerzäit"_s,
		""_s,
		u"Saint-Pierre-a-Miquelon-Zäit"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"Rocky-Mountain-Normalzäit"_s,
		""_s,
		u"Rocky-Mountain-Summerzäit"_s,
		""_s,
		u"Rocky-Mountain-Zäit"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"Marshallinselen-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"Nordwest-Mexiko-Normalzäit"_s,
		""_s,
		u"Nordwest-Mexiko-Summerzäit"_s,
		""_s,
		u"Nordwest-Mexiko-Zäit"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"Papua-Neiguinea-Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"Zentralaustralesch Normalzäit"_s,
		""_s,
		u"Zentralaustralesch Summerzäit"_s,
		""_s,
		u"Zentralaustralesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"Ostaustralesch Normalzäit"_s,
		""_s,
		u"Ostaustralesch Summerzäit"_s,
		""_s,
		u"Ostaustralesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"Westaustralesch Normalzäit"_s,
		""_s,
		u"Westaustralesch Summerzäit"_s,
		""_s,
		u"Westaustralesch Zäit"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"Ostgrönland-Normalzäit"_s,
		""_s,
		u"Ostgrönland-Summerzäit"_s,
		""_s,
		u"Ostgrönland-Zäit"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"Westgrönland-Normalzäit"_s,
		""_s,
		u"Westgrönland-Summerzäit"_s,
		""_s,
		u"Westgrönland-Zäit"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"Zentralindonesesch Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"Ostindonesesch Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"Westindonesesch Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"Ostkasachesch Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"Westkasachesch Zäit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"Zentral-/Westaustralesch Normalzäit"_s,
		""_s,
		u"Zentral-/Westaustralesch Summerzäit"_s,
		""_s,
		u"Zentral-/Westaustralesch Zäit"_s,
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
			EMPTY_ZONE
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
				u"Mëttler Greenwich-Zäit"_s,
				""_s,
				u"Iresch Summerzäit"_s,
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
				u"Mëttler Greenwich-Zäit"_s,
				""_s,
				u"Britesch Summerzäit"_s,
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
				u"Mëttler Greenwich-Zäit"_s,
				""_s,
				u"Britesch Summerzäit"_s,
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
			"America/Eirunepe"_s,
			Acre
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
			"America/Rio_Branco"_s,
			Acre
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
			"timezone.excity.Asia/Macau"_s,
			"Macau"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qatar"_s,
			"Katar"_s
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
			"timezone.excity.Asia/Aqtobe"_s,
			u"Aqtöbe"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Muscat"_s,
			"Muskat"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Riyadh"_s,
			"Riad"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Saigon"_s,
			"Ho-Chi-Minh-Stad"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Taipei"_s,
			"Taipeh"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tehran"_s,
			"Teheran"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Etc/Unknown"_s,
			"Onbekannt"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kiev"_s,
			"Kiew"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Rome"_s,
			"Roum"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Accra"_s,
			"Accra"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Cairo"_s,
			"Kairo"_s
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
			"timezone.excity.Asia/Nicosia"_s,
			"Nikosia"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tbilisi"_s,
			"Tiflis"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yakutsk"_s,
			"Jakutsk"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yerevan"_s,
			"Erivan"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fiji"_s,
			"Fidschi"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Calcutta"_s,
			"Kalkutta"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Damascus"_s,
			"Damaskus"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dushanbe"_s,
			"Duschanbe"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jayapura"_s,
			"Port Numbay"_s
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
			"timezone.excity.Europe/Lisbon"_s,
			"Lissabon"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Moscow"_s,
			"Moskau"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Prague"_s,
			"Prag"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tirane"_s,
			"Tirana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vienna"_s,
			"Wien"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Warsaw"_s,
			"Warschau"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zurich"_s,
			u"Zürech"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Comoro"_s,
			"Komoren"_s
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
			"timezone.excity.Africa/Algiers"_s,
			"Alger"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tripoli"_s,
			"Tripoli"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayman"_s,
			"Kaimaninselen"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Havana"_s,
			"Havanna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hong_Kong"_s,
			"Hong Kong"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kamchatka"_s,
			"Kamtschatka"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Pyongyang"_s,
			u"Pjöngjang"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Singapore"_s,
			"Singapur"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vatican"_s,
			"Vatikan"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vilnius"_s,
			"Wilna"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Reunion"_s,
			u"Réunion"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Easter"_s,
			"Ouschterinsel"_s
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
			"timezone.excity.America/Curacao"_s,
			u"Curaçao"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jamaica"_s,
			"Jamaika"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Azores"_s,
			"Azoren"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Canary"_s,
			"Kanaresch Inselen"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Faeroe"_s,
			u"Färöer"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Belgrade"_s,
			"Belgrad"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Brussels"_s,
			u"Bréissel"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Chisinau"_s,
			"Kischinau"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Uzhgorod"_s,
			"Uschgorod"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Maldives"_s,
			"Maldiven"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mogadishu"_s,
			"Mogadischu"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Asuncion"_s,
			u"Asunción"_s
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
			"timezone.excity.Asia/Vladivostok"_s,
			"Wladiwostok"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Bermuda"_s,
			"Bermudas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bucharest"_s,
			"Bukarest"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Volgograd"_s,
			"Wolgograd"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Christmas"_s,
			u"Chrëschtdagsinsel"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Vostok"_s,
			"Wostok"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Copenhagen"_s,
			"Kopenhagen"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Luxembourg"_s,
			u"Lëtzebuerg"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zaporozhye"_s,
			"Saporischschja"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Addis_Ababa"_s,
			"Addis Abeba"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ouagadougou"_s,
			"Wagadugu"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yekaterinburg"_s,
			"Jekaterinbuerg"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/El_Salvador"_s,
			"Salvador"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mexico_City"_s,
			"Mexiko-Stad"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Cape_Verde"_s,
			"Kap Verde"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dar_es_Salaam"_s,
			"Dar es Salaam"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port_of_Spain"_s,
			"Port-of-Spain"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Barthelemy"_s,
			u"Saint-Barthélemy"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/South_Georgia"_s,
			u"Südgeorgien"_s
		})
	}));
	return data;
}

TimeZoneNames_lb::TimeZoneNames_lb() {
}

$Class* TimeZoneNames_lb::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_lb, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_lb, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_lb",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_lb, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_lb);
	});
	return class$;
}

$Class* TimeZoneNames_lb::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun