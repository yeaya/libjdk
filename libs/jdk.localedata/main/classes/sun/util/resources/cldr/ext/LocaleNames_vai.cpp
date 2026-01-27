#include <sun/util/resources/cldr/ext/LocaleNames_vai.h>

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

$MethodInfo _LocaleNames_vai_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_vai, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_vai, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_vai_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_vai",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_vai_MethodInfo_
};

$Object* allocate$LocaleNames_vai($Class* clazz) {
	return $of($alloc(LocaleNames_vai));
}

void LocaleNames_vai::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_vai::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_DE, u"ꕧꕮꔧ"_s);
	$var($String, metaValue_ES, u"ꕐꘊꔧ"_s);
	$var($String, metaValue_GR, u"ꗥꗷꘋ"_s);
	$var($String, metaValue_NP, u"ꕇꕐꔷ"_s);
	$var($String, metaValue_RW, u"ꕟꖙꕡ"_s);
	$var($String, metaValue_SE, u"ꖬꔨꗵꘋ"_s);
	$var($String, metaValue_US, u"ꕶꕱ"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"ꔪꖳꕿ ꔸꖏ"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"ꕐꔒꔻꔳꕯ ꔎꔒ ꕀꔤ ꗛꔤ ꕞ ꗱ ꗪ ꕭꕌꕤ"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"ꕶꕿꕃꔤ ꕸꖃꔀ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"ꕶꕿꕃꔤ"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"ꕐꖃ"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"ꕐꕟꗝꔀ"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"ꕪꕚꕌ"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"ꗻꗡ ꕒꕡꕌ ꗏ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"ꕉꖆꕟ"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"ꖳꕯꔤꗳ ꕉꕟꔬ ꗡꕆꔓꔻ"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"ꕉꔱꕭꔕꔻꕚꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"ꕉꘋꔳꖶꕎ ꗪ ꕑꖜꕜ"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"ꕉꕄꕞ"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"ꕉꕪꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"ꕉꔷꕑꕇꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"ꕉꕆꕯ"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"ꕉꕆꕌꔸ"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"ꕉꖐꕞ"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"ꕉꘋꕚꔳꕪ"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"ꕉꘀꘋꔳꕯ"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"ꕞꕌꖝ"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"ꕶꕱ ꕢꕹꕎ"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"ꖺꔻꖤꕎ"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"ꔓꗠꖻ"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"ꖺꖬꖤꔃꔷꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"ꕉꖩꕑ"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"ꕉꕞꔺ"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"ꕉꕤꕑꔤꕧꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"ꖄꕆꕇꕰ"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"ꖄꕆꕇꘂꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"ꕷꔻꕇꕰ ꗪ ꗥꕤꖑꔲꕯ"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"ꕑꔆꖁꔻ"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"ꗻꗡꔬꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"ꕑꕅꕞꗵꔼ"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"ꗩꕀꗚꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"ꗐꖺꔻꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"ꔆꕞꖩꔻ"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ꗐꖺꔻꘂꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"ꕷꕃꕯ ꕘꖇ"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(metaValue_RW)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(metaValue_RW)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"ꗂꔠꔸꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"ꗂꔠꗸꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"ꕑꗸꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"ꖜꖩꔺ"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"ꗩꕇꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"ꕪꘋꕓ ꗞꗢ ꕒꕚꕞꕆ"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"ꗩꖷꕜ"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ꖜꖩꘉꔧ"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"ꗩꕭꔷ"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"ꕷꔷꔲꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"ꕞꕌꖝ ꕸꖃꔀ"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"ꕪꔓꔬꘂꘋ ꖨꕮ ꗨꗳꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"ꖬꕞꔤꕮꕊꕯ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ꖜꕟꔘꔀ"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"ꔖꗼꔷ"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"ꕑꕌꕮꔻ"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"ꖬꗵꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(metaValue_SE)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"ꖜꕚꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"ꖜꔍꔳ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"ꔻꕬꕶꕱ"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"ꕷꖬꕎꕯ"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"ꔻꘋ ꗥꔷꕯ"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"ꔻꖃꔍꕇꕰ"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"ꗩꕞꖩꔻ"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"ꔻꕙꕒꔵ ꗪ ꕧꘋ ꕮꘂꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"ꔆꔷꔘ"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"ꔻꖃꕙꕃꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"ꔋꕩ ꕒꕌꖺ ꕸꖃꔀ"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"ꕮꔸꖆ ꕢꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"ꔻꕇꕭꕌ"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"ꖇꕮꔷꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"ꖇꕮꔷ"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"ꕪꕯꕜ"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"ꖬꔸꕯꔈ"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"ꖏꖏꔻ (ꔞꔀꔷꘋ) ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"ꖬꕜꘋ ꗛꔤ ꔒꘋꗣ ꗏ"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"ꖏꖐ ꗵꗞꖴꕟꔎ ꕸꖃꔀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"ꕢꕴ ꕿꔈ ꗪ ꕉ ꕮꔧ ꕗꕴꔀ"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(metaValue_SE)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"ꕉꔱꔸꕪ ꗳ ꗳ ꕸꖃꔀ"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"ꗡꗷ ꕢꔍꗍꖺ"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"ꖏꖐ"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"ꖬꔃꕤ ꖨꕮꕊ"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"ꔻꘋꔳ ꕮꕊꗳꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"ꖏꔳ ꕾꕎ"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"ꔻꕩꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"ꖬꕎꔽ ꖨꕮꕊ"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"ꖏꕃ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"ꔚꔷ"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"ꕪꔈꖩꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"ꕦꔤꕯ"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"ꗛꗏꔭꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"ꕃꔒꕐꗋꘋ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ꔳꔻꕚꘋ ꕜ ꖴꕯ"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"ꕚꕆꔷ"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"ꖏꔻꕚ ꔸꕪ"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"ꗋꖺꕃꔻ ꗪ ꕪꔤꖏꔻ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"ꕦꔵ"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"ꗿꗡ"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"ꕃꖳꕑ"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"ꔱꗷꘋꔻ ꗛꔤ ꔒꘋꗣ ꗏ ꕸꖃꔀ ꖸ"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"ꔞꔪ ꗲꔵ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"ꕿꖑ"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"ꖴꕟꖇꕱ"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"ꕚꔤ ꖨꕮꕊ"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"ꕚꔤ"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"ꔞꔻꕮꔻ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"ꕢꗡꖛꗐꔻ"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"ꕚꕀꕃꔻꕚꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"ꗿꕃ ꕸꖃꔀ"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"ꕿꔞꖃ"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"ꔎꔒ ꗃ ꔳꗞꖻ"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"ꗋꖺꕃꕮꕇꔻꕚꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"ꖤꕇꔻꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"ꗋꕬ"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"ꗋꖺꕃ"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"ꗋꕃ"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ꖤꔸꔕꕜ ꗪ ꕿꔆꖑ"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"ꕚꖣꖨ"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"ꔵꔀꖑ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"ꕚꔤꕎꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"ꕀꖜꔳ"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"ꕚꘋꕤꕇꕰ"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"ꕜꕇꕮꕃ"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"ꖁꕆꕇꕪ"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"ꖁꕆꕇꕪꘋ ꕸꕱꔀ"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"ꖳꖴꔓꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"ꖳꕭꕡ"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"ꕉꔷꔠꔸꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ꖳꖴꔓꕇꘂꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"ꕶꕱ ꕪꘋ ꗅꘋ ꔳꘋꗣ ꖸ"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"ꗻꕚ ꗪ ꔡꔷꕞ"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"ꖺꖦ"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(metaValue_US)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"ꗡꖴꔃꗍ"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"ꗡꔻꕿꕇꕰ"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"ꕆꔖꕞ"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"ꕢꕌꕟ ꔎꔒ ꕀꔤ"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"ꖳꔓꗝꔀ"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"ꖳꗩꕃꔻꕚꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(metaValue_US)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"ꕙꔳꕪꘋ ꕢꕨꕌ"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"ꔀꔸꔳꕟ"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"ꔻꘋ ꔲꘋꔻꘋ ꗪ ꖶꔓꕯꔵꘋ ꖸ"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(metaValue_ES)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(metaValue_ES)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"ꔤꔳꖎꔪꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"ꕙꔳꕪꘋ ꕸꖃꔀ"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"ꔛꔟꔻ ꗩꗡ ꗏ ꖷꖬ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"ꕶꕱ ꗩꗡ ꗏ ꖷꖬ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"ꔲꕩꕯꕆꔧ"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"ꗲꕇꖮꔃꕞ"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"ꗨꗡꔻꘂꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"ꕙꖸꕎꖤ"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"ꔱꘋ ꖨꕮꕊ"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"ꔱꔤꕀ"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"ꕘꔷꕃ ꖨꕮ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"ꕆꖏꕇꔻꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"ꕘꖄ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"ꖢꕟꘋꔻ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"ꗱꘋꔻ"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"ꕎꔷꔻ ꗪ ꖢꖤꕯ"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"ꕭꕷꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"ꖕꕯꔤꗳ"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"ꕢꕹꖙꕉ"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"ꖶꕟꕯꕜ"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"ꗘꖺꕀꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"ꗱꘋꔻ ꖶꕎꕯ"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"ꖶꗦꘋꔻ"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"ꕭꕌꕯ"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"ꕀꖜꕟꕚ"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"ꕧꕓ ꖴꕎ ꖨꕮꕊ"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"ꕭꔭꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"ꕅꔤꕇ"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"ꖶꕎꔐꖨꔅ"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"ꖦꕰꕊ ꗳ ꕅꔤꕇ"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"ꗘꖺꕀꕩ ꗛꔤ ꔒꘋꗣ ꗏ ꗪ ꗇꖢ ꔳꘋꗣ ꗛꔤ ꔒꘋꗣ ꗏ"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"ꖶꕎꔎꕮꕞ"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"ꖶꕎꕆ"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"ꕅꔤꕇ ꔫꕢꕴ"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"ꖶꕩꕯ"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"ꖏꖇꕾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"ꕌꖙꕢ"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"ꔦꔺ"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"ꗥꗡꔵ ꗪ ꕮꖁꕯ"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"ꖽꖫꕟ"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"ꖏꔓꔻꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"ꕌꔤꔳ"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"ꔝꘈꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"ꖽꘋꕭꔓ"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ꖽꔟꗸꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"ꖎꖄꕑ"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"ꗛꖺꔻꕩ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"ꔤꖆꕇꔻꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"ꕮꗚꔎ"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"ꔤꖆꕇꔻꘂꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"ꕉꔓ ꖨꕮꕊ"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ꔤꕼ"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"ꕙꔤ"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ꕑꕇꔻꕞꔤꕞ"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"ꕮꘋ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ꔤꔺꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"ꔛꔟꔻ ꔤꔺꕩ ꗛꔤꘂ ꕗꕴꔀ ꕮ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"ꕉꔱꔸꕪ ꗛꔤ ꔒꘋꗣ ꗏ ꕸꖃꔀ"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"ꔤꕟꕃ"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ꔤꕟꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"ꕉꔤꔻ ꖨꕮꕊ"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ꔤꕚꔷ"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ꔤꕚꔷꘂꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"ꕦꕇꔧ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"ꕤꔭꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"ꕧꕐꕇꔧ"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"ꘀꗡꔘ"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"ꖮꖨ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"ꔽꕓꖜꔃ"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"ꕧꕮꔧꕪ"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"ꗘꖺꗵꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"ꔛꗨꗢ"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"ꕧꕙꕇꔧ"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"ꔞꕰ"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"ꕃꕅꔻꕚꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"ꕪꕹꔵꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"ꕃꔸꕑꔳ"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"ꖏꕹꖄꔻ"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"ꕃꘈꗢ"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"ꔻꘋ ꕃꔳꔻ ꗪ ꔕꔲꔻ"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"ꖏꔸꘂꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"ꖏꔸꕩ ꗛꔤ ꕪꘋꗒ"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"ꖏꔸꕩ ꗛꔤ ꔒꘋꗣ ꗏ"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"ꖴꔃꔳ"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"ꔞꔀꕮꘋ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"ꕪꕤꔻꕚꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"ꕞꕴꔻ"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"ꔒꕑꗟꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"ꔻꘋ ꖨꔻꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"ꔷꗿꘋꔻꗳꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"ꖬꔸ ꕞꘋꕪ"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"ꕞꔤꔫꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"ꔷꖇꕿ"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"ꔷꖤꔃꕇꕰ"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"ꗏꔻꘋꗂꖺ"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"ꕞꔳꔲꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"ꔒꔫꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"ꗞꕟꖏ"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"ꗞꕯꖏ"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"ꖒꔷꖁꕙ"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"ꗞꔳꕇꖶꖄ"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"ꕪꘋꕓ ꗞꗢ ꕮꕊꔳꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"ꕮꕜꕭꔻꕪ"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"ꕮꕊꕣ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"ꕮꔷ"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"ꕆꕩꘋꕮ"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"ꗞꖐꔷꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"ꗛꔤ ꕪꘋꗒ ꕮꔸꕩꕯ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"ꕮꔳꕇꕃ"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"ꗞꔓꔎꕇꕰ"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"ꗞꘋꔖꕟꔳ"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"ꕮꔒꔀ"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"ꕮꕊꕚ"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"ꗞꔓꗔ"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"ꕮꔷꕜꔍ"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"ꕮꕞꕌꔨ"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"ꘈꔻꖏ"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"ꕮꔒꔻꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"ꗩꕆꔻ"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"ꕹꕤꔭꕃ"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"ꕯꕆꔫꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"ꕪꔷꖁꕇꕰ ꕯꕮꕊ"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(metaValue_NP)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"ꕯꔤꕧ"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"ꗟꖺꗉ ꔳꘋꗣ"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"ꕯꔤꕀꔸꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"ꕇꕪꕟꖶꕎ"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"ꘉꕜ ꖨꕮꕊ"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"ꗍꔿ"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"ꗟꖺꔃ"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(metaValue_NP)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"ꖆꖩ"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"ꖸꔃꔤ"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"ꔽꔤ ꖨꕮ ꕯꕮꕊ"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"ꕱꕮꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"ꕐꕯꕮ"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"ꖛꕨꔬ"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"ꗨꗡꖩ"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"ꗱꘋꔻ ꕶꔷꕇꔻꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"ꕐꖛꕎ ꕅꔤꕇ ꕯꕮꕊ"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"ꔱꔒꔪꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"ꕐꕃꔻꕚꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"ꕶꗷꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"ꗁꔒꔻ"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"ꔻꘋ ꔪꘂ ꗪ ꕆꔞꗏꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"ꔪꔳꕪꕆ"_s)
		})
	}));
	return data;
}

LocaleNames_vai::LocaleNames_vai() {
}

$Class* LocaleNames_vai::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_vai, name, initialize, &_LocaleNames_vai_ClassInfo_, allocate$LocaleNames_vai);
	return class$;
}

$Class* LocaleNames_vai::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun