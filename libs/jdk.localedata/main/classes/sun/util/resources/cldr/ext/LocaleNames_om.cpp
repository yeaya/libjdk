#include <sun/util/resources/cldr/ext/LocaleNames_om.h>

#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _LocaleNames_om_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_om, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_om, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_om_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_om",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_om_MethodInfo_
};

$Object* allocate$LocaleNames_om($Class* clazz) {
	return $of($alloc(LocaleNames_om));
}

void LocaleNames_om::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_om::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Germany"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Itoophiyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("France"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("United Kingdom"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italy"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Keeniyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Russia"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("United States"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afrikoota"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Afaan Sidaamaa"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("Arabiffaa"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Afaan Azerbaijani"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Afaan Belarusia"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Afaan Bulgariya"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Afaan Baangladeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Afaan Bosniyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Afaan Katalaa"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Afaan Czech"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Welishiffaa"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Afaan Deenmaark"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Afaan Jarmanii"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Afaan Giriiki"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Ingliffa"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Afaan Esperantoo"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Afaan Ispeen"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Afaan Istooniya"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Afaan Baskuu"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Afaan Persia"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Afaan Fiilaandi"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("Afaan Faroese"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("Afaan Faransaayii"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Afaan Firisiyaani"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Afaan Ayirishii"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("Scots Gaelic"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Afaan Galishii"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Afaan Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("Afaan Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("Afaan Hebrew"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Afaan Hindii"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Afaan Croatian"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Afaan Hangaari"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("Interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Afaan Indoneziya"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("Ayiislandiffaa"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Afaan Xaaliyaani"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Afaan Japanii"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Afaan Java"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("Afaan Georgian"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("Afaan Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Afaan Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("Afaan Laatini"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Afaan Liituniyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Afaan Lativiyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Afaan Macedooniyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Malayaalamiffaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Afaan Maratii"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Malaayiffaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Afaan Maltesii"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Afaan Nepalii"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Afaan Dachii"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Afaan Norwegian"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Afaan Norweyii"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Afaan Occit"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Oromoo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Afaan Punjabii"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Afaan Polandii"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Afaan Porchugaal"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Afaan Romaniyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Afaan Rushiyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("Afaan Sinhalese"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Afaan Slovak"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Afaan Islovaniyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Afaan Albaniyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Afaan Serbiya"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("Afaan Sudaanii"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Afaan Suwidiin"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Suwahilii"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Afaan Tamilii"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("Afaan Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("Afaan Tayii"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Afaan Tigiree"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Lammii Turkii"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Afaan Turkii"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Afaan Ukreenii"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Afaan Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Afaan Uzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Afaan Veetinam"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Afaan Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Afaan Zuulu"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Afaan Filippinii"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("Afaan Kilingon"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Afaan Portugali (Braazil)"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("Afaan Protuguese"_s)
		})
	}));
	return data;
}

LocaleNames_om::LocaleNames_om() {
}

$Class* LocaleNames_om::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_om, name, initialize, &_LocaleNames_om_ClassInfo_, allocate$LocaleNames_om);
	return class$;
}

$Class* LocaleNames_om::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun