#include <sun/util/resources/cldr/ext/TimeZoneNames_sah.h>

#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef EMPTY_ZONE

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _TimeZoneNames_sah_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_sah, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_sah, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_sah_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_sah",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_sah_MethodInfo_
};

$Object* allocate$TimeZoneNames_sah($Class* clazz) {
	return $of($alloc(TimeZoneNames_sah));
}

void TimeZoneNames_sah::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_sah::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Iran, $new($StringArray, {
		u"Ираан сүрүн кэмэ"_s,
		""_s,
		u"Ыраан сайыҥҥы кэмэ"_s,
		""_s,
		u"Ираан кэмэ"_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"Омскай сүрүн кэмэ"_s,
		""_s,
		u"Омскай сайыҥҥы кэмэ"_s,
		""_s,
		u"Омскай кэмэ"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"Кытай сүрүн кэмэ"_s,
		""_s,
		u"Кытай сайыҥҥы кэмэ"_s,
		""_s,
		u"Кытай кэмэ"_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"Ииндийэ сүрүн кэмэ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"Дьоппуон сүрүн кэмэ"_s,
		""_s,
		u"Дьоппуон сайыҥҥы кэмэ"_s,
		""_s,
		u"Дьоппуон кэмэ"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"Кэриэй сүрүн кэмэ"_s,
		""_s,
		u"Кэриэй сайыҥҥы кэмэ"_s,
		""_s,
		u"Кэриэй кэмэ"_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"Москуба сүрүн кэмэ"_s,
		""_s,
		u"Москуба сайыҥҥы кэмэ"_s,
		""_s,
		u"Москуба кэмэ"_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"Арааб сүрүн кэмэ"_s,
		""_s,
		u"Арааб сайыҥҥы кэмэ"_s,
		""_s,
		u"Арааб кэмэ"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"Эрмээн сүрүн кэмэ"_s,
		""_s,
		u"Эрмээн сайыҥҥы кэмэ"_s,
		""_s,
		u"Эрмээн кэмэ"_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"Курусуун сүрүн кэмэ"_s,
		""_s,
		u"Курусуун сайыҥҥы кэмэ"_s,
		""_s,
		u"Курусуун кэмэ"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"Магадаан сүрүн кэмэ"_s,
		""_s,
		u"Магадаан сайыҥҥы кэмэ"_s,
		""_s,
		u"Магадаан кэмэ"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"Дьокуускай сүрүн кэмэ"_s,
		""_s,
		u"Дьокуускай сайыҥҥы кэмэ"_s,
		""_s,
		u"Дьокуускай кэмэ"_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"Улан Баатар сүрүн кэмэ"_s,
		""_s,
		u"Улан Баатар сайыҥҥы кэмэ"_s,
		""_s,
		u"Улан Баатар кэмэ"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"Пакистаан сүрүн кэмэ"_s,
		""_s,
		u"Пакистаан сайыҥҥы кэмэ"_s,
		""_s,
		u"Пакистаан кэмэ"_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"Сахалыын сүрүн кэмэ"_s,
		""_s,
		u"Сахалыын сайыҥҥы кэмэ"_s,
		""_s,
		u"Сахалиин кэмэ"_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"Кыргыстаан кэмэ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"Волгоград сүрүн кэмэ"_s,
		""_s,
		u"Волгоград сайыҥҥы кэмэ"_s,
		""_s,
		u"Волгоград кэмэ"_s,
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
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"Красноярскай сүрүн кэмэ"_s,
		""_s,
		u"Красноярскай сайыҥҥы кэмэ"_s,
		""_s,
		u"Красноярскай кэмэ"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"Саҥа Сэйлэнд сүрүн кэмэ"_s,
		""_s,
		u"Саҥа Сэйлэнд сайыҥҥы кэмэ"_s,
		""_s,
		u"Саҥа Зеландия кэмэ"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"Новосибирскай сүрүн кэмэ"_s,
		""_s,
		u"Новосибирскай сайыҥҥы кэмэ"_s,
		""_s,
		u"Новосибирскай кэмэ"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"Быладьыбастыак сүрүн кэмэ"_s,
		""_s,
		u"Быладьыбастыак сайыҥҥы кэмэ"_s,
		""_s,
		u"Владивосток кэмэ"_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"Екатеринбуур сүрүн кэмэ"_s,
		""_s,
		u"Екатеринбуур сайыҥҥы кэмэ"_s,
		""_s,
		u"Екатеринбург кэмэ"_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"Киин Австралия сүрүн кэмэ"_s,
		""_s,
		u"Киин Австралия сайыҥҥы кэмэ"_s,
		""_s,
		u"Киин Австралия кэмэ"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"Илин Австралия сүрүн кэмэ"_s,
		""_s,
		u"Илин Австралия сайыҥҥы кэмэ"_s,
		""_s,
		u"Илин Австралия кэмэ"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"Арҕаа Австралия сүрүн кэмэ"_s,
		""_s,
		u"Арҕаа Австралия сайыҥҥы кэмэ"_s,
		""_s,
		u"Арҕаа Австралия кэмэ"_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"Илин Казахстаан кэмэ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"Арҕаа Казахстаан кэмэ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Asia/Tokyo"_s),
			$of(Japan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Shanghai"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(EMPTY_ZONE)
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
			$of("CTT"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("JST"_s),
			$of(Japan)
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
			$of("Asia/Aden"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Omsk"_s),
			$of(Omsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Oral"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtau"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chita"_s),
			$of(Yakutsk)
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
			$of("Asia/Almaty"_s),
			$of(Kazakhstan_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtobe"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Atyrau"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Harbin"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuwait"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Riyadh"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tehran"_s),
			$of(Iran)
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
			$of("Asia/Bishkek"_s),
			$of(Kyrgystan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Colombo"_s),
			$of(India)
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
			$of("Europe/Minsk"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Asia/Calcutta"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Khandyga"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qostanay"_s),
			$of(Kazakhstan_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Sakhalin"_s),
			$of(Sakhalin)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ust-Nera"_s),
			$of(Vladivostok)
		}),
		$$new($ObjectArray, {
			$of("Europe/Moscow"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chongqing"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pyongyang"_s),
			$of(Korea)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qyzylorda"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Choibalsan"_s),
			$of(Mongolia)
		}),
		$$new($ObjectArray, {
			$of("Australia/Perth"_s),
			$of(Australia_Western)
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
			$of("Europe/Volgograd"_s),
			$of(Volgograd)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Auckland"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novokuznetsk"_s),
			$of(Krasnoyarsk)
		}),
		$$new($ObjectArray, {
			$of("Europe/Simferopol"_s),
			$of(Moscow)
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
			$of("Australia/Melbourne"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of(Australia_Eastern)
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
			$of("timezone.excity.Asia/Baku"_s),
			$of(u"Бакуу"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Omsk"_s),
			$of(u"Омскай"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Chita"_s),
			$of(u"Читаа"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dubai"_s),
			$of(u"Дубаай"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kabul"_s),
			$of(u"Кабуул"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Almaty"_s),
			$of(u"Алматы"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Anadyr"_s),
			$of(u"Анаадыр"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Urumqi"_s),
			$of(u"Урумчу"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"Биллибэт"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baghdad"_s),
			$of(u"Багдаад"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Barnaul"_s),
			$of(u"Барнаул"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Colombo"_s),
			$of(u"Коломбо"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Irkutsk"_s),
			$of(u"Иркутскай"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Magadan"_s),
			$of(u"Магадаан"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yakutsk"_s),
			$of(u"Дьокуускай"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ashgabat"_s),
			$of(u"Асхабаат"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Damascus"_s),
			$of(u"Дамаас"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Khandyga"_s),
			$of(u"Хаандыга"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Sakhalin"_s),
			$of(u"Сахалиин"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ust-Nera"_s),
			$of(u"Уус Ньара"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Moscow"_s),
			$of(u"Москуба"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Samara"_s),
			$of(u"Самаара"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kamchatka"_s),
			$of(u"Камчаатка"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Samarkand"_s),
			$of(u"Самаркаан"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Choibalsan"_s),
			$of(u"Чойбалсан"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Istanbul"_s),
			$of(u"Стамбуул"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Krasnoyarsk"_s),
			$of(u"Красноярскай"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novosibirsk"_s),
			$of(u"Новосибирскай"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ulaanbaatar"_s),
			$of(u"Улан Баатар"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Astrakhan"_s),
			$of(u"Аастрахан"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ulyanovsk"_s),
			$of(u"Ульяновскай"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Simferopol"_s),
			$of(u"Симферополь"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Srednekolymsk"_s),
			$of(u"Орто Халыма"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yekaterinburg"_s),
			$of(u"Екатеринбуур"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kaliningrad"_s),
			$of(u"Калининград"_s)
		})
	}));
	return data;
}

TimeZoneNames_sah::TimeZoneNames_sah() {
}

$Class* TimeZoneNames_sah::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_sah, name, initialize, &_TimeZoneNames_sah_ClassInfo_, allocate$TimeZoneNames_sah);
	return class$;
}

$Class* TimeZoneNames_sah::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun