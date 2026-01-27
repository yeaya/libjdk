#include <sun/util/resources/cldr/ext/LocaleNames_ti.h>

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

$MethodInfo _LocaleNames_ti_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ti, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ti, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ti_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ti",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ti_MethodInfo_
};

$Object* allocate$LocaleNames_ti($Class* clazz) {
	return $of($alloc(LocaleNames_ti));
}

void LocaleNames_ti::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ti::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_BY, u"ቤላሩስ"_s);
	$var($String, metaValue_DE, u"ጀርመን"_s);
	$var($String, metaValue_GB, u"እንግሊዝ"_s);
	$var($String, metaValue_GR, u"ግሪክ"_s);
	$var($String, metaValue_IN, u"ህንዲ"_s);
	$var($String, metaValue_JP, u"ጃፓን"_s);
	$var($String, metaValue_SD, u"ሱዳን"_s);
	$var($String, metaValue_TR, u"ቱርክ"_s);
	$var($String, metaValue_UA, u"ዩክሬን"_s);
	$var($String, metaValue_VN, u"ቬትናም"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"ፖርታ ሪኮ"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"የፍልስጤም ግዛት"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"ፓሽቶ"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"ፖርቱጋል"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"ፖርቹጋል"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"ፓላው"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"ፊሊፕን"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"ፓራጓይ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ፖርቹጋል (ናይ ብራዚል)"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"ቀጠር"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"ወጣ ያለ ኦሽኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"አሴንሽን ደሴት"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"ኣንዶራ"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"ሕቡራት ኢማራት ዓረብ"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"ኣፍጋኒስታን"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"ኣፍሪከንስ"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"ኣንቲጓን ባርቡዳን"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"ኣንጊላ"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"ኣልቤኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"ኣርሜኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"ኣምሓርኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"ኣንጎላ"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"ኣንታርክቲካ"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"ዓለም"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"ኣርጀንቲና"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"ዓረብ"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ፊደል"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"አፍሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"ኣሜሪካ ሳሞኣ"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"ኦስትሪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"ሪዩኒየን"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"ኣውስትራሊያ"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"ደቡባዊ አሜሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"ኣሩባ"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"ደሴታት ኣላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ኦሽኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"ኣዘርበጃን"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"ኣዘርባጃን"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"ሮሜኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"ሮማኒያን"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"ቦዝንያን ሄርዘጎቪናን"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"ባርባዶስ"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"ሰርቢያ"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"ባንግላዲሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(metaValue_BY)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"ቤልጀም"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"ራሺያ"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ሩስያ"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"ቡርኪና ፋሶ"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"ቡልጋሪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"ሩዋንዳ"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"ቡልጋሪኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"ባሕሬን"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"ቡሩንዲ"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"ቤኒን"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"ቅዱስ ባርተለሚይ"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"ቤርሙዳ"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ብሩነይ"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"ባንጋላ"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"ቦሊቪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"ስዑዲ ዓረብ"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"ካሪቢያን ኔዘርላንድስ"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"ሰሎሞን ደሴት"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"ምዕራባዊ አፍሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ብራዚል"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"ሲሼልስ"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"ብሬቶን"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(metaValue_SD)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"ባሃማስ"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"ቦስኒያን"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"ቡታን"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"ስዊድን"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"ምስራቃዊ አፍሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"ሰሜናዊ አፍሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"ደሴት ቡቬት"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"ሲንጋፖር"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"ቦትስዋና"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"ሴንት ሄለና"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"ሰርቦ- ክሮዊታን"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"መካከለኛ አፍሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"ስሎቬኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"ሲንሃላ"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(metaValue_BY)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"ደቡባዊ አፍሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"ስቫልባርድን ጃን ማየንን"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"አሜሪካዎች"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"ቤሊዝ"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"ስሎቫኪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"ስሎቫክ"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"ሴራሊዮን"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"ስሎቪኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"ሳን ማሪኖ"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"ሴኔጋል"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"ሱማሌ"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"ካናዳ"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"ካታላን"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"ኣልበንየን"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"ሱሪናም"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"ሰርብያኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"ኮኮስ ኬሊንግ ደሴቶች"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"ደቡብ ሱዳን"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"ኮንጎ"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"ሳኦ ቶሜን ፕሪንሲፔን"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"ሰሴቶ"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_SD)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"ማእከላዊ አፍሪቃ ሪፖብሊክ"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"ኤል ሳልቫዶር"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"ስዊድንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"ኮንጎ ሪፓብሊክ"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"ስዋሂሊ"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"ስዊዘርላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"ሲንት ማርቲን"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"ኮት ዲቯር"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"ሲሪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"ኢስዋቲኒ"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"ደሴታት ኩክ"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"ቺሊ"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"ካሜሮን"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"ቻይና"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"ኮሎምቢያ"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"ክሊፐርቶን ደሴት"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ትሪስን ዳ ኩንሃ"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"ታሚልኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"ሰሜናዊ አሜሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"እስያ"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"ኮስታ ሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"ደሴታት ቱርክን ካይኮስን"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"ጫድ"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"ቼክ"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"ተሉጉኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"ምዕራባዊ እስያ"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"ኩባ"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"ናይ ፈረንሳይ ደቡባዊ ግዝኣታት"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"ኬፕ ቬርዴ"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"ቶጐ"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"ኩራካዎ"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"ታይላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"ታይኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"ደሴት ክሪስማስ"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"ትግር"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"ሳይፕረስ"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"ታጃኪስታን"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"ወልሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"ካሪቢያን"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"ቼክ ሪፓብሊክ"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"ቶክላው"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"ቱርክሜን"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"ምብራቕ ቲሞር"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"ቱርክሜኒስታን"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"ቱኒዚያ"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"ቶንጋ"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"ዳኒሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(metaValue_TR)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"ፖርቹጋል (ናይ ፖርቱጋል)"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ትሪኒዳድን ቶባጎን"_s)
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
			$of(u"ቱቫሉ"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"ዲየጎ ጋርሺያ"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"ታይዋን"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"ትዊ"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"ጂቡቲ"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"ታንዛኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"ዴንማርክ"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"ዶሚኒካ"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"ዶመኒካ ሪፓብሊክ"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(metaValue_UA)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"አውሮፓ"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"ምስራቃዊ አውሮፓ"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"ሰሜናዊ አውሮፓ"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"ምሥራቃዊ እስያ"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"ምዕራባዊ አውሮፓ"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"ዩጋንዳ"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"ስፓኒሽ (የላቲን አሜሪካ)"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(metaValue_UA)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"ደቡባዊ አውሮፓ"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"ኣልጀሪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"ናይ ኣሜሪካ ፍንትት ዝበሉ ደሴታት"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"ሲውታን ሜሊላን"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"ኡርዱ"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"ኢኳዶር"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"አሜሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"ኤስቶኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"ግብጽ"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"ምዕራባዊ ሳህራ"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"ኡራጓይ"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"ዩዝበኪስታን"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ኡዝቤክ"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(metaValue_GB)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"ኤስፐራንቶ"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"ቫቲካን"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"ኤርትራ"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"ቅዱስ ቪንሴንትን ግሬናዲንስን"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"ስፔን"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"ስፓኒሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"ኢትዮጵያ"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"ቬንዙዌላ"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"ኤስቶኒአን"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"ባስክ"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"ደሴታት ቨርጂን ብሪጣኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(metaValue_VN)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"ቨርጂን ደሴታት ኣሜሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(metaValue_VN)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"ፋርስ"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"ቫኑአቱ"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"ፊንላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"ፊኒሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"ፊጂ"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"ደሴታት ፎክላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"ሚክሮኔዢያ"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"ደሴታት ፋራኦ"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ፋሮስ"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"ፈረንሳይ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"ፈረንሳይን"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"አውስትራሊያ እና ኒው ዚላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"ሜላኔሲያ"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"ዋሊስን ፉቱናን"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"ምዕራባዊ ፍሪሰኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"ጋቦን"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"አይሪሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(metaValue_GB)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"ሳሞአ"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"ግሬናዳ"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"ስኮቲሽ ጋአሊክ"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"ጆርጂያ"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"ናይ ፈረንሳይ ጉይና"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"ገርንሲ"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"ጋና"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"ጊብራልታር"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"ግሪንላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"ጋሊሻን"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"ጋምቢያ"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"ጊኒ"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"ጓራኒ"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"ጉዋደሉፕ"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"ኢኳቶሪያል ጊኒ"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"ፖሊኔዢያ"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"ላቲን"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"ደሴታት ደቡብ ጆርጂያን ደቡድ ሳንድዊችን"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"ጉዋቲማላ"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"ጉዋም"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"ጉጃራቲ"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"ቢሳዎ"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"ኢሲቆሳ"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"ክሊንግኦንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"ጉያና"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"ኮሶቮ"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"እብራይስጥ"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(metaValue_IN)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"ፍሉይ ምምሕዳር ዞባ ሆንግ ኮንግ"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"ደሴታት ሀርድን ማክዶናልድን"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"ሆንዱራስ"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"ክሮኤሽያ"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"ሮኤሽያን"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"ሀይቲ"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"የመን"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"ሀንጋሪ"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ሃንጋሪ"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"ዪዲሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"ኢንቴር ቋንቋ"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"ደሴታት ካናሪ"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"ኢንዶኔዢያ"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"ሜይኦቴ"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"ኢንዶኔዥያን"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"አየርላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"እስራኤል"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"አይል ኦፍ ማን"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(metaValue_IN)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"ናይ ብሪጣኒያ ህንዲ ውቅያኖስ ግዝኣት"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"ደቡብ አፍሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"ኢራቅ"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ኢራን"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"ኣየርላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"ኣይስላንዲክ"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ጣሊያን"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ጥልያን"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"ዛምቢያ"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"ጀርሲ"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"ዙሉኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"ዚምቧቤ"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"ጃማይካ"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"ጆርዳን"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"ጃቫን"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"ጆርጅየን"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"ኬንያ"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"ኪርጂስታን"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"ካምቦዲያ"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"ኪሪባቲ"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"ኮሞሮስ"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"ቅዱስ ኪትስን ኔቪስን"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"ካማደኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"ኮሪያኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"ሰሜን ኮሪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"ደቡብ ኮሪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"ኩርድሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"ክዌት"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"ደሴታት ኬይማን"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"ኪሩጋዚ"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"ካዛኪስታን"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"ላኦስ"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"ላቲንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"ሊባኖስ"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"ሴንት ሉቺያ"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"ሊችተንስታይን"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"ሲሪላንካ"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"ላይቤሪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"ሌሶቶ"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"ሊቱዌኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"ሊቱወኒየን"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"ሉክሰምበርግ"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"ላትቪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"ላቲቪያን"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"ሊቢያ"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"ሞሮኮ"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"ሞናኮ"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"ሞልዶቫ"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"ሞንቴኔግሮ"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"ሴንት ማርቲን"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"ማዳጋስካር"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"ማርሻል አይላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"ሰሜን መቆዶንያ"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"መቆዶኒኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"ማሊ"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"ማላይያላም"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"ማያንማር"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"ሞንጎሊያ"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"ፍሉይ ምምሕዳር ዞባ ማካዎ"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"ደሴታት ሰሜናዊ ማሪያና"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"ማርቲኒክ"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"ሞሪቴኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"ማራቲኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"ሞንትሴራት"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"ማላይ"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"ማልታ"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"ማልተዘ"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"ማሩሸስ"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"ማልዲቭስ"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"ማላዊ"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"ሜክሲኮ"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"ማሌዢያ"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"ሞዛምቢክ"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"ናሚቢያ"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"ኒው ካሌዶኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"ኒጀር"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"ኔፓሊ"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"ኖርፎልክ ደሴት"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"ናይጄሪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"ኒካራጓ"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"ኔዘርላንድስ"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"ደች"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"ርዌጂያን (ናይ ኝኖርስክ)"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"ኖርዌ"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"ርዌጂያን"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"ኔፓል"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"ናኡሩ"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"ኒኡይ"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"ኒው ዚላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"ኦኪታንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"ኦማን"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"ኦዲያ"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"ፓናማ"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"ፑንጃቢ"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"ፔሩ"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"ናይ ፈረንሳይ ፖሊነዝያ"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"ፓፑዋ ኒው ጊኒ"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"ፊሊፒንስ"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"ፓኪስታን"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"ፖላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"ፖሊሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"ቅዱስ ፒዬርን ሚኩኤሎን"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"ፒትካኢርን"_s)
		})
	}));
	return data;
}

LocaleNames_ti::LocaleNames_ti() {
}

$Class* LocaleNames_ti::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ti, name, initialize, &_LocaleNames_ti_ClassInfo_, allocate$LocaleNames_ti);
	return class$;
}

$Class* LocaleNames_ti::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun