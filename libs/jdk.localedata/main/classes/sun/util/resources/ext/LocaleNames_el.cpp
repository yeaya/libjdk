#include <sun/util/resources/ext/LocaleNames_el.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _LocaleNames_el_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_el, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_el, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_el_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_el",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_el_MethodInfo_
};

$Object* allocate$LocaleNames_el($Class* clazz) {
	return $of($alloc(LocaleNames_el));
}

void LocaleNames_el::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_el::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"Ανδόρα"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Ηνωμένα Αραβικά Εμιράτα"_s)
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
			$of("AI"_s),
			$of(u"Ανγκουίλα"_s)
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
			$of("AN"_s),
			$of(u"Ολλανδικές Αντίλλες"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Ανγκόλα"_s)
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
			$of("AX"_s),
			$of(u"Νήσοι Aland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Αζερμπαϊτζάν"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Βοσνία - Ερζεγοβίνη"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Μπαρμπάντος"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Μπανγκλαντές"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Βέλγιο"_s)
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
			$of(u"Μπένιν"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Βερμούδες"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Μπρουνέι Νταρουσαλάμ"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Βολιβία"_s)
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
			$of("CA"_s),
			$of(u"Καναδάς"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Νήσοι Κόκος (Κήλινγκ)"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Κονγκό, Λαϊκή Δημοκρατία του"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Κεντροαφρικανική Δημοκρατία"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Κονγκό"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Ελβετία"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Ακτή Ελεφαντόδοντος"_s)
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
			$of("CR"_s),
			$of(u"Κόστα Ρίκα"_s)
		}),
		$$new($ObjectArray, {
			$of("CS"_s),
			$of(u"Σερβία και Μαυροβούνιο"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Κούβα"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Νήσοι Πράσινου Ακρωτηρίου"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Νήσος Χριστουγέννων"_s)
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
			$of("DE"_s),
			$of(u"Γερμανία"_s)
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
			$of("DM"_s),
			$of(u"Ντομίνικα"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Δομινικανή Δημοκρατία"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Αλγερία"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Ισημερινός"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Εσθονία"_s)
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
			$of("FI"_s),
			$of(u"Φινλανδία"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Φίτζι"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Νήσοι Φώκλαντ"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Μικρονησία, Ομόσπονδες Πολιτείες της"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Νήσοι Φερόες"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Γαλλία"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Γκαμπόν"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Ηνωμένο Βασίλειο"_s)
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
			$of("GH"_s),
			$of(u"Γκάνα"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Γιβραλτάρ"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Γροιλανδία"_s)
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
			$of(u"Νότια Γεωργία και Νήσοι Νότιες Σάντουιτς"_s)
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
			$of(u"Γουινέα-Μπισάου"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Γουιάνα"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Χονγκ Κονγκ, Ειδική Διοικητική Περιφέρεια της Κίνας"_s)
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
			$of("HT"_s),
			$of(u"Αϊτή"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Ουγγαρία"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Ινδονησία"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Ιρλανδία"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Ισραήλ"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Ινδία"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Βρετανικά Έδάφη Ινδικού Ωκεανού"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Ιράκ"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Ιράν, Ισλαμική Δημοκρατία του"_s)
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
			$of("JM"_s),
			$of(u"Τζαμάικα"_s)
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
			$of("KE"_s),
			$of(u"Κένυα"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Κιργιζία"_s)
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
			$of("KN"_s),
			$of(u"Σαιντ Κιτς και Νέβις"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Κορέα, Βόρεια"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Κορέα, Νότια"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Κουβέιτ"_s)
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
			$of("LA"_s),
			$of(u"Λατινική Αμερική"_s)
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
			$of("LI"_s),
			$of(u"Λιχτενστάιν"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Σρι Λάνκα"_s)
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
			$of("LY"_s),
			$of(u"Λιβύη"_s)
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
			$of(u"Μολδαβία, Δημοκρατία της"_s)
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
			$of("MK"_s),
			$of(u"ΠΓΔ Μακεδονίας"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Μάλι"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Μιανμάρ"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Μογγολία"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Μακάο, Ειδική Διοικητική Περιφέρεια της Κίνας"_s)
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
			$of("MU"_s),
			$of(u"Μαυρίκιος"_s)
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
			$of("MY"_s),
			$of(u"Μαλαισία"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Μοζαμβίκη"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Ναμίμπια"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Νέα Καληδονία"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Νίγηρ"_s)
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
			$of("NI"_s),
			$of(u"Νικαράγουα"_s)
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
			$of(u"Ναούρου"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Νιούε"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Νέα Ζηλανδία"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Ομάν"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Παναμάς"_s)
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
			$of(u"Παπούα - Νέα Γουινέα"_s)
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
			$of("PM"_s),
			$of(u"Σαιντ Πιέρ και Μικελόν"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Πίτκερν"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Πουέρτο Ρίκο"_s)
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
			$of("PY"_s),
			$of(u"Παραγουάη"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Κατάρ"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Ρεϋνιόν"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Ρουμανία"_s)
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
			$of("SA"_s),
			$of(u"Σαουδική Αραβία"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Νήσοι Σολομώντος"_s)
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
			$of("SE"_s),
			$of(u"Σουηδία"_s)
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
			$of("SI"_s),
			$of(u"Σλοβενία"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Νήσοι Σβάλμπαρ και Γιαν Μαγιέν"_s)
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
			$of("SR"_s),
			$of(u"Σουρινάμ"_s)
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
			$of("SY"_s),
			$of(u"Συρία, Αραβική Δημοκρατία της"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Σουαζιλάνδη"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Νήσοι Τερκς και Κάικος"_s)
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
			$of(u"Τοκελάου"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Ανατολικό Τιμόρ"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Τουρκμενιστάν"_s)
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
			$of(u"Τρινιδάδ και Τομπάγκο"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"Τουβαλού"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Ταϊβάν"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Τανζανία"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ουκρανία"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Ουγκάντα"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Απομακρυσμένες Νησίδες των Ηνωμένων Πολιτειών"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Ηνωμένες Πολιτείες"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Ουρουγουάη"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Ουζμπεκιστάν"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Αγία Έδρα (Βατικανό)"_s)
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
			$of(u"Βρετανικές Παρθένοι Νήσοι"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Αμερικανικές Παρθένοι Νήσοι"_s)
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
			$of("WF"_s),
			$of(u"Νήσοι Ουαλλίς και Φουτουνά"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Σαμόα"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Υεμένη"_s)
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
			$of("ZM"_s),
			$of(u"Ζάμπια"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Ζιμπάμπουε"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Αραβικά"_s)
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
			$of("bn"_s),
			$of(u"Μπενγκάλι"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"Θιβετιανά"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"Βοσνιακά"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"Καταλανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"Κορσικανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Τσεχικά"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"Ουαλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Δανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"Γερμανικά"_s)
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
			$of("es"_s),
			$of(u"Ισπανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"Εσθονικά"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"Βασκικά"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Περσικά"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"Φινλανδικά"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Γαλλικά"_s)
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
			$of("he"_s),
			$of(u"Εβραϊκά"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"Χίντι"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"Κροατικά"_s)
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
			$of("id"_s),
			$of(u"Ινδονησιακά"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"Ινδονησιακά"_s)
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
			$of("iw"_s),
			$of(u"Εβραϊκά"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Ιαπωνικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of(u"Ιουδαϊκά"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"Γεωργιανά"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Κορεατικά"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"Λατινικά"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"Λιθουανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"Λετονικά"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"Σλαβομακεδονικά"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"Μογγολικά"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of(u"Μολδαβικά"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"Μαλτεζικά"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Ολλανδικά"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"Νορβηγικά"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"Πολωνικά"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Πορτογαλικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Ρουμανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"Ρωσικά"_s)
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
			$of("sq"_s),
			$of(u"Αλβανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"Σερβικά"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Σουηδικά"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Ταϊλανδικά"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Τουρκικά"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Ουκρανικά"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Βιετναμεζικά"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"Ιουδαϊκά"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Κινεζικά"_s)
		})
	});
}

LocaleNames_el::LocaleNames_el() {
}

$Class* LocaleNames_el::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_el, name, initialize, &_LocaleNames_el_ClassInfo_, allocate$LocaleNames_el);
	return class$;
}

$Class* LocaleNames_el::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun