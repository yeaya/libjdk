#include <sun/util/resources/cldr/ext/TimeZoneNames_es_MX.h>
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

void TimeZoneNames_es_MX::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_es_MX::getContents() {
	$useLocalObjectStack();
	$var($StringArray, Apia, $new($StringArray, {
		u"hora estándar de Apia"_s,
		""_s,
		"hora de verano de Apia"_s,
		""_s,
		"hora de Apia"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"hora estándar de las Islas Cook"_s,
		""_s,
		"hora de verano media de las Islas Cook"_s,
		""_s,
		"hora de las Islas Cook"_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		"hora de la Isla Wake"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		"hora de las Islas Cocos"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"hora estándar de la isla de Pascua"_s,
		""_s,
		"hora de verano de la isla de Pascua"_s,
		""_s,
		"hora de Isla de Pascua"_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"hora de las Islas Salomón"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"hora estándar de Islas Malvinas"_s,
		""_s,
		"hora de verano de Islas Malvinas"_s,
		""_s,
		"hora de Islas Malvinas"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		"hora de la isla de Navidad"_s,
		""_s,
		""_s,
		""_s,
		""_s,
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
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"hora estándar de Europa oriental"_s,
		u"∅∅∅"_s,
		"hora de verano de Europa oriental"_s,
		u"∅∅∅"_s,
		"hora de Europa oriental"_s,
		u"∅∅∅"_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"hora estándar de Europa occidental"_s,
		u"∅∅∅"_s,
		"hora de verano de Europa occidental"_s,
		u"∅∅∅"_s,
		"hora de Europa occidental"_s,
		u"∅∅∅"_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		"hora de las Islas Gilbert"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		"hora de las Islas Marshall"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Europe/Bucharest"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"UTC"_s,
			EMPTY_ZONE
		}),
		$$new($ObjectArray, {
			"ART"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"MIT"_s,
			Apia
		}),
		$$new($ObjectArray, {
			"SST"_s,
			Solomon
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
			"Europe/Riga"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Cairo"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Nicosia"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Sofia"_s,
			Europe_Eastern
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
			"Pacific/Wake"_s,
			Wake
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
			"Europe/Lisbon"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Africa/Tripoli"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Tallinn"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Vilnius"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Easter"_s,
			Easter
		}),
		$$new($ObjectArray, {
			"Pacific/Majuro"_s,
			Marshall_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Tarawa"_s,
			Gilbert_Islands
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
			"Europe/Chisinau"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Helsinki"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Uzhgorod"_s,
			Europe_Eastern
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
			"Europe/Mariehamn"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Christmas"_s,
			Christmas
		}),
		$$new($ObjectArray, {
			"Europe/Zaporozhye"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Kwajalein"_s,
			Marshall_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Rarotonga"_s,
			Cook
		}),
		$$new($ObjectArray, {
			"Europe/Kaliningrad"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Guadalcanal"_s,
			Solomon
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Almaty"_s,
			u"Almatý"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtobe"_s,
			u"Aktobé"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Atyrau"_s,
			"Atirau"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wake"_s,
			"Wake"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Conakry"_s,
			"Conakri"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Khartoum"_s,
			"Jartum"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bujumbura"_s,
			"Buyumbura"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Honolulu"_s,
			"Honolulu"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Thomas"_s,
			"St. Thomas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rio_Branco"_s,
			"Rio Branco"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Fort_Nelson"_s,
			"Fort Nelson"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dar_es_Salaam"_s,
			"Dar es-Salaam"_s
		})
	}));
	return data;
}

TimeZoneNames_es_MX::TimeZoneNames_es_MX() {
}

$Class* TimeZoneNames_es_MX::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_es_MX, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_es_MX, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_es_MX",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_es_MX, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_es_MX);
	});
	return class$;
}

$Class* TimeZoneNames_es_MX::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun