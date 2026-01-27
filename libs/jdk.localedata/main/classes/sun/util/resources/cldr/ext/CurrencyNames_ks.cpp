#include <sun/util/resources/cldr/ext/CurrencyNames_ks.h>

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

$MethodInfo _CurrencyNames_ks_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ks, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ks, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ks_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ks",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ks_MethodInfo_
};

$Object* allocate$CurrencyNames_ks($Class* clazz) {
	return $of($alloc(CurrencyNames_ks));
}

void CurrencyNames_ks::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ks::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("adp"_s),
			$of(u"اؠڑورَن پیسِٹا"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"مُتحدہ عرب اِمارات دِرہم"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"افغان افغٲنی"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"اؠلبینِیَن لِک"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"اَرمانؠن ڈرؠم"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"نایدَرلینڑ اؠنٹٕلیٖیَن گِلڑَر"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"اؠنگولَن کوانزا"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"اؠنگولَن کوانزا رؠجِسٹاڑو"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"أرجَنٹیٖن اَسٹرل"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"أرجَنٹیٖن پِسو"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"آسٹریَن شِلِنگ"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"آسٹریلِیَن ڈالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"اَروبَن فِلورِن"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"آزَرباجانی مَنَٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"بوزنِیاہَرزِگووِنا دیٖنار"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"بوزنِیاہَرزِگووِنا کَنوٲٹیبٕل مارٕک"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"بابیڑِیَن ڈالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"بَنگلادیٖشی ٹَکا"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"بَلجِیَن فرینک"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"بیلگیرِیَن ہاڑ لِو"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"بحریٖنی دیٖنار"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"بُرُنڑِین فرینک"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"بٔرمیوٗڑَن ڈالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"برونی ڈالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"بولِوِیَن بولوینو"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"بولویَن پِسو"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"بولوِیَن مَوڈال"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"برازیٖلین کروزِرو نووو"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"برازیٖلین کروزیڑو"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"برازیٖلین کروزِرو"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"برازیٖلین رِیَل"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"برازیٖلین کروزیڑو نووو"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"برازیٖلین کروزیرو"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"بہامِیَن ڈالر"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"بوٗٹینیٖز نگُلٹرم"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"بٔرمیٖز کیٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"بوٹٕسوانَن پُلا"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"بِلیروشِیَن نِو رِبٕل"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"بِلیروشِیَن رِبٕل"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"بِلیروشِیَن رِبٕل (۲۰۰۰–۲۰۱۶)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"بِلِزی ڈالر"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"کینَڑِیَن ڈالر"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"کونگولیٖز فریک"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"وِر یوٗرو"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"سُوِز فریک"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"وِر فریک"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"چِلِن یوٗنِڑیدیٖز ڑِ فومیٹو"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"چِلِن پِسو"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"چینیٖز یَن رِنمِنبی"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"کولَمبِین پِسو"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"ِٖیوٗنِڑیڑ ڑِ ویلور رِیل"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"کوسٹا رِکَن کولَن"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"پرون سٔربِین ڈالر"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"چِکوسولوواک ہاڑ کوروٗنا"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"کیوٗبَن پِسو"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"کیپروٹ پَوُڑ"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"چیک کوریٖنا"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"مٔشرِقی جٔرمَن مارٕک"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"جٔرمَن مارٕک"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"ڈٔنِش کرون"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"ڈومِنِکَن پِسو"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"اؠلجیرِیَن ڈیٖنار"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"اؠسٹونِیَن کرون"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"اِجِپٹِیَن پَوُنڑ"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"رِٹریٖن نَفکا"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"سِپینِش پیسِٹا"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"اِتھوپِیَن بِر"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"یوٗرو"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"فِنِش مارکا"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"فِجین ڈالر"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"فیکلینڑِس آیلینڑ پونڑ"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"فرانسِسی فریک"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"برطٲنوی پاونڑ سٹٔرلِنگ"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"جارجِیَن کیوٗپَن لَرِٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"جارجِیَن لاری"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"گَنییَن سؠڑی(۱۹۷۹–۲٠٠۷)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"گَنییَن سؠڑی"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"گِبریلٹَر پَاونڑ"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"گیمبِیاہُک دلاسی"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"گِنِیَن فرینک"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"گِنِیَن سِلی"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"اِکویٹورِیَل گِنِیَن اؠکویٖل"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"گریٖسُک ڑرؠکما"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"گواٹَمالَن قیوٗٹزَل"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"پورتگیٖزُک گِنی اؠسکیوٗڑو"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"گِنی بِساوُک پؠسو"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"گَیَنیٖزُک ڑالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"حانگ کانگُک ڑالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"حونڑورنُک لؠمپیٖرا"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"کروایشنُک دیٖنار"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"کروایشنُک کوٗنا"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"حیشَنُک گوڑ"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"حَنگیرِیَن فورِنٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"اِنڑونیشیاہُک رُپِیاہ"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"اَیرلینڑُک پاونڑ"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"اِزرٲیِلی پاونڑ"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"اِزرٲیِلی نٔوۍ شؠقٕل"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"ہِندُستٲنۍ رۄپَے"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"ایٖراقُک دیٖنار"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"ایٖرانُک رِیال"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"اَیسلینڑُک کرونا"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"اِٹلیٖ یُک لیٖرا"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"جَمَیکاہُک ڑالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"جَرڑینیاہُک دیٖنار"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"جاپانُک یَن"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"کؠنیَن شِلِنگ"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"کِرگِستانُک سوم"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"کَمبوڑِیاہُک رِیال"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"کومورِیَن فرینک"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"جنوٗبی کورِیَن وَن"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"ساوتھ کورِیَن وَن"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"قُویتُک دیٖنار"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"کیمین ججیٖرُک ڑالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"کزاکِستان ٹینج"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"لَوٹِیَن کِپ"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"لیبنیٖزُک پاونڑ"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"سری لَنکاہٕچ رۄپَے"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"لَیبیرِیَن ڑالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"لِسوتھو لوٹی"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"لِتھوینِیَن لِٹاس"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"لِتھوینِیَن ٹؠلوناس"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"لَکزٕمبورگِیَن کَنؤرٹِبٕل فرینک"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"لَکزٕمبورگِیَن فرینک"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"لَکزٕمبوگ فَینانشَل فرینک"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"لَتوِیَن لیٹس"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"لَتوِیَن رَبٕل"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"لِبیَن دیٖنار"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"موروکَن دِرہَم"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"موروکَن فرینک"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"مولڑووین لیوٗ"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"مؠلؠگیسی اؠریَری"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"مؠلؠگیسی فرینک"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"مؠکَڑونِیَن دیٖنار"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"میلِیَن فرینک"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"مِیانما کیاٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"مۄنگولِیَن ٹُگرِک"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"مؠکانیٖز پَٹاکا"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"مورِٹینِیَن عوگیوٗیا (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"مورِٹینِیَن عوگیوٗیا"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"مالٹیٖزُک لیٖرا"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"مالٹیٖزُک پاونڑ"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"مورؠشِیاہٕچ رۄپَے"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"مالدِیٖوِیَن رُفِیا"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"مؠلیوِیَن کواچا"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"مؠکسِکَن پؠسو"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"مؠکسِکَن سِلوَر پؠسو (۱۸۶۱–۱۹۹۲)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"مَلیشِیَن رِنگِٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"موزیمبِکَن سکیوٗڑو"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"پرون موزیمبِکَن مؠٹِکَل"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"موزیمبِکَن مؠٹِکَل"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"نامِبِیَن ڑالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"نَیجیرِیَن ڑالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"نِکؠراگُوؠن کورڑوبا"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"نِکؠراگُوؠن کورڑوبا اورو"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"ڈَچ گِلڑَر"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"نوروییِنُک کرون"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"نیپالٕچ رۄپَے"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"نِوزیٖلینڑُک ڑالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"اومِنی رِیال"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"پانامانِیَن بالبوز"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"پٔریوٗوِیَن اِنٹی"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"پٔریوٗوِیَن سولٕز"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"پٔریوٗوِیَن سول (۱۸۶۳–۱۹۶۵)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"نیوٗ پیپُعا گِنِیَن کیٖنا"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"پھِلِپایِٔن پؠسو"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"پاکِستٲنۍ رۄپَے"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"پولِش زلوٹی"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"پولِش زلوٹی(۱۹۵٠–۱۹۹۵)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"پورتُگیٖز اؠسکیوٗڑو"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"پؠرؠگیوٗوَیَن گُعارانی"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"قطاری رِیال"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"رھوڑیشِیَن ڑالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"اولڑ رومانِیَن لؠیوٗ"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"رومانِیَن لؠیوٗ"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"سٔربِیَن دیٖنار"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"رٔشیَن رَبٕل"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"رٔشیَن رَبٕل(۱۹۹۱–۱۹۹۸)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"روانڑَن فرانک"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"سودیٖیُک رِیال"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"سولَمَن جٔزیٖرُک ڈالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"پرون سوٗڈانُک دیٖنار"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"سوٗڈانُک پونڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"پرون سوٗڈانُک پونڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"سویٖڈِش کَرونا"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"سِنگاپورُک ڈالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"سینٹ ہیلِنا پونڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"سلووینُک ٹولَر"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"سلووَک کَرونا"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"سومالی شِلِنگ"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"سُریٖنامُک ڈالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"سُریٖنام گِلدَر"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"سوویت روبٕل"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"سَلویدَرُک کولَن"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"سیٖریاہُک پونڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"سوازی لِلَنگینی"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"تھایھک بات"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"تاجکِستانُک رَبٕل"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"تاجِکتانُک سَمونی"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"تُکَمَنِستانُک مَنَت"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"ٹُنیشیاہُک دیٖنار"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"ٹونگَن پانگا"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"ٹیموریسو ایکیٖڈو"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"پرون تُرکِش لیرا"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"تُرکیہُک لیرا"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"ٹرِنہِ ڈیڈ تہٕ ٹوبیگو ڈالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"نۆو تیوانُک ڈالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"تَنزانیاہُک شِلِنگ"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"یوٗکرینیاہُک ہرِوِنیا"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"یوٗکرینیاہُک کاربووَنیٹس"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"اُگاداہُک شِلِنگ(۱۹۶۶–۱۹۸۷)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"اُگاداہُک شِلِنگ"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"یوٗ ایس ڈالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"یوٗ ایس ڈالَر(پَگاہ)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"یوٗ ایس ڈالَر(تَمی دًۄہ)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"اُرگایَن پیسو یوٗنِڈیڈَس اِنڈیکسَس"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"اُرگایَن پیسو(۱۹۷۵–۱۹۹۳)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"اُروٗگایَن پیسو"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"اُبیکِستان سوم"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"وینٕزوٗلیُک بولِوَر (۱۸۷۱–۲۰۰۸)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"وینٕزوٗلیُک بولِوَر (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"وینٕزوٗلیُک بولِوَر"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"وِیَنَمُک ڈانگ"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"وَنوٗاَتوٗ وَتوٗ"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"سَمون تَلا"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"سی ایف اے فرینک بی ایٖ اے سی"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"رۄپھ"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"سۄن"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"یوٗرپی کَمپوسِٹ یوٗنِٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"یوٗرپی مونِٹَری یوٗنِٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"یوٗرپی یوٗنِٹ آف ایکاوُنٹ (ایکس بی سی)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"یوٗرپی یوٗنِٹ آف ایکاوُنٹ (ایکس بی ڈی)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"مَشرِقی کیرِبِیَن ڈالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"خاص ڈرایِنگ رایٹس"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"یوٗرپی کَرَنسی یوٗنِٹ"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"فرینچ گولڈ فرینک"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"فرینچ یوٗ اے سی فرینک"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"سی ایف اے فرینک بی سی ایٖ اے او"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"پُلیڈیَم"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"سی ایف پی فرینک"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"پلیٹِنَم"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of(u"آر آے این ایٖ ٹی فَنڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"ٹیسٹِنگ کَرَنسی کوڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"اَنزٲنۍ یا نالَگہٕ ہار سِکہٕ"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"یَمنُک دیٖنار"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"یَمنُک رِیال"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"یوگوسلاوِیَن ہاڑ دیٖنار"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"یوگوسلاوِیَن نووِے دیٖنار"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"یوگوسلاوِیَن کَنؤٹِبٕل دیٖنار"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"ساوُتھ افریٖکاہُک رینڈ"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"زِمبابیُک کواچا (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"زِمبابیُک کواچا"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"زایرِیَن نِو زایِر"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"زَیرُک ڈالَر"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"زِمبابِیُک ڈالَر"_s)
		})
	}));
	return data;
}

CurrencyNames_ks::CurrencyNames_ks() {
}

$Class* CurrencyNames_ks::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ks, name, initialize, &_CurrencyNames_ks_ClassInfo_, allocate$CurrencyNames_ks);
	return class$;
}

$Class* CurrencyNames_ks::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun