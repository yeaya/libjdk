#include <sun/util/resources/cldr/ext/LocaleNames_hy.h>

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

$MethodInfo _LocaleNames_hy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_hy, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_hy, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_hy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_hy",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_hy_MethodInfo_
};

$Object* allocate$LocaleNames_hy($Class* clazz) {
	return $of($alloc(LocaleNames_hy));
}

void LocaleNames_hy::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_hy::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_gu, u"գուջարաթի"_s);
	$var($String, metaValue_kn, u"կաննադա"_s);
	$var($String, metaValue_ml, u"մալայալամ"_s);
	$var($String, metaValue_or, u"օրիյա"_s);
	$var($String, metaValue_te, u"թելուգու"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"քյոլներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"միրանդերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"նշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"էմոձի"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"չակմա"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"հին եգիպտերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"ռաջաստաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"տեմնե"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"տեսո"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"ռապանուի"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"տերենո"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Համբարձման կղզի"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"ռարոտոնգաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"տետում"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"Անդորրա"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Արաբական Միացյալ Էմիրություններ"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"ֆլամանդերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Աֆղանստան"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Անտիգուա և Բարբուդա"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"եթովպական օրացույց"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Անգուիլա"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Ալբանիա"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Հայաստան"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Անգոլա"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Անտարկտիդա"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Արգենտինա"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Ամերիկյան Սամոա"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Ավստրիա"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Ավստրալիա"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Արուբա"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"ամերիկյան անգլերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Ալանդյան կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Ադրբեջան"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"արևելահայերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Բոսնիա և Հերցեգովինա"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Բարբադոս"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"սեբուերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Բանգլադեշ"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"կումիկերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Բելգիա"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Բուրկինա Ֆասո"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Բուլղարիա"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Բահրեյն"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"Բուրունդի"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Բենին"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Սուրբ Բարդուղիմեոս"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Բերմուդներ"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"էրզյա"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Բրունեյ"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Բոլիվիա"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Կարիբյան Նիդեռլանդներ"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Բրազիլիա"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Բահամյան կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"սոգա"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Բութան"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Բուվե կղզի"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Բոթսվանա"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Բելառուս"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Բելիզ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"պարսկական օրացույց"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"եբրայական թվանիշեր"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Կանադա"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Կոկոսյան (Քիլինգ) կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"մազանդարաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Կոնգո - Կինշասա"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Կենտրոնական Աֆրիկյան Հանրապետություն"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Կոնգո - Բրազավիլ"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Շվեյցարիա"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Կոտ դ՚Իվուար"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Կուկի կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Չիլի"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Կամերուն"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Չինաստան"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Կոլումբիա"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Քլիփերթոն կղզի"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Կոստա Ռիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Կուբա"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Կաբո Վերդե"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Կյուրասաո"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Սուրբ Ծննդյան կղզի"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Կիպրոս"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Չեխիա"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"էկաջուկ"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"արևմտաֆլամանդերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Գերմանիա"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"հին վերին գերմաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"աչեհերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"չիգա"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Դիեգո Գարսիա"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"դեվանագարի թվանշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Ջիբութի"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Դանիա"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"աչոլի"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"բրայլի"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Դոմինիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"հայկական փոքրատառ թվանիշեր"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Դոմինիկյան Հանրապետություն"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"գորոնտալո"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"գոթերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"զունիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"տիգրե"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Ալժիր"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"պանգասինաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"պահլավերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Սեուտա և Մելիլյա"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"պամպանգաերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Էկվադոր"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"պապյամենտո"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"ադանգմերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Էստոնիա"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"տիվերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Եգիպտոս"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Արևմտյան Սահարա"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"պալաուերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"տրուկերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"մարի"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"չոկտո"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"չերոկի"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Էրիթրեա"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Իսպանիա"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Եթովպիա"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Եվրոպական Միություն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"գրիգորյան օրացույց"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Եվրագոտի"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"շայեն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"գուջարաթի թվանշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"ադիղերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of(u"թունիսական արաբերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Ֆինլանդիա"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Ֆիջի"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Ֆոլքլենդյան կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Միկրոնեզիա"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Ֆարերյան կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"թամիլական"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Ֆրանսիա"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of(u"պիկարդերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"տոկելաու"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of(u"ռոմանիոլերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"հին հունարեն"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Գաբոն"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of(u"ցախուր"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"վոդերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Միացյալ Թագավորություն"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"նիգերյան կրեոլերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Գրենադա"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Վրաստան"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Ֆրանսիական Գվիանա"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"Գերնսի"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"Գանա"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Ջիբրալթար"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Գրենլանդիա"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Գամբիա"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Գվինեա"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Գվադելուպա"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Հասարակածային Գվինեա"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Հունաստան"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Հարավային Ջորջիա և Հարավային Սենդվիչյան կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"Գվատեմալա"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"Գուամ"_s)
		}),
		$$new($ObjectArray, {
			$of("pdc"_s),
			$of(u"փենսիլվանական գերմաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Գվինեա-Բիսաու"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"տլինգիտ"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"կլինգոն"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Գայանա"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"սորանի քրդերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"առանց լեզվային բովանդակության"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of(u"թալիշերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of(u"պլատագերմաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"ավստրիական գերմաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Հոնկոնգի ՀՎՇ"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Հերդ կղզի և ՄակԴոնալդի կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Հոնդուրաս"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Խորվաթիա"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"աղեմ"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"շվեյցարական գերմաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Հայիթի"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Հունգարիա"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of(u"ռիֆերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"տամաշեկ"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Կանարյան կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Ինդոնեզիա"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"հին պարսկերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Իռլանդիա"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"նեապոլերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"նամա"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"զազաերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Իսրայել"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"Մեն կղզի"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Հնդկաստան"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Բրիտանական Տարածք Հնդկական Օվկիանոսում"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Իրաք"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Իրան"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Իսլանդիա"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Իտալիա"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"մաթեմատիկական նշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"թայական թվանշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"վորո"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of(u"վայուու"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"բենգալական թվանշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of(u"պալատինյան գերմաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Ջերսի"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"իսլամական օրացույց"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Ճամայկա"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"բենգալական"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Հորդանան"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Ճապոնիա"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"այներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"գուսի"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"կաննադա թվանշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"շվեյցարական վերին գերմաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"բուդդայական օրացույց"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Քենիա"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Լատինական Ամերիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Ղրղզստան"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Կամբոջա"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"Կիրիբատի"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Կոմորյան կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Սենթ Քիտս և Նևիս"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"կանադական ֆրանսերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Հյուսիսային Կորեա"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Հարավային Կորեա"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"շվեյցարական ֆրանսերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Քուվեյթ"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"տոկ փիսին"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Կայմանյան կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Ղազախստան"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"կյուրեղագիր"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"Լաոս"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Լիբանան"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Սենթ Լյուսիա"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"փյունիկերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"գվիչին"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"ստորին գերմաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Լիխտենշտեյն"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Շրի Լանկա"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"աքքադերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"ղպտերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Լիբերիա"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Լեսոտո"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Լիտվա"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Լյուքսեմբուրգ"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Լատվիա"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"կատականա"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Լիբիա"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"լադինո"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"վունջո"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"լանգի"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"թաանա"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Մարոկկո"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"Մոնակո"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Մոլդովա"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"Չեռնոգորիա"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Սեն Մարտեն"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Մադագասկար"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Մարշալյան կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"ալեութերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"թայական"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Հյուսիսային Մակեդոնիա"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Մալի"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Մյանմա (Բիրմա)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Մոնղոլիա"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"նեվարերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Չինաստանի Մակաո ՀՎՇ"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Հյուսիսային Մարիանյան կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"Մարտինիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Մավրիտանիա"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"Մոնսեռատ"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"Մալթա"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Մավրիկիոս"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"հարավային ալթայերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Մալդիվներ"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Մալավի"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Մեքսիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"ճապոնական օրացույց"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Մալայզիա"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Մոզամբիկ"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Նամիբիա"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Արևադարձային Աֆրիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"հրեական օրացույց"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Նոր Կալեդոնիա"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of(u"տուրոյո"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Նիգեր"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Նորֆոլկ կղզի"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Նիգերիա"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"տարոկո"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Նիկարագուա"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Նիդեռլանդներ"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Նորվեգիա"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Նեպալ"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"Նաուրու"_s)
		}),
		$$new($ObjectArray, {
			$of("tsd"_s),
			$of(u"ցակոներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Նիուե"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"ռոմբո"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"ցիմշյան"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Նոր Զելանդիա"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"ռոմաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"ղրիմյան թուրքերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"հին անգլերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Օման"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"անգիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"սեյշելյան խառնակերտ ֆրանսերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Պանամա"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"բրիտանական անգլերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Պերու"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Ֆրանսիական Պոլինեզիա"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Պապուա Նոր Գվինեա"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Ֆիլիպիններ"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Պակիստան"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Լեհաստան"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"էվոնդո"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Սեն Պիեռ և Միքելոն"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Պիտկեռն կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Պուերտո Ռիկո"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Պաղեստինյան տարածքներ"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Պորտուգալիա"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"Պալաու"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"նիասերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"հունական փոքրատառ թվանիշեր"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"Պարագվայ"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"տումբուկա"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"եբրայական"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Կատար"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of(u"պիեմոնտերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"նիուերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Արտաքին Օվկիանիա"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"լեզգիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"թուվալուերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Աշխարհ"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Աֆրիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Հյուսիսային Ամերիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Ռեյունիոն"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Հարավային Ամերիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"լոժբան"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of(u"պոնտերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Օվկիանիա"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Ռումինիա"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Սերբիա"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Ռուսաստան"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Ռուանդա"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Սաուդյան Արաբիա"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"պոնպեերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Սողոմոնյան կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"տասավաք"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Արևմտյան Աֆրիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Սեյշելներ"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Սուդան"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Կենտրոնական Ամերիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Շվեդիա"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Արևելյան Աֆրիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"արամեերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Հյուսիսային Աֆրիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Սինգապուր"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Սուրբ Հեղինեի կղզի"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"կոշտ տողանցում"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Կենտրոնական Աֆրիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Սլովենիա"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Հարավային Աֆրիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Սվալբարդ և Յան Մայեն"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Ամերիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Սլովակիա"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Սիեռա Լեոնե"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"Սան Մարինո"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Սենեգալ"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Սոմալի"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"մապուչի"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"արապահո"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"թամիլական ավանդական թվանիշեր"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Սուրինամ"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Հարավային Սուդան"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Սան Տոմե և Փրինսիպի"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"ալժիրական արաբերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Սալվադոր"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Սինտ Մարտեն"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Սիրիա"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"յաո"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Էսվատինի"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"եգիպտական արաբերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"յափերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of(u"ռոտուման"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Տրիստան դա Կունյա"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"ասու"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"ամերիկյան համակարգ"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Հյուսիսային Ամերիկա - ԱՄՆ և Կանադա"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Թըրքս և Կայկոս կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"յանգբեն"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Չադ"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Ֆրանսիական Հարավային Տարածքներ"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"ամերիկյան ժեստերի լեզու"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"Տոգո"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Թայլանդ"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Տաջիկստան"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Կարիբներ"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"Տոկելաու"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Թիմոր Լեշտի"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"եմբա"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Թուրքմենստան"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Թունիս"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"Տոնգա"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Թուրքիա"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Տրինիդադ և Տոբագո"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"Տուվալու"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Թայվան"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"աստուրերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of(u"ռուսիներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of(u"ռովիանա"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Տանզանիա"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"կվասիո"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"անհայտ գիր"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ուկրաինա"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"արոմաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Արևելյան Ասիա"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"տուվերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"կոնգոյի սուահիլի"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Հարավային Ասիա"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Հարավարևելյան Ասիա"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Ուգանդա"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Հարավային Եվրոպա"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"սինհալական"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Արտաքին կղզիներ (ԱՄՆ)"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Միավորված ազգերի կազմակերպություն"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Միացյալ Նահանգներ"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"հավայիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Ուրուգվայ"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"պրուսերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Ուզբեկստան"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"կենտրոնատլասյան թամազիղտ"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"նգիեմբուն"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Վատիկան"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"հին պրովանսերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Սենթ Վինսենթ և Գրենադիններ"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Վենեսուելա"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Բրիտանական Վիրջինյան կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"ԱՄՆ Վիրջինյան կղզիներ"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Վիետնամ"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Վանուատու"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"նոգայերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"ռվա"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"հին նորվեգերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Ավստրալասիա"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"արեւմտահայերէն"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Մելանեզիա"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Ուոլիս և Ֆուտունա"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Միկրոնեզյան տարածաշրջան"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"նգոմբա"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"լակոտա"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"վալսերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Սամոա"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"վոլայտա"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"վաշո"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"կեղծ տարբերիչներ"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"վարայերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"կեղծ երկուղղված"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"ավադհի"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Պոլինեզիա"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"Կոսովո"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"չգրված"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"վարլպիրի"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Եմեն"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"նկո"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"տեսակավորման ստանդարտ կարգ"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Մայոտ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Հարավաֆրիկյան Հանրապետություն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"փափուկ տողանցում"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"դեւանագարի"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"վրացական թվանիշեր"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"հիրագանա"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Զամբիա"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Զիմբաբվե"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Անհայտ տարածաշրջան"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"մետրիկ համակարգ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 օրացույց"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"հյուսիսային սոթո"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"թելուգու թվանշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"լոզի"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"մաշամե"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"չինական պարզեցված ֆինանսական թվանիշեր"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"հիլիգայնոն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"արաբա-հնդկական թվերի ընդլայնված համակարգ"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"նուեր"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"դակոտա"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"ամբողջ լայնքով թվանշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"դարգիներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"թաիթա"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"հյուսիսային լուրիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"ուդմուրտերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"քմերական"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"սանդավե"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"հռոմեական թվանիշեր"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"յակուտերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"սամբուրու"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"սանտալի"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"նգամբայ"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"գուրմուխի"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"լուբա-լուլուա"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"սանգու"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"նյանկոլե"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"լունդա"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"լուո"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"ֆիլիպիներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"հմոնգ"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"միզո"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"բալիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"ուգարիտերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"տորնադելեն ֆիններեն"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"լույա"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"բասաա"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"եվրոպական իսպաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"շոտլանդերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"սիցիլիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"աֆարերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"աբխազերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"աֆրիկաանս"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"աքան"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"ամհարերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"արագոներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"արաբական"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"ճապոնական"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"արաբերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"ճապոնական վանկագիր"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"ասամերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"ավարերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"հարավային քրդերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"այմարա"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"ադրբեջաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"բաշկիրերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"բելառուսերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"բուլղարերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"բիսլամա"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"բամբարա"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"բենգալերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"տիբեթերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"դոգրիբ"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"բրետոներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"բոսնիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"մյանմարական"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"լաոսական թվանշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"սենա"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"կատալաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"կոյրաբորո սեննի"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"չեչեներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"չամոռո"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"կորսիկերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"չեխերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"սլավոներեն, եկեղեցական"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"չուվաշերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"ուելսերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"եթովպական թվանիշեր"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"դանիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"եվրոպական պորտուգալերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"գերմաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"արժույթի ստանդարտ ձևաչափ"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"բեմբա"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"հին իռլանդերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"մալդիվերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"լատինամերիկյան իսպաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"ջոնգքհա"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"բենա"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"չինական օրացույց"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"զարմա"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"հունական թվանիշեր"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"էվե"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"սովորական տողանցում"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"մոլդովերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"հունարեն"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"անգլերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"էսպերանտո"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"իսպաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"էստոներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"հանբ"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"բասկերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"հանգըլ"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"տաշելհիթ"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"վերին սորբերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"չինական"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"շաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"պարսկերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"պարզեցված չինական"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"արևմտյան թվանշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"ավանդական չինական"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"ֆուլահ"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"սյան չինարեն"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"ֆիններեն"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"ֆիջիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"ֆոն"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"արևմտաբելուջիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"կանտոներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ֆարյորերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"ումբունդու"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"ֆրանսերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"արևմտաֆրիզերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"իռլանդերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"շոտլանդական գաելերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"գալիսերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"գուարանի"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"բհոպուրի"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"անհայտ լեզու"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"մեներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"հաուսա"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"եբրայերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"հինդի"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"հուպա"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"բինի"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"խորվաթերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"խառնակերտ հայիթերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"հունգարերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"հայերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"հերերո"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"ինտերլինգուա"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"ջամո"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"ինդոնեզերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"տիբեթական թվանշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"ինտերլինգուե"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"իգբո"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"սիչուան"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"հին ֆրանսերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"իդո"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"արևելաֆրիզերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"իսլանդերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"իտալերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"ինուկտիտուտ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"ճապոներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"հարավային սաամի"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"ճավայերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"մադուրերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"լուլե սաամի"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"մագահի"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"մայթիլի"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"ինարի սաամի"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"վրացերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"սիկսիկա"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"մակասարերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"վու չինարեն"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"սկոլտ սաամի"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"կիկույու"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"մասաի"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"կուանյամա"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"ղազախերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"կալաալիսուտ"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"քմերերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"կորեերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"կանուրի"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"քաշմիրերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"քրդերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"կոմիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"կոռներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"ղրղզերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"սոնինկե"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"լատիներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"լյուքսեմբուրգերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"մալայալամ թվանշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"գանդա"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"լիմբուրգերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"տիբեթական"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"լինգալա"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"ֆրիուլիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"լաոսերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"անգլիական համակարգ"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"լիտվերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"լուբա-կատանգա"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"լատվիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"մալգաշերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"մարշալերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Յունիկոդ լռելյայն տեսակավորում"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"մաորի"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"մակեդոներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"մոնղոլերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"մարաթի"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"մալայերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"մալթայերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"բիրմայերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"հայկական"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"մոկշայերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"ստորին սորբերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"նաուրու"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"որոնում"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"գրքային նորվեգերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"հյուսիսային նդեբելե"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"նեպալերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"նդոնգա"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"հոլանդերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"նոր նորվեգերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"նորվեգերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"հարավային նդեբելե"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"նավախո"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"նյանջա"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"կաչիներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"կաբիլերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"օքսիտաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"ջյու"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"կամբա"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"մենդե"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"օջիբվա"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"մերու"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"հայկական թվանիշեր"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"օրոմո"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"օսերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"կաբարդերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"մորիսյեն"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"սրանան տոնգո"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"փենջաբերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"դուալա"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"պալի"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"լեհերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"դանգի օրացույց"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"փուշթու"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"պորտուգալերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"տեսակավորման կարգ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"բրազիլական պորտուգալերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"տիապ"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"մաքուա-մետտո"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"արժույթի ձևաչափ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"օրացույց"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"լաոսական"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"մետա"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-ժամյա համակարգ (0-23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-ժամյա համակարգ (1-24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"սահոերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"բիրմական թվանշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"կեչուա"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"սապոտեկերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"բոդո"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"մակոնդե"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"եթովպական"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-ժամյա համակարգ (1-12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-ժամյա համակարգ (0-11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"ռոմանշերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"ռունդի"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"արժույթ"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"ռումիներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"օրիյա թվանշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"չինական տասնորդական թվեր"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ռուսերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"աքուզ"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"կինյառուանդա"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"կաբուվերդերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"միկմակ"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"սուկումա"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ավստրալիական անգլերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"սանսկրիտ"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"սարդիներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"սինդհի"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"հյուսիսային սաամի"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"մինանգկաբաու"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"սանգո"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"սերբա-խորվաթերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"սինհալերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"սլովակերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"սլովեներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"սամոաերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"շոնա"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"սոմալիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"արաբա-հնդկական թվանշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"ալբաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"սերբերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ListKeyTypePattern"_s),
			$of(u"{0}՝ {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"սվազերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"արժույթի հաշվապահական ձևաչափ"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"հարավային սոթո"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"սունդաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"շվեդերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"սուահիլի"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"չինական ավանդական ֆինանսական թվանիշեր"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"իբիբիո"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"իբաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"թամիլերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Ասիա"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Կենտրոնական Ասիա"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Արևմտյան Ասիա"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"տաջիկերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"թայերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"տիգրինյա"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"բուգիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"կորո"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"կանադական անգլերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"թուրքմեներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"տագալերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"ցվանա"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"տոնգերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"ջոլա-ֆոնյի"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"ճապոնական թվանիշեր"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"թուրքերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"ցոնգա"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"կոմորերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"թաթարերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"տուի"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"թաիտերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Եվրոպա"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Արևելյան Եվրոպա"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Հյուսիսային Եվրոպա"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"դազագա"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Արևմտյան Եվրոպա"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ույղուրերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"կորեական"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"ընդհանուր"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ուկրաիներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"զեյլանդերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"ուրդու"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"կալմիկերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"զենագա"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"ուզբեկերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"քասիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"ստորին սաքսոներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"վենդա"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"մինգուո օրացույց"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"վիետնամերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"կոյրա չինի"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Ժամանակային համակարգ (12 կամ 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"վոլապյուկ"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"քիչե"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"գայերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"վալոներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"գագաուզերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"ասորերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"հունական"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"վոլոֆ"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"ընդհանուր մարոկյան թամազիղտ"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"արդի ընդհանուր արաբերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"մոնղոլական"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"մանիպուրի"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"լատինական"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"չինական պարզեցված թվանիշեր"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"չինական ավանդական թվանիշեր"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"քոսա"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"հռոմեական փոքրատառ թվանիշեր"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"բիլին"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"օսեյջ"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of(u"զրադաշտական դարի"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"մոհավք"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"կակո"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"իդիշ"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"մոսսի"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"յորուբա"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"մեքսիկական իսպաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"օսմաներեն"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"վաի"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"ժուանգ"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"կալենջին"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"չինարեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"բոպոմոֆո"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"տողանցման ոճ"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"զուլուերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"վրացական"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"կիմբունդու"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"ճապոնական ֆինանսական թվանիշեր"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"գեեզ"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of(u"արևմտամարիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"էմբու"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"պարզեցված չինարեն"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"պերմյակ կոմիերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"կոնկանի"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of(u"վենետերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"չինարեն, ավանդական"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of(u"վեպսերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"կպելլեերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"քմերական թվանշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"իլոկերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"մունդանգ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"գուրմուխի թվանշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"բազմալեզու"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"չափման համակարգ"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"կրիկ"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"կիրիբատի"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"թամիլական թվանշաններ"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"կարաչայ-բալկարերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ինգուշերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"դարի"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"կարելերեն"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"էֆիկ"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of(u"տուլու"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"թվեր"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"կուրուխ"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"շամբալա"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"բաֆիա"_s)
		})
	}));
	return data;
}

LocaleNames_hy::LocaleNames_hy() {
}

$Class* LocaleNames_hy::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_hy, name, initialize, &_LocaleNames_hy_ClassInfo_, allocate$LocaleNames_hy);
	return class$;
}

$Class* LocaleNames_hy::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun