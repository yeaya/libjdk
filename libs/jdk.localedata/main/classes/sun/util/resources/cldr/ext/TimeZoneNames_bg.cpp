#include <sun/util/resources/cldr/ext/TimeZoneNames_bg.h>
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

void TimeZoneNames_bg::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_bg::getContents() {
	$useLocalObjectStack();
	$var($StringArray, GMT, $new($StringArray, {
		u"Средно гринуичко време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		u"Апия – стандартно време"_s,
		""_s,
		u"Апия – лятно часово време"_s,
		""_s,
		u"Апия"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"Острови Кук – стандартно време"_s,
		""_s,
		u"Острови Кук – лятно часово време"_s,
		""_s,
		u"Острови Кук"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"Кубинско стандартно време"_s,
		""_s,
		u"Кубинско лятно часово време"_s,
		""_s,
		u"Кубинско време"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"Фиджийско стандартно време"_s,
		""_s,
		u"Фиджийско лятно часово време"_s,
		""_s,
		u"Фиджийско време"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"Персийски залив"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"Ховдско стандартно време"_s,
		""_s,
		u"Ховдско лятно часово време"_s,
		""_s,
		u"Ховдско време"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"Иранско стандартно време"_s,
		""_s,
		u"Иранско лятно часово време"_s,
		""_s,
		u"Иранско време"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		u"Ниуе"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"Омско стандартно време"_s,
		""_s,
		u"Омско лятно часово време"_s,
		""_s,
		u"Омско време"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"Перуанско стандартно време"_s,
		""_s,
		u"Перуанско лятно часово време"_s,
		""_s,
		u"Перуанско време"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"Чуюк"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		u"Остров Уейк"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"Чилийско стандартно време"_s,
		""_s,
		u"Чилийско лятно часово време"_s,
		""_s,
		u"Чилийско време"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"Китайско стандартно време"_s,
		""_s,
		u"Китайско лятно часово време"_s,
		""_s,
		u"Китайско време"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"Кокосови острови"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		u"Дейвис"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"Индийско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"Японско стандартно време"_s,
		""_s,
		u"Японско лятно часово време"_s,
		""_s,
		u"Японско време"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"Корейско стандартно време"_s,
		""_s,
		u"Корейско лятно часово време"_s,
		""_s,
		u"Корейско време"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"Науру"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"Непалско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		u"Палау"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"Самоанско стандартно време"_s,
		""_s,
		u"Самоанско лятно часово време"_s,
		""_s,
		u"Самоанско време"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"Шова"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"Тонга – стандартно време"_s,
		""_s,
		u"Тонга – лятно часово време"_s,
		""_s,
		u"Тонга"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"Аляска – стандартно време"_s,
		""_s,
		u"Аляска – лятно часово време"_s,
		""_s,
		u"Аляска"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"Амазонско стандартно време"_s,
		""_s,
		u"Амазонско лятно часово време"_s,
		""_s,
		u"Амазонско време"_s,
		""_s
	}));
	$var($StringArray, Anadyr, $new($StringArray, {
		u"Анадир – стандартно време"_s,
		""_s,
		u"Анадир – лятно часово време"_s,
		""_s,
		u"Анадир време"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"Азорски острови – стандартно време"_s,
		""_s,
		u"Азорски острови – лятно часово време"_s,
		""_s,
		u"Азорски острови"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"Бутанско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		u"Бруней Даруссалам"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"Великденски остров – стандартно време"_s,
		""_s,
		u"Великденски остров – лятно часово време"_s,
		""_s,
		u"Великденски остров"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"Гаяна"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"Израелско стандартно време"_s,
		""_s,
		u"Израелско лятно часово време"_s,
		""_s,
		u"Израелско време"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"Кошрай"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		u"Моусън"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"Московско стандартно време"_s,
		""_s,
		u"Московско лятно часово време"_s,
		""_s,
		u"Московско време"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"Понапе"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samara, $new($StringArray, {
		u"Самара – стандартно време"_s,
		""_s,
		u"Самара – лятно часово време"_s,
		""_s,
		u"Самара време"_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"Таитянско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		u"Тайпе – стандартно време"_s,
		""_s,
		u"Тайпе – лятно часово време"_s,
		""_s,
		u"Тайпе"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"Тувалу"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"Восток"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		u"Уолис и Футуна"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"Арабско стандартно време"_s,
		""_s,
		u"Арабско лятно часово време"_s,
		""_s,
		u"Арабско време"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"Арменско стандартно време"_s,
		""_s,
		u"Арменско лятно часово време"_s,
		""_s,
		u"Арменско време"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"Боливийско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"Чатъмско стандартно време"_s,
		""_s,
		u"Чатъмско лятно часово време"_s,
		""_s,
		u"Чатъмско време"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		u"Координирано универсално време"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"Еквадорско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"Гамбие"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"Грузинско стандартно време"_s,
		""_s,
		u"Грузинско лятно часово време"_s,
		""_s,
		u"Грузинско време"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"Иркутско стандартно време"_s,
		""_s,
		u"Иркутско лятно часово време"_s,
		""_s,
		u"Иркутско време"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"Магаданско стандартно време"_s,
		""_s,
		u"Магаданско лятно часово време"_s,
		""_s,
		u"Магаданско време"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		u"Мианмарско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"Норфолкско стандартно време"_s,
		""_s,
		u"Норфолкско лятно часово време"_s,
		""_s,
		u"Норфолкско време"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"Фернандо де Нороня – стандартно време"_s,
		""_s,
		u"Фернандо де Нороня – лятно часово време"_s,
		""_s,
		u"Фернандо де Нороня"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"Реюнион"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"Ротера"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"Соломонови острови"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		u"Токелау"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"Уругвайско стандартно време"_s,
		""_s,
		u"Уругвайско лятно часово време"_s,
		""_s,
		u"Уругвайско време"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"Вануату – стандартно време"_s,
		""_s,
		u"Вануату – лятно часово време"_s,
		""_s,
		u"Вануату"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"Якутскско стандартно време"_s,
		""_s,
		u"Якутскско лятно часово време"_s,
		""_s,
		u"Якутско време"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"Северноамериканско атлантическо стандартно време"_s,
		""_s,
		u"Северноамериканско атлантическо лятно часово време"_s,
		""_s,
		u"Северноамериканско атлантическо време"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"Бразилско стандартно време"_s,
		""_s,
		u"Бразилско лятно часово време"_s,
		""_s,
		u"Бразилско време"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"Чаморско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"Колумбийско стандартно време"_s,
		""_s,
		u"Колумбийско лятно часово време"_s,
		""_s,
		u"Колумбийско време"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"Фолклендски острови – стандартно време"_s,
		""_s,
		u"Фолклендски острови – лятно часово време"_s,
		""_s,
		u"Фолклендски острови"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"Малайзийско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"Малдивско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"Уланбаторско стандартно време"_s,
		""_s,
		u"Уланбаторско лятно часово време"_s,
		""_s,
		u"Уланбаторско време"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"Пакистанско стандартно време"_s,
		""_s,
		u"Пакистанско лятно часово време"_s,
		""_s,
		u"Пакистанско време"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"Парагвайско стандартно време"_s,
		""_s,
		u"Парагвайско лятно часово време"_s,
		""_s,
		u"Парагвайско време"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"Питкерн"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"Сахалинско стандартно време"_s,
		""_s,
		u"Сахалинско лятно часово време"_s,
		""_s,
		u"Сахалинско време"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"Суринамско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"Аржентинско стандартно време"_s,
		""_s,
		u"Аржентинско лятно часово време"_s,
		""_s,
		u"Аржентинско време"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"Остров Рождество"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"Галапагоско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"Хонконгско стандартно време"_s,
		""_s,
		u"Хонконгско лятно часово време"_s,
		""_s,
		u"Хонконгско време"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"Индокитайско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kamchatka, $new($StringArray, {
		u"Петропавловск-Камчатски стандартно време"_s,
		""_s,
		u"Петропавловск-Камчатски – лятно часово време"_s,
		""_s,
		u"Петропавловск-Камчатски време"_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"Киргизстанско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"Лорд Хау – стандартно време"_s,
		""_s,
		u"Лорд Хау – лятно часово време"_s,
		""_s,
		u"Лорд Хау"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"Маркизки острови"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"Мавриций – стандартно време"_s,
		""_s,
		u"Мавриций – лятно часово време"_s,
		""_s,
		u"Мавриций"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"Сингапурско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"Венецуелско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"Волгоградско стандартно време"_s,
		""_s,
		u"Волгоградско лятно часово време"_s,
		""_s,
		u"Волгоградско време"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"Азербайджанско стандартно време"_s,
		""_s,
		u"Азербайджанско лятно часово време"_s,
		""_s,
		u"Азербайджанско време"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"Бангладешко стандартно време"_s,
		""_s,
		u"Бангладешко лятно часово време"_s,
		""_s,
		u"Бангладешко време"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"Кабо Верде – стандартно време"_s,
		""_s,
		u"Кабо Верде – лятно часово време"_s,
		""_s,
		u"Кабо Верде"_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		u"Източнотиморско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"Сейшели"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"Таджикистанско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"Узбекистанско стандартно време"_s,
		""_s,
		u"Узбекистанско лятно часово време"_s,
		""_s,
		u"Узбекистанско време"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"Афганистанско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"Красноярско стандартно време"_s,
		""_s,
		u"Красноярско лятно часово време"_s,
		""_s,
		u"Красноярско време"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"Новозеландско стандартно време"_s,
		""_s,
		u"Новозеландско лятно часово време"_s,
		""_s,
		u"Новозеландско време"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"Новосибирско стандартно време"_s,
		""_s,
		u"Новосибирско лятно часово време"_s,
		""_s,
		u"Новосибирско време"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"Филипинско стандартно време"_s,
		""_s,
		u"Филипинско лятно часово време"_s,
		""_s,
		u"Филипинско време"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"Владивостокско стандартно време"_s,
		""_s,
		u"Владивостокско лятно часово време"_s,
		""_s,
		u"Владивостокско време"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"Индийски океан"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"Екваториални острови"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"Нюфаундлендско стандартно време"_s,
		""_s,
		u"Нюфаундлендско лятно часово време"_s,
		""_s,
		u"Нюфаундлендско време"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"Туркменистанско стандартно време"_s,
		""_s,
		u"Туркменистанско лятно часово време"_s,
		""_s,
		u"Туркменистанско време"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"Френска Гвиана"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"Новокаледонско стандартно време"_s,
		""_s,
		u"Новокаледонско лятно часово време"_s,
		""_s,
		u"Новокаледонско време"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"Южна Джорджия"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"Екатеринбургско стандартно време"_s,
		""_s,
		u"Екатеринбургско лятно часово време"_s,
		""_s,
		u"Екатеринбургско време"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"Централноафриканско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"Източноафриканско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"Западноафриканско стандартно време"_s,
		""_s,
		u"Западноафриканско лятно часово време"_s,
		""_s,
		u"Западноафриканско време"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"Дюмон Дюрвил"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"Централноевропейско стандартно време"_s,
		""_s,
		u"Централноевропейско лятно часово време"_s,
		""_s,
		u"Централноевропейско време"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"Източноевропейско стандартно време"_s,
		""_s,
		u"Източноевропейско лятно часово време"_s,
		""_s,
		u"Източноевропейско време"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"Западноевропейско стандартно време"_s,
		""_s,
		u"Западноевропейско лятно време"_s,
		""_s,
		u"Западноевропейско време"_s,
		""_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"Мексиканско тихоокеанско стандартно време"_s,
		""_s,
		u"Мексиканско тихоокеанско лятно часово време"_s,
		""_s,
		u"Мексиканско тихоокеанско време"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"Южноафриканско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"Северноамериканско централно стандартно време"_s,
		""_s,
		u"Северноамериканско централно лятно часово време"_s,
		""_s,
		u"Северноамериканско централно време"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"Северноамериканско източно стандартно време"_s,
		""_s,
		u"Северноамериканско източно лятно часово време"_s,
		""_s,
		u"Северноамериканско източно време"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"Северноамериканско тихоокеанско стандартно време"_s,
		""_s,
		u"Северноамериканско тихоокеанско лятно часово време"_s,
		""_s,
		u"Северноамериканско тихоокеанско време"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"Френски южни и антарктически територии"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		u"Острови Гилбърт"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"Хавайско-алеутско стандартно време"_s,
		""_s,
		u"Хавайско-алеутско лятно часово време"_s,
		""_s,
		u"Хавайско-алеутско време"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"Острови Феникс"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"Сен Пиер и Микелон – стандартно време"_s,
		""_s,
		u"Сен Пиер и Микелон – лятно часово време"_s,
		""_s,
		u"Сен Пиер и Микелон"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"Северноамериканско планинско стандартно време"_s,
		""_s,
		u"Северноамериканско планинско лятно часово време"_s,
		""_s,
		u"Северноамериканско планинско време"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"Маршалови острови"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"Северозападно стандартно мексиканско време"_s,
		""_s,
		u"Северозападно лятно часово мексиканско време"_s,
		""_s,
		u"Северозападно мексиканско време"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"Папуа Нова Гвинея"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"Централноавстралийско стандартно време"_s,
		""_s,
		u"Централноавстралийско лятно часово време"_s,
		""_s,
		u"Централноавстралийско време"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"Източноавстралийско стандартно време"_s,
		""_s,
		u"Източноавстралийско лятно часово време"_s,
		""_s,
		u"Източноавстралийско време"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"Западноавстралийско стандартно време"_s,
		""_s,
		u"Западноавстралийско лятно часово време"_s,
		""_s,
		u"Западноавстралийско време"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"Източногренландско стандартно време"_s,
		""_s,
		u"Източногренландско лятно часово време"_s,
		""_s,
		u"Източногренландско време"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"Западногренландско стандартно време"_s,
		""_s,
		u"Западногренландско лятно часово време"_s,
		""_s,
		u"Западногренландско време"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"Централноиндонезийско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"Източноиндонезийско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"Западноиндонезийско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"Източноказахстанско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"Западноказахстанско време"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"Австралия – западно централно стандартно време"_s,
		""_s,
		u"Австралия – западно централно лятно часово време"_s,
		""_s,
		u"Австралия – западно централно време"_s,
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
				u"Средно гринуичко време"_s,
				""_s,
				u"Ирландско стандартно време"_s,
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
				u"Средно гринуичко време"_s,
				""_s,
				u"Британско лятно часово време"_s,
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
				u"Средно гринуичко време"_s,
				""_s,
				u"Британско лятно часово време"_s,
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
			u"Аден"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Baku"_s,
			u"Баку"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dili"_s,
			u"Дили"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Gaza"_s,
			u"Газа"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hovd"_s,
			u"Ховд"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Omsk"_s,
			u"Омск"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Oral"_s,
			u"Арал"_s
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
			u"Аман"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtau"_s,
			u"Актау"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Chita"_s,
			u"Чита"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dhaka"_s,
			u"Дака"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dubai"_s,
			u"Дубай"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kabul"_s,
			u"Кабул"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Macau"_s,
			u"Макао"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qatar"_s,
			u"Катар"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Seoul"_s,
			u"Сеул"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tokyo"_s,
			u"Токио"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tomsk"_s,
			u"Томск"_s
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
			u"Джуба"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lome"_s,
			u"Ломе"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Almaty"_s,
			u"Алмати"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Anadyr"_s,
			u"Анадир"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtobe"_s,
			u"Актобе"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Atyrau"_s,
			u"Атърау"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Beirut"_s,
			u"Бейрут"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Brunei"_s,
			u"Бруней"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hebron"_s,
			u"Хеброн"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuwait"_s,
			u"Кувейт"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Manila"_s,
			u"Манила"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Muscat"_s,
			u"Мускат"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Riyadh"_s,
			u"Рияд"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Saigon"_s,
			u"Хошимин"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Taipei"_s,
			u"Тайпе"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tehran"_s,
			u"Техеран"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Urumqi"_s,
			u"Урумчи"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Etc/Unknown"_s,
			u"неизвестен град"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kiev"_s,
			u"Киев"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Oslo"_s,
			u"Осло"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Riga"_s,
			u"Рига"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Rome"_s,
			u"Рим"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mahe"_s,
			u"Мае"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Accra"_s,
			u"Акра"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Cairo"_s,
			u"Кайро"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ceuta"_s,
			u"Сеута"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dakar"_s,
			u"Дакар"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lagos"_s,
			u"Лагос"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tunis"_s,
			u"Тунис"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Adak"_s,
			u"Адак"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Lima"_s,
			u"Лима"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nome"_s,
			u"Ноум"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Baghdad"_s,
			u"Багдад"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bahrain"_s,
			u"Бахрейн"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bangkok"_s,
			u"Банкок"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Barnaul"_s,
			u"Барнаул"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bishkek"_s,
			u"Бишкек"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Colombo"_s,
			u"Коломбо"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Irkutsk"_s,
			u"Иркутск"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jakarta"_s,
			u"Джакарта"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Karachi"_s,
			u"Карачи"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuching"_s,
			u"Кучин"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Magadan"_s,
			u"Магадан"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Nicosia"_s,
			u"Никозия"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Rangoon"_s,
			u"Рангун"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tbilisi"_s,
			u"Тбилиси"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Thimphu"_s,
			u"Тхимпху"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yakutsk"_s,
			u"Якутск"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yerevan"_s,
			u"Ереван"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kirov"_s,
			u"Киров"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Malta"_s,
			u"Малта"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Minsk"_s,
			u"Минск"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Paris"_s,
			u"Париж"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Sofia"_s,
			u"София"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vaduz"_s,
			u"Вадуц"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Cocos"_s,
			u"Кокосови острови"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Apia"_s,
			u"Апия"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fiji"_s,
			u"Фиджи"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guam"_s,
			u"Гуам"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Niue"_s,
			u"Ниуе"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Truk"_s,
			u"Чуюк"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wake"_s,
			u"Уейк"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Asmera"_s,
			u"Асмара"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bamako"_s,
			u"Бамако"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bangui"_s,
			u"Бангуи"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Banjul"_s,
			u"Банджул"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bissau"_s,
			u"Бисау"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Douala"_s,
			u"Дуала"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Harare"_s,
			u"Хараре"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kigali"_s,
			u"Кигали"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Luanda"_s,
			u"Луанда"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lusaka"_s,
			u"Лусака"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Malabo"_s,
			u"Малабо"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Maputo"_s,
			u"Мапуто"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Maseru"_s,
			u"Масеру"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Niamey"_s,
			u"Ниамей"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Aruba"_s,
			u"Аруба"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bahia"_s,
			u"Баия"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belem"_s,
			u"Белем"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Boise"_s,
			u"Бойси"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jujuy"_s,
			u"Хухуй"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Sitka"_s,
			u"Ситка"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thule"_s,
			u"Туле"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ashgabat"_s,
			u"Ашхабад"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Calcutta"_s,
			u"Колката"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Damascus"_s,
			u"Дамаск"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dushanbe"_s,
			u"Душанбе"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jayapura"_s,
			u"Джаяпура"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Katmandu"_s,
			u"Катманду"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Khandyga"_s,
			u"Хандига"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Makassar"_s,
			u"Макасар"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qostanay"_s,
			u"Костанай"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Sakhalin"_s,
			u"Сахалин"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Shanghai"_s,
			u"Шанхай"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tashkent"_s,
			u"Ташкент"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ust-Nera"_s,
			u"Уст-Нера"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Athens"_s,
			u"Атина"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Berlin"_s,
			u"Берлин"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Dublin"_s,
			u"Дъблин"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Jersey"_s,
			u"Джърси"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Lisbon"_s,
			u"Лисабон"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/London"_s,
			u"Лондон"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Madrid"_s,
			u"Мадрид"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Monaco"_s,
			u"Монако"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Moscow"_s,
			u"Москва"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Prague"_s,
			u"Прага"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Samara"_s,
			u"Самара"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Skopje"_s,
			u"Скопие"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tirane"_s,
			u"Тирана"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vienna"_s,
			u"Виена"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Warsaw"_s,
			u"Варшава"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zagreb"_s,
			u"Загреб"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zurich"_s,
			u"Цюрих"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Chagos"_s,
			u"Чагос"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Comoro"_s,
			u"Коморски острови"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Efate"_s,
			u"Ефате"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Nauru"_s,
			u"Науру"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Palau"_s,
			u"Палау"_s
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
			u"Абиджан"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Algiers"_s,
			u"Алжир"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Conakry"_s,
			u"Конакри"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kampala"_s,
			u"Кампала"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mbabane"_s,
			u"Мбабане"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Nairobi"_s,
			u"Найроби"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tripoli"_s,
			u"Триполи"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belize"_s,
			u"Белиз"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bogota"_s,
			u"Богота"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cancun"_s,
			u"Канкун"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayman"_s,
			u"Кайманови острови"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cuiaba"_s,
			u"Чуяба"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson"_s,
			u"Доусън"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Denver"_s,
			u"Денвър"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guyana"_s,
			u"Гаяна"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Havana"_s,
			u"Хавана"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Inuvik"_s,
			u"Инувик"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Juneau"_s,
			u"Джуно"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/La_Paz"_s,
			u"Ла Пас"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Maceio"_s,
			u"Масейо"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Manaus"_s,
			u"Манаус"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Merida"_s,
			u"Мерида"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nassau"_s,
			u"Насау"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Panama"_s,
			u"Панама"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Recife"_s,
			u"Ресифе"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Regina"_s,
			u"Риджайна"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Famagusta"_s,
			u"Фамагуста"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hong_Kong"_s,
			u"Хонконг"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jerusalem"_s,
			u"Йерусалим"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kamchatka"_s,
			u"Камчатка"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Pontianak"_s,
			u"Понтианак"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Pyongyang"_s,
			u"Пхенян"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qyzylorda"_s,
			u"Къзълорда"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Samarkand"_s,
			u"Самарканд"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Singapore"_s,
			u"Сингапур"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Vientiane"_s,
			u"Виентян"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Andorra"_s,
			u"Андора"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Saratov"_s,
			u"Саратов"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tallinn"_s,
			u"Талин"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vatican"_s,
			u"Ватикан"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vilnius"_s,
			u"Вилнюс"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mayotte"_s,
			u"Майот"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Reunion"_s,
			u"Реюнион"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Easter"_s,
			u"Великденски остров"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kosrae"_s,
			u"Кошрай"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Majuro"_s,
			u"Маджуро"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Midway"_s,
			u"Мидуей"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Noumea"_s,
			u"Нумеа"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Ponape"_s,
			u"Понпей"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Saipan"_s,
			u"Сайпан"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tahiti"_s,
			u"Таити"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tarawa"_s,
			u"Тарауа"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wallis"_s,
			u"Уолис"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Blantyre"_s,
			u"Блантайър"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Djibouti"_s,
			u"Джибути"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/El_Aaiun"_s,
			u"Ел Аюн"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Freetown"_s,
			u"Фрийтаун"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Gaborone"_s,
			u"Габороне"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Khartoum"_s,
			u"Хартум"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kinshasa"_s,
			u"Киншаса"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Monrovia"_s,
			u"Монровия"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ndjamena"_s,
			u"Нджамена"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Sao_Tome"_s,
			u"Сао Томе"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Windhoek"_s,
			u"Виндхук"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Antigua"_s,
			u"Антигуа"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Caracas"_s,
			u"Каракас"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayenne"_s,
			u"Кайен"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chicago"_s,
			u"Чикаго"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cordoba"_s,
			u"Кордоба"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Creston"_s,
			u"Крестън"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Curacao"_s,
			u"Кюрасао"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Detroit"_s,
			u"Детройт"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Godthab"_s,
			u"Нуук"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grenada"_s,
			u"Гренада"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Halifax"_s,
			u"Халифакс"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Iqaluit"_s,
			u"Иквалуит"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jamaica"_s,
			u"Ямайка"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Managua"_s,
			u"Манагуа"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Marigot"_s,
			u"Мариго"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mendoza"_s,
			u"Мендоса"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Moncton"_s,
			u"Монктон"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nipigon"_s,
			u"Нипигон"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Noronha"_s,
			u"Нороня"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Ojinaga"_s,
			u"Охинага"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Phoenix"_s,
			u"Финикс"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tijuana"_s,
			u"Тихуана"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Toronto"_s,
			u"Торонто"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tortola"_s,
			u"Тортола"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Yakutat"_s,
			u"Якутат"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Choibalsan"_s,
			u"Чойбалсан"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Phnom_Penh"_s,
			u"Пном Пен"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Azores"_s,
			u"Азорски острови"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Canary"_s,
			u"Канарски острови"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Faeroe"_s,
			u"Фарьорски острови"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Eucla"_s,
			u"Юкла"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Perth"_s,
			u"Пърт"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Belgrade"_s,
			u"Белград"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Brussels"_s,
			u"Брюксел"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Budapest"_s,
			u"Будапеща"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Busingen"_s,
			u"Бюзинген"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Chisinau"_s,
			u"Кишинев"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Guernsey"_s,
			u"Гърнзи"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Helsinki"_s,
			u"Хелзинки"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Istanbul"_s,
			u"Истанбул"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Sarajevo"_s,
			u"Сараево"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Uzhgorod"_s,
			u"Ужгород"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Maldives"_s,
			u"Малдиви"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Chatham"_s,
			u"Чатам"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fakaofo"_s,
			u"Факаофо"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Gambier"_s,
			u"Гамбие"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Norfolk"_s,
			u"Норфолк"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bujumbura"_s,
			u"Бужумбура"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mogadishu"_s,
			u"Могадишу"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anguilla"_s,
			u"Ангуила"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Asuncion"_s,
			u"Асунсион"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Barbados"_s,
			u"Барбадос"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dominica"_s,
			u"Доминика"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Edmonton"_s,
			u"Едмънтън"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Eirunepe"_s,
			u"Ейрунепе"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mazatlan"_s,
			u"Масатлан"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Miquelon"_s,
			u"Микелон"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/New_York"_s,
			u"Ню Йорк"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Resolute"_s,
			u"Резолют"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santarem"_s,
			u"Сантарем"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santiago"_s,
			u"Сантяго"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Johns"_s,
			u"Сейнт Джонс"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Kitts"_s,
			u"Сейнт Китс"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Lucia"_s,
			u"Сейнт Лусия"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Winnipeg"_s,
			u"Уинипег"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Casey"_s,
			u"Кейси"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Davis"_s,
			u"Дейвис"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Syowa"_s,
			u"Шова"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Troll"_s,
			u"Трол"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Krasnoyarsk"_s,
			u"Красноярск"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novosibirsk"_s,
			u"Новосибирск"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ulaanbaatar"_s,
			u"Улан Батор"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Vladivostok"_s,
			u"Владивосток"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Bermuda"_s,
			u"Бермудски острови"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Madeira"_s,
			u"Мадейра"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Stanley"_s,
			u"Стенли"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Currie"_s,
			u"Къри"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Darwin"_s,
			u"Дарвин"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Hobart"_s,
			u"Хобарт"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Sydney"_s,
			u"Сидни"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Amsterdam"_s,
			u"Амстердам"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Astrakhan"_s,
			u"Астрахан"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bucharest"_s,
			u"Букурещ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Gibraltar"_s,
			u"Гибралтар"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Ljubljana"_s,
			u"Любляна"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Mariehamn"_s,
			u"Мариехамн"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Podgorica"_s,
			u"Подгорица"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Stockholm"_s,
			u"Стокхолм"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Ulyanovsk"_s,
			u"Уляновск"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Volgograd"_s,
			u"Волгоград"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Christmas"_s,
			u"Рождество"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Kerguelen"_s,
			u"Кергелен"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mauritius"_s,
			u"Мавриций"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Auckland"_s,
			u"Окланд"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Funafuti"_s,
			u"Фунафути"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Honolulu"_s,
			u"Хонолулу"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Johnston"_s,
			u"Джонстън"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Pitcairn"_s,
			u"Питкерн"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Casablanca"_s,
			u"Казабланка"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Libreville"_s,
			u"Либревил"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lubumbashi"_s,
			u"Лубумбаши"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Nouakchott"_s,
			u"Нуакшот"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Porto-Novo"_s,
			u"Порто Ново"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anchorage"_s,
			u"Анкъридж"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Araguaina"_s,
			u"Арагуайна"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Boa_Vista"_s,
			u"Боа Виста"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Catamarca"_s,
			u"Катамарка"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chihuahua"_s,
			u"Чиуауа"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Fortaleza"_s,
			u"Форталеза"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Glace_Bay"_s,
			u"Глейс Бей"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Goose_Bay"_s,
			u"Гус Бей"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guatemala"_s,
			u"Гватемала"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guayaquil"_s,
			u"Гуаякил"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Matamoros"_s,
			u"Матаморос"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Menominee"_s,
			u"Меномини"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Monterrey"_s,
			u"Монтерей"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Sao_Paulo"_s,
			u"Сао Пауло"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Thomas"_s,
			u"Сейнт Томас"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Vancouver"_s,
			u"Ванкувър"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Mawson"_s,
			u"Моусън"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Palmer"_s,
			u"Палмър"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Vostok"_s,
			u"Восток"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuala_Lumpur"_s,
			u"Куала Лумпур"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novokuznetsk"_s,
			u"Новокузнецк"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bratislava"_s,
			u"Братислава"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Copenhagen"_s,
			u"Копенхаген"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Luxembourg"_s,
			u"Люксембург"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/San_Marino"_s,
			u"Сан Марино"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Simferopol"_s,
			u"Симферопол"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zaporozhye"_s,
			u"Запорожие"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Enderbury"_s,
			u"Ендърбъри"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Galapagos"_s,
			u"Галапагос"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kwajalein"_s,
			u"Куаджалин"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Marquesas"_s,
			u"Маркизки острови"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Pago_Pago"_s,
			u"Паго Паго"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Rarotonga"_s,
			u"Раротонга"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tongatapu"_s,
			u"Тонгатапу"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Addis_Ababa"_s,
			u"Адис Абеба"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Brazzaville"_s,
			u"Бразавил"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ouagadougou"_s,
			u"Уагадугу"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Costa_Rica"_s,
			u"Коста Рика"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grand_Turk"_s,
			u"Гранд Търк"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guadeloupe"_s,
			u"Гваделупа"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Hermosillo"_s,
			u"Ермосильо"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kralendijk"_s,
			u"Кралендейк"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Louisville"_s,
			u"Луисвил"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Martinique"_s,
			u"Мартиника"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Metlakatla"_s,
			u"Метлакатла"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montevideo"_s,
			u"Монтевидео"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montserrat"_s,
			u"Монтсерат"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Paramaribo"_s,
			u"Парамарибо"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rio_Branco"_s,
			u"Рио Бранко"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Vincent"_s,
			u"Сейнт Винсънт"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Whitehorse"_s,
			u"Уайтхорс"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/McMurdo"_s,
			u"Макмърдо"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Rothera"_s,
			u"Ротера"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Srednekolymsk"_s,
			u"Среднеколимск"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yekaterinburg"_s,
			u"Екатеринбург"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Reykjavik"_s,
			u"Рейкявик"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/St_Helena"_s,
			u"Света Елена"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Adelaide"_s,
			u"Аделаида"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Brisbane"_s,
			u"Бризбейн"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Lindeman"_s,
			u"Линдеман"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Isle_of_Man"_s,
			u"остров Ман"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kaliningrad"_s,
			u"Калининград"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kiritimati"_s,
			u"Киритимати"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Johannesburg"_s,
			u"Йоханесбург"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/El_Salvador"_s,
			u"Салвадор"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Fort_Nelson"_s,
			u"Форт Нелсън"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Los_Angeles"_s,
			u"Лос Анджелис"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mexico_City"_s,
			u"Мексико Сити"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Pangnirtung"_s,
			u"Пангниртунг"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Porto_Velho"_s,
			u"Порто Вельо"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Puerto_Rico"_s,
			u"Пуерто Рико"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rainy_River"_s,
			u"Рейни Ривър"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tegucigalpa"_s,
			u"Тегусигалпа"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thunder_Bay"_s,
			u"Тъндър Бей"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Yellowknife"_s,
			u"Йелоунайф"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Arctic/Longyearbyen"_s,
			u"Лонгирбюен"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Cape_Verde"_s,
			u"Кабо Верде"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Lord_Howe"_s,
			u"Лорд Хау"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Melbourne"_s,
			u"Мелбърн"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Antananarivo"_s,
			u"Антананариво"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guadalcanal"_s,
			u"Гуадалканал"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dar_es_Salaam"_s,
			u"Дар ес Салам"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Blanc-Sablon"_s,
			u"Блан-Саблон"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Buenos_Aires"_s,
			u"Буенос Айрес"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Campo_Grande"_s,
			u"Кампо Гранде"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Danmarkshavn"_s,
			u"Данмарксхавн"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson_Creek"_s,
			u"Доусън Крийк"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Knox"_s,
			u"Нокс"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indianapolis"_s,
			u"Индианаполис"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Punta_Arenas"_s,
			u"Пунта Аренас"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rankin_Inlet"_s,
			u"Ранкин Инлет"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santa_Isabel"_s,
			u"Санта Исабел"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Scoresbysund"_s,
			u"Сгорсбисон"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Macquarie"_s,
			u"Маккуори"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Bougainville"_s,
			u"Бугенвил"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Port_Moresby"_s,
			u"Порт Морсби"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cambridge_Bay"_s,
			u"Кеймбридж Бей"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Coral_Harbour"_s,
			u"Корал Харбър"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vevay"_s,
			u"Виви"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Lower_Princes"_s,
			u"Лоуър принсес куотър"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port_of_Spain"_s,
			u"Порт ъф Спейн"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santo_Domingo"_s,
			u"Санто Доминго"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Barthelemy"_s,
			u"Сен Бартелеми"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Swift_Current"_s,
			u"Суифт Кърент"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Broken_Hill"_s,
			u"Броукън Хил"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bahia_Banderas"_s,
			u"Баия де Бандерас"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port-au-Prince"_s,
			u"Порт-о-Пренс"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/South_Georgia"_s,
			u"Южна Джорджия"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Salta"_s,
			u"Салта"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Marengo"_s,
			u"Маренго"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Winamac"_s,
			u"Уинамак"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Tucuman"_s,
			u"Тукуман"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Ushuaia"_s,
			u"Ушуая"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Tell_City"_s,
			u"Тел Сити"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vincennes"_s,
			u"Винсенс"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/DumontDUrville"_s,
			u"Дюмон Дюрвил"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/La_Rioja"_s,
			u"Ла Риоха"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/San_Juan"_s,
			u"Сан Хуан"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/San_Luis"_s,
			u"Сан Луис"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Petersburg"_s,
			u"Питърсбърг"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kentucky/Monticello"_s,
			u"Монтичело"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Beulah"_s,
			u"Бюла"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Center"_s,
			u"Сентър"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Rio_Gallegos"_s,
			u"Рио Галегос"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/New_Salem"_s,
			u"Ню Сейлъм"_s
		})
	}));
	return data;
}

TimeZoneNames_bg::TimeZoneNames_bg() {
}

$Class* TimeZoneNames_bg::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_bg, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_bg, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_bg",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_bg, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_bg);
	});
	return class$;
}

$Class* TimeZoneNames_bg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun