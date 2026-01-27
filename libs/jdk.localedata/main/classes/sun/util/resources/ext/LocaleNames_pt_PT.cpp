#include <sun/util/resources/ext/LocaleNames_pt_PT.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _LocaleNames_pt_PT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_pt_PT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_pt_PT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_pt_PT_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_pt_PT",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_pt_PT_MethodInfo_
};

$Object* allocate$LocaleNames_pt_PT($Class* clazz) {
	return $of($alloc(LocaleNames_pt_PT));
}

void LocaleNames_pt_PT::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_pt_PT::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Emiratos Árabes Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arménia"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Antárctica"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbeijão"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bósnia-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Benim"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Bielorrússia"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Camarões"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Ilha do Natal"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"República Checa"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Estónia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egipto"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahara Ocidental"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreia"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Ilhas Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Gronelândia"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Ilhas South Georgia e South Sandwich"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Guiné-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Hong Kong - Região Administrativa Especial da China"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Quénia"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Quirguizistão"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts e Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Coreia do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Coreia do Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Ilhas Caimão"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Cazaquistão"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"Lao, República Popular Democrática"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Letónia"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"Mónaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Moldávia, República da"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Madagáscar"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Macedónia, República da"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Macau - Região Administrativa Especial da China"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Ilhas Mariana do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Maurícias"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nova Caledónia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papua Nova Guiné"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Polónia"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Território Palestiniano"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunion"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Roménia"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seicheles"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapura"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Eslovénia"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"São Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Ilhas Turcas e Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tchade"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Territórios Franceses a Sul"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tajiquistão"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turquemenistão"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Ilhas Minor Outlying (E.U.A)"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzbaquistão"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Santa Sé (Estado da Cidade do Vaticano)"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent e Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Ilhas Virgin Britânicas"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Ilhas Virgin E.U.A."_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietname"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Iémen"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("checo"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"estónio"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polaco"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("esloveno"_s)
		})
	});
}

LocaleNames_pt_PT::LocaleNames_pt_PT() {
}

$Class* LocaleNames_pt_PT::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_pt_PT, name, initialize, &_LocaleNames_pt_PT_ClassInfo_, allocate$LocaleNames_pt_PT);
	return class$;
}

$Class* LocaleNames_pt_PT::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun