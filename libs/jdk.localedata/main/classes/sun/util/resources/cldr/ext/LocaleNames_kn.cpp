#include <sun/util/resources/cldr/ext/LocaleNames_kn.h>

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

$MethodInfo _LocaleNames_kn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_kn, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_kn, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_kn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_kn",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_kn_MethodInfo_
};

$Object* allocate$LocaleNames_kn($Class* clazz) {
	return $of($alloc(LocaleNames_kn));
}

void LocaleNames_kn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_kn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_NR, u"ನೌರು"_s);
	$var($String, metaValue_TK, u"ಟೊಕೆಲಾವ್"_s);
	$var($String, metaValue_TV, u"ಟುವಾಲು"_s);
	$var($String, metaValue_ar, u"ಅರೇಬಿಕ್"_s);
	$var($String, metaValue_el, u"ಗ್ರೀಕ್"_s);
	$var($String, metaValue_gu, u"ಗುಜರಾತಿ"_s);
	$var($String, metaValue_he, u"ಹೀಬ್ರೂ"_s);
	$var($String, metaValue_hy, u"ಅರ್ಮೇನಿಯನ್"_s);
	$var($String, metaValue_ja, u"ಜಾಪನೀಸ್"_s);
	$var($String, metaValue_ka, u"ಜಾರ್ಜಿಯನ್"_s);
	$var($String, metaValue_km, u"ಖಮೇರ್"_s);
	$var($String, metaValue_kn, u"ಕನ್ನಡ"_s);
	$var($String, metaValue_ko, u"ಕೊರಿಯನ್"_s);
	$var($String, metaValue_la, u"ಲ್ಯಾಟಿನ್"_s);
	$var($String, metaValue_lo, u"ಲಾವೋ"_s);
	$var($String, metaValue_ml, u"ಮಲಯಾಳಂ"_s);
	$var($String, metaValue_mn, u"ಮಂಗೋಲಿಯನ್"_s);
	$var($String, metaValue_si, u"ಸಿಂಹಳ"_s);
	$var($String, metaValue_su, u"ಸುಂಡಾನೀಸ್"_s);
	$var($String, metaValue_ta, u"ತಮಿಳು"_s);
	$var($String, metaValue_te, u"ತೆಲುಗು"_s);
	$var($String, metaValue_th, u"ಥಾಯ್"_s);
	$var($String, metaValue_tl, u"ಟ್ಯಾಗಲೋಗ್"_s);
	$var($String, metaValue_peo, u"ಪ್ರಾಚೀನ ಪರ್ಶಿಯನ್"_s);
	$var($String, metaValue_syr, u"ಸಿರಿಯಾಕ್"_s);
	$var($String, metaValue_uga, u"ಉಗಾರಿಟಿಕ್"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"ಕಲೊಗ್ನಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"ಓಘಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"ಮಿರಾಂಡೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"ಸಂಕೇತಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"ಅಟ್ಸಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"ಮಾರ್ವಾಡಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"ಟಾಗ್ಬಾನವಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"ಎಮೋಜಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"ಚಕ್ಮಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"ಪ್ರಾಚೀನ ಈಜಿಪ್ಟಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"ರಾಜಸ್ಥಾನಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"ಫಾಗ್ಸ್-ಪಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"ಟಿಮ್ನೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"ಟೆಸೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"ರಾಪಾನುಯಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"ಟೆರೆನೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"ಅಸೆನ್ಶನ್ ದ್ವೀಪ"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"ರಾರೋಟೊಂಗನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"ಟೇಟಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"ಅಂಡೋರಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"ಯುನೈಟೆಡ್ ಅರಬ್ ಎಮಿರೇಟ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"ಫ್ಲೆಮಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"ಅಫಘಾನಿಸ್ಥಾನ"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"ಆಂಟಿಗುವಾ ಮತ್ತು ಬರ್ಬುಡಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"ಇಥಿಯೋಪಿಕ್ ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"ಆಂಗ್ವಿಲ್ಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"ಸಮಯ ವಲಯ"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"ಅಲ್ಬೇನಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"ಆರ್ಮೇನಿಯ"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"ತೆಂಗ್\u200cವಾರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"ಅಂಗೋಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"ಅಂಟಾರ್ಟಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"ಅರ್ಜೆಂಟಿನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"ಇನ್ಸ್\u200cಕ್ರಿಪ್ಶನಲ್ ಪಾರ್ಥಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"ಅಮೇರಿಕನ್ ಸಮೋವಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"ಆಸ್ಟ್ರಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"ಆಸ್ಟ್ರೇಲಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"ಅರುಬಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"ಅಮೆರಿಕನ್ ಇಂಗ್ಲಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"ಆಲ್ಯಾಂಡ್ ದ್ವೀಪಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"ಅಜರ್ಬೈಜಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"ಬೋಸ್ನಿಯಾ ಮತ್ತು ಹರ್ಜೆಗೋವಿನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"ಬಾರ್ಬಡೋಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"ಸೆಬುವಾನೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"ಬಾಂಗ್ಲಾದೇಶ"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"ಕುಮೈಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"ಬೆಲ್ಜಿಯಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"ಮಧ್ಯ ಹೈ ಜರ್ಮನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"ಬುರ್ಕಿನಾ ಫಾಸೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"ಬಲ್ಗೇರಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"ಬಹ್ರೇನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"ಬುರುಂಡಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"ಬೆನಿನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"ಸೇಂಟ್ ಬಾರ್ಥೆಲೆಮಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"ಬರ್ಮುಡಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"ಕುಟೇನಾಯ್"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ಎರ್ಝ್ಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ಬ್ರೂನಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"ಬೊಲಿವಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"ಕೆರೀಬಿಯನ್ ನೆದರ್\u200cಲ್ಯಾಂಡ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ಬ್ರೆಜಿಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"ಬಹಾಮಾಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"ಸೊಗ"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"ಭೂತಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"ಬೋವೆಟ್ ದ್ವೀಪ"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"ಬೋಟ್ಸ್\u200cವಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"ಬೆಲಾರಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"ಬೆಲಿಜ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"ವಿಸಿಬಲ್ ಸ್ಪೀಚ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"ಪರ್ಷಿಯನ್ ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"ಹೀಬ್ರೂ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"ಕೆನಡಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"ಕೊಕೊಸ್ (ಕೀಲಿಂಗ್) ದ್ವೀಪಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"ಮಜಂದೆರಾನಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"ಕಾಂಗೋ - ಕಿನ್ಶಾಸಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"ಮಧ್ಯ ಆಫ್ರಿಕಾ ಗಣರಾಜ್ಯ"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"ಕಾಂಗೋ - ಬ್ರಾಜಾವಿಲ್ಲೇ"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"ಸ್ವಿಟ್ಜರ್ಲ್ಯಾಂಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"ಕೋತ್ ದ್‘ಇವಾರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"ಕುಕ್ ದ್ವೀಪಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"ಚಿಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"ಕೈಥಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"ಕ್ಯಾಮರೂನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"ಚೀನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"ಕೊಲಂಬಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"ಕ್ಲಿಪ್ಪರ್\u200cಟಾನ್ ದ್ವೀಪ"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"ಕೊಸ್ಟಾ ರಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"ಕ್ಯೂಬಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"ಕೇಪ್ ವರ್ಡೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"ಕುರಾಕಾವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"ಕ್ರಿಸ್ಮಸ್ ದ್ವೀಪ"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"ಸೈಪ್ರಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"ಝೆಕಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ಎಕಾಜುಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"ಜರ್ಮನಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"ಪ್ರಾಚೀನ ಹೈ ಜರ್ಮನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ಅಛಿನೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"ಚಿಗಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"ಡೈಗೋ ಗಾರ್ಸಿಯ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"ದೇವನಾಗರಿ ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"ಜಿಬೂಟಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"ಡೆನ್ಮಾರ್ಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"ಅಕೋಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"ಗೊಂಡಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"ಬ್ರೈಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"ಬ್ರಾಹ್ಮಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"ಡೊಮಿನಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"ಅರ್ಮೇನಿಯಾದ ಸಣ್ಣಕ್ಷರ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"ಡೊಮೆನಿಕನ್ ರಿಪಬ್ಲಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"ಗೊರೊಂಟಾಲೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"ಗೋಥಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"ಮೈತಿ ಮಯೆಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"ಝೂನಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"ಟೈಗ್ರೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"ಅಲ್ಜೀರಿಯ"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"ಪಂಗಾಸಿನನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"ಅರೆಅಗಲಕ್ಕೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"ಪಹ್ಲವಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"ಸೆಯುಟಾ ಹಾಗೂ ಮೆಲಿಲ್ಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"ಚಿಬ್ಚಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"ಪಂಪಾಂಗಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"ಈಕ್ವೆಡಾರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"ಪಪಿಯಾಮೆಂಟೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"ಅಡಂಗ್ಮೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"ಎಸ್ಟೋನಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"ಟಿವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"ಈಜಿಪ್ಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"ಪಶ್ಚಿಮ ಸಹಾರಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"ಚಗಟಾಯ್"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"ಪಲುಆನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"ಚೂಕಿಸೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"ಚಿನೂಕ್ ಜಾರ್ಗೋನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"ಮಾರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"ಚಿಪೆವ್ಯಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"ಚೋಕ್ಟಾವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"ಚೆರೋಕಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"ಎರಿಟ್ರಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"ಸ್ಪೇನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"ಇಥಿಯೋಪಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"ಯುರೋಪಿಯನ್ ಒಕ್ಕೂಟ"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"ಎಲಾಮೈಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"ಗ್ರೆಗೋರಿಯನ್ ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"ಯೂರೋಝೋನ್\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"ಚೀಯೆನ್ನೇ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"ಗುಜರಾತಿ ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"ಸಿಂಧೂ"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"ಅಡೈಘೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"ಫಿನ್\u200cಲ್ಯಾಂಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"ಫಿಜಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"ಫಾಕ್\u200cಲ್ಯಾಂಡ್ ದ್ವೀಪಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"ಮೈಕ್ರೋನೇಶಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"ಸ್ಥಳೀಯ ಭಿನ್ನತೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"ಫರೋ ದ್ವೀಪಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"ಫ್ರಾನ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"ಗ್ರೇಬೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"ಭಾರತೀಯ ರಾಷ್ಟ್ರೀಯ ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"ಪ್ರಾಚೀನ ಗ್ರೀಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"ಗೆಬೊನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"ವೋಟಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"ಯುನೈಟೆಡ್ ಕಿಂಗ್\u200cಡಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"ನೈಜೀರಿಯನ್ ಪಿಡ್ಗಿನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"ಗ್ರೆನೆಡಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"ಜಾರ್ಜಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"ಫ್ರೆಂಚ್ ಗಯಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"ಗುರ್ನ್\u200cಸೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"ಘಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"ಥಾಯ್ ಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"ಗಿಬ್ರಾಲ್ಟರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"ಆಫ್ರಿಹಿಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"ಗ್ರೀನ್\u200cಲ್ಯಾಂಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"ಮಧ್ಯ ಇಂಗ್ಲೀಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"ಗ್ಯಾಂಬಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"ಗಿನಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"ಗುಡೆಲೋಪ್"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"ಈಕ್ವೆಟೋರಿಯಲ್ ಗಿನಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"ಗ್ರೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"ದಕ್ಷಿಣ ಜಾರ್ಜಿಯಾ ಮತ್ತು ದಕ್ಷಿಣ ಸ್ಯಾಂಡ್\u200dವಿಚ್ ದ್ವೀಪಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"ಗ್ವಾಟೆಮಾಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"ಗುವಾಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"ಗಿನಿ-ಬಿಸ್ಸಾವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"ಟ್ಲಿಂಗಿಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"ಕ್ಲಿಂಗನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"ನ್ಯೂ ಥಾಯ್ ಲುಇ"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"ಗಯಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"ಮಧ್ಯ ಕುರ್ದಿಶ್"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"ಯಾವುದೇ ಭಾಷಾಸಂಬಂಧಿ ವಿಷಯವಿಲ್ಲ"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"ಆಸ್ಟ್ರಿಯನ್ ಜರ್ಮನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"ಹಾಂಗ್ ಕಾಂಗ್ SAR ಚೈನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"ವಾಯ್"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"ಹರ್ಡ್ ಮತ್ತು ಮ್ಯಾಕ್\u200cಡೋನಾಲ್ಡ್ ದ್ವೀಪಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"ಹೊಂಡುರಾಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"ಕ್ರೊಯೇಷಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"ಅಘೆಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"ಸ್ವಿಸ್ ಜರ್ಮನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"ಇಸ್ಲಾಮಿಕ್ ಕ್ಯಾಲೆಂಡರ್ (ಉಮ್ ಅಲ್-ಖುರಾ)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"ಹೈಟಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"ಹಂಗೇರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"ಟಮಾಷೆಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"ಕ್ಯಾನರಿ ದ್ವೀಪಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"ನಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"ಇಂಡೋನೇಶಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"ಐರ್ಲೆಂಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"ನಿಯಾಪೊಲಿಟನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"ನಮ"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"ಜಾಝಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ಇಸ್ರೇಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"ಐಲ್ ಆಫ್ ಮ್ಯಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ಭಾರತ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"ಯುರೋಪಿನ ಅನುಕ್ರಮ ನಿಯಮಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"ಬ್ರಿಟೀಷ್ ಹಿಂದೂ ಮಹಾಸಾಗರದ ಪ್ರದೇಶ"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"ಇರಾಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ಇರಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"ಐಸ್\u200cಲ್ಯಾಂಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ಇಟಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"ಗಣಿತ ಸಂಕೇತಲಿಪಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"ಥಾಯ್ ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"ಬಾಂಗ್ಲಾ ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"ಜೆರ್ಸಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"ಇಸ್ಲಾಮಿಕ್ ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"ಜಮೈಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"ಬೆಂಗಾಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"ಜೋರ್ಡಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"ಜಪಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"ಐನು"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"ಗುಸಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"ನ್ಯಾಸಾ ಟೋಂಗಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"ಕನ್ನಡ ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"ಕೆಯಾ ಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"ಸ್ವಿಸ್ ಹೈ ಜರ್ಮನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"ಉಚ್ಛಾರಣಾನುರೂಪವಾಗಿ ವಿಂಗಡಣೆ ಕ್ರಮ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"ಬೌದ್ಧರ ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"ಕೀನ್ಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"ಲ್ಯಾಟಿನ್ ಅಮೇರಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"ಕಿರ್ಗಿಸ್ಥಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"ಕಾಂಬೋಡಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"ಕಿರಿಬಾಟಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"ಕೊಮೊರೊಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"ಸೇಂಟ್ ಕಿಟ್ಸ್ ಮತ್ತು ನೆವಿಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"ಇನ್\u200dಹೆರಿಟೆಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"ಕೆನೆಡಿಯನ್ ಫ್ರೆಂಚ್"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"ಉತ್ತರ ಕೊರಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"ದಕ್ಷಿಣ ಕೊರಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"ಪೊಲ್ಲಾರ್ಡ್ ಫೊನೆಟಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"ಸ್ವಿಸ್ ಫ್ರೆಂಚ್"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"ಕುವೈತ್"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"ಟೋಕ್ ಪಿಸಿನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"ಕೇಮನ್ ದ್ವೀಪಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"ಕಝಾಕಿಸ್ಥಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"ಸಿರಿಲಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"ಲಾವೋಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"ಲೆಬನಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"ಸೇಂಟ್ ಲೂಸಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"ಫೀನಿಷಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"ಪ್ರಾಚೀನ ಚರ್ಚ್ ಸ್ಲೋವಾನಿಕ್ ಸಿರಿಲಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"ಗ್ವಿಚ್\u200cಇನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"ಲೋ ಜರ್ಮನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"ಲಿಚೆನ್\u200cಸ್ಟೈನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"ಶ್ರೀಲಂಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"ಅಕ್ಕಾಡಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"ಕೊಪ್ಟಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"ಲಿಬೇರಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"ಲೆಸೊಥೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"ಬುಕ್ ಪಾಹ್ಲವಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"ಲಿಥುವೇನಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"ಲಕ್ಸೆಂಬರ್ಗ್"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"ಲಾಟ್ವಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"ಕಟಕಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"ಲಿಬಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ಲ್ಯಾಡಿನೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"ವುಂಜೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"ಲಹಂಡಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"ಲಾಂಗಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"ಥಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"ಮೊರಾಕ್ಕೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"ಮೊನಾಕೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"ಮೊಲ್ಡೋವಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"ಮೊಂಟೆನೆಗ್ರೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"ಸೇಂಟ್ ಮಾರ್ಟಿನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"ಲಂಬಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"ಮಡಗಾಸ್ಕರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"ಮಾರ್ಷಲ್ ದ್ವೀಪಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"ಅಲೆಯುಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"ವಾಯ್ ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"ಉತ್ತರ ಮ್ಯಾಸಿಡೋನಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"ಮಾಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"ಮಯನ್ಮಾರ್ (ಬರ್ಮಾ)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"ಮಂಗೋಲಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"ನೇವಾರೀ"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"ಮಕಾವು SAR ಚೈನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"ಉತ್ತರ ಮರಿಯಾನಾ ದ್ವೀಪಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"ಮಾರ್ಟಿನಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"ಮಾರಿಟೇನಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"ಮಾಂಟ್\u200cಸೆರಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"ಮಾಲ್ಟಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"ಯುಎಸ್ ಜಿಇಜಿಎನ್ ಲಿಪ್ಯಂತರಣ"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"ಮಾರಿಷಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"ದಕ್ಷಿಣ ಅಲ್ಟಾಯ್"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"ಮಾಲ್ಡೀವ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"ಮಲಾವಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"ಮೆಕ್ಸಿಕೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"ಜಪಾನೀಸ್ ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"ಮಲೇಶಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"ಮೊಜಾಂಬಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"ಇನ್ಸ್\u200cಕ್ರಿಪ್ಶನಲ್ ಪಾಹ್ಲವಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"ನಮೀಬಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"ಉಪ-ಸಹಾರನ್ ಆಫ್ರಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"ಹೀಬ್ರೂ ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"ಡಿಕ್ಷನರಿ ಅನುಕ್ರಮ ವಿನ್ಯಾಸ"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"ನ್ಯೂ ಕ್ಯಾಲಿಡೋನಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"ವೇಡ್-ಗೈಲ್ಸ್ ರೋಮನೈಸೇಶನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"ನೈಜರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"ನಾರ್ಫೋಕ್ ದ್ವೀಪ"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"ನೈಜೀರಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"ಟರೊಕೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"ಸಾಲ್ಟರ್ ಪಾಹ್ಲವಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"ನಿಕಾರಾಗುವಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"ಪಹವ್ ಹ್ಮೋಂಗ್"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"ನೆದರ್\u200cಲ್ಯಾಂಡ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"ನಾರ್ವೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"ನೇಪಾಳ"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"ನಿಯು"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"ಫೀನಿಶಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"ರೊಂಬೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"ಸಿಂಶಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"ನ್ಯೂಜಿಲೆಂಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"ರೋಮಾನಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"ಮೆರೊಯಿಟಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"ಕ್ರಿಮೀಯನ್ ಟರ್ಕಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"ಪ್ರಾಚೀನ ಇಂಗ್ಲೀಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"ಓಮನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"ಆಂಗಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"ಸೆಸೆಲ್ವಾ ಕ್ರಯೋಲ್ ಫ್ರೆಂಚ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"ಪನಾಮಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"ಇಸ್ಲಾಮಿಕ್-ಸಿವಿಲ್ ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"ಕಶುಬಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ಬ್ರಿಟಿಷ್ ಇಂಗ್ಲಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"ಪೆರು"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"ಫ್ರೆಂಚ್ ಪಾಲಿನೇಷ್ಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"ಪಪುವಾ ನ್ಯೂಗಿನಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"ಫಿಲಿಫೈನ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"ಪಾಕಿಸ್ತಾನ"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"ಪೋಲ್ಯಾಂಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"ಇವಾಂಡೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"ಸೇಂಟ್ ಪಿಯರ್ ಮತ್ತು ಮಿಕ್ವೆಲನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"ಪಿಟ್\u200cಕೈರ್ನ್ ದ್ವೀಪಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"ಪ್ಯೂರ್ಟೋ ರಿಕೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"ಪ್ಯಾಲೇಸ್ಟೇನಿಯನ್ ಪ್ರದೇಶಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"ಬಾಲಿನೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"ಪೋರ್ಚುಗಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"ಪಲಾವು"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"ನಿಯಾಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"ಗ್ರೀಕ್ ಲೋವರ್\u200cಕೇಸ್ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"ಪರಾಗ್ವೇ"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"ತುಂಬುಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"ಖತಾರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"ನಿಯುವನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"ಔಟ್ ಲೈಯಿಂಗ್ ಓಷಿಯಾನಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"ಲೆಜ್ಘಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"ಥಾಯ್ ವಿಯೆಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"ಪ್ರಪಂಚ"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"ಆಫ್ರಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"ಉತ್ತರ ಅಮೇರಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"ರಿಯೂನಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"ದಕ್ಷಿಣ ಅಮೇರಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ಲೊಜ್ಬಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"ರೆಜಾಂಗ್"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ಓಶಿಯೇನಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"ರೊಮೇನಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"ಸೆರ್ಬಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"ರಷ್ಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"ರುವಾಂಡಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"ಮನಿಚೈಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"ಖರೋಶ್ತಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"ಸೌದಿ ಅರೇಬಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"ಪೋನ್\u200c\u200cಪಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"ಮಂಡೇಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"ಸಾಲೊಮನ್ ದ್ವೀಪಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"ಟಸವಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"ಪಶ್ಚಿಮ ಆಫ್ರಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"ಸೀಶೆಲ್ಲೆಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"ಸುಡಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"ಮಧ್ಯ ಅಮೇರಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"ಸ್ವೀಡನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"ಪೂರ್ವ ಆಫ್ರಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"ಅರಾಮಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"ಉತ್ತರ ಆಫ್ರಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"ಸಿಂಗಪುರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"ಸೇಂಟ್ ಹೆಲೆನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"ಕಟ್ಟುನಿಟ್ಟಾದ ಲೈನ್ ಬ್ರೇಕ್ ಶೈಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"ಮಧ್ಯ ಆಫ್ರಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"ಸ್ಲೋವೇನಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"ಆಫ್ರಿಕಾದ ದಕ್ಷಿಣ ಭಾಗ"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"ಸ್ವಾಲ್ಬಾರ್ಡ್ ಮತ್ತು ಜಾನ್ ಮೆಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"ಅಮೆರಿಕಾಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"ಸ್ಲೊವಾಕಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"ಸಿಯೆರ್ರಾ ಲಿಯೋನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"ಸ್ಯಾನ್ ಮೆರಿನೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"ಸೆನೆಗಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"ಸೊಮಾಲಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"ಮಪುಚೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"ಅರಪಾಹೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"ಸಾಂಪ್ರದಾಯಿಕ ತಮಿಳು ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"ಸುರಿನಾಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"ದಕ್ಷಿಣ ಸುಡಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"ಸಾವೋ ಟೋಮ್ ಮತ್ತು ಪ್ರಿನ್ಸಿಪಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"ಎಲ್ ಸಾಲ್ವೇಡಾರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"ಸಿಂಟ್ ಮಾರ್ಟೆನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"ಸಿರಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"ಯಾವೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"ಸ್ವಾತಿನಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"ಅರಾವಾಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"ಯಪೀಸೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ಟ್ರಿಸ್ತನ್ ಡಾ ಕುನ್ಹಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"ಅಸು"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"ಅಮೇರಿಕಾದ ಮಾಪನಾ ವ್ಯವಸ್ಥೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"ಅಮೇರಿಕಾದ ಉತ್ತರ ಭಾಗ"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"ಟರ್ಕ್ಸ್ ಮತ್ತು ಕೈಕೋಸ್ ದ್ವೀಪಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"ಯಾಂಗ್ಬೆನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"ಚಾದ್"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"ಫ್ರೆಂಚ್ ದಕ್ಷಿಣ ಪ್ರದೇಶಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"ಟೋಗೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"ಥೈಲ್ಯಾಂಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"ತಜಿಕಿಸ್ತಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"ಕೆರೀಬಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"ಪೂರ್ವ ತಿಮೋರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"ಯೆಂಬಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"ಹಂಗುಲ್ ಆದ್ಯಕ್ಷರ ವ್ಯಂಜನದ ಮೂಲಕ ಹುಡುಕಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"ತುರ್ಕಮೆನಿಸ್ತಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"ಟುನೀಶಿಯ"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"ಟೊಂಗಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"ಟರ್ಕಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ಟ್ರಿನಿಡಾಡ್ ಮತ್ತು ಟೊಬಾಗೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"ತೈವಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"ಆಸ್ಟುರಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"ಓರ್ಖೋನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"ತಾಂಜೇನಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"ಖ್ವಾಸಿಯೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"ಅಪರಿಚಿತ ಲಿಪಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"ಉಕ್ರೈನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"ಅರೋಮಾನಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"ಪೂರ್ವ ಏಷ್ಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"ಟುವಿನಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"ಕಾಂಗೊ ಸ್ವಹಿಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"ದಕ್ಷಿಣ ಏಷ್ಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"ಹೈಡಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"ಆಗ್ನೇಯ ಏಷ್ಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"ಉಗಾಂಡಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"ಹಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"ಪಿನ್\u200cಯಿನ್ ವಿಂಗಡಣೆ ಕ್ರಮ"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"ದಕ್ಷಿಣ ಯೂರೋಪ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"ಯುಎಸ್\u200c ಔಟ್\u200cಲೇಯಿಂಗ್ ದ್ವೀಪಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"ಸಂಯುಕ್ತ ಸಂಸ್ಥಾನಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"ಯುನೈಟೆಡ್ ಸ್ಟೇಟ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"ಹವಾಯಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"ಸರಳೀಕೃತ ಚೈನೀಸ್ ವಿಂಗಡಣೆ ಕ್ರಮ - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"ಉರುಗ್ವೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"ಪ್ರಶಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"ಉಜ್ಬೇಕಿಸ್ಥಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"ಮಧ್ಯ ಅಟ್ಲಾಸ್ ಟಮಜೈಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"ಸ್ಟ್ರೋಕ್ ವಿಂಗಡಣೆ ಕ್ರಮ"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"ನಿಂಬೂನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"ವ್ಯಾಟಿಕನ್ ಸಿಟಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"ಪ್ರಾಚೀನ ಪ್ರೊವೆನ್ಶಿಯಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"ಸೇಂಟ್. ವಿನ್ಸೆಂಟ್ ಮತ್ತು ಗ್ರೆನೆಡೈನ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"ವೆನೆಜುವೆಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"ಬ್ರಿಟಿಷ್ ವರ್ಜಿನ್ ದ್ವೀಪಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"ಯು.ಎಸ್. ವರ್ಜಿನ್ ದ್ವೀಪಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"ವಿಯೆಟ್ನಾಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"ವನೌಟು"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"ನೊಗಾಯ್"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"ರುವ"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"ಪ್ರಾಚೀನ ನೋರ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"ಆಸ್ಟ್ರೇಲೇಷ್ಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"ಮೆಲನೇಷಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"ವಾಲಿಸ್ ಮತ್ತು ಫುಟುನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"ಸಾಂಪ್ರದಾಯಿಕ ವಿಂಗಡಣೆ ಕ್ರಮ"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"ಮೈಕ್ರೋನೇಶಿಯನ್ ಪ್ರದೇಶ"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"ನೊಂಬಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"ಲಕೊಟ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"ಆರ್ಥಿಕ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"ಹೊಂದಾಣಿಕೆಯ ಸಲುವಾಗಿ ಹಿಂದಿನ ವಿಂಗಡಣಾ ಕ್ರಮ"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"ವಾಲ್ಸರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"ಸಮೋವಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"ವಲಾಯ್ತಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"ವಾಷೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"ಸ್ಯುಡೊ ಉಚ್ಛಾರಣೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"ವರಾಯ್"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"ಸ್ಯುಡೊ-ಬಿಡಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"ಅವಧಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"ಪಾಲಿನೇಷ್ಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"ಕೊಸೊವೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"ಅಲಿಖಿತ"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ಓಲ್ ಚಿಕಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"ವಾರ್ಲ್\u200cಪಿರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"ಬಾಟಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"ಬ್ಲಿಸ್\u200cಸಿಂಬಲ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"ಯೆಮನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"ಎನ್\u200cಕೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"ಪ್ರಮಾಣೀಕೃತ ವಿಂಗಡಣೆ ಕ್ರಮ"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"ಫಾಂಗ್"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"ಫಾಂಟಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"ಸೈನ್\u200cರೈಟಿಂಗ್"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"ಮಯೊಟ್ಟೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"ದಕ್ಷಿಣ ಆಫ್ರಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"ಲೂಸ್ ಲೈನ್ ಬ್ರೇಕ್ ಶೈಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"ದೇವನಾಗರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"ಜಾರ್ಜಿಯಾದ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"ಹಿರಾಗನ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"ಜಾಂಬಿಯ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"ಪಿನ್\u200cಯಿನ್ ರೋಮನೈಸೇಶನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"ಜಿಂಬಾಬ್ವೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"ಅಜ್ಞಾತ ಪ್ರದೇಶ"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"ರೂನಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"ಮೆಟ್ರಿಕ್ ಪದ್ಧತಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"ಮೊಂಗೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"ಉತ್ತರ ಸೋಥೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"ತೆಲುಗು ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"ಲೂಯಿಸಿಯಾನ ಕ್ರಿಯೋಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"ಲೋಝಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"ಮ್ಯಕಮೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"ಸರಳೀಕೃತ ಚೀನಿ ಆರ್ಥಿಕ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"ಹಿಲಿಗೇನನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"ವಿಸ್ತರಿಸಲಾದ ಅರೇಬಿಕ್-ಇಂಡಿಕ್ ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"ನೂಯರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"ಡಕೋಟಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"ಪೂರ್ಣ ಅಗಲವಾದ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"ಹಿಟ್ಟಿಟೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"ದರ್ಗ್ವಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"ಟೈಟ"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"ಮಯಾನ್ ಹೀರೋಗ್ಲಿಫ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"ಉತ್ತರ ಲೂರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"ಕಾಪ್ಟಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"ಶಾಸ್ತ್ರೀಯ ನೇವಾರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"ಉಡ್\u200cಮುರ್ಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"ಇಸ್ಲಾಮಿಕ್\u200c ಕ್ಯಾಲೆಂಡರ್\u200c (ಸೌದಿ ಅರೇಬಿಯಾ, ಸೈಟಿಂಗ್\u200c)bia, sighting)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"ಲಿಂಬು"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"ಸಂಡಾವೇ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"ರೋಮನ್ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"ಸಖಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"ಸಮರಿಟನ್ ಅರಾಮಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"ಸಂಬುರು"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"ಸಸಾಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"ಸಂತಾಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"ಟಿಫಿನಾಘ್"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"ಜೂಡಿಯೋ-ಪರ್ಶಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"ಸಂಖ್ಯೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"ಸ್ಥಳೀಯ ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"ನಂಬೇ"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"ಗುರ್ಮುಖಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"ಲುಬ-ಲುಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"ಪೂರ್ಣಅಗಲಕ್ಕೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"ಸಂಗು"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"ಲೂಯಿಸೆನೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ನ್ಯಾನ್\u200cಕೋಲೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"ನ್ಯಾಮ್\u200cವೆಂಜಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"ಲುಂಡಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"ನ್ಯೋರೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"ಲುವೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"ಫಿಲಿಪಿನೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"ಮೋಂಗ್"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"ಡೆಲಾವೇರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"ಮಿಝೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"ಬಲೂಚಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"ಸ್ಲೇವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"ಬಲಿನೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"ಲುಯಿಯ"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"ಬಸಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"ಜೂಡಿಯೋ-ಅರೇಬಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"ಯುರೋಪಿಯನ್ ಸ್ಪ್ಯಾನಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"ಜೀಮಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"ಸ್ಕೋಟ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"ಸಿಸಿಲಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"ಅಫಾರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"ಅಬ್ಖಾಜಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"ಅವೆಸ್ಟನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"ಆಫ್ರಿಕಾನ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"ಅಕಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"ಅಂಹರಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"ಅರಗೊನೀಸ್"_s)
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
			$of(u"ಜಪಾನೀಸ್ ಸಿಲಬರೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"ಅಸ್ಸಾಮೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"ಲೀನಯರ್ ಎ"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"ಅವರಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"ಲೀನಯರ್ ಬಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"ದಕ್ಷಿಣ ಕುರ್ದಿಶ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"ಅಯ್ಮಾರಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"ಅಜೆರ್ಬೈಜಾನಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"ಬಶ್ಕಿರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"ರ್ಯಾಡಿಕಲ್-ಸ್ಟ್ರೋಕ್ ವಿಂಗಡಣೆ ಕ್ರಮ"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"ಬೆಲರೂಸಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"ಬಲ್ಗೇರಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"ಬಿಸ್ಲಾಮಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"ಬಂಬಾರಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"ಬಾಂಗ್ಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"ಟಿಬೇಟಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"ಡೋಗ್ರಿಬ್"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"ಬ್ರೆಟನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"ಬೋಸ್ನಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"ಮ್ಯಾನ್ಮಾರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"ಲಾವೋ ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"ಸೆನ"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"ಎನ್\u200dಕೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"ಸೆಲ್ಕಪ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"ಕೆಟಲಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"ಕೊಯ್ರಬೊರೊ ಸೆನ್ನಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"ಚಚೆನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"ಕಮೊರೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"ಕೋರ್ಸಿಕನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"ಒಡಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"ಕ್ರೀ"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"ಜೆಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"ಚರ್ಚ್ ಸ್ಲಾವಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"ಚುವಾಶ್"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"ವೆಲ್ಶ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"ಇಥಿಯೋಪಿಯಾದ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"ಯಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"ಡ್ಯಾನಿಶ್"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"ಯೂರೋಪಿಯನ್ ಪೋರ್ಚುಗೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"ಜರ್ಮನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"ಪ್ರಮಾಣಿತ ಕರೆನ್ಸಿ ಸ್ವರೂಪ"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"ಬೇಜಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"ಡಿಂಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"ಬಗಿನೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"ಬೆಂಬಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"ಪ್ರಾಚೀನ ಐರಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"ಮಂಗೋಲಿಯಾದ ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"ದಿವೆಹಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"ಲ್ಯಾಟಿನ್ ಅಮೇರಿಕನ್ ಸ್ಪ್ಯಾನಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"ಜೋಂಗ್\u200cಖಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"ಬೆನ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"ಚೈನೀಸ್ ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"ಜರ್ಮಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"ಗ್ರೀಕ್ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ಈವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"ಸಾಮಾನ್ಯ ಲೈನ್ ಬ್ರೇಕ್ ಶೈಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"ಮಾಲ್ಡೇವಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ಇಂಗ್ಲಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"ಎಸ್ಪೆರಾಂಟೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"ಸಾಂಪ್ರದಾಯಿಕ ಚೀನಾದ ಅನುಕ್ರಮ ವಿನ್ಯಾಸ - ದೊಡ್ಡ ಐದು"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"ಸ್ಪ್ಯಾನಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"ಎಸ್ಟೊನಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"ಬೋಪೋಮೊಫೋ ಜೊತೆಗೆ ಹಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"ಬಾಸ್ಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"ಬುಹಿದ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"ಹ್ಯಾಂಗುಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"ಸಮಾರಿಟನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"ಟಷೆಲ್\u200dಹಿಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"ಅಪ್ಪರ್ ಸರ್ಬಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"ಹಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"ಶಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"ಹನೂನೂ"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"ಪರ್ಶಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"ಸರಳೀಕೃತ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"ಪಾಶ್ಚಿಮಾತ್ಯ ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"ಸಾಂಪ್ರದಾಯಿಕ"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"ಫುಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"ಶಯಾಂಗ್ ಚೀನೀಸೇ"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"ಫಿನ್ನಿಶ್"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"ಫಿಜಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"ಫೋನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"ಪಶ್ಚಿಮ ಬಲೊಚಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"ಕ್ಯಾಂಟನೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ಫರೋಸಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"ಯುಎಸ್ ಬಿಜಿಎನ್ ಲಿಪ್ಯಂತರಣ"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"ಉಂಬುಂಡು"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"ಫ್ರೆಂಚ್"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"ಸಿಡಾಮೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"ಪಶ್ಚಿಮ ಫ್ರಿಸಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ಐರಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"ಸ್ಕಾಟಿಶ್ ಗೆಲಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"ಗ್ಯಾಲಿಶಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"ಗೌರಾನಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"ಭೋಜಪುರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"ಅಪರಿಚಿತ ಭಾಷೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"ಇಥಿಯೋಪಿಕ್ ಅಮೆಟೆ ಅಲೆಮ್ ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"ಮ್ಯಾಂಕ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"ಹೌಸಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"ಹಿಂದಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"ಹೂಪಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"ಬಿಕೊಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"ಬಿನಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"ಹಿರಿ ಮೊಟು"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"ಕ್ರೊಯೇಶಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"ಹೈಟಿಯನ್ ಕ್ರಿಯೋಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ಹಂಗೇರಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"ಹೆರೆರೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"ಕಾಜುನ್ ಫ್ರೆಂಚ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"ಇಂಟರ್\u200cಲಿಂಗ್ವಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"ಜಮೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"ಇಂಡೋನೇಶಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"ಟಿಬೇಟಿಯನ್ ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"ಇಂಟರ್ಲಿಂಗ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ಇಗ್ಬೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"ಸಿಚುಅನ್ ಯಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"ಮಧ್ಯ ಫ್ರೆಂಚ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"ಇನುಪಿಯಾಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"ಪ್ರಾಚೀನ ಫ್ರೆಂಚ್"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"ಇಡೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"ಪೂರ್ವ ಫ್ರಿಸಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"ಉತ್ತರ ಫ್ರಿಸಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"ಐಸ್\u200cಲ್ಯಾಂಡಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ಇಟಾಲಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"ಇನುಕ್ಟಿಟುಟ್"_s)
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
			$of("Sara"_s),
			$of(u"ಸರಾಟಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"ಡೋಗ್ರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"ದಕ್ಷಿಣ ಸಾಮಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"ಜಾವಾನೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"ಶಾವಿಯಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"ಮದುರೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"ಲೂಲ್ ಸಾಮಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"ಮಗಾಹಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"ಮೈಥಿಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"ಇನಾರಿ ಸಮೀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"ಸಿಕ್ಸಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"ಮಕಾಸರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"ವು"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"ಸ್ಕೋಟ್ ಸಾಮಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"ಮಂಡಿಂಗೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"ಕಾಂಗೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"ಗೋತಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"ಕಿಕುಯು"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"ಮಸಾಯ್"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"ಕ್ವಾನ್\u200cಯಾಮಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"ಕಝಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"ಕಲಾಲ್ಲಿಸುಟ್"_s)
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
			$of(u"ಕನುರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"ಕಾಶ್ಮೀರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"ಸಿರ್ಥ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"ಲೆಪ್ಚಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"ಅವೆಸ್ತಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"ಕುರ್ದಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"ಕೋಮಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"ಕಾರ್ನಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"ಕಿರ್ಗಿಜ್"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"ಸೋನಿಂಕೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"ಲಕ್ಸಂಬರ್ಗಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"ಮಲಯಾಳಂ ಅಂಕಿಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"ಗಾಂಡಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"ರೋಂಗೋರೋಂಗೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"ಲಿಂಬರ್ಗಿಶ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"ಟಿಬೇಟನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"ಲಿಂಗಾಲ"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"ಫ್ರಿಯುಲಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"ಇಂಪಿರಿಯಲ್ ಮಾಪನ ವ್ಯವಸ್ಥೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"ಲಿಥುವೇನಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"ಲೂಬಾ-ಕಟಾಂಗಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"ಲಾಟ್ವಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"ಸೋಗ್ಡಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"ಮಲಗಾಸಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"ಮಾರ್ಶಲ್ಲೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ಡೀಫಾಲ್ಟ್ ಯೂನಿಕೋಡ್ ವಿಂಗಡಣೆ ಕ್ರಮ"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"ಮಾವೋರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"ಮೆಸಿಡೋನಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"ಮರಾಠಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"ಮಲಯ್"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"ಮಾಲ್ಟೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"ಬರ್ಮೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"ಸೌರಾಷ್ಟ್ರ"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"ಮೋಕ್ಷ"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"ಲೋವರ್ ಸರ್ಬಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"ಇಂಪೀರಿಯಲ್ ಅರೆಮಾಯಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"ಸಾಮಾನ್ಯ- ಉದ್ದೇಶ ಹುಡುಕಾಟ"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"ನಾರ್ವೆಜಿಯನ್ ಬೊಕ್ಮಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"ಉತ್ತರ ದೆಬೆಲೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"ನೇಪಾಳಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ಡೋಂಗಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"ಮಂದಾರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"ಡಚ್"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"ನಾರ್ವೇಜಿಯನ್ ನೈನಾರ್ಸ್ಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"ನಾರ್ವೇಜಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"ದಕ್ಷಿಣ ದೆಬೆಲೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"ನವಾಜೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"ಕಾರಾ-ಕಲ್ಪಾಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ನ್ಯಾಂಜಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"ಕಚಿನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"ಕಬೈಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"ಒಸಿಟನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"ಜ್ಜು"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"ಕಂಬಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"ಮೆಂಡೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"ಒಜಿಬ್ವಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"ಮೆರು"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"ಆರ್ಮೇನಿಯಾದ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"ಒರೊಮೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"ಕಾವಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"ಒಡಿಯ"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ಒಸ್ಸೆಟಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"ಕಬರ್ಡಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"ಮೊರಿಸನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"ಸ್ರಾನನ್ ಟೋಂಗೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"ಪಂಜಾಬಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"ಡುವಾಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"ಸೇರೇರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"ಪಾಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"ಪೊಲಿಶ್"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"ಮಧ್ಯ ಡಚ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"ಡಾಂಗಿ ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"ಪಾಷ್ಟೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"ಪೋರ್ಚುಗೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"ಮಧ್ಯ ಐರಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"ವಿಂಗಡಣೆ ಕ್ರಮ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ಬ್ರೆಜಿಲಿಯನ್ ಪೋರ್ಚುಗೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"ಟ್ಯಾಪ್"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"ಮ್ಯಖುವಾ- ಮೀಟ್ಟೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"ಕರೆನ್ಸಿ ಸ್ವರೂಪ"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"ಬ್ರಜ್"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"ಮೆಟಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 ಗಂಟೆ ವ್ಯವಸ್ಥೆ (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 ಗಂಟೆ ವ್ಯವಸ್ಥೆ (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"ಸಹೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"ಮ್ಯಾನ್ಮಾರ್ ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ಕ್ವೆಚುವಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"ಝೋಪೊಟೆಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"ಬೋಡೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"ಲಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"ಮ್ಯಾಕೊಂಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ಇಥಿಯೋಪಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 ಗಂಟೆ ವ್ಯವಸ್ಥೆ (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 ಗಂಟೆ ವ್ಯವಸ್ಥೆ (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"ರೊಮಾನ್ಶ್"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"ರುಂಡಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"ಕರೆನ್ಸಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"ರೊಮೇನಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"ಒರಿಯಾ ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"ಚೀನಾದ ದಶಮಾಂಶ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ರಷ್ಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"ಕಿನ್ಯಾರ್\u200cವಾಂಡಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"ಬ್ಲಿಸ್ಸಿಂಬಲ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"ಕಬುವೆರ್ಡಿಯನು"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"ಮಿಕ್\u200cಮ್ಯಾಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"ಸುಕುಮಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ಆಸ್ಟ್ರೇಲಿಯನ್ ಇಂಗ್ಲಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"ಸಂಸ್ಕೃತ"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"ಸರ್ಡೀನಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"ಸುಸು"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"ಸಿಂಧಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"ಉತ್ತರ ಸಾಮಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"ಮಿನಂಗ್\u200cಕಬಾವು"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"ಸಾಂಗೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"ಸರ್ಬೋ-ಕ್ರೊಯೇಶಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"ಸುಮೇರಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"ಸ್ಲೋವಾಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"ಸ್ಲೋವೇನಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"ಸಮೋವನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"ಶೋನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"ಸೊಮಾಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"ಅರೇಬಿಕ್-ಇಂಡಿಕ್ ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"ಅಲ್ಬೇನಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"ಸೆರ್ಬಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"ಸ್ವಾತಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"ಅಕೌಂಟಿಂಗ್ ಕರೆನ್ಸಿ ಸ್ವರೂಪ"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"ದಕ್ಷಿಣ ಸೋಥೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"ಜಾವನೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"ಸ್ವೀಡಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"ಸ್ವಹಿಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"ಸಾಂಪ್ರದಾಯಿಕ ಚೀನಿ ಆರ್ಥಿಕ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ಇಬಿಬಿಯೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ಇಬಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"ಏಷ್ಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"ಬುರಿಯಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"ಮಧ್ಯ ಏಷ್ಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"ಪಶ್ಚಿಮ ಏಷ್ಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"ತಾಜಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"ಟಿಗ್ರಿನ್ಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"ಬುಗಿನೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"ಕೋರೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"ಕೆನೆಡಿಯನ್ ಇಂಗ್ಲಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"ಟರ್ಕ್\u200cಮೆನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"ಸ್ವಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"ಟೋಂಗನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"ಜೊಲ-ಫೊನ್ಯಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"ಜಪಾನೀ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"ಟರ್ಕಿಶ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"ಸೋಂಗಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"ಕೊಮೊರಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"ಕಾಕಂ"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"ಟಾಟರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"ಡ್ಯೂಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"ಟ್ವಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"ಟಹೀಟಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"ಯೂರೋಪ್"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"ಪೂರ್ವ ಯೂರೋಪ್"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"ಉತ್ತರ ಯೂರೋಪ್"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"ಡಜಾಗ"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"ಪಶ್ಚಿಮ ಯೂರೋಪ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ಉಯಿಘರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"ಪ್ರಾಚೀನ್ ಇಟಾಲಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"ಸಾಮಾನ್ಯ"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ಉಕ್ರೇನಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"ಕೋಪ್ಟಿಕ್ ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"ಉರ್ದು"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"ಕಲ್ಮೈಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"ಝೆನಾಗಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ಉಜ್ಬೇಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"ಖಾಸಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"ಲೋ ಸ್ಯಾಕ್ಸನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"ಸೈಲೋಟಿ ನಗ್ರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"ವೆಂಡಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"ಮಿಂಗೋ ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"ವಿಯೆಟ್ನಾಮೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"ಖೋಟಾನೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"ಕೊಯ್ರ ಚೀನಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"ಕಾಲ ಚಕ್ರ (12 ವಿರುದ್ಧ 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"ವೋಲಾಪುಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"ಶಾಸ್ತ್ರೀಯ ಸಿರಿಯಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"ಓಸ್ಮಾನ್ಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"ಕಿಷೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"ಗ"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"ವಾಲೂನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"ಗಗೌಜ್"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"ಗಾನ್ ಚೀನೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"ಲಿಡಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"ಸುಮೇರೋ-ಅಕ್ಕಾಡಿಯನ್ ಕ್ಯೂನಿಫಾರ್ಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"ವೋಲೋಫ್"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"ಸ್ಟ್ಯಾಂಡರ್ಡ್ ಮೊರೊಕ್ಕನ್ ಟಮಜೈಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"ಆಧುನಿಕ ಪ್ರಮಾಣಿತ ಅರೇಬಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"ಯುನಿಟೆಡ್ ಕೆನೆಡಿಯನ್ ಅಬೊರಿಜಿನಲ್ ಸಿಲ್ಯಾಬಿಕ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"ಗಾಯೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"ಮಂಚು"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"ಫ್ರಾಕ್ತರ್ ಲ್ಯಾಟಿನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"ಗ್ಬಾಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"ಮಣಿಪುರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"ಗೇಲಿಕ್ ಲ್ಯಾಟಿನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"ಸರಳೀಕೃತ ಚೀನಿ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"ಸಾಂಪ್ರದಾಯಿಕ ಚೀನಿ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"ಕ್ಸೋಸ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"ರೋಮನ್ ಲೋವರ್\u200cಕೇಸ್ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"ಬ್ಲಿನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"ಲೈಸಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"ಓಸಾಜ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"ಮೂನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"ಮೊಹಾವ್ಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"ಕಾಕೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"ಯಿಡ್ಡಿಶ್"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"ಮೊಸ್ಸಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"ಡಸರ್ಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"ಯೊರುಬಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"ಸಾಂಪ್ರದಾಯಿಕ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"ಮೆಕ್ಸಿಕನ್ ಸ್ಪ್ಯಾನಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"ಪಶ್ಚಿಮ ಸಿರಿಯಾಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"ಒಟ್ಟೋಮನ್ ತುರ್ಕಿಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"ಎಸ್ಟ್ರಾಂಜಿಲೋ ಸಿರಿಯಾಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"ವಾಯಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"ಝೂವಾಂಗ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"ಕರೇನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"ಕಲೆಂಜಿನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"ಚೈನೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"ಬೋಪೊಮೋಫೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"ಪ್ರಾಚೀನ ಪೆರ್ಮಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"ಲೈನ್ ಬ್ರೇಕ್ ಶೈಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"ಜುಲು"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"ಫೋನ್\u200cಬುಕ್ ವಿಂಗಡಣೆ ಕ್ರಮ"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"ಕಿಂಬುಂಡು"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"ಜಪಾನೀ ಆರ್ಥಿಕ ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"ಚಾಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"ಗೀಝ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"ಪೂರ್ವ ಸಿರಿಯಾಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"ಪರಿಷ್ಕೃತ ಅನುಕ್ರಮ ವಿನ್ಯಾಸ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"ಈಜಿಪ್ಟಿಯನ್ ಡೆಮೋಟಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"ಈಜಿಪ್ಟಿಯನ್ ಹಯಾರಿಟಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"ಎಂಬು"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"ಈಜಿಪ್ಟಿಯನ್ ಹೀರೋಗ್ಲಿಫ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"ಜಾರ್ಜಿಯನ್ ಖುಸ್ತುರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"ಸರಳೀಕೃತ ಚೈನೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"ಕೋಮಿ-ಪರ್ಮ್ಯಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"ಪ್ರಾಚೀನ ಹಂಗೇರಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"ಕೊಂಕಣಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"ಕೊಸರಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"ಸಾಂಪ್ರದಾಯಿಕ ಚೈನೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"ಕಪೆಲ್ಲೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"ಖಮೆ ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ಇಲ್ಲಿಕೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"ಸಿಪ್ರಿಯಾಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"ಮುಂಡಂಗ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"ಗುರ್ಮುಖಿ ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"ಬಹುಸಂಖ್ಯೆಯ ಭಾಷೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"ಕ್ಯಾಡ್ಡೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"ಮಾಪನ ವ್ಯವಸ್ಥೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"ಕ್ರೀಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"ಗ್ಲಾಗೋಲಿಟಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"ಗಿಲ್ಬರ್ಟೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"ಚೆರೋಕೀ"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"ಕಾರಿಬ್"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"ತಮಿಳು ಅಂಕೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"ಕರಚಯ್-ಬಲ್ಕಾರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ಇಂಗುಷ್"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"ದರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"ಕರೇಲಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"ಎಫಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"ಸಂಖ್ಯೆಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"ಕುರುಖ್"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"ಶಂಬಲ"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"ಬಫಿಯ"_s)
		})
	}));
	return data;
}

LocaleNames_kn::LocaleNames_kn() {
}

$Class* LocaleNames_kn::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_kn, name, initialize, &_LocaleNames_kn_ClassInfo_, allocate$LocaleNames_kn);
	return class$;
}

$Class* LocaleNames_kn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun