#include <sun/util/resources/cldr/ext/LocaleNames_am.h>

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

$MethodInfo _LocaleNames_am_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_am, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_am, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_am_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_am",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_am_MethodInfo_
};

$Object* allocate$LocaleNames_am($Class* clazz) {
	return $of($alloc(LocaleNames_am));
}

void LocaleNames_am::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_am::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_DE, u"ጀርመን"_s);
	$var($String, metaValue_GR, u"ግሪክ"_s);
	$var($String, metaValue_NR, u"ናኡሩ"_s);
	$var($String, metaValue_TV, u"ቱቫሉ"_s);
	$var($String, metaValue_ar, u"ዓረብኛ"_s);
	$var($String, metaValue_ja, u"ጃፓንኛ"_s);
	$var($String, metaValue_ko, u"ኮሪያኛ"_s);
	$var($String, metaValue_mn, u"ሞንጎሊያኛ"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"ኮሎኝኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"ሚራንዴዝኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"ምልክቶች"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"አትሳም"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"ኢሞጂ"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"ቻክማ"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"የጥንታዊ ግብጽኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"ቲምኔ"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"ቴሶ"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"ራፓኑኢ"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"አሴንሽን ደሴት"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"ራሮቶንጋ"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"ቴተም"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"አንዶራ"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"የተባበሩት ዓረብ ኤምሬትስ"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"ፍሌሚሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"አፍጋኒስታን"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"አንቲጓ እና ባሩዳ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"የኢትዮጵያ የቀን አቆጣጠር"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"አንጉይላ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"የሰዓት ሰቅ"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"አልባኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"አርሜኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"አንጐላ"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"አንታርክቲካ"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"አርጀንቲና"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"የአሜሪካ ሳሞአ"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"ኦስትሪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"አውስትራልያ"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"አሩባ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"የአሜሪካ እንግሊዝኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"የአላንድ ደሴቶች"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"አዘርባጃን"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"ቦስኒያ እና ሄርዞጎቪኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"ባርቤዶስ"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"ካቡዋኖ"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"ባንግላዲሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"ኩማይክ"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"ቤልጄም"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"ቡርኪና ፋሶ"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"ቡልጌሪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"ባህሬን"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"ብሩንዲ"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"ቤኒን"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"ቅዱስ በርቴሎሜ"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"ቤርሙዳ"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ኤርዝያ"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ብሩኒ"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"ቦሊቪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"የካሪቢያን ኔዘርላንድስ"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ብራዚል"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"ባሃማስ"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"ሶጋ"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"ቡህታን"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"ቡቬት ደሴት"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"ቦትስዋና"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"ቤላሩስ"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"በሊዝ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"የፐርሽያ የቀን አቆጣጠር"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"የእብራይስጥ ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"ካናዳ"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"ኮኮስ(ኬሊንግ) ደሴቶች"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"ማዛንደራኒ"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"ኮንጎ-ኪንሻሳ"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"ማዕከላዊ አፍሪካ ሪፑብሊክ"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"ኮንጎ ብራዛቪል"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"ስዊዘርላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"ኮት ዲቯር"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"ኩክ ደሴቶች"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"ቺሊ"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"ካሜሩን"_s)
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
			$of("CR"_s),
			$of(u"ኮስታሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"ኩባ"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"ኬፕ ቬርዴ"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"ኩራሳዎ"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"ክሪስማስ ደሴት"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"ሳይፕረስ"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"ቼቺያ"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ኤካጁክ"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"አቻይንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"ቺጋኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"ዲዬጎ ጋርሺያ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"የዴቫንጋሪ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"ጂቡቲ"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"ዴንማርክ"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"አኮሊኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"ብሬይል"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"ዶሚኒካ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"የአሜሪካን ንዑስ ሆሄ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"ዶመኒካን ሪፑብሊክ"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"ጎሮንታሎ"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"ዙኒ"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"ትግረ"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"አልጄሪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"ፓንጋሲናንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"ግማሽ ወርድ"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"ሴኡታና ሜሊላ"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"ቺብቻ"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"ፓምፓንጋ"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"ኢኳዶር"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"ፓፒአሜንቶ"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"አዳንግሜ"_s)
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
			$of("chg"_s),
			$of(u"ቻጋታይ"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"ፓላኡአን"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"ቹክስ"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"ቺኑክ ጃርጎን"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"ማሪ"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"ቺፔውያን"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"ቾክታዋ"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"ቼሮኬኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"ኤርትራ"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"ስፔን"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"ኢትዮጵያ"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"የአውሮፓ ህብረት"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"የግሪጎሪያን የቀን አቆጣጠር"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"የአውሮፓ ዞን"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"ችዬኔ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"የጉጃራቲ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"አድይግሄ"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"ፊንላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"ፊጂ"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"የፎክላንድ ደሴቶች"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"ሚክሮኔዢያ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"የአካባቢ አይነት"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"የፋሮ ደሴቶች"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"ታሚል"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"ፈረንሳይ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"የህንድ ብሔራዊ የቀን አቆጣጠር"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"የጥንታዊ ግሪክ"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"ጋቦን"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"ዩናይትድ ኪንግደም"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"የናይጄሪያ ፒጂን"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"ግሬናዳ"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"ጆርጂያ"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"የፈረንሳይ ጉዊአና"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"ጉርነሲ"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"ጋና"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"ጂብራልተር"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"አፍሪሂሊ"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"ግሪንላንድ"_s)
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
			$of("GS"_s),
			$of(u"ደቡብ ጆርጂያ እና የደቡብ ሳንድዊች ደሴቶች"_s)
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
			$of("GW"_s),
			$of(u"ጊኒ ቢሳኦ"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"ክሊንጎንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"ጉያና"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"የሶራኒ ኩርድኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"ቋንቋዊ ይዘት አይደለም"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"የኦስትሪያ ጀርመን"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"ሆንግ ኮንግ ልዩ የአስተዳደር ክልል ቻይና"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"ኽርድ ደሴቶችና ማክዶናልድ ደሴቶች"_s)
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
			$of("agq"_s),
			$of(u"አገም"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"የስዊዝ ጀርመን"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"ሀይቲ"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"ሀንጋሪ"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"የካናሪ ደሴቶች"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"ሚን ኛን ቻይንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"ኢንዶኔዢያ"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"አየርላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"ኒአፖሊታን"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"ናማ"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"ዛዛ"_s)
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
			$of(u"ህንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"የብሪታኒያ ህንድ ውቂያኖስ ግዛት"_s)
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
			$of(u"አይስላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ጣሊያን"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"የሂሳብ መግለጫ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"የታይ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"የቤንጋሊ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"ጀርሲ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"እስላማዊ የቀን አቆጣጠር"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"ጃማይካ"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"ቤንጋሊ"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"ጆርዳን"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"ጃፓን"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"አይኑ"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"ጉስሊኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"የካንአዳ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"የስዊዝ ከፍተኛ ጀርመንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"የፎነቲክ ድርደራ ቅደም ተከተል"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"የቡዲስት ቀን አቆጣጠር"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"ኬንያ"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"ላቲን አሜሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"ኪርጊስታን"_s)
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
			$of(u"ቅዱስ ኪትስ እና ኔቪስ"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"ካንአዳ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"የካናዳ ፈረንሳይኛ"_s)
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
			$of("fr_CH"_s),
			$of(u"የስዊዝ ፈረንሳይኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"ክዌት"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"ቶክ ፒሲን"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"ካይማን ደሴቶች"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"ካዛኪስታን"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"ሲይሪልክ"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"ላኦስ"_s)
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
			$of("gwi"_s),
			$of(u"ግዊቺን"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"የታችኛው ጀርመን"_s)
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
			$of("akk"_s),
			$of(u"አካዲያን"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"ኮፕቲክ"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"ላይቤሪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"ሴንተራል ዩፒክ"_s)
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
			$of("LU"_s),
			$of(u"ሉክሰምበርግ"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"ላትቪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"ካታካና"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"ሊቢያ"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ላዲኖ"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"ቩንጆ"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of(u"አላባማ"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"ላንጊ"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"ታና"_s)
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
			$of(u"ሞንተኔግሮ"_s)
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
			$of("ale"_s),
			$of(u"አልዩት"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"ታይ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"የቫይ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"ሰሜን መቄዶንያ"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"ማሊ"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"ማይናማር(በርማ)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"ሞንጎሊያ"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"ኒዋሪ(ኔፓል)"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"ማካኦ ልዩ የአስተዳደር ክልል ቻይና"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"የሰሜናዊ ማሪያና ደሴቶች"_s)
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
			$of("MS"_s),
			$of(u"ሞንትሴራት"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"ማልታ"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of(u"ካፒዝኖን"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"ሞሪሸስ"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"ደቡባዊ አልታይ"_s)
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
			$of("type.ca.japanese"_s),
			$of(u"የጃፓን የቀን አቆጣጠር"_s)
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
			$of("202"_s),
			$of(u"ከሰሃራ በታች አፍሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"የእብራዊያን የቀን አቆጣጠር"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"የመዝገበ ቃላት የድርድር ቅደም ተከተል"_s)
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
			$of("NF"_s),
			$of(u"ኖርፎልክ ደሴት"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"ናይጄሪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"ታሮኮ"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"ኒካራጓ"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"ኔዘርላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"ኖርዌይ"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"ኔፓል"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"ኒኡይ"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"ሮምቦ"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"ኒው ዚላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"ክሪሚያን ተርኪሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"ኦማን"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"አንጊካ"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"ሰሰላዊ ክሬኦሊ ፈረንሳይኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"ፓናማ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"የእስላም ህዝባዊ የቀን አቆጣጠር"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"የብሪቲሽ እንግሊዝኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"ፔሩ"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"የፈረንሳይ ፖሊኔዢያ"_s)
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
			$of("ewo"_s),
			$of(u"ኤዎንዶ"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"ቅዱስ ፒዬር እና ሚኩኤሎን"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"ፒትካኢርን ደሴቶች"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"ፖርታ ሪኮ"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"የፍልስጤም ግዛት"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"ፖርቱጋል"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"ፓላው"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"ኒአስ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"የግሪክ ንዑስ ሆሄ ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"ፓራጓይ"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"ቱምቡካ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"እብራይስጥ"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"ኳታር"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"ኒዩአንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"አውትላይንግ ኦሽንያ"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"ሌዝጊያን"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"ዓለም"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"አፍሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of(u"ኦ ናጋ"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"ሰሜን አሜሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"ሪዩኒየን"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"ደቡብ አሜሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ሎጅባን"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ኦሽኒአ"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"ሮሜኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"ሰርብያ"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"ሩስያ"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"ሩዋንዳ"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"ሳውድአረቢያ"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"ሰሎሞን ደሴት"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"ታሳዋቅ"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"ምስራቃዊ አፍሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"ሲሼልስ"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"ሱዳን"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"መካከለኛው አሜሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"ስዊድን"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"ምዕራባዊ አፍሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"አራማይክ"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"ሰሜናዊ አፍሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"ሲንጋፖር"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"ሴንት ሄለና"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"ጠበቅ ያለ መስመር መስበሪያ ቅጥ"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"መካከለኛው አፍሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"ስሎቬኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"ደቡባዊ አፍሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"ስቫልባርድ እና ጃን ማየን"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"አሜሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"ስሎቫኪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"ሴራሊዮን"_s)
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
			$of("arn"_s),
			$of(u"ማፑቼ"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"አራፓሆ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"ባህላዊ የታሚል ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"ሱሪናም"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of(u"አራኦና"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"ደቡብ ሱዳን"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"ሳኦ ቶሜ እና ፕሪንሲፔ"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"የአልጄሪያ ዓረብኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"ኤል ሳልቫዶር"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"ሲንት ማርተን"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"ሲሪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"ሱዋዚላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"አራዋክ"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ትሪስታን ዲ ኩንሃ"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"አሱ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"የአሜሪካ መለኪያ ስርዓት"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"ሰሜናዊ አሜሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"የቱርኮችና የካኢኮስ ደሴቶች"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"ያንግቤንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"ቻድ"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"የፈረንሳይ ደቡባዊ ግዛቶች"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"የአሜሪካ የምልክት ቋንቋ"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"ቶጐ"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"ታይላንድ"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"ታጃኪስታን"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"ካሪቢያን"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"ቶክላው"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"ቲሞር ሌስቴ"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"የምባ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"በሃንጉል የመጀመሪያ ተነባቢ ፈልግ"_s)
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
			$of("TR"_s),
			$of(u"ቱርክ"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ትሪናዳድ እና ቶቤጎ"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"ታይዋን"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"አስቱሪያን"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"ታንዛኒያ"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"ክዋሲዮ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"ያልታወቀ ስክሪፕት"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"ዩክሬን"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"አሮማንያን"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"ምስራቃዊ እስያ"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"ቱቪንያንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"ኮንጎ ስዋሂሊ"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"ደቡባዊ እሲያ"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"ምዕራባዊ ደቡብ እሲያ"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"ዩጋንዳ"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"ሃካ ቻይንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"ፒንይን የድርድር ቅደም ተከተል"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"ደቡባዊ አውሮፓ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"ሲንሃላ"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"የዩ ኤስ ጠረፍ ላይ ያሉ ደሴቶች"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"የተባበሩት መንግስታት"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"ዩናይትድ ስቴትስ"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"ሃዊያኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"የቀለለ የቻይንኛ የድርደራ ቅደም ተከተል - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"ኡራጓይ"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"ፐሩሳንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"ኡዝቤኪስታን"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"መካከለኛው አትላስ ታማዚኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"የበትር ድርድር ቅደም ተከተል"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"ኒጊምቡን"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"ቫቲካን ከተማ"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"ቅዱስ ቪንሴንት እና ግሬናዲንስ"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"ቬንዙዌላ"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"የእንግሊዝ ቨርጂን ደሴቶች"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"የአሜሪካ ቨርጂን ደሴቶች"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"ቬትናም"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"ቫኑአቱ"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"ኖጋይ"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"ርዋ"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"አውስትራሌዥያ"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"ሜላኔዥያ"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"ዋሊስ እና ፉቱና ደሴቶች"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"ባህላዊ የድርድር ቅደም ተከተል"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"የማይክሮኔዥያን ክልል"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"ንጎባኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"ላኮታ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"የፋይናንስ ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"ዋልሰር"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"ሳሞአ"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"ወላይትኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"የሀሰት ትእምርት"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"ዋራይ"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"የሀሰት ባለሁለት አቅጣጫ"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"አዋድሂ"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"ፖሊኔዥያ"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"ኮሶቮ"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"ጉጃራቲ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"ያልተጻፈ"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"ዋርልፒሪ"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"የመን"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"ንኮ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"መደበኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"ሜይኦቴ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"ደቡብ አፍሪካ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"ላላ ያለ መስመር መስበሪያ ቅጥ"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"ደቫንጋሪ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"የጆርጂያን ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"ሂራጋና"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"ዛምቢያ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"ዚምቧቤ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"ያልታወቀ ክልል"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"የልኬት ስርዓት"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 የቀን አቆጣጠር"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"ሰሜናዊ ሶቶ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"የተልጉ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"ሎዚኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"ማቻሜኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"ቀለል ያሉ የቻይንኛ ገንዘብ ነክ ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"ሂሊጋይኖን"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"የተራዘሙ የአረቢክ-ኢንዲክ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"ኑዌር"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"ዳኮታ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"የሙሉ ወርድ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"ዳርግዋ"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"ታይታኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"ሰሜናዊ ሉሪ"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"ክላሲክ ኔዋሪ"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"ኡድሙርት"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"ክህመር"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"ሳንዳዌ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"የሮማን ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"ሳክሃ"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"ሳምቡሩ"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"ሳንታሊ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"አሃዛዊ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"ትውልድ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"ንጋምባይ"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"ጉርሙኪ"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"ሉባ-ሉሏ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"ሙሉ ወርድ"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"ሳንጉ"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ኒያንኮልኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"ሉንዳ"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"ሉኦ"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"ፊሊፒንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"ህሞንግ"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"ዳላዌር"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"ሚዞ"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"ባሉቺ"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"ባሊኔስ"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"ሉዪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"ባቫሪያን"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"ባሳ"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"ባሙን"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"የአውሮፓ ስፓንሽኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"ስኮትስ"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"ሲሲሊያንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"አፋርኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"አብሐዚኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of(u"ባታካ ቶባ"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"አቬስታን"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"አፍሪካንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"አካንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"አማርኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"አራጎንስ"_s)
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
			$of(u"ካታካና ወይንም ሂራጋና"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"አሳሜዛዊ"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"አቫሪክ"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"ደቡባዊ ኩርዲሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"አያማርኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"አዘርባጃንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"ባስኪርኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"የመሰረታዊ በትር ድርድር ቅደም ተከተል"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"ቤላራሻኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"ቡልጋሪኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"ቢስላምኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"ባምባርኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"ቤንጋሊኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"ቲቤታንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"ዶግሪብ"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"ብሬቶንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"ቦስኒያንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"ምያንማር"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"የላኦ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"ሴና"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"ካታላንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"ኮይራቦሮ ሴኒ"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"ችችን"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"ቻሞሮ"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"ኮርሲካኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"ኦሪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"ክሪ"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"ቼክኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"ቸርች ስላቪክ"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"ቹቫሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"ወልሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"የኢትዮጵያ ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"ዴኒሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"የአውሮፓ ፖርቹጋልኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"መደበኛ የምንዛሪ ቅርጸት"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"ቤጃ"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"ዲንካ"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"ቤምባ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"የሞንጎልኛ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"ዲቬሂ"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"የላቲን አሜሪካ ስፓኒሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of(u"ቤታዊ"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"ድዞንግኻኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"ቤና"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"የቻይና የቀን አቆጣጠር"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"ዛርማኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"የግሪክ ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ኢዊ"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"ባፉት"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"መደበኛ መስመር መስበሪያ ቅጥ"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"ሞልዳቪያንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"ግሪክኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"እንግሊዝኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"ኤስፐራንቶ"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of(u"ባዳጋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"የባህላዊ ቻይንኛ የድርድር ቅደም ተከተል - ትልቅ5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"ስፓንሽኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"ኢስቶኒያንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"ሃንብ"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"ባስክኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"ሐንጉል"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"ታቼልሂት"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"የላይኛው ሶርቢያንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"ሃን"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"ሻን"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"ፐርሺያኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"ቀለል ያለ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"የምስራቃዊ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"ባህላዊ"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"ፉላህ"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"ቻዲያን ዓረብኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"ዢያንግ ቻይንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"ፊኒሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"ፊጂኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"ፎን"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"የምዕራብ ባሎቺ"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"ካንቶኒዝ"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ፋሮኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"ቢ ጂ ኤን"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"ኡምቡንዱ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"ፈረንሳይኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"ሲዳምኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"ምዕራባዊ ፍሪሲኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"አይሪሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"የስኮቲሽ ጌልክኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"ጋሊሺያ"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"ጓራኒኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"ቦጁሪ"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"ያልታወቀ ቋንቋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"የኢትዮፒክ አመተ አለም የቀን አቆጣጠር"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"ጉጃርቲኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"ማንክስኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"ሃውሳኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"ዕብራይስጥ\ufeff"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"ሒንዱኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"ሁፓ"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"ቢኮል"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"ቢኒ"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"ክሮሽያንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"ሃይትኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ሀንጋሪኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"አርመናዊ"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"ሄሬሮ"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"ካጁን ፍሬንች"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"ኢንቴርሊንጓ"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"ጃሞ"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"ኢንዶኔዥኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"የቲቤታን አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"እንተርሊንግወ"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ኢግቦኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"ሲቹንዪኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"እኑፒያቅኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"አርፒታን"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"ኢዶ"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of(u"ባንጃር"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"አይስላንድኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ጣሊያንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"እኑክቲቱትኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"ማላያልም"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"ዶግሪ"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"ደቡባዊ ሳሚ"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"ጃቫንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"ማዱረስ"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"ሉሌ ሳሚ"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"ማጋሂ"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"ማይተሊ"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"ኢናሪ ሳሚ"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"ጆርጂያን"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"ሲክሲካ"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"ማካሳር"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"ዉ ቻይንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"ስኮልት ሳሚ"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"ኮንጎኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"ኪኩዩ"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"ማሳይ"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"ኩንያማ"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"ካዛክኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"ካላሊሱትኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"ክህመርኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"ካናዳኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"ካኑሪ"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"ካሽሚርኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"ኩርድሽኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"ኮሚ"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"ኮርኒሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"ኪርጊዝኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"ሶኒንኬ"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"ላቲንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"ሉክዘምበርኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"የማላያላምኛ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"ጋንዳኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"ሊምቡርጊሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"ቲቤታን"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"ሊንጋላኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"ፍሩሊያን"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"ላኦኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"ኢምፔሪያል የመለኪያ ስርዓት"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"ሉቴንያንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"ሉባ ካታንጋ"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"ላትቪያን"_s)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of(u"{0}፣{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"ማላጋስኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"ማርሻሌዝኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"የነባሪ ዩኒኮድ የድርድር ቅደም ተከተል"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"ማኦሪኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"ማሴዶንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"ማላያላምኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"ማራቲኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"ማላይኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"ማልቲስኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"ቡርማኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"አርሜንያዊ"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"ሞክሻ"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"የታችኛው ሰርቢያንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"ለጠቅላላ ጉዳይ ፍለጋ"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"የኖርዌይ ቦክማል"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"ሰሜን ንዴብሌ"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"ኔፓሊኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ንዶንጋ"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"ደች"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"የኖርዌይ ናይኖርስክ"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"ኖርዌጂያን"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"ደቡብ ንደቤሌ"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"ናቫጆ"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ንያንጃ"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"ካቺን"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"ካብይል"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"ኦኪታንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"ካጅ"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"ካምባ"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"ሜንዴ"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"ሜሩ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"የአርመንኛ ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"ኦሮሞኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of(u"ሴንተራል ዱሰን"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"ኦዲያኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ኦሴቲክ"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"ቢሹንፑሪያ"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"ካባርዲያን"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"ሞሪሲየኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"ስራናን ቶንጎ"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"ፑንጃብኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"ዱዋላኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of(u"ባክህቲያሪ"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"ፖሊሽኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"የዳንጊ የቀን አቆጣጠር"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"ፓሽቶኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"ፖርቹጋልኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"አቀማመጥ ደርድር"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"የብራዚል ፖርቹጋልኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"ታያፕ"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"ማኩዋ ሜቶ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"የምንዛሪ ቅርጸት"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"ብራጅ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"የቀን አቆጣጠር"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"ላኦ"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"ሜታ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"የ24 ሰዓት ስርዓት (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"የ24 ሰዓት ስርዓት (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"ሳሆኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of(u"ብራሁዪ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"የማያንማር አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ኵቿኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"ቦዶ"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"ማኮንዴ"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ኢትዮፒክ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"የ12 ሰዓት ስርዓት (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"የ12 ሰዓት ስርዓት (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"ሮማንሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"ሩንዲኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"ምንዛሪ"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"ሮማኒያን"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"የኦሪያኛ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"የቻይንኛ አስርዮሽ ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ራሽያኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"አኮስ"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"ኪንያርዋንድኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"ብሊስይምቦልስ"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"ካቡቨርዲያኑ"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"ሚክማክ"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"ሱኩማ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"የአውስትራሊያ እንግሊዝኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"ሳንስክሪትኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"ሳርዲንያንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"ሲንድሂኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"ሰሜናዊ ሳሚ"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"ሚናንግካባኡ"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"ሳንጎኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"ሰርቦ-ክሮኤሽያኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"ሲንሃልኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"ስሎቫክኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"ስሎቪኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"ሳሞአኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"ሾናኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"ሱማልኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"የአረቢክ-ኢንዲክ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"አልባንያንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"ሰርብያኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"ስዋቲኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"የሂሳብ ምንዛሪ ቅርጸት"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"ደቡባዊ ሶቶ"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"ሱዳንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"ስዊድንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"ስዋሂሊኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"የባህላዊ ቻይንኛ የገንዘብ ነክ ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ኢቢቦ"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ኢባን"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"ታሚልኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"እሲያ"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"ቡሪያት"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"መካከለኛው እሲያ"_s)
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
			$of("tg"_s),
			$of(u"ታጂኪኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"ታይኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"ትግርኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"ቡጊኔዝ"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"ኮሮ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"የካናዳ እንግሊዝኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"ቱርክሜንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"ታጋሎገኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"ጽዋናዊኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"ቶንጋኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"ቡሉ"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"ጆላ ፎንያኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"የጃፓንኛ ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"ቱርክኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"ጾንጋኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"ኮሞሪያን"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"ታታርኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"ድዩላ"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"ትዊኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"ታሂታንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"አውሮፓ"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"ምዕራባዊ አውሮፓ"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"ሰሜናዊ አውሮፓ"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"ዳዛጋ"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"ምስራቃዊ አውሮፓ"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ኡዊግሁርኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"የጋራ"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ዩክሬንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"የኮፕቲክ የቀን አቆጣጠር"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"ኡርዱኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"ካልማይክ"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ኡዝቤክኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"ክሃሲ"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"የታችኛው ሳክሰን"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"ቬንዳ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"የሚንጉ የቀን አቆጣጠር"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"ቪየትናምኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"ኮይራ ቺኒ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"የሰዓት ዑደት (12 ወይም 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"ቮላፑክኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"ክላሲክ ኔይራ"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"ኪቼ"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"ቺምቦራዞ ሃይላንድ ኩቹዋ"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"ጋ"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"ዋሎን"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"ጋጉዝኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"ሲሪያክ"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"ጋን ቻይንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"ዎሎፍኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"መደበኛ የሞሮኮ ታማዚግት"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"ዘመናዊ መደበኛ ዓረብኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"ማኒፑሪ"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"ላቲን"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"ቀለል ያሉ የቻይንኛ ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"የባህላዊ ቻይንኛ ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"ዞሳኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"የሮማን ንዑስ ሆሄ ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"ብሊን"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"ሞሃውክ"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"ካኮ"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"ይዲሽኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"ሞሲ"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"ዮሩባዊኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"ተለምዷዊ ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"የሜክሲኮ ስፓንሽኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"ቫይ"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"ዡዋንግኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"ካለንጂን"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"ቻይንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"ቦፖሞፎ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"መስመር መስበሪያ ቅጥ"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"ዙሉኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"የስልክ ደብተር ድርድር ቅደም ተከተል"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"ጆርጂያዊ"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"ኪምቡንዱ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"የጃፓንኛ የገንዘብ ነክ ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"ግዕዝኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"ዳግም የተፈጠረ የድርድር ቅደም ተከተል"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"ኢቦኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"ቀለል ያለ ቻይንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"ኮሚ ፔርምያክ"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"ኮንካኒ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"ባህላዊ ቻይንኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"ክፔሌ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"የክህመር አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ኢሎኮ"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"ሙንዳንግ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"የጉርሙኪ አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"ባለብዙ ቋንቋዎች"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"ካዶ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"የመለኪያ ስርዓት"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"ክሪክ"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"ጅልበርትስ"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"ካሪብ"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"ካዩጋ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"የታሚል አሃዞች"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"ካራቻይ-ባልካር"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ኢንጉሽ"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"ዳሪኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"ካረሊኛ"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"ኤፊክ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"ቁጥሮች"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"ኩሩክ"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"ሻምባላ"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"ተሉጉ"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"ባፊያ"_s)
		})
	}));
	return data;
}

LocaleNames_am::LocaleNames_am() {
}

$Class* LocaleNames_am::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_am, name, initialize, &_LocaleNames_am_ClassInfo_, allocate$LocaleNames_am);
	return class$;
}

$Class* LocaleNames_am::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun