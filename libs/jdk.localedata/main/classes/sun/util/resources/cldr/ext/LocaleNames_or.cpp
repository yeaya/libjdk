#include <sun/util/resources/cldr/ext/LocaleNames_or.h>

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

$MethodInfo _LocaleNames_or_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_or, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_or, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_or_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_or",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_or_MethodInfo_
};

$Object* allocate$LocaleNames_or($Class* clazz) {
	return $of($alloc(LocaleNames_or));
}

void LocaleNames_or::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_or::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_FJ, u"ଫିଜି"_s);
	$var($String, metaValue_NR, u"ନାଉରୁ"_s);
	$var($String, metaValue_SO, u"ସୋମାଲିଆ"_s);
	$var($String, metaValue_TK, u"ଟୋକେଲାଉ"_s);
	$var($String, metaValue_TO, u"ଟୋଙ୍ଗା"_s);
	$var($String, metaValue_TV, u"ତୁଭାଲୁ"_s);
	$var($String, metaValue_ar, u"ଆରବିକ୍"_s);
	$var($String, metaValue_el, u"ଗ୍ରୀକ୍"_s);
	$var($String, metaValue_gu, u"ଗୁଜୁରାଟୀ"_s);
	$var($String, metaValue_jv, u"ଜାଭାନୀଜ୍"_s);
	$var($String, metaValue_ka, u"ଜର୍ଜିୟ"_s);
	$var($String, metaValue_ko, u"କୋରିଆନ୍"_s);
	$var($String, metaValue_la, u"ଲାଟିନ୍"_s);
	$var($String, metaValue_lo, u"ଲାଓ"_s);
	$var($String, metaValue_ml, u"ମାଲାୟଲମ୍"_s);
	$var($String, metaValue_or, u"ଓଡ଼ିଆ"_s);
	$var($String, metaValue_si, u"ସିଂହଳ"_s);
	$var($String, metaValue_su, u"ସୁଦାନୀଜ୍"_s);
	$var($String, metaValue_ta, u"ତାମିଲ୍"_s);
	$var($String, metaValue_te, u"ତେଲୁଗୁ"_s);
	$var($String, metaValue_th, u"ଥାଇ"_s);
	$var($String, metaValue_ban, u"ବାଲିନୀଜ୍"_s);
	$var($String, metaValue_ccp, u"ଚକମା"_s);
	$var($String, metaValue_got, u"ଗୋଥିକ୍"_s);
	$var($String, metaValue_zbl, u"ବ୍ଲିସିମ୍ବଲସ୍"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"କୋଲୋବନିୟ"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"ଓଘାମା"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"ମିରାଣ୍ଡିଜ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"ସଙ୍କେତଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"ଆତ୍ସମ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"ମାରୱାରୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"ତଗବାନ୍ୱା"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"ଇମୋଜି"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"ପ୍ରାଚୀନ୍ ମିଶିରି"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"ରାଜସ୍ଥାନୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"ଫାଗସ୍-ପା"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"ତିମନେ"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"ତେସା"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"ରାପାନୁଇ"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"ତେରେନୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"ଆସେନସିଅନ୍\u200c ଦ୍ୱୀପ"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"ରାରୋତୋଙ୍ଗନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"ତେତୁମ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"ଆଣ୍ଡୋରା"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"ସଂଯୁକ୍ତ ଆରବ ଏମିରେଟସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"ଫ୍ଲେମିଶ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"ଆଫଗାନିସ୍ତାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"ଆଣ୍ଟିଗୁଆ ଏବଂ ବାରବୁଦା"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"ଇଥିଓପିକ୍\u200c କ୍ୟାଲେଣ୍ଡର୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"ଆଙ୍ଗୁଇଲ୍ଲା"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"ଆଲବାନିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"ଆର୍ମେନିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"ତେଙ୍ଗୱାର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"ଆଙ୍ଗୋଲା"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"ଆଣ୍ଟାର୍କାଟିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"ଆର୍ଜେଣ୍ଟିନା"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"ଇନସ୍କ୍ରୀପସାନଲ୍ ପାର୍ଥିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"ଆମେରିକାନ୍ ସାମୋଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"ଅଷ୍ଟ୍ରିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"ଅଷ୍ଟ୍ରେଲିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"ଆରୁବା"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"ଆମେରିକୀୟ ଇଂରାଜୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"ଅଲାଣ୍ଡ ଦ୍ଵୀପପୁଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"ଆଜେରବାଇଜାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"ବୋସନିଆ ଏବଂ ହର୍ଜଗୋଭିନା"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"ବାରବାଡୋସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"ସୀବୁଆନୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"ବାଂଲାଦେଶ"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"କୁମୀକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"ବେଲଜିୟମ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"ମିଡିଲ୍ ହାଇ ଜର୍ମାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"ବୁର୍କିନା ଫାସୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"ବୁଲଗେରିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"ବାହାରିନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"ବୁରୁଣ୍ଡି"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"ବେନିନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"ସେଣ୍ଟ ବାର୍ଥେଲେମି"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"ବର୍ମୁଡା"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"କୁତେନାଉ"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ଏର୍ଜୟା"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ବ୍ରୁନେଇ"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"ବୋଲଭିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"କାରବିୟନ୍\u200c ନେଦରଲ୍ୟାଣ୍ଡ"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ବ୍ରାଜିଲ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"ବାହାମାସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"ସୋଗା"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"ଭୁଟାନ"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"ବୌଭେଟ୍\u200c ଦ୍ୱୀପ"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"ବୋଟସ୍ୱାନା"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"ବେଲାରୁଷ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"ବେଲିଜ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"ଭିଜିବଲ୍ ସ୍ପିଚ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"ପର୍ସିଆନ୍\u200c କ୍ୟାଲେଣ୍ଡର୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"ହିବୃ ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"କାନାଡା"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"କୋକୋସ୍ (କୀଲିଂ) ଦ୍ଵୀପପୁଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"ମାଜାନଡେରାନି"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"କଙ୍ଗୋ (ଡିଆରସି)"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"ମଧ୍ୟ ଆଫ୍ରିକୀୟ ସାଧାରଣତନ୍ତ୍ର"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"କଙ୍ଗୋ-ବ୍ରାଜିଭିଲ୍ଲେ"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"ସ୍ୱିଜରଲ୍ୟାଣ୍ଡ"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"କୋତ୍ ଡି ଭ୍ଵାର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"କୁକ୍\u200c ଦ୍ୱୀପପୁଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"ଚିଲ୍ଲୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"କୈଥି"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"କାମେରୁନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"ଚିନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"କୋଲମ୍ବିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"କ୍ଲିପରଟନ୍\u200c ଦ୍ୱୀପ"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"କୋଷ୍ଟା ରିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"କ୍ୱିବା"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"କେପ୍ ଭର୍ଦେ"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"କୁରାକାଓ"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"ଖ୍ରୀଷ୍ଟମାସ ଦ୍ୱୀପ"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"ସାଇପ୍ରସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"ଚେଚିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ଏକାଜୁକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"ଜର୍ମାନୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"ପୁରୁଣା ହାଇ ଜର୍ମାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ଆଚାଇନୀଜ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"ଚିଗା"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"ଡିଏଗୋ ଗାର୍ସିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"ଦେବନାଗରୀ ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"ଜିବୋଟି"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"ଡେନମାର୍କ"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"ଆକୋଲି"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"ଗୋଣ୍ଡି"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"ବ୍ରେଲ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"ବ୍ରାହ୍ମୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"ଡୋମିନିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"ଆର୍ମେନିୟ ଛୋଟ ଅକ୍ଷର ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"ଡୋମିନିକାନ୍\u200c ସାଧାରଣତନ୍ତ୍ର"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"ଗୋରୋଣ୍ଟାଲୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"ମାଏତି ମାୟେକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"ଜୁନୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"ଟାଇଗ୍ରେ"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"ଆଲଜେରିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"ପାଙ୍ଗାସିନିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"ପାହ୍ଲାଭି"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"ସିଉଟା ଏବଂ ମେଲିଲା"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"ଚିବ୍ଚା"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"ପାମ୍ପାଙ୍ଗା"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"ଇକ୍ୱାଡୋର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"ପାପିଆମେଣ୍ଟୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"ଆଦାଙ୍ଗେମ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"ଏସ୍ତୋନିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"ତୀଭ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"ଇଜିପ୍ଟ"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"ପଶ୍ଚିମ ସାହାରା"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"ଛଗତାଇ"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"ପାଲାଉଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"ଚୁକୀସେ"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"ଚିନୁକ୍ ଜାରଗାଁନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"ମାରୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"ଚିପେୱାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"ଚୋଟୱା"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"ଚେରୋକୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"ଇରିଟ୍ରିୟା"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"ସ୍ପେନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"ଇଥିଓପିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"ୟୁରୋପୀୟ ସଂଘ"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"ଏଲାମାଇଟ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"ଗ୍ରେଗୋରିୟ କ୍ୟାଲେଣ୍ଡର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"ୟୁରୋକ୍ଷେତ୍ର"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"ଚେଚେନା"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"ଗୁଜରାଟୀ ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"ସିନ୍ଧୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"ଅଦ୍ୟଘେ"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"ଫିନଲ୍ୟାଣ୍ଡ"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"ଫକ୍\u200cଲ୍ୟାଣ୍ଡ ଦ୍ଵୀପପୁଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"ମାଇକ୍ରୋନେସିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"ଫାରୋଇ ଦ୍ୱୀପପୁଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"ଫ୍ରାନ୍ସ"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"ଗ୍ରେବୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"ପ୍ରାଚୀନ୍ ୟୁନାନୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"ଗାବୋନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"ଭୋଟିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"ଯୁକ୍ତରାଜ୍ୟ"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"ନାଇଜେରୀୟ ପିଡଗିନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"ଗ୍ରେନାଡା"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"ଜର୍ଜିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"ଫ୍ରେଞ୍ଚ ଗୁଇନା"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"ଗୁଏରନେସି"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"ଘାନା"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"ତାଇ ଲେ"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"ଜିବ୍ରାଲ୍ଟର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"ଆଫ୍ରିହିଲି"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"ଗ୍ରୀନଲ୍ୟାଣ୍ଡ"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"ମଧ୍ୟ ଇଁରାଜୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"ଗାମ୍ବିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"ଗୁଇନିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"ଗୁଆଡେଲୋପ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"ଇକ୍ବାଟେରିଆଲ୍ ଗୁଇନିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"ଗ୍ରୀସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"ଦକ୍ଷିଣ ଜର୍ଜିଆ ଏବଂ ଦକ୍ଷିଣ ସାଣ୍ଡୱିଚ୍ ଦ୍ୱୀପପୁଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"ଗୁଏତମାଲା"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"ଗୁଆମ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"ଗୁଇନିଆ-ବିସାଉ"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"ତ୍ଲିଙ୍ଗିଟ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"କ୍ଲିଙ୍ଗନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"ନୂତନ ତାଇ ଲୁଏ"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"ଗୁଇନା"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"କେନ୍ଦ୍ରୀୟ କୁରଡିସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"କୌଣସି ଲିଙ୍ଗୁଇଷ୍ଟ ସାମଗ୍ରୀ ନାହିଁ"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"ଅଷ୍ଟ୍ରିଆନ୍ ଜର୍ମାନ"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"ହଂ କଂ ଏସଏଆର୍\u200c ଚାଇନା"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"ୱାଇ"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"ହାର୍ଡ୍\u200c ଏବଂ ମ୍ୟାକଡୋନାଲ୍ଡ ଦ୍ୱୀପପୁଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"ହୋଣ୍ଡୁରାସ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"କ୍ରୋଏସିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"ଆଘେମ"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"ସୁଇସ୍ ଜର୍ମାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"ହାଇତି"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"ହଙ୍ଗେରୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"ତାମାଶେକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"କେନେରୀ ଦ୍ୱୀପପୁଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"ଇଣ୍ଡୋନେସିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"ପୁରୁଣା ପର୍ସିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"ଆୟରଲ୍ୟାଣ୍ଡ"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"ନୀପୋଲିଟାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"ନାମା"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"ଜାଜା"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ଇସ୍ରାଏଲ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"ଆଇଲ୍\u200c ଅଫ୍\u200c ମ୍ୟାନ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ଭାରତ"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"ବ୍ରିଟିଶ୍\u200c ଭାରତ ମାହାସାଗର କ୍ଷେତ୍ର"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"ଇରାକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ଇରାନ"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"ଆଇସଲ୍ୟାଣ୍ଡ"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ଇଟାଲୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"ଗାଣିତିକ ନୋଟେସନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"ଥାଇ ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"ବଙ୍ଗଳା ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"ଜର୍ସି"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"ଇସଲାମିକ୍\u200c କ୍ୟାଲେଣ୍ଡର୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"ଜାମାଇକା"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"ବଙ୍ଗାଳୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"ଜୋର୍ଡାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"ଜାପାନ"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"ଆଇନୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"ଗୁସି"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"ନ୍ୟାସା ଟୋଙ୍ଗୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"କନ୍ନଡ଼ ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"କାୟାହା ଲୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"ସ୍ୱିସ୍\u200c ହାଇ ଜର୍ମାନ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"ବୌଦ୍ଧଧର୍ମାଲମ୍ବୀଙ୍କ କ୍ୟାଲେଣ୍ଡର୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"କେନିୟା"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"ଲାଟିନ୍\u200c ଆମେରିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"କିର୍ଗିଜିସ୍ତାନ"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"କାମ୍ବୋଡିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"କିରିବାଟି"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"କୋମୋରସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"ସେଣ୍ଟ କିଟସ୍\u200c ଏବଂ ନେଭିସ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"କନ୍ନଡ଼"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"ବଂଶଗତ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"କାନାଡିୟ ଫ୍ରେଞ୍ଚ"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"ଉତ୍ତର କୋରିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"ଦକ୍ଷିଣ କୋରିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"ପୋଲାର୍ଡ ଫୋନେଟିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"ସ୍ୱିସ୍ ଫ୍ରେଞ୍ଚ"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"କୁଏତ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"ଟୋକ୍ ପିସିନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"କେମ୍ୟାନ୍\u200c ଦ୍ୱୀପପୁଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"କାଜାକାସ୍ତାନ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"ସିରିଲିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"ଲାଓସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"ଲେବାନନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"ସେଣ୍ଟ ଲୁସିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"ଫୋନେସିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"ଓଲ୍ଡ ଚର୍ଚ୍ଚ ସାଲଭୋନିକ୍ ସିରିଲିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"ଗୱିଚ’ଇନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"ଲୋ ଜର୍ମାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"ଲିଚେଟନଷ୍ଟେଇନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"ଶ୍ରୀଲଙ୍କା"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"ଆକାଡିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"କପ୍ଟିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"ଲାଇବେରିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"ଲେସୋଥୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"ବୁକ୍ ପାହାଲାୱୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"ଲିଥୁଆନିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"ଲକ୍ସେମବର୍ଗ"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"ଲାଟଭିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"କାତାକାନା"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"ଲିବ୍ୟା"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ଲାଦିନୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"ଭୁନଜୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"ଲାହାଣ୍ଡା"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"ଲାନଗି"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"ଥାନା"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"ମୋରୋକ୍କୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"ମୋନାକୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"ମୋଲଡୋଭା"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"ମଣ୍ଟେନିଗ୍ରୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"ସେଣ୍ଟ ମାର୍ଟିନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"ଲାମ୍ବା"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"ମାଡାଗାସ୍କର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"ମାର୍ଶାଲ୍ ଦ୍ୱୀପପୁଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"ଆଲେଇଟୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"ଉତ୍ତର ମାସେଡୋନିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"ମାଲି"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"ମିଆଁମାର"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"ମଙ୍ଗୋଲିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"ନେୱାରୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"ମାକାଉ ଏସଏଆର୍\u200c ଚାଇନା"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"ଉତ୍ତର ମାରିଆନା ଦ୍ୱୀପପୁଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"ମାର୍ଟିନିକ୍ୟୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"ମୌରିଟାନିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"ମଣ୍ଟେସେରାଟ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"ମାଲ୍ଟା"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"ମରିସସ"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"ଦକ୍ଷିଣ ଆଲ୍ଟାଇ"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"ମାଲଦିଭସ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"ମାଲୱି"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"ମେକ୍ସିକୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"ଜାପାନିଜ୍\u200c କ୍ୟାଲେଣ୍ଡର୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"ମାଲେସିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"ମୋଜାମ୍ବିକ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"ଇନସ୍କ୍ରୀପସାନଲ୍ ପାହାଲାୱୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"ନାମିବିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"ଉପ-ସାହାରା ଆଫ୍ରିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"ହିବୃ କ୍ୟାଲେଣ୍ଡର୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"ନୂତନ କାଲେଡୋନିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"ନାଇଜର"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"ନର୍ଫକ୍ ଦ୍ଵୀପ"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"ନାଇଜେରିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"ତାରୋକୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"ସ୍ଲାଟର୍ ପାହାଲାୱୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"ନିକାରାଗୁଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"ପାହୋ ହୋଙ୍ଗ"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"ନେଦରଲ୍ୟାଣ୍ଡ"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"ନରୱେ"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"ନେପାଳ"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"ନିଉ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"ଫେନୋସିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"ରୋମ୍ବୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"ତିସିମିସିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"ନ୍ୟୁଜିଲାଣ୍ଡ"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"ରୋମାନି"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"ମେରୋଇଟିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"କ୍ରୀମିନ୍ ତୁର୍କୀସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"ପୁରୁଣା ଇଁରାଜୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"ଓମାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"ଅଁଗୀକା"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"ସେସେଲୱା କ୍ରେଓଲେ ଫ୍ରେଞ୍ଚ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"ପୁରୁଣା ଫରାସୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"ପାନାମା"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"କାଶୁବିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ବ୍ରିଟିଶ୍\u200c ଇଂରାଜୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"ପେରୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"ଫ୍ରେଞ୍ଚ ପଲିନେସିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"ପପୁଆ ନ୍ୟୁ ଗୁଏନିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"ଫିଲିପାଇନସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"ପାକିସ୍ତାନ"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"ପୋଲାଣ୍ଡ"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"ଇୱୋଣ୍ଡୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"ସେଣ୍ଟ ପିଏରେ ଏବଂ ମିକ୍ୱେଲନ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"ପିଟକାଇରିନ୍\u200c ଦ୍ୱୀପପୁଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"ପୁଏର୍ତ୍ତୋ ରିକୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"ପାଲେଷ୍ଟେନିୟ ଭୂଭାଗ"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"ପର୍ତ୍ତୁଗାଲ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"ପାଲାଉ"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"ନୀୟାସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"ଗ୍ରୀକ୍\u200c ଛୋଟ ଅକ୍ଷର ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"ପାରାଗୁଏ"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"ଟୁମ୍ବୁକା"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"ହିବୃ"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"କତାର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"ନିୟୁଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"ସୀମାନ୍ତବର୍ତ୍ତୀ ଓସିନିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"ଲେଜଗିୟାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"ତାଇ ଭିଏତ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"ବିଶ୍ୱ"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"ଆଫ୍ରିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"ଉତ୍ତର ଆମେରିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"ରିୟୁନିଅନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"ଦକ୍ଷିଣ ଆମେରିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ଲୋଜବାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"ରେଜାଙ୍ଗ"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ଓସିନିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"ରୋମାନିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"ସର୍ବିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"ରୁଷିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"ରାୱାଣ୍ଡା"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"ମନଶୀନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"ୟୁଗାରିଟିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"ଖାରୋସ୍ଥି"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"ସାଉଦି ଆରବିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"ପୋହପିଏନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"ମାନଡେନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"ସୋଲୋମନ୍\u200c ଦ୍ୱୀପପୁଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"ତାସାୱାକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"ପଶ୍ଚିମ ଆଫ୍ରିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"ସେଚେଲସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"ସୁଦାନ"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"ମଧ୍ୟ ଆମେରିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"ସ୍ୱେଡେନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"ପୂର୍ବ ଆଫ୍ରିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"ଆରାମାଇକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"ଉତ୍ତର ଆଫ୍ରିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"ସିଙ୍ଗାପୁର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"ସେଣ୍ଟ ହେଲେନା"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"କଠୋର ଧାଡ଼ି ବିରତି ଶୈଳୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"ମଧ୍ୟ ଆଫ୍ରିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"ସ୍ଲୋଭେନିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"ଦକ୍ଷିଣସ୍ଥ ଆଫ୍ରିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"ସାଲବାର୍ଡ ଏବଂ ଜାନ୍\u200c ମାୟେନ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"ଆମେରିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"ସ୍ଲୋଭାକିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"ସିଏରା ଲିଓନ"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"ସାନ୍ ମାରିନୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"ସେନେଗାଲ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(metaValue_SO)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"ମାପୁଚେ"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"ଆରାପାହୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"ପାରମ୍ପରିକ ତାମିଲ୍ ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"ସୁରିନାମ"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"ଦକ୍ଷିଣ ସୁଦାନ"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"ସାଓ ଟୋମେ ଏବଂ ପ୍ରିନସିପି"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"ଏଲ୍ ସାଲଭାଡୋର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"ସିଣ୍ଟ ମାର୍ଟୀନ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"ସିରିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"ୟାଓ"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"ଇସ୍ୱାତିନୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"ଆରୱକ"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"ୟାପୀସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ଟ୍ରାଇଷ୍ଟନ୍\u200c ଦା କୁନ୍\u200cଚା"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"ଆସୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"ୟୁଏସ୍\u200c ମାପ ପଦ୍ଧତି"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"ଉତ୍ତରସ୍ଥ ଆମେରିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"ତୁର୍କସ୍\u200c ଏବଂ କାଇକୋସ୍\u200c ଦ୍ୱୀପପୁଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"ୟାଂବେନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"ଚାଦ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"ଫରାସୀ ଦକ୍ଷିଣ କ୍ଷେତ୍ର"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"ଟୋଗୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"ଥାଇଲ୍ୟାଣ୍ଡ"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"ତାଜିକିସ୍ଥାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"କାରିବିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"ତିମୋର୍-ଲେଷ୍ଟେ"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"ୟେମବା"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"ତୁର୍କମେନିସ୍ତାନ"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"ଟ୍ୟୁନିସିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(metaValue_TO)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"ତୁର୍କୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ତ୍ରିନିଦାଦ୍ ଏବଂ ଟୋବାଗୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"ତାଇୱାନ"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"ଆଷ୍ଟୁରିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"ଓରୋଖନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"ତାଞ୍ଜାନିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"କୱାସିଓ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"ଅଜଣା ଲିପି"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"ୟୁକ୍ରେନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"ଆରୋମାନିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"ପୂର୍ବ ଏସିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"ତୁଭିନିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"କଙ୍ଗୋ ସ୍ୱାହିଲି"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"ଦକ୍ଷିଣ ଏସିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"ହାଇଡା"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"ଦକ୍ଷିଣପୂର୍ବ ଏସିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"ଉଗାଣ୍ଡା"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"ଦକ୍ଷିଣ ୟୁରୋପ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"ଯୁକ୍ତରାଷ୍ଟ୍ର ଆଉଟ୍\u200cଲାଇଙ୍ଗ ଦ୍ଵୀପପୁଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"ଜାତିସଂଘ"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"ଯୁକ୍ତ ରାଷ୍ଟ୍ର"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"ହାୱାଇନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"ଏକାଡେମିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"ଉରୁଗୁଏ"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"ପ୍ରୁସିୟ"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"ଉଜବେକିସ୍ତାନ"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"କେନ୍ଦ୍ରୀୟ ଆଟଲାସ୍ ଟାମାଜିଘାଟ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"ନାଗିମବୋନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"ଭାଟିକାନ୍ ସିଟି"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"ପୁରୁଣା ପ୍ରେଭେନେସିଆଲ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"ସେଣ୍ଟ ଭିନସେଣ୍ଟ ଏବଂ ଦି ଗ୍ରେନାଡିସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"ଭେନେଜୁଏଲା"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"ବ୍ରିଟିଶ୍\u200c ଭର୍ଜିନ୍ ଦ୍ୱୀପପୁଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"ଯୁକ୍ତରାଷ୍ଟ୍ର ଭିର୍ଜିନ୍ ଦ୍ଵୀପପୁଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"ଭିଏତନାମ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"ଭାନୁଆତୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"ନୋଗାଇ"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"ଆରଡବ୍ୟୁଏ"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"ପୁରୁଣା ନର୍ସ"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"ଅଷ୍ଟ୍ରେଲେସିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"ମେଲାନେସିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"ୱାଲିସ୍ ଏବଂ ଫୁତୁନା"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"ମାଇକ୍ରୋନେସିଆନ୍ ଅଞ୍ଚଳ"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"ନାଗୋମ୍ଵା"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"ଲାକୋଟା"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"ୱାଲସେର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"ସାମୋଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"ୱାଲମୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"ୱାସୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"ସିୟୁଡୋ-ଏସେଣ୍ଟ"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"ୱାରୈ"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"ସିୟୁଡୋ-ବିଡି"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"ଆୱାଧି"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"ପଲିନେସିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"କୋସୋଭୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"ଅଲିଖିତ"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ଓଲ୍ ଚିକି"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"ବାଟାକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"ୟେମେନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"ଏନକୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"ମାନାଙ୍କ ସର୍ଟ୍\u200c କ୍ରମ"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"ଫାଙ୍ଗ"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"ଫାଣ୍ଟି"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"ସାଙ୍କେତିକ ଲିଖ"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"ମାୟୋଟେ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"ଦକ୍ଷିଣ ଆଫ୍ରିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"ଢିଲା ଧାଡ଼ି ବିରତି ଶୈଳୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"ଦେବନଗରୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"ଜର୍ଜିଆନ୍\u200c ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"ହିରାଗାନା"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"ଜାମ୍ବିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"ଜିମ୍ବାୱେ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"ଅଜଣା ଅଞ୍ଚଳ"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"ରନିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"ମେଟ୍ରିକ୍\u200c ପଦ୍ଧତି"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 କ୍ୟାଲେଣ୍ଡର୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"ମଙ୍ଗୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"ଉତ୍ତରୀ ସୋଥୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"ତେଲୁଗୁ ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"ଲୋଜି"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"ମାଚେମେ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"ସରଳୀକୃତ ଚିନି ଆର୍ଥିକ ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"ହିଲିଗୈନନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"ପରିବର୍ଦ୍ଧିତ ଆରବିକ୍\u200c-ଇଣ୍ଡିକ୍\u200c ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"ନୁଏର"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"ଡାକୋଟା"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"ପୂର୍ଣ୍ଣ-ପ୍ରସ୍ଥ ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"ହିତୀତେ"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"ଡାରାଗ୍ୱା"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"ତାଇତି"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"ମୟାନ୍ ହାୟରଲଜିକସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"ଉତ୍ତର ଲୁରି"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"କପଟିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"ପାରମ୍ପରିକ ନେୱାରୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"ଉଦମୂର୍ତ୍ତ"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"ଖମେର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"ଲିମ୍ବୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"ସଣ୍ଡାୱେ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"ରୋମାନ୍\u200c ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"ସାଖା"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"ସାମୌରିଟନ୍ ଆରମାଇକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"ସମବୁରୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"ସାସାକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"ସାନ୍ତାଳି"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"ତିଫିଙ୍ଘା"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"ଜୁଡେଓ-ପର୍ସିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"ନଗାମବେ"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"ଗୁରମୁଖୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of(u"ଆଲୁକୁ ଉପଭାଷା"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"ଲୁବା-ଲୁଲୁଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"ସାନଗୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"ଲୁଇସେନୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ନ୍ୟାନକୋଲ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"ନ୍ୟାମୱେଜୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"ଲୁଣ୍ଡା"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"ନ୍ୟାରୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"ଲୁଓ"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"ଫିଲିପିନୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"ହଁଙ୍ଗ"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"ଡେଲାୱେର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"ମିଜୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"ବାଲୁଚି"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"ସ୍ଲେଭ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"ୟୁଗୋରଟିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"ଲୁୟିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"ବାସା"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"ଜୁଡେଓ-ଆରବୀକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"ୟୁରୋପୀୟ ସ୍ପାନିସ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"ଞ୍ଜିମା"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"ସ୍କଟସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"ସିଶିଲିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"ଅଫାର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"ଆବ୍ଖାଜିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"ଅବେସ୍ତନ"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"ଆଫ୍ରିକୀୟ"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"ଅକନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"ଆମହାରକି"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"ଆର୍ଗୋନୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"ଜାପାନୀଜ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"ଜାପାନୀ ସିଲାବରିଜ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"ଆସାମୀୟ"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"ଲିନିୟର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"ଆଭାରିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"ଲିନିୟର୍ ବି"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"ଆୟମାରା"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"ଆଜେରବାଇଜାନି"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UNIFON"_s),
			$of(u"ୟୁନିଫନ୍ ଫନେଟିକ୍ ଆଲଫାବେଟ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"ବାଶକିର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"ବେଲାରୁଷିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"ବୁଲଗେରିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"ବିସଲାମା"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"ବାମ୍ବାରା"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"ବଙ୍ଗଳା"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"ତିବ୍ବତୀୟ"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"ଡୋଗ୍ରିବ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"ବ୍ରେଟନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"ବୋସନିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"ମ୍ୟାନମାର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"ଲାଓ ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"ସେନା"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"ଏନ୍ କୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"ସେଲ୍କପ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"କାଟାଲାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"କୋୟରା ସେନ୍ନି"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"ଚେଚନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"ଚାମୋରୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"କୋର୍ସିକାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"କ୍ରୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"ଚେକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"ଚର୍ଚ୍ଚ ସ୍ଲାଭିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"ଚୁଭାଶ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"ୱେଲ୍ସ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"ଇଥିଓପିକ୍\u200c ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"ୟୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"ଡାନ୍ନିସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"ୟୁରୋପୀୟ ପର୍ତ୍ତୁଗୀଜ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"ଜର୍ମାନ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"ମାନାଙ୍କ ମୁଦ୍ରା ଫର୍ମାଟ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"ବେଜା"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"ଦିଙ୍କା"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"ବୁଗାନୀଜ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"ବେମ୍ବା"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"ପୁରୁଣା ଇରିଶ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"ମଙ୍ଗୋଲୀୟ ଡିଜିଟ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"ଡିଭେହୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"ଲାଟିନ୍\u200c ଆମେରିକୀୟ ସ୍ପାନିସ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"ଦଡଜୋଙ୍ଗଖା"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"ବେନା"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"ଚାଇନିଜ୍\u200c କ୍ୟାଲେଣ୍ଡର୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"ଜର୍ମା"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"ଗ୍ରୀକ୍\u200c ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ଇୱେ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"ସାଧାରଣ ଧାଡ଼ି ବିରତି ଶୈଳୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"ମୋଲଡୋଭିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ଇଂରାଜୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"ଏସ୍ପାରେଣ୍ଟୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"ସ୍ପେନିୟ"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"ଏସ୍ତୋନିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"ବୋପୋମୋଫୋ ସହିତ ହାନ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"ବାସ୍କ୍ୱି"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"ବୁହିଦ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"ହାଙ୍ଗୁଲ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"ସମୌରିଟନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"ତାଚେଲହିଟ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"ଉପର ସର୍ବିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"ହାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"ଶାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"ହାନୁନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"ପର୍ସିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"ସରଳୀକୃତ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"ପାଶ୍ଚାତ୍ୟ ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"ପାରମ୍ପରିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"ଫୁଲାହ"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"ଫିନ୍ନିସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"ଫନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"କାନଟୋନେସେ"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ଫାରୋଏସେ"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"ଉମ୍ବୁଣ୍ଡୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"ଫରାସୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"ସିଦାମୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"ପାଶ୍ଚାତ୍ୟ ଫ୍ରିସିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ଇରିସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"ସ୍କଟିସ୍ ଗାଏଲିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"ଗାଲସିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"ଗୁଆରାନୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"ଭୋଜପୁରୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"ଅଜଣା ଭାଷା"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"ମାଁକ୍ସ"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"ହୌସା"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"ହେବ୍ର୍ୟୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"ହିନ୍ଦୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"ହୁପା"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"ବିକୋଲ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"ବିନି"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"ହିରି ମୋଟୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"କ୍ରୋଆଟିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"ହୈତାୟିନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ହଙ୍ଗେରୀୟ"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"ଆର୍ମେନିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"ହେରେରୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"ଇର୍ଣ୍ଟଲିଙ୍ଗୁଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"ଜାମୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"ଇଣ୍ଡୋନେସୀୟ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"ତିବତୀ ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"ଇର୍ଣ୍ଟରଲିଙ୍ଗୁଇ"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ଇଗବୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"ସିଚୁଆନ୍ ୟୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"ମଧ୍ୟ ଫ୍ରେଞ୍ଚ"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"ଇନୁପିୟାକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"ପୁରୁଣା ଫ୍ରେଞ୍ଚ"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"ଇଡୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"ପୂର୍ବ ଫ୍ରିସିୟାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"ଉତ୍ତର ଫ୍ରିସିୟାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"ଆଇସଲାଣ୍ଡିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ଇଟାଲୀୟ"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"ଇନୁକଟିଟୁତ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"ଜାପାନୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"ସାରାତି"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"ଡୋଗ୍ରୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"ଦକ୍ଷିଣ ସାମି"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"ସାବିୟାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"ମାଦୁରୀସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"ଲୁଲେ ସାମି"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"ମାଗାହୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"ମୈଥିଳୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"ଇନାରୀ ସାମି"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"ସିକସିକା"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"ମକାସର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"ସ୍କୋଲ୍ଟ ସାମି"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"ମାଣ୍ଡିଙ୍ଗୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"କଙ୍ଗୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"କୀକୁୟୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"ମାସାଇ"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"କ୍ୱାନ୍ୟାମ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"କାଜାକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"କାଲାଲିସୁଟ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"ଖାମେର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"କନ୍ନଡ"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"କନୁରୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"କାଶ୍ମିରୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"ସିର୍ଥ"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"ଲେପଚା"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"ଆବେସ୍ଥାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"କୁର୍ଦ୍ଦିଶ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"କୋମି"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"କୋର୍ନିସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"କୀରଗୀଜ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"ସୋନିଙ୍କେ"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"ଲକ୍ସେମବର୍ଗିସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"ମଲୟାଲମ୍ ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"ଗନ୍ଦା"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"ରୋଙ୍ଗୋରୋଙ୍ଗୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"ଲିମ୍ବୁର୍ଗିସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"ତିବେତାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"ଲିଙ୍ଗାଲା"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"ଫ୍ରିୟୁଲୀୟାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"ସାମ୍ରାଜ୍ୟ ସମ୍ବନ୍ଧୀୟ ମାପ ପଦ୍ଧତି"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"ଲିଥୁଆନିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"ଲ୍ୟୁବା-କାଟାଙ୍ଗା"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"ଲାଟଭିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"ସୋଗଡିଏନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"ମାଲାଗାସୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"ମାର୍ଶାଲୀଜ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ଡିଫଲ୍ଟ ୟୁନିକୋଡ୍\u200c ସର୍ଟ୍\u200c କ୍ରମ"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"ମାଓରୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"ମାସେଡୋନିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"ମଙ୍ଗୋଳିୟ"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"ମରାଠୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"ମାଲୟ"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"ମାଲଟୀଜ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"ବର୍ମୀଜ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"ସୌରାଷ୍ଟ୍ର"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"ଆର୍ମେନୀୟ"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"ମୋକ୍ଷ"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"ନିମ୍ନ ସର୍ବିଆନ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"ଇମ୍ପେରିଆଲ୍ ଆରମିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"ସାଧାରଣ ଉଦ୍ଦେଶ୍ୟ-ବିଶିଷ୍ଟ ସନ୍ଧାନ"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"ନରୱେଜିଆନ୍ ବୋକମଲ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"ଉତ୍ତର ନେଡବେଲେ"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"ନେପାଳୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ଡୋଙ୍ଗା"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"ମନ୍ଦାର"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"ଡଚ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"ନରୱେଜିଆନ୍ ନିୟୋର୍ସ୍କ"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"ନରୱେଜିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"ଦକ୍ଷିଣ ନେଡବେଲେ"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"ନାଭାଜୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"କାରା-କଲ୍ପକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ନିୟାଞ୍ଜ"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"କଚିନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"କବାଇଲ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"ଓସିଟାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"ଜଜୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"କମ୍ବା"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"ମେନଡେ"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"ଓଜିୱା"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"ମେରୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"ଆର୍ମେନିୟ ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"ଓରୋମୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"କାୱି"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ଓସେଟିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"କାବାର୍ଡିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"ମୋରିସୟେନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"ଶାରାନା ଟୋଙ୍ଗୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"ପଞ୍ଜାବୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"ଡୁଆନା"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"ଶେରେର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"ପାଲି"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"ପୋଲିଶ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"ମଧ୍ୟ ପର୍ତ୍ତୁଗାଲୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"ଦାଙ୍ଗି କ୍ୟାଲେଣ୍ଡର୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"ପାସ୍ତୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"ପର୍ତ୍ତୁଗୀଜ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"ମଧ୍ୟ ଇରିଶ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"ସର୍ଟ୍\u200c କ୍ରମ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ବ୍ରାଜିଲିଆନ୍ ପର୍ତ୍ତୁଗୀଜ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"ତ୍ୟାପ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"ମଖୁୱା-ମେଟ୍ଟା"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"ମୁଦ୍ରା ଫର୍ମାଟ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"ବ୍ରାଜ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"କ୍ୟାଲେଣ୍ଡର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"ମେଟା"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 ଘଣ୍ଟିଆ ପଦ୍ଧତି (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 ଘଣ୍ଟିଆ ପଦ୍ଧତି (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"ସହୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"ମିଆଁମାର୍\u200c ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"କ୍ୱେଚୁଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"ଜାପୋଟେକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"ବୋଡୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"ଲାନା"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"ମାକୋଣ୍ଡେ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of(u"ବୈଦିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ଇଥିଓପିକ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 ଘଣ୍ଟିଆ ପଦ୍ଧତି (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 ଘଣ୍ଟିଆ ପଦ୍ଧତି (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"ରୋମାନଶ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"ରୁଣ୍ଡି"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"ମୁଦ୍ରା"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"ରୋମାନିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"ଓଡ଼ିଆ ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"ଚିନି ଦଶମିକ ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ରୁଷିୟ"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"କିନ୍ୟାରୱାଣ୍ଡା"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"କାବୁଭେରଡିଆନୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"ମିକମୌକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"ସୁକୁମା"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ଅଷ୍ଟ୍ରେଲିୟ ଇଂରାଜୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"ସଂସ୍କୃତ"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"ସର୍ଦିନିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"ଶୁଶୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"ସିନ୍ଧୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"ଉତ୍ତର ସାମି"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"ମିନାଙ୍ଗାବାଉ"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"ସାଙ୍ଗୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"ସର୍ବୋ-କ୍ରୋଆଟିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"ସୁମେରିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"ସ୍ଲୋଭାକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"ସ୍ଲୋଭେନିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"ସାମୋଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"ଶୋନା"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(metaValue_SO)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"ଆରବିକ୍\u200c-ଇଣ୍ଡିକ୍\u200c ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"ଆଲବାନିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"ସର୍ବିୟ"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"ସ୍ଵାତି"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"ଏକାଉଣ୍ଟିଂ ମୁଦ୍ରା ଫର୍ମାଟ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"ସେସୋଥୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"ସ୍ୱେଡିସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"ସ୍ୱାହିଲ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"ପାରମ୍ପରିକ ଚିନି ଆର୍ଥିକ ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ଇବିବିଓ"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ଇବାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"ଏସିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"ବୁରିଆଟ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"ମଧ୍ୟ ଏସିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"ପଶ୍ଚିମ ଏସିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"ତାଜିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"ଟ୍ରିଗିନିଆ"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"ବୁଗୀନୀଜ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"କୋରୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"କାନାଡିୟ ଇଂରାଜୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"ତୁର୍କମେନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"ଟାଗାଲଗ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"ସୱାନା"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(metaValue_TO)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"ଜୋଲା-ଫୋନୟି"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"ଜାପାନୀ ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"ତୁର୍କିସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"ସୋଙ୍ଗା"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"କୋମୋରିୟ"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"ତାତାର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"ଡୁଆଲା"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"ତ୍ୱି"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"ତାହିତିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"ୟୁରୋପ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"ପୂର୍ବ ୟୁରୋପ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"ଉତ୍ତର ୟୁରୋପ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"ଡାଜାଗା"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"ପଶ୍ଚିମ ୟୁରୋପ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ୟୁଘୁର୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"ପୁରୁଣା ଇଟାଲୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"ସାଧାରଣ"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ୟୁକ୍ରାନିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"ଉର୍ଦ୍ଦୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"କାଲ୍ମୀକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"ଜେନାଗା"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ଉଜବେକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"ଖାସୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"1996ର ଜର୍ମାନ ବର୍ଣ୍ଣପ୍ରକରଣ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"ସୀଲିତୋ ନଗରୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"ଭେଣ୍ଡା"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"ମିଙ୍ଗୋଓ କ୍ୟାଲେଣ୍ଡର୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"ଭିଏତନାମିଜ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"ଖୋତାନୀଜ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"କୋୟରା ଚିନି"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"ଘଣ୍ଟା ଚକ୍ର (12 ବନାମ 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"ବୋଲାପୁକ"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"କ୍ଲାସିକାଲ୍ ସିରିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"ଓସୋମାନିୟା"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"କିଚେ"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"ଗା"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"ୱାଲୁନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"ସିରିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"ଲିଡିୟନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"ସୁମେରୋ-ଆକ୍କାଡିଆନ୍ ସୁନିଫର୍ମ"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"ୱୋଲଫ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"ମାନାଙ୍କ ମରୋକିୟ ତାମାଜିଘାଟ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"ଆଧୁନିକ ମାନାଙ୍କ ଆରବୀୟ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"ୟୁନିଫାଏଡ୍ କାନାଡିଆନ୍ ଆବ୍ରୋଜିନାଲ୍ ସିଲାବିକସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"ଗାୟୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"ମଙ୍ଗୋଲିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"ମାଞ୍ଚୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"ଫ୍ରାକଥୁର୍ ଲାଟିନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"ଗବାୟା"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"ମଣିପୁରୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"ଗାଏଲିକ୍ ଲାଟିନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"ସରଳୀକୃତ ଚିନି ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"ପାରମ୍ପରିକ ଚିନି ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"ଖୋସା"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"ରୋମାନ୍\u200c ଛୋଟ ଅକ୍ଷର ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"ବ୍ଲିନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"ଲିଶିୟନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"ୱୌସେଜ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"ଚନ୍ଦ୍ର"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"ମୋହୌକ"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"କାକୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"ଆଦ୍ୟ ଆଧୁନିକ ଫରାସୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"ୟିଡିସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"ମୋସି"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"ସିରିୟାକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"ଡେସର୍ଟ"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"ୟୋରୁବା"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"ମେକ୍ସିକାନ ସ୍ପାନିସ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"ୱେଷ୍ଟର୍ନ ସିରିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"ଓଟ୍ଟୋମନ୍ ତୁର୍କିସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"ଏଷ୍ଟ୍ରାଙ୍ଗେଲୋ ସିରିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"ଭାଇ"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"ଜୁଆଙ୍ଗ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"କୈରନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"କାଲେନଜିନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"ଚାଇନିଜ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"ବୋପୋମୋଫୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"ଓଲ୍ଡ ପରମିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"ଧାଡ଼ି ବିରତି ଶୈଳୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"ଜୁଲୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"କିମ୍ବୁଣ୍ଡୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"ଜାପାନୀ ଆର୍ଥିକ ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"ଛମ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"ଗୀଜ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"ଇଷ୍ଟର୍ନ ସିରିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"ଟାଗାଲୋଗ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"ଇଜିପ୍ଟିଆନ୍ ଡେମୋଟିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"ଇଜିପ୍ଟିଆନ୍ ହାଇଅରଟିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"ଏମ୍ଵୁ"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"ଇଜିପ୍ଟିଆନ୍ ହାଅରଗ୍ଲିପସ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"ଜର୍ଜିଆନ୍ ଖୁଟସୁରୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"ସରଳୀକୃତ ଚାଇନିଜ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"ପୁରୁଣା ହଙ୍ଗେରିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"କୋଙ୍କଣି"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"ପାରମ୍ପରିକ ଜର୍ମାନ ବର୍ଣ୍ଣପ୍ରକରଣ"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"କୋସରୈନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"ପାରମ୍ପରିକ ଚାଇନିଜ୍\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"କୈପେଲେ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"ଖିମର୍\u200c ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ଇଲୋକୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"ଭେଲେନସିଆନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"ସିପ୍ରଅଟ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"ମୁନଡାଂ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"ଗୁରମୁଖୀ ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"ବିବିଧ ଭାଷାମାନ"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"କାଡୋ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"ମାପ ପଦ୍ଧତି"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"କ୍ରୀକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"ଗ୍ଲାଗ୍ଲୋଟିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"ଜିବ୍ରାଟୀଜ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"ଚିରୁକୀ"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"କାରିବ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"ତାମିଲ୍ ଅଙ୍କଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"କରାଚୟ-ବଲ୍କାର"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ଇଁଙ୍ଗୁଶ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"ଦାରି"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"କାରେଲିୟାନ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"ଏଫିକ୍"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"ସଂଖ୍ୟାଗୁଡ଼ିକ"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"କୁରୁଖ"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"ଶାମବାଲା"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"ବାଫଲା"_s)
		})
	}));
	return data;
}

LocaleNames_or::LocaleNames_or() {
}

$Class* LocaleNames_or::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_or, name, initialize, &_LocaleNames_or_ClassInfo_, allocate$LocaleNames_or);
	return class$;
}

$Class* LocaleNames_or::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun