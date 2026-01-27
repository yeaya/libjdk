#include <sun/util/resources/cldr/ext/LocaleNames_gu.h>

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

$MethodInfo _LocaleNames_gu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_gu, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_gu, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_gu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_gu",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_gu_MethodInfo_
};

$Object* allocate$LocaleNames_gu($Class* clazz) {
	return $of($alloc(LocaleNames_gu));
}

void LocaleNames_gu::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_gu::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_TV, u"તુવાલુ"_s);
	$var($String, metaValue_ae, u"અવેસ્તન"_s);
	$var($String, metaValue_ar, u"અરબી"_s);
	$var($String, metaValue_el, u"ગ્રીક"_s);
	$var($String, metaValue_gu, u"ગુજરાતી"_s);
	$var($String, metaValue_he, u"હીબ્રુ"_s);
	$var($String, metaValue_jv, u"જાવાનીસ"_s);
	$var($String, metaValue_km, u"ખ્મેર"_s);
	$var($String, metaValue_ko, u"કોરિયન"_s);
	$var($String, metaValue_la, u"લેટિન"_s);
	$var($String, metaValue_lo, u"લાઓ"_s);
	$var($String, metaValue_ml, u"મલયાલમ"_s);
	$var($String, metaValue_mn, u"મોંગોલિયન"_s);
	$var($String, metaValue_or, u"ઉડિયા"_s);
	$var($String, metaValue_ta, u"તમિલ"_s);
	$var($String, metaValue_te, u"તેલુગુ"_s);
	$var($String, metaValue_ccp, u"ચકમા"_s);
	$var($String, metaValue_cop, u"કોપ્ટિક"_s);
	$var($String, metaValue_got, u"ગોથિક"_s);
	$var($String, metaValue_phn, u"ફોનિશિયન"_s);
	$var($String, metaValue_vai, u"વાઇ"_s);
	$var($String, metaValue_zbl, u"બ્લિસિમ્બોલ્સ"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"કોલોગ્નિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"ઓઘામ"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"મિરાંડી"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"પ્રતીકો"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"અત્સમ"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"મારવાડી"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"તગબન્વા"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"ઇમોજી"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"પ્રાચીન ઇજીપ્શિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"રાજસ્થાની"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"ફાગ્સ-પા"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"ટિમ્ને"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"તેસો"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"રાપાનુઇ"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"તેરેનો"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"એસેન્શન આઇલેન્ડ"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"રારોટોંગન"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"તેતુમ"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"ઍંડોરા"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"યુનાઇટેડ આરબ અમીરાત"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"ફ્લેમિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"અફઘાનિસ્તાન"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"ઍન્ટિગુઆ અને બર્મુડા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"ઇથિઓપિક કેલેન્ડર"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"ઍંગ્વિલા"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"સમય ઝોન"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"અલ્બેનિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"આર્મેનિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"તેન્ગવાર"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"અંગોલા"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"એન્ટાર્કટિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"આર્જેન્ટીના"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"ઇન્સ્ક્રિપ્શનલ પાર્થિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"અમેરિકન સમોઆ"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"ઑસ્ટ્રિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"ઑસ્ટ્રેલિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"અરુબા"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"અમેરિકન અંગ્રેજી"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"ઑલેન્ડ આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"અઝરબૈજાન"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"બોસ્નિયા અને હર્ઝેગોવિના"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"બારબાડોસ"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"સિબુઆનો"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"બાંગ્લાદેશ"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"કુમીક"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"બેલ્જીયમ"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"મધ્ય હાઇ જર્મન"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"બુર્કિના ફાસો"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"બલ્ગેરિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"બેહરીન"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"બુરુંડી"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"બેનિન"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"સેંટ બાર્થેલેમી"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"બર્મુડા"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"કુતેનાઇ"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"એર્ઝયા"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"બ્રુનેઇ"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"બોલિવિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"કેરેબિયન નેધરલેન્ડ્ઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"બ્રાઝિલ"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"બહામાસ"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"સોગા"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"ભૂટાન"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"બૌવેત આઇલેન્ડ"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"બોત્સ્વાના"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"બેલારુસ"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"બેલીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"વિસિબલ સ્પીચ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"પર્શિયન કેલેન્ડર"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"હિબ્રુ સંખ્યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"કેનેડા"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"કોકોઝ (કીલીંગ) આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"મઝાન્દેરાની"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"કોંગો - કિંશાસા"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"સેન્ટ્રલ આફ્રિકન રિપબ્લિક"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"કોંગો - બ્રાઝાવિલે"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"સ્વિટ્ઝર્લૅન્ડ"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"કોટ ડીઆઇવરી"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"કુક આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"ચિલી"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"કૈથી"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"કૅમરૂન"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"ચીન"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"કોલમ્બિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"ક્લિપરટન આઇલેન્ડ"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"કોસ્ટા રિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"ક્યુબા"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"કૅપ વર્ડે"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"ક્યુરાસાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"ક્રિસમસ આઇલેન્ડ"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"સાયપ્રસ"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"ચેકીયા"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"એકાજુક"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"જર્મની"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"જૂની હાઇ જર્મન"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"અચીની"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"ચિગા"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"ડિએગો ગારસિઆ"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of(u"ગોઅન કોંકણી"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"દેવનાગરી અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"જીબૌટી"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"ડેનમાર્ક"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"એકોલી"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"ગોંડી"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"બ્રેલ"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"બ્રહ્મી"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"ડોમિનિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"અર્મેનિયન નાના અક્ષરની સંખ્યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"ડોમિનિકન રિપબ્લિક"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"ગોરોન્તાલો"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"મેઇતેઇ માયેક"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"ઝૂની"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"ટાઇગ્રે"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"અલ્જીરિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"પંગાસીનાન"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"અર્ધપહોળાઈ"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"પહલવી"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"સ્યુટા અને મેલિલા"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"ચિબ્ચા"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"પમ્પાન્ગા"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"એક્વાડોર"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"પાપિયામેન્ટો"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"અદાંગ્મી"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"એસ્ટોનિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"તિવ"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"ઇજિપ્ત"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"પશ્ચિમી સહારા"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"છગાતાઇ"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"પલાઉઆન"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"ચૂકીસ"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"ચિનૂક જાર્ગન"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"મારી"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"શિપેવ્યાન"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"ચોક્તૌ"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"શેરોકી"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"એરિટ્રિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"સ્પેન"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"ઇથિઓપિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"યુરોપિયન સંઘ"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"એલામાઇટ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"ગ્રેગોરિઅન કેલેન્ડર"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"યુરોઝોન"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"શેયેન્ન"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"ગુજરાતી અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"સિન્ધુ"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"અદિઘે"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"ફિનલેન્ડ"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"ફીજી"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"ફૉકલેન્ડ આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"માઇક્રોનેશિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"લોકેલ વેરિએન્ટ"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"ફેરો આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"ફ્રાંસ"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"તોકેલાઉ"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"ગ્રેબો"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"ભારતીય રાષ્ટ્રીય કેલેન્ડર"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"પ્રાચીન ગ્રીક"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"ગેબન"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"વોટિક"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"યુનાઇટેડ કિંગડમ"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"નાઇજેરિયન પીજીન"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"ગ્રેનેડા"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"જ્યોર્જિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"ફ્રેંચ ગયાના"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"ગ્વેર્નસે"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"ઘાના"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"તાઇ લી"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"જીબ્રાલ્ટર"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"અફ્રિહિલી"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"ગ્રીનલેન્ડ"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"મિડિલ અંગ્રેજી"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"ગેમ્બિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"ગિની"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"ગ્વાડેલોપ"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"ઇક્વેટોરિયલ ગિની"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"ગ્રીસ"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"દક્ષિણ જ્યોર્જિયા અને દક્ષિણ સેન્ડવિચ આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"ગ્વાટેમાલા"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"ગ્વામ"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"ગિની-બિસાઉ"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"ક્લીન્ગકિટ"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"ક્લિન્ગોન"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"નવીન તાઇ લૂ"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"ગયાના"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"સેન્ટ્રલ કુર્દિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"કોઇ ભાષાશાસ્ત્રીય સામગ્રી નથી"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"ઓસ્ટ્રિઅન જર્મન"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"હોંગકોંગ SAR ચીન"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"હર્ડ અને મેકડોનાલ્ડ આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"હોન્ડુરસ"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"ક્રોએશિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"અઘેમ"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"સ્વિસ જર્મન"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"ઇસ્લામિક કેલેન્ડર (ઉમમ અલ-કુરા)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"હૈતિ"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"હંગેરી"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"તામાશેખ"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"કૅનેરી આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"ઇન્ડોનેશિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"જૂની ફારસી"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"આયર્લેન્ડ"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"નેપોલિટાન"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"નમા"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"ઝાઝા"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ઇઝરાઇલ"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"આઇલ ઑફ મેન"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ભારત"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"યુરોપીયન ક્રમ આપવાના નિયમો"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"બ્રિટિશ ઇન્ડિયન ઓશન ટેરિટરી"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"ઇરાક"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ઈરાન"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"આઇસલેન્ડ"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ઇટાલી"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"ગણિતીય સંકેતલિપિ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"થાઇ અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"બંગાળી અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"જર્સી"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"ઇસ્લામિક કેલેન્ડર"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"જમૈકા"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"બંગાળી"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"જોર્ડન"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"જાપાન"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"ઐનુ"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"ગુસી"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"ન્યાસા ટોન્ગા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"કન્નડા અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"કાયાહ લી"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"સ્વિસ હાય જર્મન"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"ધ્વન્યાત્મક સૉર્ટ ક્રમ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"બુદ્ધિસ્ટ કેલેન્ડર"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"કેન્યા"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"લેટિન અમેરિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"કિર્ગિઝ્સ્તાન"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"કંબોડિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"કિરિબાટી"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"કોમોરસ"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"સેંટ કિટ્સ અને નેવિસ"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"કન્નડા"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"વંશાગત"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"કેનેડિયન ફ્રેંચ"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"ઉત્તર કોરિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"દક્ષિણ કોરિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"પોલાર્ડ ફોનેટિક"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"સ્વિસ ફ્રેંચ"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"કુવૈત"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"ટોક પિસિન"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"કેમેન આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"કઝાકિસ્તાન"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"સિરિલિક"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"લાઓસ"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"લેબનોન"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"સેંટ લુસિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"ઓલ્ડ ચર્ચ સ્લાવોનિક સિરિલિક"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"ગ્વિચ’ઇન"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"લો જર્મન"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"લૈચટેંસ્ટેઇન"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"શ્રીલંકા"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"અક્કાદીયાન"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"લાઇબેરિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"લેસોથો"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"બુક પહલવી"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"લિથુઆનિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"લક્ઝમબર્ગ"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"લાત્વિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"કટાકાના"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"લિબિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"લાદીનો"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"વુન્જો"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"લાહન્ડા"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"લંગી"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"થાના"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"મોરોક્કો"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"મોનાકો"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"મોલડોવા"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"મૉન્ટેનેગ્રો"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"સેંટ માર્ટિન"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"લામ્બા"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"મેડાગાસ્કર"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"માર્શલ આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"અલેઉત"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"થાઇ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"વાઇ અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"ઉત્તર મેસેડોનિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"માલી"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"મ્યાંમાર (બર્મા)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"મંગોલિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"નેવારી"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"મકાઉ SAR ચીન"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"ઉત્તરી મારિયાના આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"માર્ટીનીક"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"મૌરિટાનિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"મોંટસેરાત"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"માલ્ટા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UN GEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"મોરિશિયસ"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"દક્ષિણ અલ્તાઇ"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"માલદિવ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"માલાવી"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"મેક્સિકો"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"જાપાનીઝ કેલેન્ડર"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"મલેશિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"મોઝામ્બિક"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"ઇન્સ્ક્રિપ્શનલ પહલવી"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"નામિબિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"સબ-સહારન આફ્રિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"હિબ્રુ કેલેન્ડર"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"શબ્દકોશ અનુક્મ"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"ન્યુ સેલેડોનિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"વેડ-ગિલ્સ રોમનાઇઝેશન"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"નાઇજર"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"નોરફોક આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"નાઇજેરિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"ટારોકો"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"સાલટર પહલવી"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"નિકારાગુઆ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"પહાઉ મોન્ગ"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"નેધરલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"નૉર્વે"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"નેપાળ"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"નૌરુ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"નીયુ"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"રોમ્બો"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"સિમ્શિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"ન્યુઝીલેન્ડ"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"રોમાની"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"મેરોઇટિક"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"ક્રિમિયન તુર્કી"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"જુની અંગ્રેજી"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"ઓમાન"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"અંગીકા"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"સેસેલ્વા ક્રેઓલે ફ્રેન્ચ"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"જુની ફારસી"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"પનામા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"ઇસ્લામિક-નાગરિક કેલેન્ડર"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"કાશુબિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"બ્રિટિશ અંગ્રેજી"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"પેરુ"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of(u"મુસ્લિમ તાટ"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"ફ્રેંચ પોલિનેશિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"પાપુઆ ન્યૂ ગિની"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"ફિલિપિન્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"પાકિસ્તાન"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"પોલેંડ"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"ઇવોન્ડો"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"સેંટ પીએરી અને મિક્યુલોન"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"પીટકૈર્ન આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"પ્યુઅર્ટો રિકો"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"પેલેસ્ટિનિયન ટેરિટરી"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"બાલીનીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"પોર્ટુગલ"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"પલાઉ"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"નિયાસ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"ગ્રીક નાના અક્ષરની સંખ્યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"પેરાગ્વે"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"તુમ્બુકા"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"કતાર"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"નિયુઆન"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"આઉટલાઈન્ગ ઓશનિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"લેઝધીયન"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"તાઇ વેઇત"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"વિશ્વ"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"આફ્રિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"ઉત્તર અમેરિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"રીયુનિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"દક્ષિણ અમેરિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of(u"લિંગ્વા ફેન્કા નોવા"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"લોજ્બાન"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"રીજાંગ"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ઓશનિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"રોમાનિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"સર્બિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"રશિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"રવાંડા"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"માનીચાયીન"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"યુગાતિટિક"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"ખારોશ્થી"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"સાઉદી અરેબિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"પોહપિએન"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"માન્ડાયીન"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"સોલોમન આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"તસાવાક"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"પશ્ચિમી આફ્રિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"સેશેલ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"સુદાન"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"મધ્ય અમેરિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"સ્વીડન"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"પૂર્વીય આફ્રિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"એરમૈક"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"ઉત્તરી આફ્રિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"સિંગાપુર"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"સેંટ હેલેના"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"ચુસ્ત રેખા વિરામ પ્રકાર"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"મધ્ય આફ્રિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"સ્લોવેનિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"સધર્ન આફ્રિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"સ્વાલબર્ડ અને જેન મેયન"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"અમેરિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"સ્લોવેકિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"સીએરા લેઓન"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"સૅન મેરિનો"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"સેનેગલ"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"સોમાલિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"મેપુચે"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"અરાપાહો"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"પારંપરિક તમિલ સંખ્યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"સુરીનામ"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"દક્ષિણ સુદાન"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"સાઓ ટૉમ અને પ્રિંસિપે"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"આલ્જેરિયન અરબી"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"એલ સેલ્વાડોર"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"સિંટ માર્ટેન"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"સીરિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"એસ્વાટીની"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"અરાવક"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"ઈજિપ્શિયન અરબી"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of(u"મોરોક્કન અરબી"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"યાપીસ"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ત્રિસ્તાન દા કુન્હા"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"અસુ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"અમેરિકન માપદંડ પદ્ધતિ"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"ઉત્તરી અમેરિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"તુર્ક્સ અને કેકોઝ આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"યાન્ગબેન"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"ચાડ"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"ફ્રેંચ સધર્ન ટેરિટરીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"ટોગો"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"થાઇલેંડ"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"તાજીકિસ્તાન"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"કેરિબિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"ટોકેલાઉ"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"તિમોર-લેસ્તે"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"યેમ્બા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"હંગુલ પ્રારંભિક વ્યંજન દ્વારા શોધો"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"તુર્કમેનિસ્તાન"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"ટ્યુનિશિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"ટોંગા"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"તુર્કી"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ટ્રિનીદાદ અને ટોબેગો"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"તાઇવાન"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"અસ્તુરિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"ઓરખોન"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"તાંઝાનિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"ક્વાસિઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"અજ્ઞાત લિપિ"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"યુક્રેન"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"અરોમેનિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"પૂર્વીય એશિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"ટુવીનિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"કોંગો સ્વાહિલી"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"દક્ષિણ એશિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"હૈડા"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"દક્ષિણપૂર્વ એશિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"યુગાંડા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"પિનયિન અનુક્મ"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"દક્ષિણ યુરોપ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"સિંહલી"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"યુ.એસ. આઉટલાઇનિંગ આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"સંયુક્ત રાષ્ટ્ર"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"યુનાઇટેડ સ્ટેટ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"હવાઇયન"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"સરળીકૃત ચાઇનીઝ સૉર્ટ ક્રમ - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"ઉરુગ્વે"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"પ્રુસ્સીયન"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"ઉઝ્બેકિસ્તાન"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"સેન્ટ્રલ એટલાસ તામાઝિટ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"સ્ટ્રોક અનુક્મ"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"નીએમબુન"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"વેટિકન સિટી"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"જુની પ્રોવેન્સલ"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"સેંટ વિન્સેંટ અને ગ્રેનેડાઇંસ"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"વેનેઝુએલા"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"બ્રિટિશ વર્જિન આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"યુએસ વર્જિન આઇલેન્ડ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"વિયેતનામ"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"વાનુઆતુ"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"નોગાઇ"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"રવા"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"જૂની નોર્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"ઓસ્ટ્રેલેશિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"મેલાનેશિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"વૉલિસ અને ફ્યુચુના"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"પરંપરાગત અનુક્મ"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"માઈક્રોનેશિયન ક્ષેત્ર"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"નગોમ્બા"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"લાકોટા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"નાણાકીય સંખ્યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"અગાઉનો સોર્ટ ક્રમ, સુસંગતતા માટે"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"વેલ્સેર"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"સમોઆ"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"વોલાયટ્ટા"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"વાશો"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"સ્યુડો-ઍક્સન્ટ"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"વારેય"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"સ્યુડો-દ્વિદિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"અવધી"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"પોલિનેશિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"કોસોવો"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"અલિખિત"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ઓલ ચિકી"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"વાર્લ્પીરી"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"બટાક"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"યમન"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"એન’કો"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"માનક સૉર્ટ ક્રમ"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"ફેંગ"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"ફન્ટી"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"સંકેત લિપી"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"મેયોટ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"દક્ષિણ આફ્રિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"શિથિલ રેખા વિરામ પ્રકાર"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"દેવનાગરી"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"જ્યોર્જિઅન સંખ્યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"હિરાગાના"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"ઝામ્બિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"પિનયિન રોમનાઇઝેશન"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"ઝિમ્બાબ્વે"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"અજ્ઞાત પ્રદેશ"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"રૂનિક"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"દશાંશ પદ્ધતિ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 કેલેન્ડર"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"મોંગો"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"ઉત્તરી સોથો"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"તેલુગુ અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"લ્યુઇસિયાના ક્રેઓલ"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"લોઝી"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"મકામે"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"ફીજી હિંદી"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"સરળીકૃત ચાઇનીઝ નાણાકીય સંખ્યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"હિલિગેનોન"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"વિસ્તૃત અરેબિક-ઇન્ડિક અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"નુએર"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"દાકોતા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"પૂર્ણ પહોળાઈ અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"હિટ્ટિતે"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"દાર્ગવા"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"તૈતા"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"મયાન હાઇરોગ્લિફ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"ઉત્તરી લુરી"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"પરંપરાગત નેવારી"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"ઉદમુર્ત"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"ઇસ્લામિક કેલેન્ડર (સાઉદી અરેબિયા, નિરીક્ષણ)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"લિમ્બૂ"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"સોંડવે"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"રોમન સંખ્યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"સખા"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"સામરિટાન અરેમિક"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"સમ્બુરુ"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"સાસાક"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"સંતાલી"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"તિફિનાઘ"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"જુદેઓ-પર્શિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"સંખ્યા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"મૂળ અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"ન્ગામ્બેય"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"ગુરૂમુખી"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"લૂબા-લુલુઆ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"પૂર્ણપહોળાઇ"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"સાંગુ"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"લુઇસેનો"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ન્યાનકોલ"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"ન્યામવેઝી"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"લુન્ડા"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"ન્યોરો"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"લ્યુઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"ફિલિપિનો"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"હમોંગ"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"દેલવેર"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"મિઝો"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"બલૂચી"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"સ્લેવ"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"બાલિનીસ"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"યુગેરિટિક"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"લુઈયા"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"બસા"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"બામન"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"જુદેઓ-અરબી"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"યુરોપિયન સ્પેનિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"ન્ઝિમા"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"સ્કોટ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"સિસિલિયાન"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"અફાર"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"અબખાજિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"આફ્રિકન્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"અકાન"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"એમ્હારિક"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"અર્ગોનીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"જાપાની"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"જાપાનીઝ વર્ણમાળા"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"આસામી"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"લીનિયર અ"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"અવેરિક"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"લીનિયર બી"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"સર્ઘન કુર્દીશ"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"આયમારા"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"અઝરબૈજાની"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"બશ્કીર"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"રેડિકલ-સ્ટ્રોક"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"બેલારુશિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"બલ્ગેરિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"બિસ્લામા"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"બામ્બારા"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"બાંગ્લા"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"તિબેટીયન"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"ડોગ્રિબ"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"બ્રેટોન"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"બોસ્નિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"મ્યાંમાર"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"લાઓ અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"સેના"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"એન’ કો"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"સેલ્કપ"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"કતલાન"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"કોયરાબોરો સેન્ની"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"ચેચન"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"કેમોરો"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"કોર્સિકન"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"ક્રી"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"ચેક"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"ચર્ચ સ્લાવિક"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"ચૂવાશ"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"વેલ્શ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"ઇથિયોપીક સંખ્યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"યી"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"ડેનિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"યુરોપિયન પોર્ટુગીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"જર્મન"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"પ્રમાણભૂત ચલણી બંધારણ"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"બેજા"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"દિન્કા"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"બગિનીસ"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"બેમ્બા"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"જૂની આયરિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"મોંગોલિયન અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"દિવેહી"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"લેટિન અમેરિકન સ્પેનિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"ડ્ઝોંગ્ખા"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"બેના"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"ચાઇનીઝ કેલેન્ડર"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"ઝર્મા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"ગ્રીક સંખ્યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ઈવ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"સામાન્ય રેખા વિરામ પ્રકાર"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"મોલડાવિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"અંગ્રેજી"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"એસ્પેરાન્ટો"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"પરંપરાગત ચાઇનિઝ સોર્ટ ક્રમબદ્ધ"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"સ્પેનિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"એસ્ટોનિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"હાન્બ"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"બાસ્ક"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"બુહિદ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"હંગુલ"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"સમરિટાન"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"તેશીલહિટ"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"અપર સોર્બિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"હાન"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"શેન"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"હનુનૂ"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"ફારસી"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"સરળીકૃત"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"પશ્ચિમી અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"પરંપરાગત"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"ફુલાહ"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"ફિનિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"ફીજીયન"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"ફોન"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"પશ્ચિમી બાલોચી"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"કેંટોનીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ફોરિસ્ત"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("US BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"ઉમ્બુન્ડૂ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"ફ્રેન્ચ"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"સિદામો"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"પશ્ચિમી ફ્રિસિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"આઇરિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"સ્કોટીસ ગેલિક"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"ગેલિશિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"ગુઆરાની"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"ભોજપુરી"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"અજ્ઞાત ભાષા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"ઇથિઓપિક એમેટ એલેમ કેલેન્ડર"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"ઇસ્લામિક કેલેન્ડર (ટેબ્યુલર, ખગોળશાસ્ત્રીય યુગ)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"માંક્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"હૌસા"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"હિન્દી"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"હૂપા"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"બિકોલ"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"બિની"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"હિરી મોટૂ"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"ક્રોએશિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"હૈતિઅન ક્રેઓલે"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"હંગેરિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"આર્મેનિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"હેરેરો"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"કાજૂન ફ્રેન્ચ"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"ઇંટરલિંગુઆ"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"જેમો"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"ઇન્ડોનેશિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"તિબેટિયન અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"ઇંટરલિંગ"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ઇગ્બો"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"સિચુઆન યી"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"મિડિલ ફ્રેંચ"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"ઇનુપિયાક"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"જૂની ફ્રેંચ"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"ઈડો"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"પૂર્વ ફ્રિશિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"ઉત્તરીય ફ્રિશિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"આઇસલેન્ડિક"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ઇટાલિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"ઇનુકિટૂટ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"જાપાનીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"સરાતી"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"ડોગ્રી"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"દક્ષિણી સામી"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"શાવિયાન"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"માદુરીસ"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"લુલે સામી"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"મગહી"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"મૈથિલી"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"ઇનારી સામી"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"જ્યોર્જિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"સિક્સિકા"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"મકાસર"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"સ્કોલ્ટ સામી"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"મન્ડિન્ગો"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"કોંગો"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"કિકુયૂ"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"મસાઇ"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"ક્વાન્યામા"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"કઝાખ"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"કલાલ્લિસુત"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"કન્નડ"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"કનુરી"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"કાશ્મીરી"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"સિર્થ"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"લેપચા"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"કુર્દિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"કોમી"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"કોર્નિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"કિર્ગીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"સોનિન્કે"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"લક્ઝેમબર્ગિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"મલયાલમ અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"ગાંડા"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"રોંગોરોંગો"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"લિંબૂર્ગિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"ટિબેટી"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"લિંગાલા"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"ફ્રિયુલિયાન"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"રજવાડું માપદંડ પદ્ધતિ"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"લિથુઆનિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"લૂબા-કટાંગા"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"લાતવિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"સોગ્ડિએન"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"મલાગસી"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"માર્શલીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ડિફોલ્ટ યુનિકોડ સૉર્ટ ક્રમ"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"માઓરી"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"મેસેડોનિયન"_s)
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
			$of(u"મરાઠી"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"મલય"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"માલ્ટિઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"બર્મીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"સૌરાષ્ટ્ર"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"અર્મેનિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"મોક્ષ"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"લોઅર સોર્બિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"ઇમ્પિરિયલ આર્મનિક"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"નાઉરૂ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"સામાન્ય-ઉદ્દેશ શોધ"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"નોર્વેજિયન બોકમાલ"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"ઉત્તર દેબેલ"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"નેપાળી"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ડોન્ગા"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"મંદાર"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"ડચ"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"નોર્વેજિયન નાયનૉર્સ્ક"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"નૉર્વેજીયન"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"દક્ષિણ દેબેલ"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"નાવાજો"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"કારા-કલ્પક"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ન્યાન્જા"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"કાચિન"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"કબાઇલ"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"ઓક્સિટન"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"જ્જુ"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"કમ્બા"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"મેન્ડે"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"ઓજિબ્વા"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"મેરુ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"અર્મેનિયન સંખ્યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"ઓરોમો"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"કાવી"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ઓસ્સેટિક"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"બિષ્નુપ્રિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"કબાર્ડિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"મોરીસ્યેન"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"સ્રાનન ટોન્ગો"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"પંજાબી"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"દુઆલા"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"સેરેર"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"પાલી"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"પોલીશ"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"મધ્ય ડચ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"ડાંગી કેલેન્ડર"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"પશ્તો"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"પોર્ટુગીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"મધ્ય આઈરિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"સૉર્ટ ક્રમ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"બ્રાઝિલીયન પોર્ટુગીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"ત્યાપ"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"માખુવા-મીટ્ટુ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"ચલણી બંધારણ"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"વ્રજ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"કેલેન્ડર"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"મેતા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 કલાકની સિસ્ટમ (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 કલાકની સિસ્ટમ (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"સાહો"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of(u"બ્રાહુઈ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"મ્યાન્માર અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"ક્વેચુઆ"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"ઝેપોટેક"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"બોડો"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"લાના"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"મકોન્ડે"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ઇથિયોપિક"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 કલાકની સિસ્ટમ (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 કલાકની સિસ્ટમ (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"રોમાન્શ"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"રૂન્દી"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"ચલણ"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"રોમાનિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"ઓરિયા અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"ચાઇનીઝ દશાંશ સંખ્યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"રશિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"કિન્યારવાન્ડા"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"કાબુવર્ડિઆનુ"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"મિકમેક"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"સુકુમા"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ઓસ્ટ્રેલિયન અંગ્રેજી"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"સંસ્કૃત"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"સાર્દિનિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"સુસુ"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"સિંધી"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"ઉત્તરી સામી"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"મિનાંગ્કાબાઉ"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"સાંગો"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"સર્બો-ક્રોએશિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"સિંહાલી"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"સુમેરિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"સ્લોવૅક"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"સ્લોવેનિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"સામોન"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"શોના"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"સોમાલી"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"અરેબિક-ભારતીય અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"અલ્બેનિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"સર્બિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"સ્વાતી"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"હિસાબી ચલણી બંધારણ"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"દક્ષિણ સોથો"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"સંડેનીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"સ્વીડિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"સ્વાહિલી"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"પરંપરાગત ચાઇનીઝ નાણાકીય સંખ્યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ઇબિબિઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ઇબાન"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"એશિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"બુરિયાત"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"મધ્ય એશિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"પશ્ચિમી એશિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"તાજીક"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"થાઈ"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"ટાઇગ્રિનિયા"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"બુગિનીસ"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"કોરો"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"કેનેડિયન અંગ્રેજી"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"તુર્કમેન"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"ટાગાલોગ"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"ત્સ્વાના"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"ટોંગાન"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"જોલા-ફોન્યી"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"જાપાનીઝ સંખ્યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"ટર્કિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"સોંગા"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"કોમોરિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"તતાર"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"ડ્યુલા"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"ટ્વાઇ"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"તાહિતિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"યુરોપ"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"પૂર્વીય યુરોપ"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"ઉત્તરીય યુરોપ"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"દાઝાગા"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"પશ્ચિમી યુરોપ"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ઉઇગુર"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"જૂનુ ઇટાલિક"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"સામાન્ય"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"યુક્રેનિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"કોપ્ટિક કેલેન્ડર"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"ઉર્દૂ"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"કાલ્મિક"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"ઝેનાગા"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ઉઝ્બેક"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"ખાસી"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"લો સેક્સોન"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"સિલોતી નાગરી"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"વેન્દા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"મિંગુઓ કેલેન્ડર"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"વિયેતનામીસ"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"ખોતાનીસ"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"કોયરા ચિનિ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"કલાકનું આવર્તન (12 વિ.24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"વોલાપુક"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"પરંપરાગત સિરિએક"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"ઓસ્માન્યા"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"કિચે"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"ગા"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"વાલૂન"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"ગાગાઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"સિરિએક"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("gan"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"લિડિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"સુમેરો અક્કાદિયન સુનિફોર્મ"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"વોલોફ"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"માનક મોરોક્કન તામાઝિટ"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"મોડર્ન સ્ટાન્ડર્ડ અરબી"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"યુનાઇટેડ કેનેડિયન એબોરિજનલ સિલેબિક્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"ગાયો"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"માન્ચુ"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"ફ્રેકતુર લેટિન"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"બાયા"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"મણિપુરી"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"ગૈલિક લેટિન"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"સરળીકૃત ચાઇનીઝ સંખ્યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"પરંપરાગત ચાઇનીઝ સંખ્યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"ખોસા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"રોમન નાના અક્ષરની સંખ્યા"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"બ્લિન"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"લિશિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"ઓસેજ"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of(u"ઝોરોસ્ટ્રિઅન દારી"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"મૂન"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"મોહૌક"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"કાકો"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"યિદ્દિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"મોસ્સી"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"સિરિયેક"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"ડેસરેટ"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"યોરૂબા"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"પરંપરાગત અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"મેક્સિકન સ્પેનિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"પશ્ચિમ સિરિયાક"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"ઓટોમાન તુર્કિશ"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"એસ્ત્રેન્જેલો સિરિયાક"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"ઝુઆગ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"કરૈન"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"કલેજિન"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"ચાઇનીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"બોપોમોફો"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"ઓલ્ડ પરમિક"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"રેખા વિરામ પ્રકાર"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"ઝુલુ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"ફોનબુક અનુક્મ"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"જ્યોર્જિઅન"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"કિમ્બન્દુ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"જાપાનીઝ નાણાકીય સંખ્યાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"ગીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of(u"પશ્ચિમી મારી"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"પૂર્વ સિરિયાક"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"પૂનર્સ્વરૂપિત અનુક્મ"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"ટેગાલોગ"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"ઇજિપ્શિયન ડેમોટિક"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"ઇજિપ્શિયન હાઇરેટિક"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"ઍમ્બુ"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"ઇજિપ્શિયન હાઇરોગ્લિફ્સ"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"જ્યોર્જિઅન ખુતસુરી"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"સરળીકૃત ચાઇનીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"કોમી-પર્મ્યાક"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"ઓલ્ડ હંગેરિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"કોંકણી"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"કોસરિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"પારંપરિક ચાઇનીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"સુદાનીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"ક્પેલ્લે"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"ખ્મેર અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ઇલોકો"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"સિપ્રાયટ"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"મુનડાન્ગ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"ગુરમુખી અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"બહુવિધ ભાષાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"કડ્ડો"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"માપદંડ પદ્ધતિ"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"ક્રિક"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"ગ્લેગોલિટિક"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"જિલ્બરટીઝ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"ચેરોકી"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"કરિબ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"તમિલ અંકો"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"કરાચય-બલ્કાર"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ઇંગુશ"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"ડારી"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"કરેલિયન"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"એફિક"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of(u"તુલુ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"આંકડાઓ"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"કુરૂખ"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"શમ્બાલા"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"બફિયા"_s)
		})
	}));
	return data;
}

LocaleNames_gu::LocaleNames_gu() {
}

$Class* LocaleNames_gu::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_gu, name, initialize, &_LocaleNames_gu_ClassInfo_, allocate$LocaleNames_gu);
	return class$;
}

$Class* LocaleNames_gu::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun