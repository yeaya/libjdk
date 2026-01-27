#include <sun/util/resources/cldr/ext/LocaleNames_el.h>

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

$MethodInfo _LocaleNames_el_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_el, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_el, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_el_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_el",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_el_MethodInfo_
};

$Object* allocate$LocaleNames_el($Class* clazz) {
	return $of($alloc(LocaleNames_el));
}

void LocaleNames_el::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_el::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_FJ, u"Φίτζι"_s);
	$var($String, metaValue_NU, u"Νιούε"_s);
	$var($String, metaValue_TK, u"Τοκελάου"_s);
	$var($String, metaValue_TV, u"Τουβαλού"_s);
	$var($String, metaValue_ae, u"Αβεστάν"_s);
	$var($String, metaValue_gu, u"Γκουγιαράτι"_s);
	$var($String, metaValue_km, u"Χμερ"_s);
	$var($String, metaValue_kn, u"Κανάντα"_s);
	$var($String, metaValue_or, u"Όντια"_s);
	$var($String, metaValue_te, u"Τελούγκου"_s);
	$var($String, metaValue_ban, u"Μπαλινίζ"_s);
	$var($String, metaValue_ccp, u"Τσάκμα"_s);
	$var($String, metaValue_chr, u"Τσερόκι"_s);
	$var($String, metaValue_nqo, u"Ν’Κο"_s);
	$var($String, metaValue_ssy, u"Σάχο"_s);
	$var($String, metaValue_vai, u"Βάι"_s);
	$var($String, metaValue_zbl, u"Σύμβολα Bliss"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"Κολωνικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"Όγκχαμ"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"Μιραντεζικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"Σύμβολα"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"Ατσάμ"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"Μαργουάρι"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"Ταγκμάνγουα"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"Διάλεκτος Γκνιβά/Ντζιβά"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"Αρχαία Αιγυπτιακά"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"Ραζασθάνι"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"Παγκς-πα"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"Τίμνε"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"Τέσο"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"Ραπανούι"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"Τερένο"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Νήσος Ασενσιόν"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"Ραροτονγκάν"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"Τέτουμ"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"Ανδόρα"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Ηνωμένα Αραβικά Εμιράτα"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"Φλαμανδικά"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Αφγανιστάν"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Αντίγκουα και Μπαρμπούντα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Αιθιοπικό ημερολόγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Ανγκουίλα"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"Ζώνη ώρας"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Αλβανία"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Αρμενία"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"Τεγνγουάρ"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Αγκόλα"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Ανταρκτική"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Αργεντινή"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"Επιγραφικό Παρθιάν"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Αμερικανική Σαμόα"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Αυστρία"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Αυστραλία"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Αρούμπα"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"Αγγλικά Αμερικής"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Νήσοι Όλαντ"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"Μιένε"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Αζερμπαϊτζάν"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"Ανατολικά Αρμενικά"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Βοσνία - Ερζεγοβίνη"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Μπαρμπέιντος"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"Σεμπουάνο"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Μπανγκλαντές"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"Κουμγιούκ"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Βέλγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"Μέσα Άνω Γερμανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Μπουρκίνα Φάσο"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Βουλγαρία"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Μπαχρέιν"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"Μπουρούντι"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Μπενίν"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Άγιος Βαρθολομαίος"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Βερμούδες"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"Κουτενάι"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"Έρζια"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Μπρουνέι"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Βολιβία"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Ολλανδία Καραϊβικής"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Βραζιλία"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Μπαχάμες"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"Σόγκα"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Μπουτάν"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Νήσος Μπουβέ"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Μποτσουάνα"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Λευκορωσία"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Μπελίζ"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"Ορατή ομιλία"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Περσικό ημερολόγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"Εβραϊκά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Καναδάς"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Νήσοι Κόκος (Κίλινγκ)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Μαζαντεράνι"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Κονγκό - Κινσάσα"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Κεντροαφρικανική Δημοκρατία"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Κονγκό - Μπραζαβίλ"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Ελβετία"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Ακτή Ελεφαντοστού"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Νήσοι Κουκ"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Χιλή"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"Καϊθί"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Καμερούν"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Κίνα"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Κολομβία"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Νήσος Κλίπερτον"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Κόστα Ρίκα"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Κούβα"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Πράσινο Ακρωτήριο"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Κουρασάο"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Νήσος των Χριστουγέννων"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Κύπρος"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Τσεχία"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"Εκατζούκ"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Γερμανία"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"Παλαιά Άνω Γερμανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"Ατσινιζικά"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"Τσίγκα"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Ντιέγκο Γκαρσία"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"Ψηφία Ντεβαναγκάρι"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Τζιμπουτί"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Δανία"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"Ακολί"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"Γκόντι"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"Μπράιγ"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"Μπραχμί"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Ντομίνικα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Πεζά αρμενικά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Δομινικανή Δημοκρατία"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"Γκοροντάλο"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"Γοτθικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"Μεϊτέι Μάγεκ"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"Ζούνι"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"Τίγκρε"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Αλγερία"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"Πανγκασινάν"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"Μισού πλάτους"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"Παχλάβι"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Θέουτα και Μελίγια"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"Τσίμπτσα"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"Παμπάνγκα"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Ισημερινός"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"Παπιαμέντο"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"Αντάνγκμε"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Εσθονία"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"Τιβ"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Αίγυπτος"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Δυτική Σαχάρα"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"Τσαγκατάι"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"Παλάουαν"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"Τσουκίζι"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"Ιδιωματικά Σινούκ"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"Μάρι"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"Τσίπιουαν"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"Τσόκτο"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Ερυθραία"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Ισπανία"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Αιθιοπία"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Ευρωπαϊκή Ένωση"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"Ελαμάιτ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Γρηγοριανό ημερολόγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Ευρωζώνη"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"Τσεγιέν"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Γκουτζαρατικά ψηφία"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"Ίνδους"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"Αντιγκέα"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Φινλανδία"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Νήσοι Φόκλαντ"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Μικρονησία"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"Παραλλαγή τοπικών ρυθμίσεων"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Νήσοι Φερόες"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"Ταμίλ"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Γαλλία"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"Γκρίμπο"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Ινδικό εθνικό ημερολόγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"Αρχαία Ελληνικά"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Γκαμπόν"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"Βότικ"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Ηνωμένο Βασίλειο"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"Πίτζιν Νιγηρίας"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Γρενάδα"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Γεωργία"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Γαλλική Γουιάνα"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"Γκέρνζι"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"Γκάνα"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"Τάι Λε"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Γιβραλτάρ"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"Αφριχίλι"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Γροιλανδία"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"Μέσα Αγγλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Γκάμπια"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Γουινέα"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Γουαδελούπη"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Ισημερινή Γουινέα"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Ελλάδα"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Νήσοι Νότια Γεωργία και Νότιες Σάντουιτς"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"Γουατεμάλα"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"Γκουάμ"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Γουινέα Μπισάου"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"Τλίνγκιτ"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"Κλίνγκον"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"Νέο Τάι Λούε"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Γουιάνα"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"Κουρδικά Σοράνι"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"Χωρίς γλωσσολογικό περιεχόμενο"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"Γερμανικά Αυστρίας"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Χονγκ Κονγκ ΕΔΠ Κίνας"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Νήσοι Χερντ και Μακντόναλντ"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Ονδούρα"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Κροατία"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"Αγκέμ"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"Γερμανικά Ελβετίας"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"Ισλαμικό ημερολόγιο (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Αϊτή"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Ουγγαρία"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"Ταμασέκ"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Κανάριοι Νήσοι"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Ινδονησία"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"Αρχαία Περσικά"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Ιρλανδία"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"Ναπολιτανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"Νάμα"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"Ζάζα"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Ισραήλ"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"Νήσος του Μαν"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Ινδία"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Ευρωπαϊκοί κανόνες ταξινόμησης"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Βρετανικά Εδάφη Ινδικού Ωκεανού"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Ιράκ"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Ιράν"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Ισλανδία"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Ιταλία"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"Μαθηματική σημειογραφία"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Ταϊλανδικά ψηφία"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"Υπολογιστής"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Βεγγαλικά ψηφία"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Τζέρζι"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Ισλαμικό ημερολόγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Τζαμάικα"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"Μπενγκάλι"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Ιορδανία"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Ιαπωνία"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"Νεότερα Μέσα Γαλλικά του 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"Αϊνού"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"Γκούσι"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"Νιάσα Τόνγκα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"Ψηφία Κανάντα"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"Καγιάχ Λι"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Υψηλά Γερμανικά Ελβετίας"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Φωνητική σειρά ταξινόμησης"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Βουδιστικό ημερολόγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Κένυα"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Λατινική Αμερική"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Κιργιστάν"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Καμπότζη"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"Κιριμπάτι"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Κομόρες"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Σεν Κιτς και Νέβις"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"Κληρονομημένο"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"Γαλλικά Καναδά"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Βόρεια Κορέα"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Νότια Κορέα"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"Φωνητικό Πόλαρντ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"Γαλλικά Ελβετίας"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Κουβέιτ"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"Τοκ Πισίν"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Νήσοι Κέιμαν"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Καζακστάν"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"Κυριλλικό"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"Λάος"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Λίβανος"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Αγία Λουκία"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"Φοινικικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"Παλαιό Εκκλησιαστικό Σλαβικό Κυριλλικό"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"Γκουίτσιν"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"Κάτω Γερμανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Λιχτενστάιν"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Σρι Λάνκα"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"Ακάντιαν"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"Κοπτικά"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Λιβερία"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Λεσότο"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"Μπουκ Παχλαβί"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Λιθουανία"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Λουξεμβούργο"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Λετονία"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"Κατακάνα"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Λιβύη"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"Λαδίνο"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"Βούντζο"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"Λάχδα"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"Λάνγκι"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"Θαανά"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Μαρόκο"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"Μονακό"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Μολδαβία"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"Μαυροβούνιο"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Άγιος Μαρτίνος (Γαλλικό τμήμα)"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"Λάμπα"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Μαδαγασκάρη"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Νήσοι Μάρσαλ"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"Αλεούτ"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"Ταϊλανδικό"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Ψηφία Βάι"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Βόρεια Μακεδονία"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Μάλι"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Μιανμάρ (Βιρμανία)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Μογγολία"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"Νεγουάρι"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Μακάο ΕΔΠ Κίνας"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Νήσοι Βόρειες Μαριάνες"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"Μαρτινίκα"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Μαυριτανία"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"Μονσεράτ"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"Μάλτα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"Μεταγραφή GEGN ΟΗΕ"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Μαυρίκιος"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"Νότια Αλτάι"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Μαλδίβες"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Μαλάουι"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Μεξικό"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Ιαπωνικό ημερολόγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Μαλαισία"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Μοζαμβίκη"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"Επιγραφικό Παχλάβι"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Ναμίμπια"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Υποσαχάρια Αφρική"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Εβραϊκό ημερολόγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Σειρά ταξινόμησης ημερολογίου"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Νέα Καληδονία"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"Εκλατινισμένα Γουάντ-Γκιλς"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"Ενωποιημένη αναθεωρημένη ορθογραφία"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Νίγηρας"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Νήσος Νόρφολκ"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Νιγηρία"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"Ταρόκο"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"Ψάλτερ Παχλάβι"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Νικαράγουα"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"Παχάχ Χμονγκ"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Ολλανδία"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Νορβηγία"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Νεπάλ"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"Ναουρού"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(metaValue_NU)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"Φοινικικό"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"Ρόμπο"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"Τσίμσιαν"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Νέα Ζηλανδία"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"Ρομανί"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"Μεροϊτικό"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"Τουρκικά Κριμαίας"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Παλαιά Αγγλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Ομάν"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"Ανγκικά"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"Κρεολικά Γαλλικά Σεϋχελλών"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"Παλαιό Περσικό"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Παναμάς"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Ισλαμικό ημερολόγιο (σε μορφή πίνακα, αστικό εποχής)"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"Κασούμπιαν"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Αγγλικά Βρετανίας"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Περού"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Γαλλική Πολυνησία"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Παπούα Νέα Γουινέα"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Φιλιππίνες"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Πακιστάν"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Πολωνία"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"Εγουόντο"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Σεν Πιερ και Μικελόν"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Νήσοι Πίτκερν"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Πουέρτο Ρίκο"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Παλαιστινιακά Εδάφη"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Πορτογαλία"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"Παλάου"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"Νίας"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Ελληνικά αριθμητικά πεζά"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"Παραγουάη"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"Τουμπούκα"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"Εβραϊκό"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Κατάρ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"Σκοτσεζικά τυποποιημένα Αγγλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(metaValue_NU)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Περιφερειακή Ωκεανία"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"Λεζγκικά"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"Ουραλική φωνητική αλφάβητος"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"Τάι Βιέτ"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Κόσμος"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Αφρική"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Βόρεια Αμερική"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Ρεϊνιόν"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Νότια Αμερική"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"Λόζμπαν"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"Ρετζάνγκ"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Ωκεανία"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Ρουμανία"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Σερβία"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Ρωσία"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Ρουάντα"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"Μανιχαϊκό"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"Ουγκαριτικό"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"Καρόσθι"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Σαουδική Αραβία"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"Πομπηικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"Μανδαϊκό"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Νήσοι Σολομώντος"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"Τασαβάκ"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Δυτική Αφρική"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Σεϋχέλλες"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Σουδάν"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Κεντρική Αμερική"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Σουηδία"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Ανατολική Αφρική"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"Αραμαϊκά"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Βόρεια Αφρική"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Σιγκαπούρη"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Αγία Ελένη"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Στενό στιλ αλλαγής γραμμών"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Μέση Αφρική"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Σλοβενία"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Νότιος Αφρική"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Σβάλμπαρντ και Γιαν Μαγιέν"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Αμερική"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Σλοβακία"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Σιέρα Λεόνε"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"Άγιος Μαρίνος"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Σενεγάλη"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Σομαλία"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"Αραουκανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Αραπάχο"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Ταμιλικά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Σουρινάμ"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Νότιο Σουδάν"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Σάο Τομέ και Πρίνσιπε"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Ελ Σαλβαδόρ"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"Αραβικά Νάτζντι"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Άγιος Μαρτίνος (Ολλανδικό τμήμα)"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Συρία"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"Γιάο"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Εσουατίνι"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"Αραγουάκ"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"Γιαπίζ"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Τριστάν ντα Κούνια"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"Άσου"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"Αμερικανικό σύστημα μέτρησης"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Βόρειος Αμερική"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Νήσοι Τερκς και Κάικος"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"Γιανγκμπέν"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Τσαντ"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Γαλλικά Νότια Εδάφη"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"Τόγκο"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Ταϊλάνδη"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Τατζικιστάν"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Καραϊβική"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Τιμόρ-Λέστε"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"Γιέμπα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Αναζήτηση κατά αρχικό σύμφωνο Χανγκούλ"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Τουρκμενιστάν"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of(u"Μπούντλινγκ"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Τυνησία"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"Τόνγκα"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Τουρκία"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Τρινιντάντ και Τομπάγκο"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Ταϊβάν"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"Αστουριανά"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"Όρκχον"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Τανζανία"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"Κβάσιο"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"Άγνωστη γραφή"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ουκρανία"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"Αρομανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Ανατολική Ασία"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"Τουβινικά"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"Κονγκό Σουαχίλι"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Νότια Ασία"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"Χάιντα"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Νοτιοανατολική Ασία"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Ουγκάντα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"Σειρά ταξινόμησης Πινγίν"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Νότια Ευρώπη"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"Σινχάλα"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Απομακρυσμένες Νησίδες ΗΠΑ"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Ηνωμένα Έθνη"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Ηνωμένες Πολιτείες"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"Χαβαϊκά"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"Ακαδημαϊκά"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"Σειρά ταξινόμησης Απλουστευμένων Κινεζικών - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Ουρουγουάη"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"Πρωσικά"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Ουζμπεκιστάν"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"Ταμαζίτ Κεντρικού Μαρόκο"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Σειρά ταξινόμησης κινήσεων"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"Νγκιεμπούν"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Βατικανό"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"Παλαιά Προβανσάλ"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Άγιος Βικέντιος και Γρεναδίνες"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Βενεζουέλα"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Βρετανικές Παρθένες Νήσοι"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Αμερικανικές Παρθένες Νήσοι"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Βιετνάμ"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Βανουάτου"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"Νογκάι"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"Ρουά"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"Παλαιά Νορβηγικά"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Αυστραλασία"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"Δυτικά Αρμενικά"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Μελανησία"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Γουάλις και Φουτούνα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"Παραδοσιακή σειρά ταξινόμησης"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Περιοχή Μικρονησίας"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"Νγκόμπα"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"Λακότα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"Οικονομικά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"Προηγούμενη σειρά ταξινόμησης, για συμβατότητα"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"Βάλσερ"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Σαμόα"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"Γουολάιτα"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"Γουασό"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"Ψευδο-προφορές"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"Γουάραϊ"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"Ψευδο-αμφικατευθυντικό"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"Αγουαντί"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Πολυνησία"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"Κοσσυφοπέδιο"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"Άγραφο"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"Ολ Τσίκι"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"Γουαρλπίρι"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"Μπατάκ"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Υεμένη"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Τυπική σειρά ταξινόμησης"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"Φανγκ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"Ρεσιάν"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"Φάντι"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"Νοηματική γραφή"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Μαγιότ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Νότια Αφρική"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Χαλαρό στιλ αλλαγής γραμμών"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"Ντεβαναγκάρι"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Γεωργιανά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"Χιραγκάνα"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Ζάμπια"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"Εκλατινισμένα Πινγίν"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Ζιμπάμπουε"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Άγνωστη περιοχή"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"Ρουνίκ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"Μετρικό σύστημα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"Ημερολόγιο ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"Μόνγκο"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"Βόρεια Σόθο"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"Τελουγκουϊκά ψηφία"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"Κρεολικά (Λουιζιάνα)"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"Λόζι"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"Ματσάμε"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Απλοποιημένα κινεζικά οικονομικά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"Χιλιγκαϊνόν"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Εκτεταμένα αραβικο-ινδικά ψηφία"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"Νούερ"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"Ντακότα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"Ψηφία πλήρους πλάτους"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"Χιτίτε"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"Ντάργκουα"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"Τάιτα"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"Ιερογλυφικά Μάγια"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"Βόρεια Λούρι"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"Κοπτικό"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"Κλασικά Νεουάρι"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"Ουντμούρτ"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"Ισλαμικό ημερολόγιο (Σαουδική Αραβία, θέαση)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"Λιμπού"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"Σαντάγουε"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"Λατινικά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"Σαχά"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"Σαμαρίτικα Αραμαϊκά"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"Σκουζ"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"Σαμπούρου"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"Σασάκ"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"Σαντάλι"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"Τιφινάγκ"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"Ιουδαϊκά-Περσικά"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Αριθμητικό"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Εγγενή ψηφία"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"Νγκαμπέι"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"Γκουρμουκχί"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"Λούμπα-Λουλούα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"Πλήρους πλάτους"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"Σάνγκου"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"Λουισένο"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"Νιανκόλε"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"Νιαμγουέζι"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"Λούντα"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"Νιόρο"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"Λούο"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"Φιλιππινικά"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"Χμονγκ"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"Ντέλαγουερ"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"Μίζο"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"Μπαλούτσι"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"Σλαβικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"Ουγκαριτικά"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"Λούχια"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"Μπάσα"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"Μπαμούν"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"Ιουδαϊκά-Αραβικά"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Ισπανικά Ευρώπης"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"Νζίμα"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"Σκωτικά"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"Σικελικά"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"Αφάρ"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"Αμπχαζικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"Νασταλίκ"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"Αφρικάανς"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"Ακάν"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"Γκομάλα"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Αμχαρικά"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"Αραγονικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"Αραβικό"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"Διάλεκτος Στολβιτζά/Σολμπικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"Ιαπωνικό"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Αραβικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"Κατακάνα ή Χιραγκάνα"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"Ασαμικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"Γραμμικό Α"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"Αβαρικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"Γραμμικό Β"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"Νότια Κουρδικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"Αϊμάρα"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"Αζερμπαϊτζανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"Διάλεκτος Οσεακό/Οσοτζάν"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"Μπασκίρ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Σειρά ταξινόμησης ριζικής αρίθμησης"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Λευκορωσικά"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Βουλγαρικά"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"Μπισλάμα"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"Μπαμπάρα"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"Βεγγαλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"Θιβετιανά"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"Ντόγκριμπ"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"Βρετονικά"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"Βοσνιακά"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"Σένεκα"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"Μιανμάρ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Λαοϊκά ψηφία"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"Σένα"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"Σελκούπ"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"Καταλανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"Κοϊραμπόρο Σένι"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"Τσετσενικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"Τσαμόρο"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"Αναθεωρημένη ορθογραφία"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"Κορσικανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"Κρι"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Τσεχικά"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"Εκκλησιαστικά Σλαβικά"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"Τσουβασικά"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"Ουαλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Αιθιοπικά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"Γι"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Δανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Πορτογαλικά Ευρώπης"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"Γερμανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Τυπική μορφή νομίσματος"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"Μπέζα"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"Ντίνκα"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"Μπούγκις"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"Μπέμπα"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"Παλαιά Ιρλανδικά"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Μογγολικά ψηφία"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"Ντιβέχι"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Ισπανικά Λατινικής Αμερικής"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"Ντζόνγκχα"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"Μπένα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Κινεζικό ημερολόγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"Ζάρμα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Ελληνικά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"Έουε"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"Μπαφούτ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Κανονικό στιλ αλλαγής γραμμών"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"Μολδαβικά"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"Ελληνικά"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Αγγλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"Εσπεράντο"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"Σειρά ταξινόμησης Παραδοσιακών Κινεζικών - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"Ισπανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"Εσθονικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"Χανμπ"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"Βασκικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"Μπουχίντ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"Χανγκούλ"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"Σαμαριτικό"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"Τασελχίτ"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"Άνω Σορβικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"Χαν"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"Σαν"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"Χανούνου"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Περσικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Απλοποιημένο"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Ψηφία της Δύσης"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"Παραδοσιακό"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"Φουλά"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"Αραβικά του Τσαντ"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"Φινλανδικά"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"Φον"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Δυτικά Μπαλοχικά"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"Καντονέζικα"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Φεροϊκά"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"Μεταγραφή BGN ΗΠΑ"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"Ουμπούντου"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Γαλλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"Σιντάμο"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"Δυτικά Φριζικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"Ιρλανδικά"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"Σκωτικά Κελτικά"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"Γαλικιανά"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"Γκουαρανί"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"Μπότζπουρι"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"Άγνωστη γλώσσα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Αιθιοπικό ημερολόγιο Άμετ Άλεμ"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"Ισλαμικό ημερολόγιο (δομημένο, αστρονομική εποχή)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"Μανξ"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"Χάουσα"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"Εβραϊκά"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"Χίντι"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"Χούπα"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"Μπικόλ"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"Μπίνι"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"Χίρι Μότου"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"Κροατικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Αϊτιανά"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Ουγγρικά"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"Αρμενικά"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"Χερέρο"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"Γαλλικά (Λουιζιάνα)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"Διεθνής φωνητική αλφάβητος"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"Ιντερλίνγκουα"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"Τζάμο"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Ινδονησιακά"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Θιβετανικά ψηφία"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"Ιντερλίνγκουε"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"Ίγκμπο"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"Σίτσουαν Γι"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"Μέσα Γαλλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"Ινουπιάκ"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"Παλαιά Γαλλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"Ίντο"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"Ανατολικά Φριζιανά"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"Βόρεια Φριζιανά"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Ισλανδικά"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Ιταλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"Ινούκτιτουτ"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Ιαπωνικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"Μαλαγιάλαμ"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"Σαράθι"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"Ντόγκρι"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"Κομ"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"Νότια Σάμι"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"Ιαβανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"Σαβιανό"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Μαντουρίζ"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"Λούλε Σάμι"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"Μαγκάχι"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"Μάφα"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"Μαϊτχίλι"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"Ινάρι Σάμι"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"Γεωργιανά"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"Σικσίκα"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"Μακασάρ"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"Κινεζικά Γου"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"Σκολτ Σάμι"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"Μαντίνγκο"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"Κονγκό"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"Γοτθικό"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"Κικούγιου"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"Μασάι"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"Κουανιάμα"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"Καζακικά"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"Καλαάλισουτ"_s)
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
			$of(u"Κορεατικά"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"Κανούρι"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"Κασμιρικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"Σερθ"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"Λέπτσα"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"Κουρδικά"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"Κόμι"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"Κορνουαλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"Κιργιζικά"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"Σονίνκε"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"Λατινικά"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"Λουξεμβουργιανά"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"Μαλαγιαλαμικά ψηφία"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"Γκάντα"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"Ρονγκορόνγκο"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"Λιμβουργιανά"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"Θιβετιανό"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"Λινγκάλα"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"Φριουλανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"Λαοτινά"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"Αγγλοσαξονικό σύστημα μέτρησης"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"Λιθουανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"Λούμπα-Κατάνγκα"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"Λετονικά"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"Σογκντιέν"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"Μαλγασικά"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"Μαρσαλέζικα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Προεπιλεγμένη σειρά ταξινόμησης Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"Μαορί"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"Σλαβομακεδονικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"Μαλαγιαλαμικά"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"Μογγολικά"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"Μαραθικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"Μαλαισιανά"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"Μαλτεζικά"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"Βιρμανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"Σαουράστρα"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"Αρμενικό"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"Μόκσα"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"Μάμπα"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"Κάτω Σορβικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"Αυτοκρατορικό Αραμαϊκό"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"Ναούρου"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"Αναζήτηση γενικού τύπου"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Νορβηγικά Μποκμάλ"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"Βόρεια Ντεμπέλε"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"Νεπαλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"Ντόνγκα"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"Μανδάρ"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Ολλανδικά"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"Νορβηγικά Νινόρσκ"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"Νορβηγικά"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"Νότια Ντεμπέλε"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"Νάβαχο"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"Κάρα-Καλπάκ"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"Νιάντζα"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"Κατσίν"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"Καμπίλε"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"Πολυτονικό"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"Οξιτανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"Τζου"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"Κάμπα"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"Μέντε"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"Οζιβίγουα"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"Μέρου"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Αρμενικά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"Ορόμο"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"Κάουι"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"Οσετικά"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"Καμπαρντιανά"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"Μορισιέν"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"Σρανάν Τόνγκο"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Παντζαπικά"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"Ντουάλα"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"Σερέρ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"Διάλεκτος Λιποβάζ της Ρεσιάν"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"Κανέμπου"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"Πάλι"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"Πολωνικά"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"Μέσα Ολλανδικά"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Κορεατικό ημερολόγιο ντάνγκι"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"Πάστο"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Πορτογαλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Μέσα Ιρλανδικά"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"Σειρά ταξινόμησης"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"Πορτογαλικά Βραζιλίας"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"Τιάπ"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"Μακούβα-Μέτο"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"Μορφή νομίσματος"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"Μπρατζ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Ημερολόγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"Λαοτινό"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"Μέτα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24ωρο σύστημα (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24ωρο σύστημα (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Ψηφία Μιανμάρ"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"Κέτσουα"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"Ζάποτεκ"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"Μπόντο"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"Λάννα"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"Μακόντε"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"Αιθιοπικό"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12ωρο σύστημα (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12ωρο σύστημα (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"Ρομανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"Ρούντι"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"Νόμισμα"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Ρουμανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Οριγικά ψηφία"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Κινεζικά δεκαδικά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"Ρωσικά"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"Ακόσι"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"Κινιαρουάντα"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"Γλώσσα του Πράσινου Ακρωτηρίου"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"Μικμάκ"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"Σουκούμα"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"Αγγλικά Αυστραλίας"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"Σανσκριτικά"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"Ενωποιημένη ορθογραφία"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"Σαρδηνιακά"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"Σούσου"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"Σίντι"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"Βόρεια Σάμι"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"Μινανγκαμπάου"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"Σάνγκο"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"Σερβοκροατικά"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"Σινχαλεζικά"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"Σουμερικά"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"Σλοβακικά"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"Σλοβενικά"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"Σαμοανά"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"Σόνα"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"Σομαλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Αραβικο-ινδικά ψηφία"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"Αλβανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"Σερβικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"Σουάτι"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"Λογιστική μορφή νομίσματος"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"Νότια Σόθο"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"Ιαβανεζικό"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"Σουνδανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"Διάλεκτος Νατισόνε"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Σουηδικά"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"Σουαχίλι"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Παραδοσιακά κινεζικά οικονομικά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"Ιμπίμπιο"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"Ιμπάν"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"Ταμιλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Ασία"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"Μπουριάτ"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Κεντρική Ασία"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Δυτική Ασία"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"Τατζικικά"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Ταϊλανδικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"Τιγκρινικά"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"Μπουγκίζ"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"Κόρο"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"Αγγλικά Καναδά"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"Τουρκμενικά"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"Τάγκαλογκ"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"Τσουάνα"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"Τονγκανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"Μπουλού"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"Τζόλα-Φόνι"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Ιαπωνικά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Τουρκικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"Τσόνγκα"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"Κομοριανά"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"Ταταρικά"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"Ντογιούλα"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"Τούι"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"Ταϊτιανά"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"Διάλεκτος Σαν Τζιόρτζιο/Βίλα"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Ευρώπη"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Ανατολική Ευρώπη"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Βόρεια Ευρώπη"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"Νταζάγκα"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Δυτική Ευρώπη"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"Ουιγουρικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"Παλαιό Ιταλικό"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"Κορεατικό"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"Κοινό"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Ουκρανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Κοπτικό ημερολόγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"Ουρντού"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"Τυποποιημένη ορθογραφία Ρεσιάν"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"Καλμίκ"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"Ζενάγκα"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"Ουζμπεκικά"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"Κάσι"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"Γερμανική ορθογραφία του 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"Κάτω Γερμανικά Ολλανδίας"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"Συλότι Νάγκρι"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"Βέντα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Ημερολόγιο της Δημοκρατίας της Κίνας"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Βιετναμικά"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"Κοτανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"Κόιρα Τσίνι"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Κύκλος ωρών (12 ή 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Ταρασκιεβική ορθογραφία"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Βολαπιούκ"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"Κλασικά Συριακά"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"Οσμάνγια"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"Κιτσέ"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"Γκα"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"Βαλλωνικά"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"Γκαγκάουζ"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"Συριακά"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"Ελληνικό"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"Λυδιανικό"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"Σούμερο-Ακάντιαν Κουνεϊφόρμ"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"Γουόλοφ"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"Τυπικά Ταμαζίτ Μαρόκου"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"Σύγχρονα Τυπικά Αραβικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"Ενοποιημένοι Καναδεζικοί Συλλαβισμοί Ιθαγενών"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"Γκάγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"Μογγολικό"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"Μαντσού"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"Φράκτουρ Λατινικό"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"Γκμπάγια"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"Μανιπούρι"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"Λατινικό"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"Γαελικό Λατινικό"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Απλοποιημένα κινεζικά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Παραδοσιακά κινεζικά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"Κόσα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Πεζά λατινικά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"Μπλιν"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"Λυκιανικό"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"Οσάζ"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"Μεντούμπα"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"Μουν"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"Μοχόκ"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"Κάκο"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"Πρώιμα Σύγχρονα Γαλλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"Γίντις"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"Μόσι"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"Συριακό"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"Ντεσερέ"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"Γιορούμπα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Παραδοσιακά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"Ισπανικά Μεξικού"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"Δυτικό Συριακό"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"Οθωμανικά Τουρκικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"Εστραντζέλο Συριακό"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"Ζουάνγκ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"Καριάν"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"Καλεντζίν"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Κινεζικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"Μποπομόφο"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"Παλαιό Περμικό"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Στιλ αλλαγής γραμμών"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"Ζουλού"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Σειρά ταξινόμησης τηλεφωνικού καταλόγου"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"Μονοτονικό"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"Γεωργιανό"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"Κιμπούντου"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Ιαπωνικά οικονομικά αριθμητικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"Τσαμ"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"Γκιζ"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"Ανατολικό Συριακό"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Ανασχηματισμένη σειρά ταξινόμησης"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"Ταγκαλόγκ"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"Λαϊκό Αιγυπτιακό"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"Ιερατικό Αιγυπτιακό"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"Έμπου"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"Αιγυπτιακά Ιερογλυφικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"Γεωργιανό Κχουτσούρι"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"Απλοποιημένα Κινεζικά"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"Κόμι-Περμιάκ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"Παλαιό Ουγγρικό"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"Κονκανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Παραδοσιακή γερμανική ορθογραφία"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"Κοσραενικά"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"Παραδοσιακά Κινεζικά"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"Σουνδανικό"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"Κπέλε"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Ψηφία Χμερ"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"Ιλόκο"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"Βαλενθιανά"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"Κυπριακό"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"Ενοποιημένη τουρκική λατινική αλφάβητος"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"Μουντάνγκ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"Ψηφία Γκουρμούκι"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"Πολλαπλές γλώσσες"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Κάντο"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"Σύστημα μέτρησης"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"Κρικ"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"Γκλαγκολιτικό"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"Γκιλμπερτίζ"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"Κοινή ορθογραφία"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"Καρίμπ"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"Καγιούγκα"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Ταμιλικά ψηφία"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"Καρατσάι-Μπαλκάρ"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"Ινγκούς"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"Νταρί"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"Καρελικά"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"Εφίκ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"Αριθμοί"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"Κουρούχ"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"Σαμπάλα"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"Μπάφια"_s)
		})
	}));
	return data;
}

LocaleNames_el::LocaleNames_el() {
}

$Class* LocaleNames_el::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_el, name, initialize, &_LocaleNames_el_ClassInfo_, allocate$LocaleNames_el);
	return class$;
}

$Class* LocaleNames_el::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun