#include <sun/util/resources/cldr/ext/LocaleNames_ml.h>

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

$MethodInfo _LocaleNames_ml_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ml, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ml, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ml_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ml",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ml_MethodInfo_
};

$Object* allocate$LocaleNames_ml($Class* clazz) {
	return $of($alloc(LocaleNames_ml));
}

void LocaleNames_ml::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ml::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_NR, u"നൗറു"_s);
	$var($String, metaValue_TV, u"ടുവാലു"_s);
	$var($String, metaValue_ar, u"അറബിക്"_s);
	$var($String, metaValue_bn, u"ബംഗാളി"_s);
	$var($String, metaValue_bo, u"ടിബറ്റൻ"_s);
	$var($String, metaValue_el, u"ഗ്രീക്ക്"_s);
	$var($String, metaValue_gu, u"ഗുജറാത്തി"_s);
	$var($String, metaValue_he, u"ഹീബ്രു"_s);
	$var($String, metaValue_hy, u"അർമേനിയൻ"_s);
	$var($String, metaValue_ja, u"ജാപ്പനീസ്"_s);
	$var($String, metaValue_jv, u"ജാവനീസ്"_s);
	$var($String, metaValue_km, u"ഖമെർ"_s);
	$var($String, metaValue_kn, u"കന്നഡ"_s);
	$var($String, metaValue_ko, u"കൊറിയൻ"_s);
	$var($String, metaValue_la, u"ലാറ്റിൻ"_s);
	$var($String, metaValue_lo, u"ലാവോ"_s);
	$var($String, metaValue_ml, u"മലയാളം"_s);
	$var($String, metaValue_mn, u"മംഗോളിയൻ"_s);
	$var($String, metaValue_or, u"ഒഡിയ"_s);
	$var($String, metaValue_si, u"സിംഹള"_s);
	$var($String, metaValue_ta, u"തമിഴ്"_s);
	$var($String, metaValue_te, u"തെലുങ്ക്"_s);
	$var($String, metaValue_th, u"തായ്"_s);
	$var($String, metaValue_ban, u"ബാലിനീസ്"_s);
	$var($String, metaValue_bug, u"ബുഗിനീസ്"_s);
	$var($String, metaValue_cop, u"കോപ്റ്റിക്"_s);
	$var($String, metaValue_peo, u"പഴയ പേർഷ്യൻ"_s);
	$var($String, metaValue_vai, u"വൈ"_s);
	$var($String, metaValue_type_nu_mathdbl, u"ഗണിത ഏകസ്\u200cപെയ്\u200cസ് അക്കങ്ങൾ"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"കൊളോണിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"ഒഖാം"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"മിരാൻറസേ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"ചിഹ്നങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"അറ്റ്സാം"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"മർവാരി"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"തായ് താം താം അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"തഗ്ബൻവാ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"ഇമോജി"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"ഗ്നിവ/നിജിവ പ്രാദേശികരൂപം"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"ചക്\u200cമ"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"പ്രാചീന ഈജിപ്ഷ്യൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"രാജസ്ഥാനി"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"ഫഗസ് പ"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"ടിംനേ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of(u"ഖുഡവാഡി അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"ടെസോ"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"രാപനൂയി"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"ടെറേനോ"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"അസൻഷൻ ദ്വീപ്"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"രാരോടോങ്കൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"ടെറ്റും"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of(u"സിംഹള ലിത് അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"അൻഡോറ"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"യുണൈറ്റഡ് അറബ് എമിറൈറ്റ്\u200cസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"ഫ്ലമിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"അഫ്\u200cഗാനിസ്ഥാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"ആൻറിഗ്വയും ബർബുഡയും"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of(u"മ്രോ അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"എത്യോപിക് കലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"ആൻഗ്വില്ല"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"സമയ മേഖല"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"അൽബേനിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"അർമേനിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"തെംഗ്വർ"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"അംഗോള"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"അന്റാർട്ടിക്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"അർജന്റീന"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"പൃതി"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"അമേരിക്കൻ സമോവ"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"ഓസ്ട്രിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"ഓസ്\u200cട്രേലിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"അറൂബ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"അമേരിക്കൻ ഇംഗ്ലീഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"അലൻഡ് ദ്വീപുകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"മയീൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"അസർബൈജാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"കിഴക്കൻ അർമീനിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"ബോസ്നിയയും ഹെർസഗോവിനയും"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"ബാർബഡോസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"സെബുവാനോ"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"ബംഗ്ലാദേശ്"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"കുമൈക്"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"ബെൽജിയം"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"മദ്ധ്യ ഉച്ച ജർമൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"ബർക്കിന ഫാസോ"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"ബൾഗേറിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"ബഹ്റിൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"ബറുണ്ടി"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"ബെനിൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"സെന്റ് ബാർത്തലമി"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"ബർമുഡ"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"കുതേനൈ"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ഏഴ്സ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ബ്രൂണൈ"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"ബൊളീവിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"കരീബിയൻ നെതർലാൻഡ്സ്"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ബ്രസീൽ"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"ബഹാമാസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"സോഗോ"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"ഭൂട്ടാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"ബൗവെട്ട് ദ്വീപ്"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"ബോട്സ്വാന"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"ബെലറൂസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"ബെലീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"ദൃശ്യഭാഷ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"പേർഷ്യൻ കലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"ഹീബ്രു സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"കാനഡ"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"കോക്കസ് (കീലിംഗ്) ദ്വീപുകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"മസന്ററാനി"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"കോംഗോ - കിൻഷാസ"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"സെൻട്രൽ ആഫ്രിക്കൻ റിപ്പബ്ലിക്ക്"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"കോംഗോ - ബ്രാസവില്ലി"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"സ്വിറ്റ്സർലാൻഡ്"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"കോട്ട് ഡി വാർ"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"കുക്ക് ദ്വീപുകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"ചിലി"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"ക്തി"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"കാമറൂൺ"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"ചൈന"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"കൊളംബിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"ക്ലിപ്പെർട്ടൻ ദ്വീപ്"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"കോസ്റ്ററിക്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"ക്യൂബ"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"കേപ്പ് വേർഡ്"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"കുറാകാവോ"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"ക്രിസ്മസ് ദ്വീപ്"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"സൈപ്രസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"ബെലിനീസ് അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"ചെക്കിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"എകാജുക്"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"ജർമ്മനി"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"ഓൾഡ് ഹൈ ജർമൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"അചിനീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"ചിഗ"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"ഡീഗോ ഗ്രാഷ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"ദേവനാഗരി അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"ജിബൂത്തി"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"ഡെൻമാർക്ക്"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"അകോലി"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"ഗോണ്ഡി"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"ബ്രെയ്\u200cലി"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"ബ്രാഹ്മി"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"ഡൊമിനിക്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"അർമേനിയൻ ചെറിയ സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"ഡൊമിനിക്കൻ റിപ്പബ്ലിക്ക്"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"ഗൊറോന്റാലോ"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"ഗോഥിക്ക്"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"മേറ്റി മായക്"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"സുനി"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"ടൈഗ്രി"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"അൾജീരിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"പങ്കാസിനൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"ഹാഫ്\u200cവിഡ്\u200cത്തിലേക്ക്"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"പാഹ്ലവി"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"സെയൂത്ത ആൻഡ് മെലിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"ചിബ്ച"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"പാംപൻഗ"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"ഇക്വഡോർ"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"പാപിയാമെന്റൊ"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"അഡാങ്\u200cമി"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"എസ്റ്റോണിയ\u200d"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"ടിവ്"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"ഈജിപ്ത്"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"പശ്ചിമ സഹാറ"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"ഷാഗതായ്"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"പലാവുൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"ചൂകീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"ചിനൂഗ് ജാർഗൺ"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"മാരി"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"ചിപേവ്യൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"ചോക്റ്റാവ്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of(u"ഗണിത ബോൾഡ് അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"ഷെരോക്കി"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"എറിത്രിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"സ്\u200cപെയിൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"എത്യോപ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"യൂറോപ്യൻ യൂണിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"എലാമൈറ്റ്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"ഇംഗ്ലീഷ് കലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"യൂറോസോൺ"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"ഷായാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"ഗുജറാത്തി അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"സിന്ധു"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"അഡൈഗേ"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"ഫിൻലാൻഡ്"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"ഫിജി"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"ഫാക്ക്\u200cലാന്റ് ദ്വീപുകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"മൈക്രോനേഷ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"ഭാഷാ ഭേദം"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"ഫറോ ദ്വീപുകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"ഫ്രാൻസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"ടൊക്കേലൗ"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"ഗ്രബൊ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"ശകവർഷ കലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"പുരാതന ഗ്രീക്ക്"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"ഗാബൺ"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"വോട്ടിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"യുണൈറ്റഡ് കിംഗ്ഡം"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"നൈജീരിയൻ പിഡ്\u200cഗിൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"ഗ്രനേഡ"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"ജോർജ്ജിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"ഫ്രഞ്ച് ഗയാന"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"ഗേൺസി"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"ഘാന"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"തായ് ലേ"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"ജിബ്രാൾട്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"ആഫ്രിഹിലി"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"ഗ്രീൻലാൻറ്"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"മദ്ധ്യ ഇംഗ്ലീഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"ഗാംബിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"ഗിനിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"ഗ്വാഡലൂപ്പ്"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"ഇക്വറ്റോറിയൽ ഗിനിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"ഗ്രീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"ദക്ഷിണ ജോർജ്ജിയയും ദക്ഷിണ സാൻഡ്\u200cവിച്ച് ദ്വീപുകളും"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"ഗ്വാട്ടിമാല"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of(metaValue_type_nu_mathdbl)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"ഗ്വാം"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"ഗിനിയ-ബിസൗ"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"ലിംഗ്വിറ്റ്"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"ക്ലിംഗോൺ"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"പുതിയ തായ് ല്യൂ"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"ഗയാന"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"സെൻട്രൽ കുർദിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"ഭാഷാപരമായ ഉള്ളടക്കമൊന്നുമില്ല"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"ഓസ്\u200cട്രിയൻ ജർമൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"ഹോങ്കോങ് (SAR) ചൈന"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"ഹിയേർഡും മക്\u200cഡൊണാൾഡ് ദ്വീപുകളും"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"ഹോണ്ടുറാസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"ക്രൊയേഷ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"ആഘേം"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"സ്വിസ് ജർമ്മൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"ഇസ്\u200cലാമിക് കലണ്ടർ (ഉം അൽ ഖുറ)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"ഹെയ്തി"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"ഹംഗറി"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"ടമഷേക്"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"കാനറി ദ്വീപുകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"മിൻ നാൻ ചൈനീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"ഇന്തോനേഷ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"കയാഹ് ലി അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"അയർലൻഡ്"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"നെപ്പോളിറ്റാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"നാമ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"സോറ സോംപെങ് അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"സാസാ"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ഇസ്രായേൽ"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"ഐൽ ഓഫ് മാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ഇന്ത്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"യൂറോപ്യൻ അടുക്കൽ നിയമങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"ബ്രിട്ടീഷ് ഇന്ത്യൻ മഹാസമുദ്ര പ്രദേശം"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"ഇറാഖ്"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ഇറാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"ഐസ്\u200cലാന്റ്"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ഇറ്റലി"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"ഗണിത രൂപം"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"തായി അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"കമ്പ്യൂട്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"ബംഗാളി അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of(u"സിറിലിക് അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"ജേഴ്സി"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"ഇസ്\u200cലാമിക് കലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"ജമൈക്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"ജോർദ്ദാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"ജപ്പാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"1606 വരെയുള്ള ആധുനികമദ്ധ്യകാല ഫ്രഞ്ച്"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"ഐനു"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"ഗുസീ"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"ന്യാസാ ഡോങ്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"കന്നഡ സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"കയാ ലി"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"സ്വിസ് ഹൈ ജർമൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"സ്വരസൂചക അടുക്കൽ ക്രമം"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"ബുദ്ധമതകലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"കെനിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"ലാറ്റിനമേരിക്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"കിർഗിസ്ഥാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"കംബോഡിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"കിരിബാട്ടി"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"കോമൊറോസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"സെന്റ് കിറ്റ്\u200cസും നെവിസും"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"പാരമ്പര്യമായ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"കനേഡിയൻ ഫ്രഞ്ച്"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"ഉത്തരകൊറിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"ദക്ഷിണകൊറിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"പൊള്ളാർഡ് ശബ്ദലിപി"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"സ്വിസ് ഫ്രഞ്ച്"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"കുവൈറ്റ്"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"ടോക് പിസിൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"കേയ്മാൻ ദ്വീപുകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"കസാഖിസ്ഥാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"സിറിലിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"ലാവോസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"ലെബനൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"സെന്റ് ലൂസിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"ഫീനിഷ്യൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"പുരാതന ചർച്ച് സ്ലവോണിക് സിറിലിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"ഗ്വിച്ചിൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"ലോ ജർമൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"ലിച്ചൺസ്റ്റൈൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"ശ്രീലങ്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"അക്കാഡിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"ലൈബീരിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"ലെസോതോ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"പഹൽവി ലിപി"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"ലിത്വാനിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"ലക്സംബർഗ്"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"ലാറ്റ്വിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"കറ്റക്കാന"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"ലിബിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ലാഡിനോ"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"വുൻജോ"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"ലഹ്\u200cൻഡ"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"ലാംഗി"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"ഥാന"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"മൊറോക്കൊ"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"മൊണാക്കോ"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"മൾഡോവ"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"മോണ്ടെനെഗ്രോ"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"സെന്റ് മാർട്ടിൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"ലംബ"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"മഡഗാസ്കർ"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"മാർഷൽ ദ്വീപുകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"അലൂട്ട്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"വായ് സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of(metaValue_type_nu_mathdbl)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"നോർത്ത് മാസിഡോണിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"മാലി"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"മ്യാൻമാർ (ബർമ്മ)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"മംഗോളിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"നേവാരി"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"മക്കാവു SAR ചൈന"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"ഉത്തര മറിയാനാ ദ്വീപുകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"മാർട്ടിനിക്ക്"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"മൗറിറ്റാനിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"മൊണ്ടെസരത്ത്"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"മാൾട്ട"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"യു.എൻ. GEGN ലിപ്യന്തരണം"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"മൗറീഷ്യസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"തെക്കൻ അൾത്തായി"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"മാലിദ്വീപ്"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"മലാവി"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"മെക്സിക്കോ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"ജാപ്പനീസ് കലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"മലേഷ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"മൊസാംബിക്ക്"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"എഴുത്തു പഹൽവി"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"നമീബിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"സബ്-സഹാറൻ ആഫ്രിക്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"ഹീബ്രൂ കലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"നിഘണ്ടു അടുക്കൽ ക്രമം"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"ന്യൂ കാലിഡോണിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"നൈജർ"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"നോർഫോക് ദ്വീപ്"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"നൈജീരിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"തരോക്കോ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"സാൾട്ടർ പഹൽവി"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"നിക്കരാഗ്വ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"പഹ്വാ ഹമോംഗ്"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"നെതർലാൻഡ്\u200cസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"നോർവെ"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"നേപ്പാൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"ന്യൂയി"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"ഫിനീഷ്യൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"റോംബോ"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"സിംഷ്യൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"ന്യൂസിലാൻറ്"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"റൊമാനി"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"മെറോയിറ്റിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"ക്രിമിയൻ ടർക്കിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"പഴയ ഇംഗ്ലീഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"ഒമാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"ആൻഗിക"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"സെഷൽവ ക്രിയോൾ ഫ്രഞ്ച്"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of(u"പഹാവ് മോംഗ് അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"പനാമ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"ഇസ്ലാം-സിവിൽ കലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"കാഷുബിയാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ബ്രിട്ടീഷ് ഇംഗ്ലീഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"പെറു"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"ഫ്രഞ്ച് പോളിനേഷ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"പാപ്പുവ ന്യൂ ഗിനിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"ഫിലിപ്പീൻസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"പാക്കിസ്ഥാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"പോളണ്ട്"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"എവോൻഡോ"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"സെന്റ് പിയറി ആൻഡ് മിക്വലൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"പിറ്റ്\u200cകെയ്\u200cൻ ദ്വീപുകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"പോർട്ടോ റിക്കോ"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"പാലസ്\u200cതീൻ പ്രദേശങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"പോർച്ചുഗൽ"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"പലാവു"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"നിയാസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"ഗ്രീക്ക് ചെറിയക്ഷര സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"പരാഗ്വേ"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"ടുംബുക"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"ഖത്തർ"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"ന്യുവാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"ദ്വീപസമൂഹം"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"ലഹ്ഗിയാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of(u"അഹോം അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"ടാക്രി അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"ത്വട്"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"ലോകം"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"ആഫ്രിക്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"വടക്കേ അമേരിക്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"റീയൂണിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"തെക്കേ അമേരിക്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ലോജ്ബാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"റെജാംഗ്"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ഓഷ്യാനിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"റൊമാനിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"സെർബിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"റഷ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"റുവാണ്ട"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"പുതിയ തായ് ലൂ അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"മണിചേയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"ഉഗ്രൈറ്റിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"ഖരോഷ്ടി"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"സൗദി അറേബ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"പൊൻപിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"മൻഡേയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"സോളമൻ ദ്വീപുകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"ടസവാക്ക്"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"പശ്ചിമ ആഫ്രിക്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"സീഷെൽസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"സുഡാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"മദ്ധ്യഅമേരിക്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"സ്വീഡൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"കിഴക്കൻ ആഫ്രിക്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"അരമായ"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"ഉത്തരാഫ്രിക്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"സിംഗപ്പൂർ"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"സെന്റ് ഹെലീന"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"നിയന്ത്രിത രേഖാ വിഭാജി ശൈലി"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"മദ്ധ്യആഫ്രിക്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"സ്ലോവേനിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of(u"മ്യാൻമാർ തായ് ലെയിംഗ് അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"തെക്കേ ആഫ്രിക്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"സ്വാൽബാഡും ജാൻ മായേനും"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"അമേരിക്കകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"സ്ലോവാക്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"സിയെറ ലിയോൺ"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"സാൻ മറിനോ"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"സെനഗൽ"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"സോമാലിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"മാപുചി"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"അറാപഹോ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"പരമ്പരാഗത തമിഴ് സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"സുരിനാം"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"ദക്ഷിണ സുഡാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"സാവോ ടോമും പ്രിൻസിപെയും"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"എൽ സാൽവദോർ"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"സിന്റ് മാർട്ടെൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"സിറിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"യാവോ"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"സ്വാസിലൻഡ്"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"അറാവക്"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"യെപ്പീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ട്രിസ്റ്റൻ ഡ കൂന"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"ആസു"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"യുഎസ് അളക്കൽ സംവിധാനം"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"വടക്കൻ അമേരിക്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"ടർക്ക്\u200cസും കെയ്\u200cക്കോ ദ്വീപുകളും"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"യാംഗ്ബെൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"ഛാഡ്"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"ഫ്രഞ്ച് ദക്ഷിണ ഭൂപ്രദേശം"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"ടോഗോ"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"തായ്\u200cലാൻഡ്"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"താജിക്കിസ്ഥാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"കരീബിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"ടോക്കെലൂ"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"തിമോർ-ലെസ്റ്റെ"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"യംബ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"ഹാംഗൽ പ്രാരംഭ വ്യഞ്ജനാക്ഷരം പ്രകാരം തിരയുക"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"തുർക്ക്മെനിസ്ഥാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of(u"ബൂണ്ട്\u200cലിങ്ങ്"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"ടുണീഷ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"ടോംഗ"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"തുർക്കി"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ട്രിനിഡാഡും ടുബാഗോയും"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"തായ്\u200cവാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"ഓസ്\u200cട്രിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"ഒർഖോൺ"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"ടാൻസാനിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"ക്വാസിയോ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"അജ്ഞാത ലിപി"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"ഉക്രെയ്\u200cൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"ആരോമാനിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"കിഴക്കൻ ഏഷ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"തുവിനിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"കോംഗോ സ്വാഹിലി"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"തെക്കേ ഏഷ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"ഹൈഡ"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"തെക്ക്-കിഴക്കൻ ഏഷ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"ഉഗാണ്ട"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"ഹാക്ക ചൈനീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"പിൻ\u200cയിൻ ക്രമീകരണം"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"തെക്കേ യൂറോപ്പ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"യു.എസ്. ദ്വീപസമൂഹങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"ഐക്യരാഷ്ട്രസഭ"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"അമേരിക്കൻ ഐക്യനാടുകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"ഹവായിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"ലളിതമായ ചൈനീസ് ക്രമീകരണം - ജീബി2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"ഉറുഗ്വേ"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"പ്രഷ്യൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"ഉസ്\u200cബെക്കിസ്ഥാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"മധ്യ അറ്റ്\u200cലസ് ടമാസൈറ്റ്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"സ്റ്റ്രോക്ക് ക്രമീകരണം"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"ഗീംബൂൺ"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"വത്തിക്കാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"പഴയ പ്രൊവൻഷ്ൽ"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"സെന്റ് വിൻസെന്റും ഗ്രനെഡൈൻസും"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"വെനിസ്വേല"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"ബ്രിട്ടീഷ് വെർജിൻ ദ്വീപുകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"യു.എസ്. വെർജിൻ ദ്വീപുകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"വിയറ്റ്നാം"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"വന്വാതു"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"നോഗൈ"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"റുവാ"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"പഴയ നോഴ്\u200cസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"ഓസ്\u200cട്രേലിയയും ന്യൂസിലാൻഡും"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"മെലനേഷ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"വാലിസ് ആന്റ് ഫ്യൂച്യുന"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"പരമ്പരാഗത ക്രമീകരണം"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"മൈക്രോനേഷ്യൻ പ്രദേശം"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"ഗോമ്പ"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"ലഗോത്ത"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"സാമ്പത്തിക സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"അനുയോജ്യതയ്\u200cക്കായുള്ള മുൻ അടുക്കൽ ക്രമം"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"വാൾസർ"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"സമോവ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"മീറ്റെയ് മായെക് അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"വൊലൈറ്റ"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"വാഷൊ"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"കൃത്രിമ ഉച്ചാരണം"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"വാരേയ്"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"സൂഡോ-ബായഡീ"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"അവാധി"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"പോളിനേഷ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"കൊസോവൊ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"ബ്രാഹ്\u200cമി അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"എഴുതപ്പെടാത്തത്"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ഒൽ ചിക്കി"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"വൂൾപിരി"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"ബട്ടക്"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"ബ്ലിസ് ചിത്ര ലിപി"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"യെമൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"ഇൻകോ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"സാധാരണ അടുക്കൽ ക്രമം"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"ഫങ്"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"ഫാന്റി"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"ചിഹ്നലിപി"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"മയോട്ടി"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"ചാം അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"ദക്ഷിണാഫ്രിക്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"സുഡാനീസ് അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"അനിയന്ത്രിത രേഖാ വിഭാജി ശൈലി"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"ദേവനാഗരി"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"ജോർജിയൻ സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"ജുയൻ അടുക്കൽ ക്രമം"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"ഹിരഗാന"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"സാംബിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"സിംബാബ്\u200cവേ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"അജ്ഞാത പ്രദേശം"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"റുണിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"മെട്രിക്ക് സംവിധാനം"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ഐഎസ്ഓ 8601 കലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"മോങ്കോ"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"നോർത്തേൻ സോതോ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"തെലുങ്ക് സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"ലൂസിയാന ക്രിയോൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"ലൊസി"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"മചേം"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"ലളിതവൽക്കരിച്ച ചൈനീസ് ധനകാര്യ സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"ഹിലിഗയ്നോൺ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"വിപുലീകൃത അറബിക്-ഇന്ത്യ അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"നുവേർ"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"ഡകോട്ട"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"പൂർണ വലുപ്പമുള്ള സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"ഹിറ്റൈറ്റ്"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"ഡർഗ്വാ"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"തൈത"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"മായൻ ചിത്രലിപി"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"വടക്കൻ ലൂറി"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"ഇമോജി അടുക്കൽ ക്രമം"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"ക്ലാസിക്കൽ നേവാരി"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"ഉഡ്മുർട്ട്"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"ഇസ്ലാം-അറബിക് കലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"ലിംബു"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"സാൻഡവേ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"റോമൻ സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"സാഖ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"ശാരദ അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"സമരിയാക്കാരുടെ അരമായ"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"സംബുരു"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"സസാക്"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"സന്താലി"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"തിഫിനാഗ്"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"ജൂഡിയോ-പേർഷ്യൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"സംഖ്യാപരമായ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"സ്വാഭാവിക ഡിജിറ്റുകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"ഗംബായ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"ഗുരുമുഖി"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"ലൂബ-ലുലുവ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of(u"തിർഹുത്ത അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"ഫുൾവിഡ്\u200cത്തിലേക്ക്"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"സംഗു"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"ലൂയിസെനോ"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ന്യാൻകോൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"ന്യാംവേസി"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"ലുൻഡ"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"ന്യോറോ"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"ലുവോ"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"ഫിലിപ്പിനോ"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"മോങ്"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"ദെലവേർ"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"മിസോ"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"ബലൂചി"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"സ്ലേവ്"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"ഉഗറിട്ടിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wara"_s),
			$of(u"വറാങ് സിറ്റി അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"ലുയിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"ബസ"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"ബാമുൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"ജൂഡിയോ-അറബിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"യൂറോപ്യൻ സ്\u200cപാനിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"സിമ"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"സ്കോട്സ്"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"സിസിലിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"അഫാർ"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"അബ്\u200cഖാസിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"അവസ്റ്റാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"ആഫ്രിക്കാൻസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"അകാൻ\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"ചക്മ അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"ഘോമാല"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"അംഹാരിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"അരഗോണീസ്"_s)
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
			$of(u"ജാപ്പനീസ് സില്ലബറീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"ആസ്സാമീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"സമരേഖയിലുള്ള എ"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"അവാരിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"ലീനിയർ ബി"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"തെക്കൻ കുർദ്ദിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"അയ്മാറ"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"അസർബൈജാനി"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"ബഷ്ഖിർ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"റാഡിക്കൽ-സ്ട്രോക്ക് അടുക്കൽ ക്രമം"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"ബെലാറുഷ്യൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"ബൾഗേറിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"ബിസ്\u200cലാമ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"ജാവനീസ് അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"ബംബാറ"_s)
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
			$of(u"ഡോഗ്രിബ്"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"ബ്രെട്ടൺ"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"ബോസ്നിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"സെനേക"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"മ്യാൻമാർ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"ലാവോ അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"സേന"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"എൻകോ"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"സെൽകപ്"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"കറ്റാലാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"കൊയ്റാബൊറോ സെന്നി"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"ചെചൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"ചമോറോ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"പരിഷ്ക്കരിച്ച ലിപി"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"കോർസിക്കൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"ക്രീ"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"ചെക്ക്"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"ചർച്ച് സ്ലാവിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"ചുവാഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"വെൽഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"എത്യോപിക് സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"യി"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"ഡാനിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"യൂറോപ്യൻ പോർച്ചുഗീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"ജർമ്മൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"സാധാരണ കറൻസി ഫോർമാറ്റ്"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"ബേജ"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"ദിൻക"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"ബേംബ"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"പഴയ ഐറിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"മംഗോളിയൻ സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"ദിവെഹി"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"ലാറ്റിൻ അമേരിക്കൻ സ്\u200cപാനിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"ദ്\u200cസോങ്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"ബെനാ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"ചൈനീസ് കലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"സാർമ്മ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"ഗ്രീക്ക് സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"യൂവ്"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"ബാഫട്ട്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"സാധാരണ രേഖാ വിഭാജി ശൈലി"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"മോൾഡാവിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ഇംഗ്ലീഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"എസ്\u200cപരാന്റോ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"പരമ്പരാഗത ചൈനീസ് ക്രമീകരണം - ബിഗ്5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"സ്\u200cപാനിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"എസ്റ്റോണിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"ഹൻബ്"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"ബാസ്\u200cക്"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"ബുഹിഡ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"ഹാംഗുൽ"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"സമരിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"താച്ചലിറ്റ്"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"അപ്പർ സോർബിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"ഹാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"ഷാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"ഹനുനൂ"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"പേർഷ്യൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"ലളിതവൽക്കരിച്ചത്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"പടിഞ്ഞാറൻ അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"പരമ്പരാഗതം"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"ഫുല"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"ചാഡിയൻ അറബി"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"ഷ്യാങ് ചൈനീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"ഫിന്നിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"ഫിജിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"ഫോൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"പശ്ചിമ ബലൂചി"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"കാന്റണീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ഫാറോസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"യു.എസ്. BGN ലിപ്യന്തരണം"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"ഉംബുന്ദു"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"ഫ്രഞ്ച്"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"സിഡാമോ"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"പശ്ചിമ ഫ്രിഷിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ഐറിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"സ്കോട്ടിഷ് ഗൈലിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"ഗലീഷ്യൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"ഗ്വരനീ"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"ഭോജ്\u200cപുരി"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"അജ്ഞാത ഭാഷ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"എത്യോപിക് അമെതെ അലെം കലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"ഇസ്ലാം-ജ്യോതിഷ കലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"മാൻസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"ഒസ്\u200cമാന്യ അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"ഹൗസ"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"ഹിന്ദി"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"ഹൂപ"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"ബികോൽ"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"ബിനി"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"ഹിരി മോതു"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"ക്രൊയേഷ്യൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"ഹെയ്\u200cതിയൻ ക്രിയോൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ഹംഗേറിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"ഹെരേരൊ"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"കേജൺ ഫ്രഞ്ച്"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"ഐപി\u200cഎ സ്വനവ്യവസ്ഥ"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"ഇന്റർലിംഗ്വ"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"ജാമോ"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"ഇന്തോനേഷ്യൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"ടിബറ്റൻ അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"ഇന്റർലിംഗ്വേ"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ഇഗ്ബോ"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"ഷുവാൻയി"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"മദ്ധ്യ ഫ്രഞ്ച്"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"ഇനുപിയാക്"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"പഴയ ഫ്രഞ്ച്"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"ഇഡോ"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"ഈസ്റ്റേൺ ഫ്രിഷ്യൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"നോർത്തേൻ ഫ്രിഷ്യൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"ഐസ്\u200cലാൻഡിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ഇറ്റാലിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"ഇനുക്റ്റിറ്റട്ട്"_s)
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
			$of(u"സരതി"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"ഡോഗ്രി"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"ലെപ്\u200cച അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"കോം"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"തെക്കൻ സമി"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"ഷാവിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"മദുരേസേ"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"ലൂലീ സമി"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"മഗാഹി"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"മാഫ"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"മൈഥിലി"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"ഇനാരി സമി"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"ജോർജിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"സിക്സിക"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"മകാസർ"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"വു ചൈനീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"സ്കോൾട്ട് സമി"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"മണ്ഡിൻഗോ"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"കോംഗോ"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"ഗോഥിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"കികൂയു"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"മസായ്"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"ക്വാന്യമ"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"കസാഖ്"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"കലാല്ലിസട്ട്"_s)
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
			$of(u"കനൂറി"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"കാശ്\u200cമീരി"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"ചിർത്ത്"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"ലെപ്ച"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"അവെസ്ഥൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"കുർദ്ദിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"കോമി"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"കോർണിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"കിർഗിസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"സോണിൻകെ"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"ലക്\u200cസംബർഗിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"മലയാളം അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"ഗാണ്ട"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"റൊംഗോറൊംഗോ"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"ലിംബർഗിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"ലിംഗാല"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"ഫ്രിയുലിയാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"ബ്രിട്ടീഷ് അളക്കൽ സംവിധാനം"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"തായ് താം ഹോറ അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"ലിത്വാനിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"ലുബ-കറ്റംഗ"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"ലാറ്റ്വിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"സോജിഡിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"മലഗാസി"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"മാർഷല്ലീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"സ്ഥിര യൂണികോഡ് അടുക്കൽ ക്രമം"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"മവോറി"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"മാസിഡോണിയൻ"_s)
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
			$of(u"മറാത്തി"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"മലെയ്"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"മാൾട്ടീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"ബർമീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"സൗരാഷ്ട്ര"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"മോക്ഷ"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"മാബ"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"ലോവർ സോർബിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"അർമി"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"പൊതുവായ ആവശ്യത്തിനുള്ള തിരയൽ"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"നോർവീജിയൻ ബുക്\u200cമൽ"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"നോർത്ത് ഡെബിൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"നേപ്പാളി"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ഡോങ്ക"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"മണ്ഡാർ"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"ഡച്ച്"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"നോർവീജിയൻ നൈനോർക്\u200cസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"നോർവീജിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"ദക്ഷിണ നെഡിബിൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of(u"മോഡി അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"നവാജോ"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"കര-കാൽപ്പക്"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ന്യൻജ"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"കാചിൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"കബൈൽ"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"ഓക്\u200cസിറ്റൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"ജ്ജു"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"കംബ"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"മെൻഡെ"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"ഓജിബ്വാ"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"മേരു"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"അർമേനിയൻ സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"ഒറോമോ"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"കാവി"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ഒസ്സെറ്റിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"കബർഡിയാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"മൊറിസിൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"ശ്രാനൻ ഡോങ്കോ"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"പഞ്ചാബി"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"ദ്വാല"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"സെറർ"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"കനെംബു"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"പാലി"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"പോളിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"മദ്ധ്യ ഡച്ച്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"സൗരാഷ്\u200cട്ര അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"ഡാംഗി കലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"പഷ്\u200cതോ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"പോർച്ചുഗീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"മദ്ധ്യ ഐറിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"അടുക്കൽ ക്രമം"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ബ്രസീലിയൻ പോർച്ചുഗീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"ട്യാപ്"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"മാഖുവാ-മീത്തോ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"കറൻസി ഫോർമാറ്റ്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"എൻകോ അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"ബ്രജ്"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"കലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"മേത്താ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 മണിക്കൂർ സംവിധാനം (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 മണിക്കൂർ സംവിധാനം (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"സാഹോ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"മ്യാൻമാർ അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ക്വെച്ചുവ"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"സാപ്പോടെക്"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"ബോഡോ"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"ലന്ന"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"മക്കോണ്ടെ"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"എത്യോപിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 മണിക്കൂർ സംവിധാനം (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 മണിക്കൂർ സംവിധാനം (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"റൊമാഞ്ച്"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"റുണ്ടി"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"നാണയം"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"റൊമാനിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"ഒഡിയ അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"ചൈനീസ് ദശാംശ സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"റഷ്യൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"അക്കൂസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"കിന്യാർവാണ്ട"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"ബ്ലിസ്സിംബൽസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"കബുവെർദിയാനു"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"മിക്മാക്"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"സുകുമ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ഓസ്\u200cട്രേലിയൻ ഇംഗ്ലീഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"സംസ്\u200cകൃതം"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"സർഡിനിയാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"സുസു"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"സിന്ധി"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"വടക്കൻ സമി"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"മിനാങ്കബൗ"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"സാംഗോ"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"സെർബോ-ക്രൊയേഷ്യൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"സുമേരിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"സ്ലോവാക്"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"സ്ലോവേനിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"സമോവൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"ഷോണ"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"സോമാലി"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"അറബിക്-ഇന്ത്യ അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"അൽബേനിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"സെർബിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"സ്വാറ്റി"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"അക്കൗണ്ടിംഗ് കറൻസി ഫോർമാറ്റ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"തെക്കൻ സോതോ"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"സുണ്ടാനീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"നേറ്റിസോൺ പ്രാദേശികരൂപം"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"സ്വീഡിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"സ്വാഹിലി"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"പരമ്പരാഗത ചൈനീസ് ധനകാര്യ സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ഇബീബിയോ"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ഇബാൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"ഏഷ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"ബുറിയത്ത്"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"മദ്ധ്യേഷ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"പശ്ചിമേഷ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"താജിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"ടൈഗ്രിന്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"കോറോ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"കനേഡിയൻ ഇംഗ്ലീഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"തുർക്\u200cമെൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"തഗാലോഗ്"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"സ്വാന"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"ടോംഗൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"ബുളു"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"യോല-ഫോന്യി"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"ജാപ്പനീസ് സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"ടർക്കിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"സോംഗ"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"കൊമോറിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"ചകം"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"ടാട്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"ദ്വൈല"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"ട്വി"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"താഹിതിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"യൂറോപ്പ്"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"കിഴക്കൻ യൂറോപ്പ്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of(u"ഗണിത സാൻസ്\u200c-സെരീഫ് ബോൾഡ് അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"വടക്കേ യൂറോപ്പ്"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"ഡാസാഗ"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"പശ്ചിമ യൂറോപ്പ്"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ഉയ്ഘുർ"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"പഴയ ഇറ്റാലിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"സാധാരണ"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ഉക്രേനിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"കോപ്റ്റിക് കലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"ഉറുദു"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"കൽമൈക്"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"സെനഗ"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ഉസ്\u200cബെക്ക്"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"ഘാസി"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"1996-ലെ ജർമൻ ലിപി"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"ലോ സാക്സൺ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"സൈലോതി നാഗരി"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"വെന്ദ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"മിംഗ്വോ കലണ്ടർ"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"വിയറ്റ്നാമീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"ഘോറ്റാനേസേ"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"കൊയ്റ ചീനി"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"സമയ ഘടന (12 / 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"വോളാപുക്"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"പുരാതന സുറിയാനിഭാഷ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of(u"ഗണിത സാൻസ്-സെരീഫ് അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"ഒസ്\u200cമാനിയ"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"ക്വിച്ചെ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of(u"മസാറം ഗോണ്ടി അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"ഗാ"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"വല്ലൂൺ"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"ഗാഗൂസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"സുറിയാനി"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"ഗാൻ ചൈനീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"ലൈഡിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"സുമേറോ അക്കാഡിയൻ ക്യുണിഫോം"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"വൊളോഫ്"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"സ്റ്റാൻഡേർഡ് മൊറോക്കൻ റ്റാമസിയറ്റ്"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"ആധുനിക സ്റ്റാൻഡേർഡ് അറബിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"ഏകീകൃത കനേഡിയൻ ഗോത്രലിപി"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"ഗയൊ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"മാൻ\u200cചു"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"ഫ്രാക്ടുർ ലാറ്റിൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"ഗബ്യ"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"മണിപ്പൂരി"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"ഗെയ്\u200cലിക് ലാറ്റിൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"ലളിതവൽക്കരിച്ച ചൈനീസ് സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"പരമ്പരാഗത ചൈനീസ് സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"ഖോസ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"റോമൻ ചെറിയ സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"ബ്ലിൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"ലൈസിൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"ഒസേജ്"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"മെഡുംബ"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"മൂൺ"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"മോഹാക്"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"കാകോ"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"യിദ്ദിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"മൊസ്സി"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"സിറിയക്ക്"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"ഡെസെർട്ട്"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"യൊറൂബാ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"സാധാരണയായി ഉപയോഗിച്ചുവരുന്ന സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"മെക്സിക്കൻ സ്പാനിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"പശ്ചിമസുറിയാനി"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"ഓട്ടോമൻ തുർക്കിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"എസ്റ്റ്രാംഗ്ലോ സിറിയക്"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"സ്വാംഗ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"ചരിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"കലെഞ്ഞിൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"ചൈനീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"ബോപ്പോമോഫോ"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"പുരാതന പെർമിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"രേഖാ വിഭാജി ശൈലി"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"സുലു"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"ഫോൺബുക്കിലെ ക്രമീകരണം"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"മോണോറ്റോണിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"ജോർജ്ജിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"കിംബുണ്ടു"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"ജാപ്പനീസ് ധനകാര്യ സംഖ്യകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"ഛം"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"ഗീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"കിഴക്കൻ സിറിയക്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"മ്യാൻമാർ ഷാൻ അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"ഓൾ ചികി അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"നവീകരിച്ച അടുക്കൽ ക്രമം"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"തഗലോഗ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"ഈജിപ്ഷ്യൻ ഡിമോട്ടിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"ഈജിപ്ഷ്യൻ ഹിരാറ്റിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"എംബു"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"ഈജിപ്ഷ്യൻ ചിത്രലിപി"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"ജോർജ്ജിയൻ ഖുട്സുരി"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"ലളിതമാക്കിയ ചൈനീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"കോമി-പെർമ്യാക്ക്"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"പുരാതന ഹംഗേറിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"കൊങ്കണി"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"കൊസറേയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"ലിംബു അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"പരമ്പരാഗത ചൈനീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"സന്താനീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"കപെല്ലേ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"ഖമേർ അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ഇലോകോ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"സൈപ്രിയോട്ട്"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"മുന്ദാംഗ്"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"ഗുരുമുഖി അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"പലഭാഷകൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"കാഡോ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"അളക്കൽ സംവിധാനം"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"ക്രീക്ക്"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"ഗ്ലഗോലിറ്റിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"ഗിൽബർട്ടീസ്"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"ചെറോക്കി"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"കാരിബ്"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"കയൂഗ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"തമിഴ് അക്കങ്ങൾ"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"കരചൈ-ബാൽകർ"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ഇംഗ്വിഷ്"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"ഡാരി"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"കരീലിയൻ"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"എഫിക്"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"അക്കങ്ങൾ\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"കുരുഖ്"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"ഷംഭാള"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"ബാഫിയ"_s)
		})
	}));
	return data;
}

LocaleNames_ml::LocaleNames_ml() {
}

$Class* LocaleNames_ml::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ml, name, initialize, &_LocaleNames_ml_ClassInfo_, allocate$LocaleNames_ml);
	return class$;
}

$Class* LocaleNames_ml::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun