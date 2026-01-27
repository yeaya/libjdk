#include <sun/util/resources/cldr/ext/CurrencyNames_ug.h>

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

$MethodInfo _CurrencyNames_ug_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ug, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ug, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ug_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ug",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ug_MethodInfo_
};

$Object* allocate$CurrencyNames_ug($Class* clazz) {
	return $of($alloc(CurrencyNames_ug));
}

void CurrencyNames_ug::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ug::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CNY"_s),
			$of(u"￥"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of(u"ئاندورران پېسېتاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"ئەرەب بىرلەشمە خەلىپىلىكى دەرھەمى"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"ئافغان ئافغانى (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"ئافغان ئافغانى"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"ئالبانىيە لېكى (1946–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"ئالبانىيە لېكى"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"ئەرمېنىيە دىرامى"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"گوللاندىيەگە قاراشلىق ئانتىللېن گۇلدېنى"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"ئانگولا كۇۋانزاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"ئانگولا كۇۋانزاسى (1977–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"ئانگولا يېڭى كۇۋانزاسى (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"ئانگولا قايتا تەڭشەلگەن كۇۋانزاسى (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"ئارگېنتىنا ئاۋسترالى"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"ئارگېنتىنا پېسو لېيى (1970–1983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"ئارگېنتىنا پېسوسى (1881–1970)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"ئارگېنتىنا پېسوسى (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"ئارگېنتىنا پېسوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"ئاۋسترىيە شىللىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"ئاۋسترالىيە دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"ئارۇبان فىلورۇنى"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"ئەزەربەيجان ماناتى (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"ئەزەربەيجان ماناتى"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"بوسنىيە-خېرتسېگوۋىنا دىنارى (1992–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"بوسنىيە-خېرتسېگوۋىنا ئالماشتۇرۇشچان ماركى"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"بوسنىيە-خېرتسېگوۋىنا يېڭى دىنارى (1994–1997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"باربادوس دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"باڭلادىش تاكاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"بېلگىيە فرانكى (ئالماشتۇرۇشچان)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"بېلگىيە فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"بېلگىيە فرانكى (پۇل–مۇئامىلە)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"بۇلغارىيە قاتتىق لېۋاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of(u"بۇلغارىيە ئىجتىمائىي لېۋاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"بۇلغارىيە لېۋاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"بۇلغارىيە لېۋاسى (1879–1952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"بەھرەين دىنارى"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"بۇرۇندى فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"بېرمۇدا دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"بىرۇنېي دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"بولىۋىيە بولىۋىيانوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"بولىۋىيە بولىۋىيانوسى (1863–1963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"بولىۋىيە پىسوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"بولىۋىيە مۇدولى"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"بىرازىلىيە يېڭى كرۇزېروسى (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"بىرازىلىيە كرۇزادوسى (1986–1989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"بىرازىلىيە يېڭى كرۇزېروسى (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"بىرازىلىيە رىيالى"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"بىرازىلىيە يېڭى كرۇزادوسى (1989–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"بىرازىلىيە كرۇزېروسى (1993–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"بىرازىلىيە كرۇزېروسى (1942–1967)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"باھاما دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"بۇتان نگۇلترۇمى"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"بىرما كىياتى"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"بوتسۋانا پۇلاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"بېلارۇسىيە يېڭى رۇبلىسى (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"بېلارۇسىيە رۇبلىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"بېلارۇسىيە رۇبلىسى (۲۰۰۰–۲۰۱۶)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"بېلىز دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"كانادا دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"كونگو فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"WIR ياۋرو"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"شىۋېتسىيە فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"WIR فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of(u"چىلى ئېسكۇدوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"چىلى ھېسابات بىرلىكى (UF)"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"چىلى پېسوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("cnx"_s),
			$of(u"جۇڭگو خەلق بانكىسى دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"جۇڭگو يۈەنى"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"كولومبىيە پېسوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"كولومبىيە ھەقىقىي قىممەت بىرلىكى"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"كوستارىكا كولونى"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"سېربىيە دىنارى (2002–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"چېخسىلوۋاكىيە قاتتىق كورۇناسى"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"كۇبا ئالماشتۇرۇشچان پېسوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"كۇبا پېسوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"يېشىل تۇمشۇق ئېسكۇدوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"سىپرۇس فوند ستېرلىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"چېخ جۇمھۇرىيىتى كورۇناسى"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"شەرقىي گېرمانىيە ماركى"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"گېرمانىيە ماركى"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"جىبۇتى فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"دانىيە كرونى"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"دومىنىكا پېسوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"ئالجىرىيە دىنارى"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"ئېكۋادور سۇكرېسى"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"ئېكۋادور تۇراقلىق قىممەت بىرلىكى"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"ئېستونىيە كرۇنى"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"مىسىر فوند سىتېرلىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"ئېرىترېيە ناكفاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"ئىسپانىيە پېسېتاسى (A ھېسابات)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"ئىسپانىيە پېسېتاسى (ئالماشتۇرۇش ھېساباتى)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"ئىسپانىيە پېسېتاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"ئېفىيوپىيە بىررى"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"ياۋرو"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"فىنلاندىيە مارككاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"فىجى دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"فالكلاند ئاراللىرى فوند سىتېرلىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"فىرانسىيە فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"ئەنگلىيە فوند سىتېرلىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"گىرۇزىيە كۇپون لارىتى"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"گىرۇزىيە لارىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"گانا سېدىسى (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"گانا سېدىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"جەبىلتارىق فوند سىتېرلىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"گامبىيە دالاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"گىۋىنېيە فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"گىۋىنېيە سىلىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"ئېكۋاتور گىۋىنېيە ئېكۋېلېسى"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"گىرېتسىيە دراخماسى"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"گىۋاتېمالا كۇۋېتزالى"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"پورتۇگالىيە گىۋىنېيە ئېسكۇدوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"گىۋىنېيە-بىسسائۇ پېسوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"گىۋىئانا دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"شياڭگاڭ دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"ھوندۇراس لېمپىراسى"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"كىرودىيە دىنارى"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"كىرودىيە كۇناسى"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"ھايتى گۇردېسى"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"ۋېنگىرىيە فورېنتى"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"ھىندونېزىيە رۇپىيەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"ئىرېلاندىيە فوندستېرلىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"ئىسرائىلىيە فوندستېرلىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"ئىسرائىل شېكېلى (1980–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"ئىسرائىل يېڭى شېكېلى"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"ھىندىستان رۇپىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"ئىراق دىنارى"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"ئىران رىيالى"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of(u"ئىسلاندىيە كروناسى (1918–1981)"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"ئىسلاندىيە كروناسى"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"ئىتالىيە لىراسى"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"يامايكا دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"ئىيوردانىيە دىنارى"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"ياپونىيە يېنى"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"كېنىيە شىللىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"قىرغىزىستان سومى"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"كامبودژا رىئېلى"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"كومورو فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"شىمالىي كورېيە ۋونى"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"جەنۇبىي كورېيە خۋانى (1953–1962)"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"جەنۇبىي كورېيە ۋونى (1945–1953)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"جەنۇبىي كورېيە ۋونى"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"كۇۋەيت دىنارى"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"كايمان ئاراللىرى دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"قازاقىستان تەڭگىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"لائوس كىپى"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"لىۋان فوند سىتېرلىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"سىرىلانكا رۇپىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"لىبېرىيە دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"لېسوتو لوتىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"لىتۋا لىتاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"لىتۋا تالوناسى"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"ليۇكسېمبۇرگ ئالماشتۇرۇشچان پېسوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"ليۇكسېمبۇرگ فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"لىيۇكسېمبۇرگ پۇل-مۇئامىلە فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"لاتۋىيە لاتى"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"لاتۋىيە رۇبلىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"لىۋىيە دىنارى"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"ماراكەش دىرھەمى"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"ماراكەش فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of(u"موناكو فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of(u"مولدوۋا كۇپونى"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"مولدوۋا لېۋى"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"ماداغاسقار ئارىئارىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"ماداغاسقار فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"ماكېدونىيە دىنارى"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"ماكېدونىيە دىنارى (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"مالى فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"مىيانمار كىياتى"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"موڭغۇلىيە تۈگرىكى"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"ئاۋمېن پاتاكاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ماۋرىتانىيە ئۇگىيەسى (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"ماۋرىتانىيە ئۇگىيەسى"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"مالتا لىراسى"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"مالتا فوندستېرلىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"ماۋرىتىئۇس رۇپىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("mvp"_s),
			$of(u"مالدىۋى رۇپىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"مالدىۋى رۇفىياسى"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"مالاۋى كۋاچاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"مېكسىكا پېسوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"مېكسىكا كۈمۈش پېسوسى (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"مېكسىكا مەبلەغ بىرلىكى"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"مالايشىيا رىڭگىتى"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"موزامبىك ئېسكۇدوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"موزامبىك مېتىكالى (1980–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"موزامبىك مېتىكالى"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"نامىبىيە دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"نىگېرىيە نايراسى"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"نىگېرىيە كوردوباسى (1988–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"نىگېرىيە كوردوباسى"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"گوللاندىيە گۈلدىنى"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"نورۋېگىيە كرونى"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"نېپال رۇپىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"يېڭى زېلاندىيە دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"ئومان رىيالى"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"پاناما بالبوئاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"پېرۇ ئىنتىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"پېرۇ سولى"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"پېرۇ سولى (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"پاپۇئا يېڭى گىۋىنېيە كىناسى"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"فىلىپپىن پېسوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"پاكىستان رۇپىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"پولشا زىلوتى"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"پولشا زىلوتى (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"پورتۇگالىيە ئېسكۇدوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"پاراگۋاي گۇئارانىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"قاتار رىيالى"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"رودېزىيە دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"رۇمىنىيە لېيى (1952–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"رۇمىنىيە لېيى"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"سېربىيە دىنارى"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"رۇسىيە رۇبلىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"رۇسىيە رۇبلىسى (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"رۋاندا فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"سەئۇدى رىيالى"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"سولومون ئاراللىرى دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"سېيشېل رۇپىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"سۇدان دىنارى (1992–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"سۇدان فوندستېرلىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"سۇدان فوندستېرلىڭى (1957–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"شىۋېتسىيە كروناسى"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"سىنگاپور دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"ساينىت-ھېلېنا فوندستېرلىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"سىلوۋېنىيە تولارى"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"سىلوۋاكىيە كورۇناسى"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"سېررالېئون لېئونېسى"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"سومالى شىللىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"سۇرىنام دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"سۇرىنام گۈلدىنى"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"جەنۇبىي سۇدان فوندستېرلىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"سان-تومې ۋە پىرىنسىپى دوبراسى (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"سان-تومې ۋە پىرىنسىپى دوبراسى"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"سوۋىت رۇبلىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"سالۋادور كولونى"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"سۈرىيە فوندستېرلىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"سىۋېزىلاند لىلانگېنى"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"تايلاند باختى"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"تاجىكىستان رۇبلىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"تاجىكىستان سومونىسى"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"تۈركمەنىستان ماناتى (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"تۈركمەنىستان ماناتى"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"تۇنىس دىنارى"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"تونگا پائانگاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"تىمور ئېسكۇدوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"تۈركىيە لىراسى (1922–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"تۈركىيە لىراسى"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"تىرىنىداد ۋە توباگو دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"يېڭى تەيۋەن دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"تانزانىيە شىللىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"ئۇكرائىنا خرىۋناسى"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"ئۇكرائىنا كاربوۋانېتسى"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"ئۇگاندا شىللىڭى (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"ئۇگاندا شىللىڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"ئامېرىكا دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"ئامېرىكا دوللىرى (كېيىنكى كۈن)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"ئامېرىكا دوللىرى (ئوخشاش كۈن)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"ئۇرۇگۋاي پېسوسى (ئىندېكىسلاش بىرلىكى)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"ئۇرۇگۋاي پېسوسى (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"ئۇرۇگۋاي پېسوسى"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"ئۆزبېكىستان سومى"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"ۋېنېزۇئېلا بولىۋارى (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"ۋېنېزۇئېلا بولىۋارى (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"ۋېنېزۇئېلا بولىۋارى"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"ۋىيېتنام دوڭى"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"ۋىيېتنام دوڭى (1978–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"ۋانۇئاتۇ ۋاتۇسى"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"ساموئا تالاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"ئافرىقا قىتئەسى پۇل-مۇئامىلە ئىتتىپاقى فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"كۈمۈش"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"ئالتۇن"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"ياۋروپا مۇرەككەپ بىرلىكى"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"ياۋروپا پۇل بىرلىكى (XBB)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"ياۋروپا ھېسابات بىرلىكى (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"ياۋروپا ھېسابات بىرلىكى (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"شەرقىي كارىب دوللىرى"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"ئالاھىدە پۇل ئېلىش ھوقۇقى"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"ياۋروپا پۇل بىرلىكى"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"فىرانسىيە ئالتۇن فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"فىرانسىيە UIC فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"ئافرىقا قىتئەسى پۇل-مۇئامىلە ئىتتىپاقى فرانكى (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"پاللادىي"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"تىنچ ئوكيان پۇل-مۇئامىلە ئورتاق گەۋدىسى فرانكى"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"پىلاتىنا"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of(u"RINET فوندى"_s)
		}),
		$$new($ObjectArray, {
			$of("xsu"_s),
			$of(u"سۇكرې"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"پۇل سىناش بىرلىكى"_s)
		}),
		$$new($ObjectArray, {
			$of("xua"_s),
			$of(u"ئاسىيا تەرەققىيات بانكىسى ھېسابات بىرلىكى"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"يوچۇن پۇل"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"يەمەن دىنارى"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"يەمەن رىيالى"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"يۇگوسلاۋىيە قاتتىق دىنارى (1966–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"يۇگوسلاۋىيە يېڭى دىنارى (1994–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"يۇگوسلاۋىيە ئالماشتۇرۇشچان دىنارى (1990–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"يۇگوسلاۋىيە ئىسلاھات دىنارى (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"جەنۇبىي ئافرىقا راندى (پۇل–مۇئامىلە)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"جەنۇبىي ئافرىقا راندى"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"زامبىيە كۋاچاسى (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"زامبىيە كۋاچاسى"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"زايىر يېڭى زايىرى (1993–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"زايىر زايىرى (1971–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"زىمبابۋې دوللىرى (1980–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"زىمبابۋې دوللىرى (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"زىمبابۋې دوللىرى (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_ug::CurrencyNames_ug() {
}

$Class* CurrencyNames_ug::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ug, name, initialize, &_CurrencyNames_ug_ClassInfo_, allocate$CurrencyNames_ug);
	return class$;
}

$Class* CurrencyNames_ug::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun