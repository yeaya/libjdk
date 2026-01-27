#include <sun/util/resources/cldr/ext/LocaleNames_pa.h>

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

$MethodInfo _LocaleNames_pa_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_pa, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_pa, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_pa_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_pa",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_pa_MethodInfo_
};

$Object* allocate$LocaleNames_pa($Class* clazz) {
	return $of($alloc(LocaleNames_pa));
}

void LocaleNames_pa::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_pa::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_NR, u"ਨਾਉਰੂ"_s);
	$var($String, metaValue_TR, u"ਤੁਰਕੀ"_s);
	$var($String, metaValue_ar, u"ਅਰਬੀ"_s);
	$var($String, metaValue_bn, u"ਬੰਗਾਲੀ"_s);
	$var($String, metaValue_bo, u"ਤਿੱਬਤੀ"_s);
	$var($String, metaValue_el, u"ਯੂਨਾਨੀ"_s);
	$var($String, metaValue_gu, u"ਗੁਜਰਾਤੀ"_s);
	$var($String, metaValue_he, u"ਹਿਬਰੂ"_s);
	$var($String, metaValue_hy, u"ਅਰਮੀਨੀਆਈ"_s);
	$var($String, metaValue_ja, u"ਜਪਾਨੀ"_s);
	$var($String, metaValue_ka, u"ਜਾਰਜੀਆਈ"_s);
	$var($String, metaValue_km, u"ਖਮੇਰ"_s);
	$var($String, metaValue_kn, u"ਕੰਨੜ"_s);
	$var($String, metaValue_ko, u"ਕੋਰੀਆਈ"_s);
	$var($String, metaValue_la, u"ਲਾਤੀਨੀ"_s);
	$var($String, metaValue_lo, u"ਲਾਓ"_s);
	$var($String, metaValue_ml, u"ਮਲਿਆਲਮ"_s);
	$var($String, metaValue_or, u"ਉੜੀਆ"_s);
	$var($String, metaValue_si, u"ਸਿੰਹਾਲਾ"_s);
	$var($String, metaValue_ta, u"ਤਮਿਲ"_s);
	$var($String, metaValue_te, u"ਤੇਲਗੂ"_s);
	$var($String, metaValue_th, u"ਥਾਈ"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"ਕਲੋਨੀਅਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"ਮਿਰਾਂਡੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"ਚਿੰਨ੍ਹ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"ਇਮੋਜੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"ਚਕਮਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"ਪੁਰਾਤਨ ਮਿਸਰੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"ਰਾਜਸਥਾਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"ਟਿਮਨੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"ਟੇਸੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"ਰਾਪਾਨੁਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"ਅਸੈਂਸ਼ਨ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"ਰਾਰੋਤੋਂਗਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"ਟੇਟਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"ਅੰਡੋਰਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"ਸੰਯੁਕਤ ਅਰਬ ਅਮੀਰਾਤ"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"ਫਲੈਮਿਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"ਅਫ਼ਗਾਨਿਸਤਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"ਐਂਟੀਗੁਆ ਅਤੇ ਬਾਰਬੁਡਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"ਇਥੀਓਪਿਕ ਕੈਲੰਡਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"ਅੰਗੁਇਲਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"ਅਲਬਾਨੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"ਅਰਮੀਨੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"ਅੰਗੋਲਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"ਅੰਟਾਰਕਟਿਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"ਅਰਜਨਟੀਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"ਅਮੈਰੀਕਨ ਸਮੋਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"ਆਸਟਰੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"ਆਸਟ੍ਰੇਲੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"ਅਰੂਬਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"ਅੰਗਰੇਜ਼ੀ (ਅਮਰੀਕੀ)"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"ਅਲੈਂਡ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"ਅਜ਼ਰਬਾਈਜਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"ਬੋਸਨੀਆ ਅਤੇ ਹਰਜ਼ੇਗੋਵੀਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"ਬਾਰਬਾਡੋਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"ਸੀਬੂਆਨੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"ਬੰਗਲਾਦੇਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"ਕੁਮੀਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"ਬੈਲਜੀਅਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"ਬੁਰਕੀਨਾ ਫ਼ਾਸੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"ਬੁਲਗਾਰੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"ਬਹਿਰੀਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"ਬੁਰੁੰਡੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"ਬੇਨਿਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"ਸੇਂਟ ਬਾਰਥੇਲੇਮੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"ਬਰਮੂਡਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ਇਰਜ਼ੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ਬਰੂਨੇਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"ਬੋਲੀਵੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"ਕੈਰੇਬੀਆਈ ਨੀਦਰਲੈਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ਬ੍ਰਾਜ਼ੀਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"ਬਹਾਮਾਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"ਸੋਗਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"ਭੂਟਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"ਬੌਵੇਟ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"ਬੋਤਸਵਾਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"ਬੇਲਾਰੂਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"ਬੇਲੀਜ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"ਫ਼ਾਰਸੀ ਕੈਲੰਡਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"ਹਿਬਰੂ ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"ਕੈਨੇਡਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"ਕੋਕੋਸ (ਕੀਲਿੰਗ) ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"ਮੇਜ਼ੈਂਡਰਾਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"ਕਾਂਗੋ - ਕਿੰਸ਼ਾਸਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"ਕੇਂਦਰੀ ਅਫ਼ਰੀਕੀ ਗਣਰਾਜ"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"ਕਾਂਗੋ - ਬ੍ਰਾਜ਼ਾਵਿਲੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"ਸਵਿਟਜ਼ਰਲੈਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"ਕੋਟ ਡੀਵੋਆਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"ਕੁੱਕ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"ਚਿਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"ਕੈਮਰੂਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"ਚੀਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"ਕੋਲੰਬੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"ਕਲਿੱਪਰਟਨ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"ਕੋਸਟਾ ਰੀਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"ਕਿਊਬਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"ਕੇਪ ਵਰਡੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"ਕੁਰਾਕਾਓ"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"ਕ੍ਰਿਸਮਿਸ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"ਸਾਇਪ੍ਰਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"ਚੈਕੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ਏਕਾਜੁਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"ਜਰਮਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ਅਚੀਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"ਚੀਗਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"ਡੀਇਗੋ ਗਾਰਸੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"ਦੇਵਨਾਗਰੀ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"ਜ਼ੀਬੂਤੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"ਡੈਨਮਾਰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"ਅਕੋਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"ਬਰੇਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"ਡੋਮੀਨਿਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"ਆਰਮੀਨੀਅਨ ਲੋਅਰਕੇਸ ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"ਡੋਮੀਨਿਕਾਈ ਗਣਰਾਜ"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"ਗੋਰੋਂਤਾਲੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"ਜ਼ੂਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"ਟਿਗਰਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"ਅਲਜੀਰੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"ਪੰਗਾਸੀਨਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"ਸਿਓਟਾ ਅਤੇ ਮੇਲਿੱਲਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"ਪੈਂਪਾਂਗਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"ਇਕਵੇਡੋਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"ਪਾਪਿਆਮੈਂਟੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"ਅਡਾਂਗਮੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"ਇਸਟੋਨੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"ਮਿਸਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"ਪੱਛਮੀ ਸਹਾਰਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"ਪਲਾਊਵੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"ਚੂਕੀਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"ਮਾਰੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"ਚੌਕਟੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"ਚੇਰੋਕੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"ਇਰੀਟ੍ਰਿਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"ਸਪੇਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"ਇਥੋਪੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"ਯੂਰਪੀ ਸੰਘ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"ਗਰੇਗੋਰੀਅਨ ਕੈਲੰਡਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"ਯੂਰੋਜ਼ੋਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"ਛਾਇਆਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"ਗੁਜਰਾਤੀ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"ਅਡਿਗੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"ਫਿਨਲੈਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"ਫ਼ਿਜੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"ਫ਼ਾਕਲੈਂਡ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"ਮਾਇਕ੍ਰੋਨੇਸ਼ੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"ਫੈਰੋ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"ਫ਼ਰਾਂਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"ਭਾਰਤੀ ਕੌਮੀ ਕੈਲੰਡਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"ਪੁਰਾਤਨ ਯੂਨਾਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"ਗਬੋਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"ਯੂਨਾਈਟਡ ਕਿੰਗਡਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"ਨਾਇਜੀਰੀਆਈ ਪਿਡਗਿਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"ਗ੍ਰੇਨਾਡਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"ਜਾਰਜੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"ਫਰੈਂਚ ਗੁਇਆਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"ਗਰਨਜੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"ਘਾਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"ਜਿਬਰਾਲਟਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"ਗ੍ਰੀਨਲੈਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"ਗੈਂਬੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"ਗਿਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"ਗੁਆਡੇਲੋਪ"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"ਭੂ-ਖੰਡੀ ਗਿਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"ਗ੍ਰੀਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"ਦੱਖਣੀ ਜਾਰਜੀਆ ਅਤੇ ਦੱਖਣੀ ਸੈਂਡਵਿਚ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"ਗੁਆਟੇਮਾਲਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"ਗੁਆਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"ਗਿਨੀ-ਬਿਸਾਉ"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"ਕਲਿੰਗਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"ਗੁਯਾਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"ਕੇਂਦਰੀ ਕੁਰਦਿਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"ਬੋਲੀ ਸੰਬੰਧੀ ਕੋਈ ਸਮੱਗਰੀ ਨਹੀਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"ਜਰਮਨ (ਆਸਟਰੀਆਈ)"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"ਹਾਂਗ ਕਾਂਗ ਐਸਏਆਰ ਚੀਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"ਹਰਡ ਤੇ ਮੈਕਡੋਨਾਲਡ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"ਹੋਂਡੁਰਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"ਕਰੋਏਸ਼ੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"ਅਗੇਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"ਜਰਮਨ (ਸਵਿਸ)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"ਇਸਲਾਮੀ ਕੈਲੰਡਰ (ਅਮ ਅਲ-ਕੁਰਾ)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"ਹੈਤੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"ਹੰਗਰੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"ਕੇਨਾਰੀ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"ਚੀਨੀ ਮਿਨ ਨਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"ਇੰਡੋਨੇਸ਼ੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"ਆਇਰਲੈਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"ਨਿਆਪੋਲੀਟਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"ਨਾਮਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"ਜ਼ਾਜ਼ਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ਇਜ਼ਰਾਈਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"ਆਇਲ ਆਫ ਮੈਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ਭਾਰਤ"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"ਬਰਤਾਨਵੀ ਹਿੰਦ ਮਹਾਂਸਾਗਰ ਖਿੱਤਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"ਇਰਾਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ਈਰਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"ਆਈਸਲੈਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ਇਟਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"ਗਣਿਤ ਚਿੰਨ੍ਹ-ਲਿਪੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"ਥਾਈ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"ਬੰਗਾਲੀ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"ਜਰਸੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"ਇਸਲਾਮੀ ਕੈਲੰਡਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"ਜਮਾਇਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"ਜਾਰਡਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"ਜਪਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"ਆਇਨੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"ਗੁਸੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"ਕੰਨੜ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"ਹਾਈ ਜਰਮਨ (ਸਵਿਟਜ਼ਰਲੈਂਡ)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"ਬੋਧੀ ਕੈਲੰਡਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"ਕੀਨੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"ਲਾਤੀਨੀ ਅਮਰੀਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"ਕਿਰਗਿਜ਼ਸਤਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"ਕੰਬੋਡੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"ਕਿਰਬਾਤੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"ਕੋਮੋਰੋਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"ਸੇਂਟ ਕਿਟਸ ਐਂਡ ਨੇਵਿਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"ਫਰਾਂਸੀਸੀ (ਕੈਨੇਡੀਅਨ)"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"ਉੱਤਰ ਕੋਰੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"ਦੱਖਣ ਕੋਰੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"ਕੁਵੈਤ"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"ਟੋਕ ਪਿਸਿਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"ਕੇਮੈਨ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"ਕਜ਼ਾਖਸਤਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"ਸਿਰਿਲਿਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"ਲਾਓਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"ਲੈਬਨਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"ਸੇਂਟ ਲੂਸੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"ਗਵਿਚ’ਇਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"ਲੋ ਜਰਮਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"ਲਿਚੇਂਸਟਾਇਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"ਸ੍ਰੀ ਲੰਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"ਲਾਈਬੀਰੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"ਲੇਸੋਥੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"ਲਿਥੁਆਨੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"ਲਕਜ਼ਮਬਰਗ"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"ਲਾਤਵੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"ਕਾਟਾਕਾਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"ਲੀਬੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ਲੈਡੀਨੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"ਵੂੰਜੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"ਲੰਗਾਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"ਥਾਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"ਮੋਰੱਕੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"ਮੋਨਾਕੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"ਮੋਲਡੋਵਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"ਮੋਂਟੇਨੇਗਰੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"ਸੇਂਟ ਮਾਰਟਿਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"ਮੈਡਾਗਾਸਕਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"ਮਾਰਸ਼ਲ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"ਅਲੇਉਟ"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"ਉੱਤਰੀ ਮੈਕਡੋਨੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"ਮਾਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"ਮਿਆਂਮਾਰ (ਬਰਮਾ)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"ਮੰਗੋਲੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"ਨੇਵਾਰੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"ਮਕਾਉ ਐਸਏਆਰ ਚੀਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"ਉੱਤਰੀ ਮਾਰੀਆਨਾ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"ਮਾਰਟੀਨਿਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"ਮੋਰਿਟਾਨੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"ਮੋਂਟਸੇਰਾਤ"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"ਮਾਲਟਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"ਮੌਰੀਸ਼ਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"ਦੱਖਣੀ ਅਲਤਾਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"ਮਾਲਦੀਵ"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"ਮਲਾਵੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"ਮੈਕਸੀਕੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"ਜਪਾਨੀ ਕੈਲੰਡਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"ਮਲੇਸ਼ੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"ਮੋਜ਼ਾਮਬੀਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"ਨਾਮੀਬੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"ਉਪ-ਸਹਾਰਾ ਅਫ਼ਰੀਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"ਹਿਬਰੂ ਕੈਲੰਡਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"ਸ਼ਬਦ-ਕੋਸ਼ ਲੜੀਬੱਧ ਕ੍ਰਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"ਨਿਊ ਕੈਲੇਡੋਨੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"ਨਾਈਜਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"ਨੋਰਫੌਕ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"ਨਾਈਜੀਰੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"ਟਾਰੋਕੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"ਨਿਕਾਰਾਗੁਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"ਨੀਦਰਲੈਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"ਨਾਰਵੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"ਨੇਪਾਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"ਨਿਯੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"ਰੋਮਬੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"ਨਿਊਜ਼ੀਲੈਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"ਪੁਰਾਣੀ ਅੰਗਰੇਜ਼ੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"ਓਮਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"ਅੰਗਿਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"ਸੇਸੇਲਵਾ ਕ੍ਰਿਓਲ ਫ੍ਰੈਂਚ"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"ਪਨਾਮਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"ਇਸਲਾਮੀ ਕੈਲੰਡਰ (ਸਾਰਨੀਬੱਧ, ਸਮਾਜਿਕ ਯੁੱਗ)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ਅੰਗਰੇਜ਼ੀ (ਬਰਤਾਨਵੀ)"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"ਪੇਰੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"ਫਰੈਂਚ ਪੋਲੀਨੇਸ਼ੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"ਪਾਪੂਆ ਨਿਊ ਗਿਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"ਫਿਲੀਪੀਨਜ"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"ਪਾਕਿਸਤਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"ਪੋਲੈਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"ਇਵੋਂਡੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"ਸੇਂਟ ਪੀਅਰੇ ਐਂਡ ਮਿਕੇਲਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"ਪਿਟਕੇਰਨ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"ਪਿਊਰਟੋ ਰਿਕੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"ਫਿਲੀਸਤੀਨੀ ਇਲਾਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"ਪੁਰਤਗਾਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"ਪਲਾਉ"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"ਨਿਆਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"ਯੂਨਾਨੀ ਲੋਅਰਕੇਸ ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"ਪੈਰਾਗਵੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"ਤੁੰਬੁਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"ਕਤਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"ਨਿਊਏਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"ਆਊਟਲਾਇੰਗ ਓਸ਼ੀਨੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"ਲੈਜ਼ਗੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"ਟਿਊਵਾਲੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"ਸੰਸਾਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"ਅਫ਼ਰੀਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"ਉੱਤਰ ਅਮਰੀਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"ਰਿਯੂਨੀਅਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"ਦੱਖਣ ਅਮਰੀਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ਲੋਜਬਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ਓਸ਼ੇਨੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"ਰੋਮਾਨੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"ਸਰਬੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"ਰੂਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"ਰਵਾਂਡਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"ਸਾਊਦੀ ਅਰਬ"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"ਸੋਲੋਮਨ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"ਤਾਸਾਵਿਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"ਪੱਛਮੀ ਅਫ਼ਰੀਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"ਸੇਸ਼ਲਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"ਸੂਡਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"ਕੇਂਦਰੀ ਅਮਰੀਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"ਸਵੀਡਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"ਪੂਰਬੀ ਅਫ਼ਰੀਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"ਉੱਤਰੀ ਅਫ਼ਰੀਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"ਸਿੰਗਾਪੁਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"ਸੇਂਟ ਹੇਲੇਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"ਪੱਕੀ ਰੇਖਾ ਵਿੱਥ ਸ਼ੈਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"ਮੱਧ ਅਫ਼ਰੀਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"ਸਲੋਵੇਨੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"ਦੱਖਣੀ ਅਫ਼ਰੀਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"ਸਵਾਲਬਰਡ ਅਤੇ ਜਾਨ ਮਾਯੇਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"ਅਮਰੀਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"ਸਲੋਵਾਕੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"ਸਿਏਰਾ ਲਿਓਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"ਸੈਨ ਮਰੀਨੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"ਸੇਨੇਗਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"ਸੋਮਾਲੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"ਮਾਪੁਚੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"ਅਰਾਫਾਓ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"ਰਵਾਇਤੀ ਤਮਿਲ ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"ਸੂਰੀਨਾਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"ਦੱਖਣ ਸੁਡਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"ਸਾਓ ਟੋਮ ਅਤੇ ਪ੍ਰਿੰਸੀਪੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"ਅਲ ਸਲਵਾਡੋਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"ਸਿੰਟ ਮਾਰਟੀਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"ਸੀਰੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"ਇਸਵਾਤੀਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ਟ੍ਰਿਸਟਾਨ ਦਾ ਕੁੰਹਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"ਅਸੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"ਅਮਰੀਕੀ ਮਾਪ ਪ੍ਰਣਾਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"ਉੱਤਰੀ ਅਮਰੀਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"ਟੁਰਕਸ ਅਤੇ ਕੈਕੋਸ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"ਯਾਂਗਬੇਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"ਚਾਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"ਫਰੈਂਚ ਦੱਖਣੀ ਪ੍ਰਦੇਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"ਟੋਗੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"ਥਾਈਲੈਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"ਤਾਜਿਕਿਸਤਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"ਕੈਰੇਬੀਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"ਟੋਕੇਲਾਉ"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"ਤਿਮੋਰ-ਲੇਸਤੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"ਯੇਂਬਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"ਤੁਰਕਮੇਨਿਸਤਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"ਟਿਊਨੀਸ਼ੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"ਟੌਂਗਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ਟ੍ਰਿਨੀਡਾਡ ਅਤੇ ਟੋਬਾਗੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"ਟੁਵਾਲੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"ਤਾਇਵਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"ਅਸਤੂਰੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"ਤਨਜ਼ਾਨੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"ਕਵਾਸਿਓ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"ਅਣਪਛਾਤੀ ਲਿਪੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"ਯੂਕਰੇਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"ਅਰੋਮੀਨੀਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"ਪੂਰਬੀ ਏਸ਼ੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"ਤੁਵੀਨੀਅਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"ਕਾਂਗੋ ਸਵਾਇਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"ਦੱਖਣੀ ਏਸ਼ੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"ਦੱਖਣ-ਪੂਰਬੀ ਏਸ਼ੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"ਯੂਗਾਂਡਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"ਚੀਨੀ ਹਾਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"ਦੱਖਣੀ ਯੂਰਪ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"ਯੂ.ਐੱਸ. ਦੂਰ-ਦੁਰਾਡੇ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"ਸੰਯੁਕਤ ਰਾਸ਼ਟਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"ਸੰਯੁਕਤ ਰਾਜ"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"ਹਵਾਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"ਉਰੂਗਵੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"ਪਰੂਸ਼ੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"ਉਜ਼ਬੇਕਿਸਤਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"ਮੱਧ ਐਟਲਸ ਤਮਾਜ਼ਿਤ"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"ਨਿਓਮਬੂਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"ਵੈਟੀਕਨ ਸਿਟੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"ਸੇਂਟ ਵਿਨਸੈਂਟ ਐਂਡ ਗ੍ਰੇਨਾਡੀਨਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"ਵੇਨੇਜ਼ੂਏਲਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"ਬ੍ਰਿਟਿਸ਼ ਵਰਜਿਨ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"ਯੂ ਐੱਸ ਵਰਜਿਨ ਟਾਪੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"ਵੀਅਤਨਾਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"ਵਾਨੂਆਟੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"ਨੋਗਾਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"ਰਵਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"ਆਸਟਰੇਲੇਸ਼ੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"ਮੇਲਾਨੇਸ਼ੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"ਵਾਲਿਸ ਅਤੇ ਫੂਟੂਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"ਰਵਾਇਤੀ ਲੜੀਬੱਧ ਕ੍ਰਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"ਮਾਇਕ੍ਰੋਨੇਸ਼ੀਆਈ ਇਲਾਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"ਨਗੋਂਬਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"ਲਕੋਟਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"ਪਿਛਲਾ ਤਰਤੀਬ ਵਾਰ ਕ੍ਰਮ, ਅਨੁਰੂਪਤਾ ਲਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"ਵਾਲਸਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"ਸਾਮੋਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"ਵੋਲਾਏਟਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"ਗਲਤ-ਉਚਾਰਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"ਵੈਰੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"ਲਿਖਤ ਦੀ ਗਲਤ ਦਿਸ਼ਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"ਅਵਧੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"ਪੋਲੀਨੇਸ਼ੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"ਕੋਸੋਵੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"ਬਰਾਹਮੀ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"ਅਲਿਖਤ"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"ਵਾਲਪੁਰੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"ਯਮਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"ਐਂਕੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"ਸਧਾਰਨ ਲੜੀਬੱਧ ਕ੍ਰਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"ਮਾਯੋਟੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"ਦੱਖਣੀ ਅਫਰੀਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"ਖੁੱਲ੍ਹੀ ਰੇਖਾ ਵਿੱਥ ਸ਼ੈਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"ਦੇਵਨਾਗਰੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"ਜਾਰਜੀਅਨ ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"ਹਿਰਾਗਾਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"ਜ਼ਾਮਬੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"ਜ਼ਿੰਬਾਬਵੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"ਅਣਪਛਾਤਾ ਇਲਾਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"ਮੀਟਰਿਕ ਪ੍ਰਣਾਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"(ISO-8601) ਕੈਲੰਡਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"ਉੱਤਰੀ ਸੋਥੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"ਤੇਲਗੂ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"ਲੇਉ"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"ਲੋਜ਼ੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"ਮਚਾਮੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"ਫਿਜੀ ਹਿੰਦੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"ਸਰਲ ਚੀਨੀ ਵਿੱਤੀ ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"ਹਿਲੀਗੇਨਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"ਵਿਸਤਾਰਿਤ ਅਰਬੀ-ਭਾਰਤੀ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"ਨੁਏਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"ਡਕੋਟਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"ਪੂਰਨ ਵਿਸਤਾਰ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"ਦਾਰਗਵਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"ਟੇਟਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"ਉੱਤਰੀ ਲੁਰੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"ਉਦਮੁਰਤ"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"ਇਸਲਾਮੀ ਕੈਲੰਡਰ (ਸਾਊਦੀ ਅਰਬ, ਚੰਨ ਦਿਖਣਾ)"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"ਸਾਂਡੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"ਰੋਮਨ ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"ਸਾਖਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"ਸਮਬੁਰੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"ਸੰਥਾਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"ਨਗਾਂਬੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"ਗੁਰਮੁਖੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"ਲਿਊਬਾ-ਲਿਊਲਿਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"ਸੇਂਗੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ਨਿਆਂਕੋਲੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"ਲੁੰਡਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"ਲੂਓ"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"ਫਿਲੀਪਿਨੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"ਹਮੋਂਗ"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"ਮਿਜ਼ੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"ਬਾਲੀਨੀਜ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"ਲੂਈਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"ਬਾਸਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"ਸਪੇਨੀ (ਯੂਰਪੀ)"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"ਸਕਾਟਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"ਸਿਸੀਲੀਅਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"ਅਫ਼ਾਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"ਅਬਖਾਜ਼ੀਅਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"ਨਸਤਾਲੀਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"ਅਫ਼ਰੀਕੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"ਅਕਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"ਅਮਹਾਰਿਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"ਅਰਾਗੋਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"ਜਾਪਾਨੀ ਸਿਲੇਬਰੀਜ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"ਅਸਾਮੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"ਅਵਾਰਿਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"ਦੱਖਣੀ ਕੁਰਦਿਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"ਅਈਮਾਰਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"ਅਜ਼ਰਬਾਈਜਾਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"ਬਸ਼ਕੀਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"ਬੇਲਾਰੂਸੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"ਬੁਲਗਾਰੀਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"ਬਿਸਲਾਮਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"ਬੰਬਾਰਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"ਡੋਗਰਿੱਬ"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"ਬਰੇਟਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"ਬੋਸਨੀਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"ਮਿਆਂਮਾਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"ਲਾਓ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"ਸੇਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"ਕੈਟਾਲਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"ਕੋਇਰਾਬੋਰੋ ਸੇਂਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"ਚੇਚਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"ਚਮੋਰੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"ਕੋਰਸੀਕਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"ਚੈੱਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"ਚਰਚ ਸਲਾਵੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"ਚੁਵਾਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"ਵੈਲਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"ਐਥਿਓਪਿਕ ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"ਡੈਨਿਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"ਪੁਰਤਗਾਲੀ (ਯੂਰਪੀ)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"ਜਰਮਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"ਮਿਆਰੀ ਮੁਦਰਾ ਬਣਤਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"ਬੇਮਬਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"ਮੰਗੋਲ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"ਦਿਵੇਹੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"ਸਪੇਨੀ (ਲਾਤੀਨੀ ਅਮਰੀਕੀ)"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"ਜ਼ੋਂਗਖਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"ਬੇਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"ਚੀਨੀ ਕੈਲੰਡਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"ਜ਼ਾਰਮਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"ਯੂਨਾਨੀ ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ਈਵਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"ਸਧਾਰਨ ਰੇਖਾ ਵਿੱਥ ਸ਼ੈਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"ਮੋਲਡਾਵੀਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ਅੰਗਰੇਜ਼ੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"ਇਸਪੇਰਾਂਟੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"ਸਪੇਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"ਇਸਟੋਨੀਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"ਹਾਂਬ"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"ਬਾਸਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"ਹੰਗੁਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"ਟਚੇਲਹਿਟ"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"ਅੱਪਰ ਸੋਰਬੀਅਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"ਹਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"ਸ਼ਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"ਫ਼ਾਰਸੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"ਸਰਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"ਪੱਛਮੀ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"ਰਵਾਇਤੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"ਫੁਲਾਹ"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"ਚੀਨੀ ਜ਼ਿਆਂਗ"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"ਫਿਨਿਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"ਫ਼ਿਜ਼ੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"ਫੌਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"ਪੱਛਮੀ ਬਲੂਚੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"ਕੈਂਟੋਨੀਜ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ਫ਼ੇਰੋਸੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"ਉਮਬੁੰਡੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"ਫਰਾਂਸੀਸੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"ਪੱਛਮੀ ਫ੍ਰਿਸੀਅਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ਆਇਰਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"ਸਕਾਟਿਸ਼ ਗੇਲਿਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"ਗੈਲਿਸ਼ਿਅਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"ਗੁਆਰਾਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"ਭੋਜਪੁਰੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"ਅਣਪਛਾਤੀ ਬੋਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"ਇਥੀਓਪਿਕ-ਅਮੀਟ-ਆਲਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"ਇਸਲਾਮੀ ਕੈਲੰਡਰ (ਟੇਬਲਰ, ਖਗੋਲੀ ਯੁੱਗ)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"ਮੈਂਕਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"ਹੌਸਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"ਹਿੰਦੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"ਹੂਪਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"ਬਿਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"ਕ੍ਰੋਏਸ਼ਿਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"ਹੈਤੀਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ਹੰਗਰੀਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"ਹਰੇਰੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"ਕੇਜੁਨ ਫ੍ਰੇੰਚ"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"ਇੰਟਰਲਿੰਗੁਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"ਜਾਮੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"ਇੰਡੋਨੇਸ਼ੀਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"ਤਿੱਬਤੀ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ਇਗਬੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"ਸਿਚੁਆਨ ਯੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"ਇਡੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"ਆਈਸਲੈਂਡਿਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ਇਤਾਲਵੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"ਇੰਕਟੀਟੂਤ"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"ਦੱਖਣੀ ਸਾਮੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"ਜਾਵਾਨੀਜ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"ਮਾਡੂਰੀਸ"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"ਲਿਊਲ ਸਾਮੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"ਮਗਾਹੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"ਮੈਥਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"ਇਨਾਰੀ ਸਾਮੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"ਸਿਕਸਿਕਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"ਮਕਾਸਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"ਚੀਨੀ ਵੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"ਸਕੌਲਟ ਸਾਮੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"ਕਿਕੂਯੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"ਮਸਾਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"ਕੁਆਨਯਾਮਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"ਕਜ਼ਾਖ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"ਕਲਾਅੱਲੀਸੁਟ"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"ਕਨੂਰੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"ਕਸ਼ਮੀਰੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"ਕੁਰਦਿਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"ਕੋਮੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"ਕੋਰਨਿਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"ਕਿਰਗੀਜ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"ਸੋਨਿੰਕੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"ਲਕਜ਼ਮਬਰਗਿਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"ਮਲਿਆਲਮ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"ਗਾਂਡਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"ਲਿਮਬੁਰਗੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"ਲਿੰਗਾਲਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"ਫਰੀਉਲੀਅਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"ਇੰਪੀਰੀਅਲ ਮਾਪ ਪ੍ਰਣਾਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"ਲਿਥੁਆਨੀਅਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"ਲੂਬਾ-ਕਾਟਾਂਗਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"ਲਾਤੀਵੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"ਮਾਲਾਗੈਸੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"ਮਾਰਸ਼ਲੀਜ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ਮੂਲ ਯੂਨੀਕੋਡ ਲੜੀਬੱਧ ਕ੍ਰਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"ਮਾਉਰੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"ਮੈਕਡੋਨੀਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"ਮੰਗੋਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"ਮਰਾਠੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"ਮਲਯ"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"ਮਾਲਟੀਜ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"ਬਰਮੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"ਮੋਕਸ਼ਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"ਲੋਅਰ ਸੋਰਬੀਅਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"ਆਮ-ਮੰਤਵ ਖੋਜ"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"ਨਾਰਵੇਜਿਆਈ ਬੋਕਮਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"ਉੱਤਰੀ ਨਡੇਬੇਲੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"ਨੇਪਾਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ਐਂਡੋਂਗਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"ਡੱਚ"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"ਨਾਰਵੇਜਿਆਈ ਨਿਓਨੌਰਸਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"ਨਾਰਵੇਜਿਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"ਸਾਊਥ ਨਡੇਬੇਲੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"ਨਵਾਜੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ਨਯਾਂਜਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"ਕਾਚਿਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"ਕਬਾਇਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"ਓਕਸੀਟਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"ਜਜੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"ਕੰਬਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"ਮੇਂਡੇ"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"ਮੇਰੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"ਆਰਮੀਨੀਅਨ ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"ਓਰੋਮੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ਓਸੈਟਿਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"ਕਬਾਰਦੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"ਮੋਰੀਸਿਅਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"ਸ੍ਰਾਨਾਨ ਟੋਂਗੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"ਪੰਜਾਬੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"ਡੂਆਲਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"ਪਾਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"ਪੋਲੈਂਡੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"ਡਾਂਗੀ ਕੈਲੰਡਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"ਪਸ਼ਤੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"ਪੁਰਤਗਾਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"ਲੜੀਬੱਧ ਕ੍ਰਮ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ਪੁਰਤਗਾਲੀ (ਬ੍ਰਾਜ਼ੀਲੀ)"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"ਟਾਇਪ"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"ਮਖੋਵਾ-ਮਿੱਟੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"ਮੁਦਰਾ ਬਣਤਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"ਕੈਲੰਡਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"ਮੇਟਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 ਘੰਟੇ ਦੀ ਪ੍ਰਣਾਲੀ (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 ਘੰਟੇ ਦੀ ਪ੍ਰਣਾਲੀ (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"ਸਾਹੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"ਮਿਆਂਮਾਰ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ਕਕੇਸ਼ੁਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"ਬੋਡੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"ਮਕੋਂਡ"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ਇਥੀਓਪਿਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 ਘੰਟੇ ਦੀ ਪ੍ਰਣਾਲੀ (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 ਘੰਟੇ ਦੀ ਪ੍ਰਣਾਲੀ (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"ਰੋਮਾਂਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"ਰੁੰਡੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"ਮੁਦਰਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"ਰੋਮਾਨੀਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"ਉੜੀਆ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"ਚੀਨੀ ਦਸ਼ਮਲਵ ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ਰੂਸੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"ਕਿਨਿਆਰਵਾਂਡਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"ਕਾਬੁਵੇਰਦਿਆਨੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"ਮਾਇਮੈਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"ਸੁਕੁਮਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"ਸੰਸਕ੍ਰਿਤ"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"ਸਾਰਡੀਨੀਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"ਸਿੰਧੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"ਉੱਤਰੀ ਸਾਮੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"ਮਿਨਾਂਗਕਾਬਾਓ"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"ਸਾਂਗੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"ਸਲੋਵਾਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"ਸਲੋਵੇਨੀਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"ਸਾਮੋਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"ਸ਼ੋਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"ਸੋਮਾਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"ਅਰਬੀ-ਭਾਰਤੀ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"ਅਲਬਾਨੀਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"ਸਰਬੀਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"ਸਵਾਤੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"ਲੇਖਾ ਮੁਦਰਾ ਬਣਤਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"ਦੱਖਣੀ ਸੋਥੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"ਸੂੰਡਾਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"ਸਵੀਡਿਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"ਸਵਾਹਿਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"ਰਵਾਇਤੀ ਚੀਨੀ ਵਿੱਤੀ ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ਇਬੀਬੀਓ"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ਇਬਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"ਏਸ਼ੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"ਕੇਂਦਰੀ ਏਸ਼ੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"ਪੱਛਮੀ ਏਸ਼ੀਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"ਤਾਜਿਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"ਤਿਗ੍ਰੀਨਿਆ"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"ਬਗਨੀਜ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"ਕੋਰੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"ਤੁਰਕਮੇਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"ਤਸਵਾਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"ਟੌਂਗਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"ਜੋਲਾ-ਫੋਇਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"ਜਪਾਨੀ ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"ਸੋਂਗਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"ਕੋਮੋਰੀਅਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"ਤਤਾਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"ਤ੍ਵਿ"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"ਤਾਹੀਟੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"ਯੂਰਪ"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"ਪੂਰਬੀ ਯੂਰਪ"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"ਉੱਤਰੀ ਯੂਰਪ"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"ਡਜ਼ਾਗਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"ਪੱਛਮੀ ਯੂਰਪ"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ਉਇਗੁਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"ਸਧਾਰਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ਯੂਕਰੇਨੀਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"ਕੋਪਟਿਕ ਕੈਲੰਡਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"ਉਰਦੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"ਕਾਲਮਿਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ਉਜ਼ਬੇਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"ਖਾਸੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"ਲੋ ਸੈਕਸਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"ਵੇਂਡਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"ਮਿੰਗੂਓ ਕੈਲੰਡਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"ਵੀਅਤਨਾਮੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"ਕੋਯਰਾ ਚੀਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"ਘੰਟੇ ਦਾ ਚੱਕਰ (12 ਬਨਾਮ 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"ਵੋਲਾਪੂਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"ਕੇਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"ਗਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"ਵਲੂਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"ਗਾਗੌਜ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"ਸੀਰੀਆਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"ਚੀਨੀ ਗਾਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"ਵੋਲੋਫ"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"ਮਿਆਰੀ ਮੋਰੋਕੇਨ ਟਾਮਾਜ਼ਿਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"ਆਧੁਨਿਕ ਮਿਆਰੀ ਅਰਬੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"ਮੰਗੋਲੀਅਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"ਮਨੀਪੁਰੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"ਸਰਲ ਚੀਨੀ ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"ਰਵਾਇਤੀ ਚੀਨੀ ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"ਖੋਸਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"ਰੋਮਨ ਲੋਅਰਕੇਸ ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"ਬਲਿਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"ਮੋਹਆਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"ਕਾਕੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"ਯਿਦਿਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"ਮੋਸੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"ਯੋਰੂਬਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"ਸਪੇਨੀ (ਮੈਕਸੀਕੀ)"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"ਵਾਈ"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"ਕਲੇਜਿਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"ਚੀਨੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"ਬੋਪੋਮੋਫੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"ਰੇਖਾ ਵਿੱਥ ਸ਼ੈਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"ਜ਼ੁਲੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"ਕਿਮਬੁੰਦੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"ਜਪਾਨੀ ਵਿੱਤੀ ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"ਜੀਜ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"ਇੰਬੂ"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"ਕੋਮੀ-ਪੇਰਮਿਆਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"ਕੋਂਕਣੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"ਕਪੇਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"ਖਮੇਰ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ਇਲੋਕੋ"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"ਮੁੰਡੇਂਗ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"ਗੁਰਮੁਖੀ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"ਬਹੁਤੀਆਂ ਬੋਲੀਆਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"ਮਾਪ ਪ੍ਰਣਾਲੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"ਕ੍ਰੀਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"ਗਿਲਬਰਤੀਜ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"ਤਮਿਲ ਅੰਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"ਕਰਾਚੇ ਬਲਕਾਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ਇੰਗੁਸ਼"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"ਦਾਰੀ"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"ਕਰੀਲੀਅਨ"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"ਐਫਿਕ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"ਸੰਖਿਆਵਾਂ"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"ਕੁਰੁਖ"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"ਸ਼ੰਬਾਲਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"ਬਫ਼ੀਆ"_s)
		})
	}));
	return data;
}

LocaleNames_pa::LocaleNames_pa() {
}

$Class* LocaleNames_pa::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_pa, name, initialize, &_LocaleNames_pa_ClassInfo_, allocate$LocaleNames_pa);
	return class$;
}

$Class* LocaleNames_pa::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun