#include <sun/util/resources/cldr/ext/TimeZoneNames_el.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef ETC_UTC
#undef GMT

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

void TimeZoneNames_el::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_el::getContents() {
	$useLocalObjectStack();
	$var($StringArray, GMT, $new($StringArray, {
		u"Μέση ώρα Γκρίνουιτς"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		u"Χειμερινή ώρα Απία"_s,
		""_s,
		u"Θερινή ώρα Απία"_s,
		""_s,
		u"Ώρα Απία"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"Χειμερινή ώρα Νήσων Κουκ"_s,
		""_s,
		u"Θερινή ώρα Νήσων Κουκ"_s,
		""_s,
		u"Ώρα Νήσων Κουκ"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"Χειμερινή ώρα Κούβας"_s,
		""_s,
		u"Θερινή ώρα Κούβας"_s,
		""_s,
		u"Ώρα Κούβας"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"Χειμερινή ώρα Φίτζι"_s,
		""_s,
		u"Θερινή ώρα Φίτζι"_s,
		""_s,
		u"Ώρα Φίτζι"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"Ώρα Κόλπου"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"Χειμερινή ώρα Χοβντ"_s,
		""_s,
		u"Θερινή ώρα Χοβντ"_s,
		""_s,
		u"Ώρα Χοβντ"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"Χειμερινή ώρα Ιράν"_s,
		""_s,
		u"Θερινή ώρα Ιράν"_s,
		""_s,
		u"Ώρα Ιράν"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		u"Ώρα Νιούε"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"Χειμερινή ώρα Ομσκ"_s,
		""_s,
		u"Θερινή ώρα Ομσκ"_s,
		""_s,
		u"Ώρα Ομσκ"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"Χειμερινή ώρα Περού"_s,
		""_s,
		u"Θερινή ώρα Περού"_s,
		""_s,
		u"Ώρα Περού"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"Ώρα Τσουκ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		u"Ώρα Νήσου Γουέικ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"Χειμερινή ώρα Χιλής"_s,
		""_s,
		u"Θερινή ώρα Χιλής"_s,
		""_s,
		u"Ώρα Χιλής"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"Χειμερινή ώρα Κίνας"_s,
		""_s,
		u"Θερινή ώρα Κίνας"_s,
		""_s,
		u"Ώρα Κίνας"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"Ώρα Νήσων Κόκος"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		u"Ώρα Ντέιβις"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"Ώρα Ινδίας"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"Χειμερινή ώρα Ιαπωνίας"_s,
		""_s,
		u"Θερινή ώρα Ιαπωνίας"_s,
		""_s,
		u"Ώρα Ιαπωνίας"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"Χειμερινή ώρα Κορέας"_s,
		""_s,
		u"Θερινή ώρα Κορέας"_s,
		""_s,
		u"Ώρα Κορέας"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"Ώρα Ναούρου"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"Ώρα Νεπάλ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		u"Ώρα Παλάου"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"Χειμερινή ώρα Σαμόα"_s,
		""_s,
		u"Θερινή ώρα Σαμόα"_s,
		""_s,
		u"Ώρα Σαμόα"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"Ώρα Σίοβα"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"Χειμερινή ώρα Τόνγκα"_s,
		""_s,
		u"Θερινή ώρα Τόνγκα"_s,
		""_s,
		u"Ώρα Τόνγκα"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"Χειμερινή ώρα Αλάσκας"_s,
		""_s,
		u"Θερινή ώρα Αλάσκας"_s,
		""_s,
		u"Ώρα Αλάσκας"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"Χειμερινή ώρα Αμαζονίου"_s,
		""_s,
		u"Θερινή ώρα Αμαζονίου"_s,
		""_s,
		u"Ώρα Αμαζονίου"_s,
		""_s
	}));
	$var($StringArray, Anadyr, $new($StringArray, {
		u"Χειμερινή ώρα Αναντίρ"_s,
		""_s,
		u"Θερινή ώρα Αναντίρ"_s,
		""_s,
		u"Ώρα Αναντίρ"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"Χειμερινή ώρα Αζορών"_s,
		""_s,
		u"Θερινή ώρα Αζορών"_s,
		""_s,
		u"Ώρα Αζορών"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"Ώρα Μπουτάν"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		u"Ώρα Μπρουνέι Νταρουσαλάμ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"Χειμερινή ώρα Νήσου Πάσχα"_s,
		""_s,
		u"Θερινή ώρα Νήσου Πάσχα"_s,
		""_s,
		u"Ώρα Νήσου Πάσχα"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"Ώρα Γουιάνας"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"Χειμερινή ώρα Ισραήλ"_s,
		""_s,
		u"Θερινή ώρα Ισραήλ"_s,
		""_s,
		u"Ώρα Ισραήλ"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"Ώρα Κόσραϊ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		u"Ώρα Μόσον"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"Χειμερινή ώρα Μόσχας"_s,
		""_s,
		u"Θερινή ώρα Μόσχας"_s,
		""_s,
		u"Ώρα Μόσχας"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"Ώρα Πονάπε"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samara, $new($StringArray, {
		u"Χειμερινή ώρα Σάμαρας"_s,
		""_s,
		u"Θερινή ώρα Σαμάρας"_s,
		""_s,
		u"Ώρα Σάμαρας"_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"Ώρα Ταϊτής"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		u"Χειμερινή ώρα Ταϊπέι"_s,
		""_s,
		u"Θερινή ώρα Ταϊπέι"_s,
		""_s,
		u"Ώρα Ταϊπέι"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"Ώρα Τουβαλού"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"Ώρα Βόστοκ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		u"Ώρα Ουάλις και Φουτούνα"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"Αραβική χειμερινή ώρα"_s,
		""_s,
		u"Αραβική θερινή ώρα"_s,
		""_s,
		u"Αραβική ώρα"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"Χειμερινή ώρα Αρμενίας"_s,
		""_s,
		u"Θερινή ώρα Αρμενίας"_s,
		""_s,
		u"Ώρα Αρμενίας"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"Ώρα Βολιβίας"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"Χειμερινή ώρα Τσάταμ"_s,
		""_s,
		u"Θερινή ώρα Τσάταμ"_s,
		""_s,
		u"Ώρα Τσάταμ"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		u"Συντονισμένη Παγκόσμια Ώρα"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"Ώρα Ισημερινού"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"Ώρα Γκάμπιερ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"Χειμερινή ώρα Γεωργίας"_s,
		""_s,
		u"Θερινή ώρα Γεωργίας"_s,
		""_s,
		u"Ώρα Γεωργίας"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"Χειμερινή ώρα Ιρκούτσκ"_s,
		""_s,
		u"Θερινή ώρα Ιρκούτσκ"_s,
		""_s,
		u"Ώρα Ιρκούτσκ"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"Χειμερινή ώρα Μαγκαντάν"_s,
		""_s,
		u"Θερινή ώρα Μαγκαντάν"_s,
		""_s,
		u"Ώρα Μαγκαντάν"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		u"Ώρα Μιανμάρ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"Χειμερινή ώρα Νήσου Νόρφολκ"_s,
		""_s,
		u"Θερινή ώρα Νήσου Νόρφολκ"_s,
		""_s,
		u"Ώρα Νήσου Νόρφολκ"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"Χειμερινή ώρα Φερνάρντο ντε Νορόνια"_s,
		""_s,
		u"Θερινή ώρα Φερνάρντο ντε Νορόνια"_s,
		""_s,
		u"Ώρα Φερνάρντο ντε Νορόνια"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"Ώρα Ρεϊνιόν"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"Ώρα Ρόθερα"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"Ώρα Νήσων Σολομώντος"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		u"Ώρα Τοκελάου"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"Χειμερινή ώρα Ουρουγουάης"_s,
		""_s,
		u"Θερινή ώρα Ουρουγουάης"_s,
		""_s,
		u"Ώρα Ουρουγουάης"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"Χειμερινή ώρα Βανουάτου"_s,
		""_s,
		u"Θερινή ώρα Βανουάτου"_s,
		""_s,
		u"Ώρα Βανουάτου"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"Χειμερινή ώρα Γιακούτσκ"_s,
		""_s,
		u"Θερινή ώρα Γιακούτσκ"_s,
		""_s,
		u"Ώρα Γιακούτσκ"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"Χειμερινή ώρα Ατλαντικού"_s,
		""_s,
		u"Θερινή ώρα Ατλαντικού"_s,
		""_s,
		u"Ώρα Ατλαντικού"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"Χειμερινή ώρα Μπραζίλιας"_s,
		""_s,
		u"Θερινή ώρα Μπραζίλιας"_s,
		""_s,
		u"Ώρα Μπραζίλιας"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"Ώρα Τσαμόρο"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"Χειμερινή ώρα Κολομβίας"_s,
		""_s,
		u"Θερινή ώρα Κολομβίας"_s,
		""_s,
		u"Ώρα Κολομβίας"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"Χειμερινή ώρα Νήσων Φόκλαντ"_s,
		""_s,
		u"Θερινή ώρα Νήσων Φόκλαντ"_s,
		""_s,
		u"Ώρα Νήσων Φόκλαντ"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"Ώρα Μαλαισίας"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"Ώρα Μαλδίβων"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"Χειμερινή ώρα Ουλάν Μπατόρ"_s,
		""_s,
		u"Θερινή ώρα Ουλάν Μπατόρ"_s,
		""_s,
		u"Ώρα Ουλάν Μπατόρ"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"Χειμερινή ώρα Πακιστάν"_s,
		""_s,
		u"Θερινή ώρα Πακιστάν"_s,
		""_s,
		u"Ώρα Πακιστάν"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"Χειμερινή ώρα Παραγουάης"_s,
		""_s,
		u"Θερινή ώρα Παραγουάης"_s,
		""_s,
		u"Ώρα Παραγουάης"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"Ώρα Πίτκερν"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"Χειμερινή ώρα Σαχαλίνης"_s,
		""_s,
		u"Θερινή ώρα Σαχαλίνης"_s,
		""_s,
		u"Ώρα Σαχαλίνης"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"Ώρα Σουρινάμ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"Χειμερινή ώρα Αργεντινής"_s,
		""_s,
		u"Θερινή ώρα Αργεντινής"_s,
		""_s,
		u"Ώρα Αργεντινής"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"Ώρα Νήσου Χριστουγέννων"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"Ώρα Γκαλάπαγκος"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"Χειμερινή ώρα Χονγκ Κονγκ"_s,
		""_s,
		u"Θερινή ώρα Χονγκ Κονγκ"_s,
		""_s,
		u"Ώρα Χονγκ Κονγκ"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"Ώρα Ινδοκίνας"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kamchatka, $new($StringArray, {
		u"Χειμερινή ώρα Πετροπαβλόβσκ-Καμτσάτσκι"_s,
		""_s,
		u"Θερινή ώρα Πετροπαβλόβσκ-Καμτσάτσκι"_s,
		""_s,
		u"Ώρα Καμτσάτκα"_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"Ώρα Κιργιστάν"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"Χειμερινή ώρα Λορντ Χάου"_s,
		""_s,
		u"Θερινή ώρα Λορντ Χάου"_s,
		""_s,
		u"Ώρα Λορντ Χάου"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"Ώρα Μαρκέζας"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"Χειμερινή ώρα Μαυρίκιου"_s,
		""_s,
		u"Θερινή ώρα Μαυρίκιου"_s,
		""_s,
		u"Ώρα Μαυρίκιου"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"Ώρα Σιγκαπούρης"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"Ώρα Βενεζουέλας"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"Χειμερινή ώρα Βόλγκογκραντ"_s,
		""_s,
		u"Θερινή ώρα Βόλγκογκραντ"_s,
		""_s,
		u"Ώρα Βόλγκογκραντ"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"Χειμερινή ώρα Αζερμπαϊτζάν"_s,
		""_s,
		u"Θερινή ώρα Αζερμπαϊτζάν"_s,
		""_s,
		u"Ώρα Αζερμπαϊτζάν"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"Χειμερινή ώρα Μπανγκλαντές"_s,
		""_s,
		u"Θερινή ώρα Μπανγκλαντές"_s,
		""_s,
		u"Ώρα Μπανγκλαντές"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"Χειμερινή ώρα Πράσινου Ακρωτηρίου"_s,
		""_s,
		u"Θερινή ώρα Πράσινου Ακρωτηρίου"_s,
		""_s,
		u"Ώρα Πράσινου Ακρωτηρίου"_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		u"Ώρα Ανατολικού Τιμόρ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"Ώρα Σεϋχελλών"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"Ώρα Τατζικιστάν"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"Χειμερινή ώρα Ουζμπεκιστάν"_s,
		""_s,
		u"Θερινή ώρα Ουζμπεκιστάν"_s,
		""_s,
		u"Ώρα Ουζμπεκιστάν"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"Ώρα Αφγανιστάν"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"Χειμερινή ώρα Κρασνογιάρσκ"_s,
		""_s,
		u"Θερινή ώρα Κρασνογιάρσκ"_s,
		""_s,
		u"Ώρα Κρασνογιάρσκ"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"Χειμερινή ώρα Νέας Ζηλανδίας"_s,
		""_s,
		u"Θερινή ώρα Νέας Ζηλανδίας"_s,
		""_s,
		u"Ώρα Νέας Ζηλανδίας"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"Χειμερινή ώρα Νοβοσιμπίρσκ"_s,
		""_s,
		u"Θερινή ώρα Νοβοσιμπίρσκ"_s,
		""_s,
		u"Ώρα Νοβοσιμπίρσκ"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"Χειμερινή ώρα Φιλιππινών"_s,
		""_s,
		u"Θερινή ώρα Φιλιππινών"_s,
		""_s,
		u"Ώρα Φιλιππινών"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"Χειμερινή ώρα Βλαδιβοστόκ"_s,
		""_s,
		u"Θερινή ώρα Βλαδιβοστόκ"_s,
		""_s,
		u"Ώρα Βλαδιβοστόκ"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"Ώρα Ινδικού Ωκεανού"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"Ώρα Νήσων Λάιν"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"Χειμερινή ώρα Νέας Γης"_s,
		""_s,
		u"Θερινή ώρα Νέας Γης"_s,
		""_s,
		u"Ώρα Νέας Γης"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"Χειμερινή ώρα Τουρκμενιστάν"_s,
		""_s,
		u"Θερινή ώρα Τουρκμενιστάν"_s,
		""_s,
		u"Ώρα Τουρκμενιστάν"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"Ώρα Γαλλικής Γουιάνας"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"Χειμερινή ώρα Νέας Καληδονίας"_s,
		""_s,
		u"Θερινή ώρα Νέας Καληδονίας"_s,
		""_s,
		u"Ώρα Νέας Καληδονίας"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"Ώρα Νότιας Γεωργίας"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"Χειμερινή ώρα Αικατερίνμπουργκ"_s,
		""_s,
		u"Θερινή ώρα Αικατερίνμπουργκ"_s,
		""_s,
		u"Ώρα Αικατερίνμπουργκ"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"Ώρα Κεντρικής Αφρικής"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"Ώρα Ανατολικής Αφρικής"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"Χειμερινή ώρα Δυτικής Αφρικής"_s,
		""_s,
		u"Θερινή ώρα Δυτικής Αφρικής"_s,
		""_s,
		u"Ώρα Δυτικής Αφρικής"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"Ώρα Ντιμόν ντ’ Ουρβίλ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"Χειμερινή ώρα Κεντρικής Ευρώπης"_s,
		"CET"_s,
		u"Θερινή ώρα Κεντρικής Ευρώπης"_s,
		"CEST"_s,
		u"Ώρα Κεντρικής Ευρώπης"_s,
		"CET"_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"Χειμερινή ώρα Ανατολικής Ευρώπης"_s,
		"EET"_s,
		u"Θερινή ώρα Ανατολικής Ευρώπης"_s,
		"EEST"_s,
		u"Ώρα Ανατολικής Ευρώπης"_s,
		"EET"_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"Χειμερινή ώρα Δυτικής Ευρώπης"_s,
		"WET"_s,
		u"Θερινή ώρα Δυτικής Ευρώπης"_s,
		"WEST"_s,
		u"Ώρα Δυτικής Ευρώπης"_s,
		"WET"_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"Χειμερινή ώρα Ειρηνικού Μεξικού"_s,
		""_s,
		u"Θερινή ώρα Ειρηνικού Μεξικού"_s,
		""_s,
		u"Ώρα Ειρηνικού Μεξικού"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"Χειμερινή ώρα Νότιας Αφρικής"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"Κεντρική χειμερινή ώρα Βόρειας Αμερικής"_s,
		""_s,
		u"Κεντρική θερινή ώρα Βόρειας Αμερικής"_s,
		""_s,
		u"Κεντρική ώρα Βόρειας Αμερικής"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"Ανατολική χειμερινή ώρα Βόρειας Αμερικής"_s,
		""_s,
		u"Ανατολική θερινή ώρα Βόρειας Αμερικής"_s,
		""_s,
		u"Ανατολική ώρα Βόρειας Αμερικής"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"Χειμερινή ώρα Ειρηνικού"_s,
		""_s,
		u"Θερινή ώρα Ειρηνικού"_s,
		""_s,
		u"Ώρα Ειρηνικού"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"Ώρα Γαλλικού Νότου και Ανταρκτικής"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		u"Ώρα Νήσων Γκίλμπερτ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"Χειμερινή ώρα Χαβάης-Αλεούτιων Νήσων"_s,
		""_s,
		u"Θερινή ώρα Χαβάης-Αλεούτιων Νήσων"_s,
		""_s,
		u"Ώρα Χαβάης-Αλεούτιων Νήσων"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"Ώρα Νήσων Φοίνιξ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"Χειμερινή ώρα Σεν Πιερ και Μικελόν"_s,
		""_s,
		u"Θερινή ώρα Σεν Πιερ και Μικελόν"_s,
		""_s,
		u"Ώρα Σεν Πιερ και Μικελόν"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"Ορεινή χειμερινή ώρα Βόρειας Αμερικής"_s,
		""_s,
		u"Ορεινή θερινή ώρα Βόρειας Αμερικής"_s,
		""_s,
		u"Ορεινή ώρα Βόρειας Αμερικής"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"Ώρα Νήσων Μάρσαλ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"Χειμερινή ώρα Βορειοδυτικού Μεξικού"_s,
		""_s,
		u"Θερινή ώρα Βορειοδυτικού Μεξικού"_s,
		""_s,
		u"Ώρα Βορειοδυτικού Μεξικού"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"Ώρα Παπούας Νέας Γουινέας"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"Χειμερινή ώρα Κεντρικής Αυστραλίας"_s,
		""_s,
		u"Θερινή ώρα Κεντρικής Αυστραλίας"_s,
		""_s,
		u"Ώρα Κεντρικής Αυστραλίας"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"Χειμερινή ώρα Ανατολικής Αυστραλίας"_s,
		""_s,
		u"Θερινή ώρα Ανατολικής Αυστραλίας"_s,
		""_s,
		u"Ώρα Ανατολικής Αυστραλίας"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"Χειμερινή ώρα Δυτικής Αυστραλίας"_s,
		""_s,
		u"Θερινή ώρα Δυτικής Αυστραλίας"_s,
		""_s,
		u"Ώρα Δυτικής Αυστραλίας"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"Χειμερινή ώρα Ανατολικής Γροιλανδίας"_s,
		""_s,
		u"Θερινή ώρα Ανατολικής Γροιλανδίας"_s,
		""_s,
		u"Ώρα Ανατολικής Γροιλανδίας"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"Χειμερινή ώρα Δυτικής Γροιλανδίας"_s,
		""_s,
		u"Θερινή ώρα Δυτικής Γροιλανδίας"_s,
		""_s,
		u"Ώρα Δυτικής Γροιλανδίας"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"Ώρα Κεντρικής Ινδονησίας"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"Ώρα Ανατολικής Ινδονησίας"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"Ώρα Δυτικής Ινδονησίας"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"Ώρα Ανατολικού Καζακστάν"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"Ώρα Δυτικού Καζακστάν"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"Χειμερινή ώρα Κεντροδυτικής Αυστραλίας"_s,
		""_s,
		u"Θερινή ώρα Κεντροδυτικής Αυστραλίας"_s,
		""_s,
		u"Ώρα Κεντροδυτικής Αυστραλίας"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"America/Los_Angeles"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"America/Denver"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Phoenix"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Chicago"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/New_York"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Indianapolis"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Honolulu"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"America/Anchorage"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/Halifax"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Sitka"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/St_Johns"_s,
			Newfoundland
		}),
		$$new($ObjectArray, {
			"Europe/Paris"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"GMT"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Asia/Jerusalem"_s,
			Israel
		}),
		$$new($ObjectArray, {
			"Asia/Tokyo"_s,
			Japan
		}),
		$$new($ObjectArray, {
			"Europe/Bucharest"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Shanghai"_s,
			China
		}),
		$$new($ObjectArray, {
			"UTC"_s,
			ETC_UTC
		}),
		$$new($ObjectArray, {
			"ACT"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"AET"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"ART"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"AST"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"BET"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"BST"_s,
			Bangladesh
		}),
		$$new($ObjectArray, {
			"CAT"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"CNT"_s,
			Newfoundland
		}),
		$$new($ObjectArray, {
			"CST"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"CTT"_s,
			China
		}),
		$$new($ObjectArray, {
			"EAT"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"ECT"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"JST"_s,
			Japan
		}),
		$$new($ObjectArray, {
			"MIT"_s,
			Apia
		}),
		$$new($ObjectArray, {
			"NET"_s,
			Armenia
		}),
		$$new($ObjectArray, {
			"NST"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"PLT"_s,
			Pakistan
		}),
		$$new($ObjectArray, {
			"PNT"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"PRT"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"PST"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"SST"_s,
			Solomon
		}),
		$$new($ObjectArray, {
			"CST6CDT"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"EST5EDT"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Etc/GMT"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Etc/UTC"_s,
			ETC_UTC
		}),
		$$new($ObjectArray, {
			"MST7MDT"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"PST8PDT"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"Asia/Aden"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Baku"_s,
			Azerbaijan
		}),
		$$new($ObjectArray, {
			"Asia/Dili"_s,
			East_Timor
		}),
		$$new($ObjectArray, {
			"Asia/Gaza"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Hovd"_s,
			Hovd
		}),
		$$new($ObjectArray, {
			"Asia/Omsk"_s,
			Omsk
		}),
		$$new($ObjectArray, {
			"Asia/Oral"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Amman"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Aqtau"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Chita"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Asia/Dhaka"_s,
			Bangladesh
		}),
		$$new($ObjectArray, {
			"Asia/Dubai"_s,
			Gulf
		}),
		$$new($ObjectArray, {
			"Asia/Kabul"_s,
			Afghanistan
		}),
		$$new($ObjectArray, {
			"Asia/Macau"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Qatar"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Seoul"_s,
			Korea
		}),
		$$new($ObjectArray, {
			"Africa/Juba"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Lome"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Asia/Almaty"_s,
			Kazakhstan_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Anadyr"_s,
			Anadyr
		}),
		$$new($ObjectArray, {
			"Asia/Aqtobe"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Atyrau"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Beirut"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Brunei"_s,
			Brunei
		}),
		$$new($ObjectArray, {
			"Asia/Harbin"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Hebron"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Kuwait"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Manila"_s,
			Philippines
		}),
		$$new($ObjectArray, {
			"Asia/Muscat"_s,
			Gulf
		}),
		$$new($ObjectArray, {
			"Asia/Riyadh"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Saigon"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Asia/Taipei"_s,
			Taipei
		}),
		$$new($ObjectArray, {
			"Asia/Tehran"_s,
			Iran
		}),
		$$new($ObjectArray, {
			"Europe/Kiev"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Oslo"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Riga"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Rome"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Indian/Mahe"_s,
			Seychelles
		}),
		$$new($ObjectArray, {
			"Pacific/Yap"_s,
			Truk
		}),
		$$new($ObjectArray, {
			"Africa/Accra"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Cairo"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Ceuta"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Africa/Dakar"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Lagos"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Tunis"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"America/Adak"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"America/Lima"_s,
			Peru
		}),
		$$new($ObjectArray, {
			"America/Nome"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"Asia/Baghdad"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Bahrain"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Bangkok"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Asia/Bishkek"_s,
			Kyrgystan
		}),
		$$new($ObjectArray, {
			"Asia/Colombo"_s,
			India
		}),
		$$new($ObjectArray, {
			"Asia/Irkutsk"_s,
			Irkutsk
		}),
		$$new($ObjectArray, {
			"Asia/Jakarta"_s,
			Indonesia_Western
		}),
		$$new($ObjectArray, {
			"Asia/Karachi"_s,
			Pakistan
		}),
		$$new($ObjectArray, {
			"Asia/Kuching"_s,
			Malaysia
		}),
		$$new($ObjectArray, {
			"Asia/Magadan"_s,
			Magadan
		}),
		$$new($ObjectArray, {
			"Asia/Nicosia"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Rangoon"_s,
			Myanmar
		}),
		$$new($ObjectArray, {
			"Asia/Tbilisi"_s,
			Georgia
		}),
		$$new($ObjectArray, {
			"Asia/Thimphu"_s,
			Bhutan
		}),
		$$new($ObjectArray, {
			"Asia/Yakutsk"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Asia/Yerevan"_s,
			Armenia
		}),
		$$new($ObjectArray, {
			"Europe/Malta"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Minsk"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Europe/Sofia"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Vaduz"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Indian/Cocos"_s,
			Cocos
		}),
		$$new($ObjectArray, {
			"Pacific/Apia"_s,
			Apia
		}),
		$$new($ObjectArray, {
			"Pacific/Fiji"_s,
			Fiji
		}),
		$$new($ObjectArray, {
			"Pacific/Guam"_s,
			Chamorro
		}),
		$$new($ObjectArray, {
			"Pacific/Niue"_s,
			Niue
		}),
		$$new($ObjectArray, {
			"Pacific/Truk"_s,
			Truk
		}),
		$$new($ObjectArray, {
			"Pacific/Wake"_s,
			Wake
		}),
		$$new($ObjectArray, {
			"SystemV/AST4"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"SystemV/CST6"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"SystemV/EST5"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"SystemV/MST7"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"SystemV/PST8"_s,
			Pitcairn
		}),
		$$new($ObjectArray, {
			"SystemV/YST9"_s,
			Gambier
		}),
		$$new($ObjectArray, {
			"Africa/Asmera"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Bamako"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Bangui"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Banjul"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Bissau"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Douala"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Harare"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Kigali"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Luanda"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Lusaka"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Malabo"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Maputo"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Maseru"_s,
			Africa_Southern
		}),
		$$new($ObjectArray, {
			"Africa/Niamey"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"America/Aruba"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Bahia"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Belem"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Boise"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Jujuy"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Thule"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"Asia/Ashgabat"_s,
			Turkmenistan
		}),
		$$new($ObjectArray, {
			"Asia/Calcutta"_s,
			India
		}),
		$$new($ObjectArray, {
			"Asia/Damascus"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Dushanbe"_s,
			Tajikistan
		}),
		$$new($ObjectArray, {
			"Asia/Jayapura"_s,
			Indonesia_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Katmandu"_s,
			Nepal
		}),
		$$new($ObjectArray, {
			"Asia/Khandyga"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Asia/Makassar"_s,
			Indonesia_Central
		}),
		$$new($ObjectArray, {
			"Asia/Qostanay"_s,
			Kazakhstan_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Sakhalin"_s,
			Sakhalin
		}),
		$$new($ObjectArray, {
			"Asia/Tashkent"_s,
			Uzbekistan
		}),
		$$new($ObjectArray, {
			"Asia/Ust-Nera"_s,
			Vladivostok
		}),
		$$new($ObjectArray, {
			"Europe/Athens"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Berlin"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Dublin"_s,
			$$new($StringArray, {
				u"Μέση ώρα Γκρίνουιτς"_s,
				""_s,
				u"Χειμερινή ώρα Ιρλανδίας"_s,
				""_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Jersey"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Europe/Lisbon"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Europe/London"_s,
			$$new($StringArray, {
				u"Μέση ώρα Γκρίνουιτς"_s,
				""_s,
				u"Θερινή ώρα Βρετανίας"_s,
				""_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Madrid"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Monaco"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Moscow"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Europe/Prague"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Samara"_s,
			Samara
		}),
		$$new($ObjectArray, {
			"Europe/Skopje"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Tirane"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Vienna"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Warsaw"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Zagreb"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Zurich"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Indian/Chagos"_s,
			Indian_Ocean
		}),
		$$new($ObjectArray, {
			"Indian/Comoro"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Efate"_s,
			Vanuatu
		}),
		$$new($ObjectArray, {
			"Pacific/Nauru"_s,
			Nauru
		}),
		$$new($ObjectArray, {
			"Pacific/Palau"_s,
			Palau
		}),
		$$new($ObjectArray, {
			"SystemV/HST10"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"Africa/Abidjan"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Algiers"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Africa/Conakry"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Kampala"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Mbabane"_s,
			Africa_Southern
		}),
		$$new($ObjectArray, {
			"Africa/Nairobi"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Tripoli"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"America/Belize"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Bogota"_s,
			Colombia
		}),
		$$new($ObjectArray, {
			"America/Cancun"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Cayman"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Cuiaba"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Dawson"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Guyana"_s,
			Guyana
		}),
		$$new($ObjectArray, {
			"America/Havana"_s,
			Cuba
		}),
		$$new($ObjectArray, {
			"America/Inuvik"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Juneau"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/La_Paz"_s,
			Bolivia
		}),
		$$new($ObjectArray, {
			"America/Maceio"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Manaus"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Merida"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Nassau"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Panama"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Recife"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Regina"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"Asia/Chongqing"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Hong_Kong"_s,
			Hong_Kong
		}),
		$$new($ObjectArray, {
			"Asia/Kamchatka"_s,
			Kamchatka
		}),
		$$new($ObjectArray, {
			"Asia/Pontianak"_s,
			Indonesia_Western
		}),
		$$new($ObjectArray, {
			"Asia/Pyongyang"_s,
			Korea
		}),
		$$new($ObjectArray, {
			"Asia/Qyzylorda"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Samarkand"_s,
			Uzbekistan
		}),
		$$new($ObjectArray, {
			"Asia/Singapore"_s,
			Singapore
		}),
		$$new($ObjectArray, {
			"Asia/Vientiane"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Europe/Andorra"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Belfast"_s,
			$$new($StringArray, {
				u"Μέση ώρα Γκρίνουιτς"_s,
				""_s,
				u"Θερινή ώρα Βρετανίας"_s,
				""_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Tallinn"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Vatican"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Vilnius"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Mayotte"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Reunion"_s,
			Reunion
		}),
		$$new($ObjectArray, {
			"Pacific/Easter"_s,
			Easter
		}),
		$$new($ObjectArray, {
			"Pacific/Kosrae"_s,
			Kosrae
		}),
		$$new($ObjectArray, {
			"Pacific/Majuro"_s,
			Marshall_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Midway"_s,
			Samoa
		}),
		$$new($ObjectArray, {
			"Pacific/Noumea"_s,
			New_Caledonia
		}),
		$$new($ObjectArray, {
			"Pacific/Ponape"_s,
			Ponape
		}),
		$$new($ObjectArray, {
			"Pacific/Saipan"_s,
			Chamorro
		}),
		$$new($ObjectArray, {
			"Pacific/Tahiti"_s,
			Tahiti
		}),
		$$new($ObjectArray, {
			"Pacific/Tarawa"_s,
			Gilbert_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Wallis"_s,
			Wallis
		}),
		$$new($ObjectArray, {
			"Africa/Blantyre"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Djibouti"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Freetown"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Gaborone"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Khartoum"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Kinshasa"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Monrovia"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Ndjamena"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Sao_Tome"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Timbuktu"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Windhoek"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"America/Antigua"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Caracas"_s,
			Venezuela
		}),
		$$new($ObjectArray, {
			"America/Cayenne"_s,
			French_Guiana
		}),
		$$new($ObjectArray, {
			"America/Cordoba"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Creston"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Curacao"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Detroit"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Godthab"_s,
			Greenland_Western
		}),
		$$new($ObjectArray, {
			"America/Grenada"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Iqaluit"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Jamaica"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Managua"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Marigot"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Mendoza"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Moncton"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Nipigon"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Noronha"_s,
			Noronha
		}),
		$$new($ObjectArray, {
			"America/Ojinaga"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Tijuana"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"America/Toronto"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Tortola"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Yakutat"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"Asia/Choibalsan"_s,
			Mongolia
		}),
		$$new($ObjectArray, {
			"Asia/Phnom_Penh"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Atlantic/Azores"_s,
			Azores
		}),
		$$new($ObjectArray, {
			"Atlantic/Canary"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Atlantic/Faeroe"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Australia/Eucla"_s,
			Australia_CentralWestern
		}),
		$$new($ObjectArray, {
			"Australia/Perth"_s,
			Australia_Western
		}),
		$$new($ObjectArray, {
			"Europe/Belgrade"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Brussels"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Budapest"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Busingen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Chisinau"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Guernsey"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Europe/Helsinki"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Sarajevo"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Uzhgorod"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Maldives"_s,
			Maldives
		}),
		$$new($ObjectArray, {
			"Pacific/Chatham"_s,
			Chatham
		}),
		$$new($ObjectArray, {
			"Pacific/Fakaofo"_s,
			Tokelau
		}),
		$$new($ObjectArray, {
			"Pacific/Gambier"_s,
			Gambier
		}),
		$$new($ObjectArray, {
			"Pacific/Norfolk"_s,
			Norfolk
		}),
		$$new($ObjectArray, {
			"SystemV/AST4ADT"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"SystemV/CST6CDT"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"SystemV/EST5EDT"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"SystemV/MST7MDT"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"SystemV/PST8PDT"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"SystemV/YST9YDT"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"Africa/Bujumbura"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Mogadishu"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"America/Anguilla"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Asuncion"_s,
			Paraguay
		}),
		$$new($ObjectArray, {
			"America/Barbados"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Dominica"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Edmonton"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Mazatlan"_s,
			Mexico_Pacific
		}),
		$$new($ObjectArray, {
			"America/Miquelon"_s,
			Pierre_Miquelon
		}),
		$$new($ObjectArray, {
			"America/Montreal"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Resolute"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Santarem"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Santiago"_s,
			Chile
		}),
		$$new($ObjectArray, {
			"America/Shiprock"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/St_Kitts"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/St_Lucia"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Winnipeg"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"Antarctica/Davis"_s,
			Davis
		}),
		$$new($ObjectArray, {
			"Antarctica/Syowa"_s,
			Syowa
		}),
		$$new($ObjectArray, {
			"Antarctica/Troll"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Asia/Krasnoyarsk"_s,
			Krasnoyarsk
		}),
		$$new($ObjectArray, {
			"Asia/Novosibirsk"_s,
			Novosibirsk
		}),
		$$new($ObjectArray, {
			"Asia/Ulaanbaatar"_s,
			Mongolia
		}),
		$$new($ObjectArray, {
			"Asia/Vladivostok"_s,
			Vladivostok
		}),
		$$new($ObjectArray, {
			"Atlantic/Bermuda"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"Atlantic/Madeira"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Atlantic/Stanley"_s,
			Falkland
		}),
		$$new($ObjectArray, {
			"Australia/Currie"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Darwin"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"Australia/Hobart"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Sydney"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Amsterdam"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Gibraltar"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Ljubljana"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Mariehamn"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Podgorica"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Stockholm"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Volgograd"_s,
			Volgograd
		}),
		$$new($ObjectArray, {
			"Indian/Christmas"_s,
			Christmas
		}),
		$$new($ObjectArray, {
			"Indian/Kerguelen"_s,
			French_Southern
		}),
		$$new($ObjectArray, {
			"Indian/Mauritius"_s,
			Mauritius
		}),
		$$new($ObjectArray, {
			"Pacific/Auckland"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Pacific/Funafuti"_s,
			Tuvalu
		}),
		$$new($ObjectArray, {
			"Pacific/Johnston"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"Pacific/Pitcairn"_s,
			Pitcairn
		}),
		$$new($ObjectArray, {
			"Africa/Libreville"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Lubumbashi"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Nouakchott"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Porto-Novo"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"America/Araguaina"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Boa_Vista"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Catamarca"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Chihuahua"_s,
			Mexico_Pacific
		}),
		$$new($ObjectArray, {
			"America/Fortaleza"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Glace_Bay"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Goose_Bay"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Guatemala"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Guayaquil"_s,
			Ecuador
		}),
		$$new($ObjectArray, {
			"America/Matamoros"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Menominee"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Monterrey"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Sao_Paulo"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/St_Thomas"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Vancouver"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"Antarctica/Mawson"_s,
			Mawson
		}),
		$$new($ObjectArray, {
			"Antarctica/Vostok"_s,
			Vostok
		}),
		$$new($ObjectArray, {
			"Asia/Kuala_Lumpur"_s,
			Malaysia
		}),
		$$new($ObjectArray, {
			"Asia/Novokuznetsk"_s,
			Krasnoyarsk
		}),
		$$new($ObjectArray, {
			"Europe/Bratislava"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Copenhagen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Luxembourg"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/San_Marino"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Simferopol"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Europe/Zaporozhye"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Enderbury"_s,
			Phoenix_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Galapagos"_s,
			Galapagos
		}),
		$$new($ObjectArray, {
			"Pacific/Kwajalein"_s,
			Marshall_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Marquesas"_s,
			Marquesas
		}),
		$$new($ObjectArray, {
			"Pacific/Pago_Pago"_s,
			Samoa
		}),
		$$new($ObjectArray, {
			"Pacific/Rarotonga"_s,
			Cook
		}),
		$$new($ObjectArray, {
			"Pacific/Tongatapu"_s,
			Tonga
		}),
		$$new($ObjectArray, {
			"Africa/Addis_Ababa"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Brazzaville"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Ouagadougou"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"America/Costa_Rica"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Grand_Turk"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Guadeloupe"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Hermosillo"_s,
			Mexico_Pacific
		}),
		$$new($ObjectArray, {
			"America/Kralendijk"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Louisville"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Martinique"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Metlakatla"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/Montevideo"_s,
			Uruguay
		}),
		$$new($ObjectArray, {
			"America/Montserrat"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Paramaribo"_s,
			Suriname
		}),
		$$new($ObjectArray, {
			"America/St_Vincent"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Whitehorse"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"Antarctica/McMurdo"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Antarctica/Rothera"_s,
			Rothera
		}),
		$$new($ObjectArray, {
			"Asia/Yekaterinburg"_s,
			Yekaterinburg
		}),
		$$new($ObjectArray, {
			"Atlantic/Jan_Mayen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Atlantic/Reykjavik"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Atlantic/St_Helena"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Australia/Adelaide"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"Australia/Brisbane"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Lindeman"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Isle_of_Man"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Europe/Kaliningrad"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Kiritimati"_s,
			Line_Islands
		}),
		$$new($ObjectArray, {
			"Africa/Johannesburg"_s,
			Africa_Southern
		}),
		$$new($ObjectArray, {
			"America/El_Salvador"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Fort_Nelson"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Mexico_City"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Pangnirtung"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Porto_Velho"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Puerto_Rico"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Rainy_River"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Tegucigalpa"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Thunder_Bay"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Yellowknife"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"Arctic/Longyearbyen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Atlantic/Cape_Verde"_s,
			Cape_Verde
		}),
		$$new($ObjectArray, {
			"Australia/Lord_Howe"_s,
			Lord_Howe
		}),
		$$new($ObjectArray, {
			"Australia/Melbourne"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Antananarivo"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Guadalcanal"_s,
			Solomon
		}),
		$$new($ObjectArray, {
			"Africa/Dar_es_Salaam"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"America/Blanc-Sablon"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Buenos_Aires"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Campo_Grande"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Danmarkshavn"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"America/Dawson_Creek"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Indiana/Knox"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Rankin_Inlet"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Santa_Isabel"_s,
			Mexico_Northwest
		}),
		$$new($ObjectArray, {
			"America/Scoresbysund"_s,
			Greenland_Eastern
		}),
		$$new($ObjectArray, {
			"Antarctica/Macquarie"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Port_Moresby"_s,
			Papua_New_Guinea
		}),
		$$new($ObjectArray, {
			"America/Cambridge_Bay"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Coral_Harbour"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Indiana/Vevay"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Lower_Princes"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Port_of_Spain"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Santo_Domingo"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/St_Barthelemy"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Swift_Current"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"Antarctica/South_Pole"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Australia/Broken_Hill"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"America/Bahia_Banderas"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Port-au-Prince"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Atlantic/South_Georgia"_s,
			South_Georgia
		}),
		$$new($ObjectArray, {
			"America/Argentina/Salta"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Indiana/Marengo"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Indiana/Winamac"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Argentina/Tucuman"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Argentina/Ushuaia"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Indiana/Tell_City"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Indiana/Vincennes"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Antarctica/DumontDUrville"_s,
			DumontDUrville
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aden"_s,
			u"Άντεν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Baku"_s,
			u"Μπακού"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dili"_s,
			u"Ντίλι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Gaza"_s,
			u"Γάζα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hovd"_s,
			u"Χοβντ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Omsk"_s,
			u"Ομσκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Oral"_s,
			u"Οράλ"_s
		}),
		$$new($ObjectArray, {
			"America/Argentina/La_Rioja"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Argentina/San_Juan"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Argentina/San_Luis"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Indiana/Petersburg"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Amman"_s,
			u"Αμμάν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtau"_s,
			u"Ακτάου"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Chita"_s,
			u"Τσιτά"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dhaka"_s,
			u"Ντάκα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dubai"_s,
			u"Ντουμπάι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kabul"_s,
			u"Καμπούλ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Macau"_s,
			u"Μακάο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qatar"_s,
			u"Κατάρ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Seoul"_s,
			u"Σεούλ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tokyo"_s,
			u"Τόκιο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tomsk"_s,
			u"Τομσκ"_s
		}),
		$$new($ObjectArray, {
			"America/Kentucky/Monticello"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Beulah"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Center"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Juba"_s,
			u"Τζούμπα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lome"_s,
			u"Λομέ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Almaty"_s,
			u"Αλμάτι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Anadyr"_s,
			u"Αναντίρ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtobe"_s,
			u"Ακτόμπε"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Atyrau"_s,
			u"Ατιράου"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Beirut"_s,
			u"Βυρητός"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Brunei"_s,
			u"Μπρουνέι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hebron"_s,
			u"Χεβρώνα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuwait"_s,
			u"Κουβέιτ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Manila"_s,
			u"Μανίλα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Muscat"_s,
			u"Μασκάτ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Riyadh"_s,
			u"Ριάντ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Saigon"_s,
			u"Πόλη Χο Τσι Μινχ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Taipei"_s,
			u"Ταϊπέι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tehran"_s,
			u"Τεχεράνη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Urumqi"_s,
			u"Ουρούμτσι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Etc/Unknown"_s,
			u"Άγνωστη πόλη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kiev"_s,
			u"Κίεβο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Oslo"_s,
			u"Όσλο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Riga"_s,
			u"Ρίγα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Rome"_s,
			u"Ρώμη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mahe"_s,
			u"Μάχε"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Accra"_s,
			u"Άκρα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Cairo"_s,
			u"Κάιρο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ceuta"_s,
			u"Θέουτα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dakar"_s,
			u"Ντακάρ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lagos"_s,
			u"Λάγκος"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tunis"_s,
			u"Τύνιδα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Adak"_s,
			u"Άντακ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Lima"_s,
			u"Λίμα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nome"_s,
			u"Νόμε"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Baghdad"_s,
			u"Βαγδάτη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bahrain"_s,
			u"Μπαχρέιν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bangkok"_s,
			u"Μπανγκόκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Barnaul"_s,
			u"Μπαρναούλ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bishkek"_s,
			u"Μπισκέκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Colombo"_s,
			u"Κολόμπο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Irkutsk"_s,
			u"Ιρκούτσκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jakarta"_s,
			u"Τζακάρτα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Karachi"_s,
			u"Καράτσι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuching"_s,
			u"Κουτσίνγκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Magadan"_s,
			u"Μαγκαντάν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Nicosia"_s,
			u"Λευκωσία"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Rangoon"_s,
			u"Ρανγκούν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tbilisi"_s,
			u"Τιφλίδα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Thimphu"_s,
			u"Θίμφου"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yakutsk"_s,
			u"Γιακούτσκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yerevan"_s,
			u"Ερεβάν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kirov"_s,
			u"Κίροφ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Malta"_s,
			u"Μάλτα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Minsk"_s,
			u"Μινσκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Paris"_s,
			u"Παρίσι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Sofia"_s,
			u"Σόφια"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vaduz"_s,
			u"Βαντούζ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Cocos"_s,
			u"Κόκος"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Apia"_s,
			u"Απία"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fiji"_s,
			u"Φίτζι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guam"_s,
			u"Γκουάμ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Niue"_s,
			u"Νιούε"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Truk"_s,
			u"Τσουκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wake"_s,
			u"Γουέικ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Asmera"_s,
			u"Ασμάρα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bamako"_s,
			u"Μπαμάκο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bangui"_s,
			u"Μπανγκί"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Banjul"_s,
			u"Μπανζούλ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bissau"_s,
			u"Μπισάου"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Douala"_s,
			u"Ντουάλα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Harare"_s,
			u"Χαράρε"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kigali"_s,
			u"Κιγκάλι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Luanda"_s,
			u"Λουάντα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lusaka"_s,
			u"Λουζάκα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Malabo"_s,
			u"Μαλάμπο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Maputo"_s,
			u"Μαπούτο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Maseru"_s,
			u"Μασέρου"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Niamey"_s,
			u"Νιαμέι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Aruba"_s,
			u"Αρούμπα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bahia"_s,
			u"Μπαΐα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belem"_s,
			u"Μπελέμ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Boise"_s,
			u"Μπόιζι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jujuy"_s,
			u"Χουχούι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Sitka"_s,
			u"Σίτκα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thule"_s,
			u"Θούλη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ashgabat"_s,
			u"Ασχαμπάτ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Calcutta"_s,
			u"Καλκούτα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Damascus"_s,
			u"Δαμασκός"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dushanbe"_s,
			u"Ντουσάνμπε"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jayapura"_s,
			u"Τζαγιαπούρα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Katmandu"_s,
			u"Κατμαντού"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Khandyga"_s,
			u"Χαντίγκα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Makassar"_s,
			u"Μακασάρ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qostanay"_s,
			u"Κοστανάι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Sakhalin"_s,
			u"Σαχαλίνη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Shanghai"_s,
			u"Σανγκάη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tashkent"_s,
			u"Τασκένδη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ust-Nera"_s,
			u"Ουστ-Νερά"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Athens"_s,
			u"Αθήνα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Berlin"_s,
			u"Βερολίνο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Dublin"_s,
			u"Δουβλίνο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Jersey"_s,
			u"Τζέρσεϊ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Lisbon"_s,
			u"Λισαβόνα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/London"_s,
			u"Λονδίνο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Madrid"_s,
			u"Μαδρίτη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Monaco"_s,
			u"Μονακό"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Moscow"_s,
			u"Μόσχα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Prague"_s,
			u"Πράγα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Samara"_s,
			u"Σαμάρα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Skopje"_s,
			u"Σκόπια"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tirane"_s,
			u"Τίρανα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vienna"_s,
			u"Βιέννη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Warsaw"_s,
			u"Βαρσοβία"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zagreb"_s,
			u"Ζάγκρεμπ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zurich"_s,
			u"Ζυρίχη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Chagos"_s,
			u"Τσάγκος"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Comoro"_s,
			u"Κομόρο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Efate"_s,
			u"Εφάτε"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Nauru"_s,
			u"Ναούρου"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Palau"_s,
			u"Παλάου"_s
		}),
		$$new($ObjectArray, {
			"America/Argentina/Rio_Gallegos"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/New_Salem"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Abidjan"_s,
			u"Αμπιτζάν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Algiers"_s,
			u"Αλγέρι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Conakry"_s,
			u"Κόνακρι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kampala"_s,
			u"Καμπάλα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mbabane"_s,
			u"Μπαμπάνε"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Nairobi"_s,
			u"Ναϊρόμπι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tripoli"_s,
			u"Τρίπολη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belize"_s,
			u"Μπελίζ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bogota"_s,
			u"Μπογκοτά"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cancun"_s,
			u"Κανκούν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayman"_s,
			u"Κέιμαν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cuiaba"_s,
			u"Κουιαμπά"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson"_s,
			u"Ντόσον"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Denver"_s,
			u"Ντένβερ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guyana"_s,
			u"Γουιάνα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Havana"_s,
			u"Αβάνα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Inuvik"_s,
			u"Ινούβικ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Juneau"_s,
			u"Τζούνο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/La_Paz"_s,
			u"Λα Παζ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Maceio"_s,
			u"Μασεϊό"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Manaus"_s,
			u"Μανάους"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Merida"_s,
			u"Μέριδα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nassau"_s,
			u"Νασάου"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Panama"_s,
			u"Παναμάς"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Recife"_s,
			u"Ρεσίφε"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Regina"_s,
			u"Ρετζάινα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Famagusta"_s,
			u"Αμμόχωστος"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hong_Kong"_s,
			u"Χονγκ Κονγκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jerusalem"_s,
			u"Ιερουσαλήμ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kamchatka"_s,
			u"Καμτσάτκα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Pontianak"_s,
			u"Πόντιανακ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Pyongyang"_s,
			u"Πιονγκγιάνγκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qyzylorda"_s,
			u"Κιζιλορντά"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Samarkand"_s,
			u"Σαμαρκάνδη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Singapore"_s,
			u"Σιγκαπούρη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Vientiane"_s,
			u"Βιεντιάν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Andorra"_s,
			u"Ανδόρα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Saratov"_s,
			u"Σαράτοφ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tallinn"_s,
			u"Ταλίν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vatican"_s,
			u"Βατικανό"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vilnius"_s,
			u"Βίλνιους"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mayotte"_s,
			u"Μαγιότ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Reunion"_s,
			u"Ρεϊνιόν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Easter"_s,
			u"Νήσος Πάσχα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kosrae"_s,
			u"Κόσραϊ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Majuro"_s,
			u"Ματζούρο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Midway"_s,
			u"Μίντγουεϊ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Noumea"_s,
			u"Νουμέα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Ponape"_s,
			u"Πονάπε"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Saipan"_s,
			u"Σαϊπάν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tahiti"_s,
			u"Ταϊτή"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tarawa"_s,
			u"Ταράουα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wallis"_s,
			u"Γουάλις"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Blantyre"_s,
			u"Μπλαντάιρ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Djibouti"_s,
			u"Τζιμπουτί"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/El_Aaiun"_s,
			u"Ελ Αγιούν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Freetown"_s,
			u"Φρίταουν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Gaborone"_s,
			u"Γκαμπορόνε"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Khartoum"_s,
			u"Χαρτούμ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kinshasa"_s,
			u"Κινσάσα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Monrovia"_s,
			u"Μονρόβια"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ndjamena"_s,
			u"Ντζαμένα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Sao_Tome"_s,
			u"Σάο Τομέ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Windhoek"_s,
			u"Βίντχουκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Antigua"_s,
			u"Αντίγκουα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Caracas"_s,
			u"Καράκας"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayenne"_s,
			u"Καγιέν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chicago"_s,
			u"Σικάγο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cordoba"_s,
			u"Κόρδοβα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Creston"_s,
			u"Κρέστον"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Curacao"_s,
			u"Κουρασάο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Detroit"_s,
			u"Ντιτρόιτ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Godthab"_s,
			u"Νουούκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grenada"_s,
			u"Γρενάδα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Halifax"_s,
			u"Χάλιφαξ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Iqaluit"_s,
			u"Ικαλούιτ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jamaica"_s,
			u"Τζαμάικα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Managua"_s,
			u"Μανάγκουα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Marigot"_s,
			u"Μαριγκό"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mendoza"_s,
			u"Μεντόζα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Moncton"_s,
			u"Μόνκτον"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nipigon"_s,
			u"Νιπιγκόν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Noronha"_s,
			u"Νορόνια"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Ojinaga"_s,
			u"Οχινάγκα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Phoenix"_s,
			u"Φοίνιξ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tijuana"_s,
			u"Τιχουάνα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Toronto"_s,
			u"Τορόντο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tortola"_s,
			u"Τορτόλα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Yakutat"_s,
			u"Γιάκουτατ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Choibalsan"_s,
			u"Τσοϊμπαλσάν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Phnom_Penh"_s,
			u"Πνομ Πενχ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Azores"_s,
			u"Αζόρες"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Canary"_s,
			u"Κανάρια"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Faeroe"_s,
			u"Φερόες"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Eucla"_s,
			u"Γιούκλα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Perth"_s,
			u"Περθ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Belgrade"_s,
			u"Βελιγράδι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Brussels"_s,
			u"Βρυξέλλες"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Budapest"_s,
			u"Βουδαπέστη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Busingen"_s,
			u"Μπίσινγκεν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Chisinau"_s,
			u"Κισινάου"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Guernsey"_s,
			u"Γκέρνζι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Helsinki"_s,
			u"Ελσίνκι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Istanbul"_s,
			u"Κωνσταντινούπολη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Sarajevo"_s,
			u"Σαράγεβο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Uzhgorod"_s,
			u"Ούζχοροντ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Maldives"_s,
			u"Μαλδίβες"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Chatham"_s,
			u"Τσάταμ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fakaofo"_s,
			u"Φακαόφο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Gambier"_s,
			u"Γκάμπιερ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Norfolk"_s,
			u"Νόρφολκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bujumbura"_s,
			u"Μπουζουμπούρα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mogadishu"_s,
			u"Μογκαντίσου"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anguilla"_s,
			u"Ανγκουίλα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Asuncion"_s,
			u"Ασουνσιόν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Barbados"_s,
			u"Μπαρμπέιντος"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dominica"_s,
			u"Ντομίνικα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Edmonton"_s,
			u"Έντμοντον"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Eirunepe"_s,
			u"Εϊρουνεπέ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mazatlan"_s,
			u"Μαζατλάν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Miquelon"_s,
			u"Μικελόν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/New_York"_s,
			u"Νέα Υόρκη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Resolute"_s,
			u"Ρέζολουτ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santarem"_s,
			u"Σανταρέμ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santiago"_s,
			u"Σαντιάγκο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Johns"_s,
			u"Σεν Τζονς"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Kitts"_s,
			u"Σεν Κιτς"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Lucia"_s,
			u"Αγία Λουκία"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Winnipeg"_s,
			u"Γουίνιπεγκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Casey"_s,
			u"Κάσεϊ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Davis"_s,
			u"Ντέιβις"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Syowa"_s,
			u"Σίοβα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Troll"_s,
			u"Τρολ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Krasnoyarsk"_s,
			u"Κρασνογιάρσκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novosibirsk"_s,
			u"Νοβοσιμπίρσκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ulaanbaatar"_s,
			u"Ουλάν Μπατόρ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Vladivostok"_s,
			u"Βλαδιβοστόκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Bermuda"_s,
			u"Βερμούδες"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Madeira"_s,
			u"Μαδέρα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Stanley"_s,
			u"Στάνλεϊ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Currie"_s,
			u"Κάρι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Darwin"_s,
			u"Ντάργουιν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Hobart"_s,
			u"Χόμπαρτ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Sydney"_s,
			u"Σίδνεϊ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Amsterdam"_s,
			u"Άμστερνταμ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Astrakhan"_s,
			u"Αστραχάν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bucharest"_s,
			u"Βουκουρέστι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Gibraltar"_s,
			u"Γιβραλτάρ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Ljubljana"_s,
			u"Λιουμπλιάνα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Mariehamn"_s,
			u"Μάριεχαμν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Podgorica"_s,
			u"Ποντγκόριτσα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Stockholm"_s,
			u"Στοκχόλμη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Ulyanovsk"_s,
			u"Ουλιάνοφσκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Volgograd"_s,
			u"Βόλγκοκραντ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Christmas"_s,
			u"Νήσος Χριστουγέννων"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Kerguelen"_s,
			u"Κεργκελέν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mauritius"_s,
			u"Μαυρίκιος"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Auckland"_s,
			u"Όκλαντ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Funafuti"_s,
			u"Φουναφούτι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Honolulu"_s,
			u"Χονολουλού"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Johnston"_s,
			u"Τζόνστον"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Pitcairn"_s,
			u"Πίτκερν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Casablanca"_s,
			u"Καζαμπλάνκα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Libreville"_s,
			u"Λιμπρεβίλ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lubumbashi"_s,
			u"Λουμπουμπάσι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Nouakchott"_s,
			u"Νουακσότ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Porto-Novo"_s,
			u"Πόρτο-Νόβο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anchorage"_s,
			u"Άνκορατζ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Araguaina"_s,
			u"Αραγκουάινα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Boa_Vista"_s,
			u"Μπόα Βίστα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Catamarca"_s,
			u"Καταμάρκα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chihuahua"_s,
			u"Τσιουάουα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Fortaleza"_s,
			u"Φορταλέζα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Glace_Bay"_s,
			u"Γκλέις Μπέι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Goose_Bay"_s,
			u"Γκους Μπέι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guatemala"_s,
			u"Γουατεμάλα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guayaquil"_s,
			u"Γκουαγιακίλ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Matamoros"_s,
			u"Ματαμόρος"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Menominee"_s,
			u"Μενομίνε"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Monterrey"_s,
			u"Μοντερέι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Sao_Paulo"_s,
			u"Σάο Πάολο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Thomas"_s,
			u"Άγιος Θωμάς"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Vancouver"_s,
			u"Βανκούβερ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Mawson"_s,
			u"Μόσον"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Palmer"_s,
			u"Πάλμερ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Vostok"_s,
			u"Βόστοκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuala_Lumpur"_s,
			u"Κουάλα Λουμπούρ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novokuznetsk"_s,
			u"Νοβοκουζνέτσκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bratislava"_s,
			u"Μπρατισλάβα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Copenhagen"_s,
			u"Κοπεγχάγη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Luxembourg"_s,
			u"Λουξεμβούργο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/San_Marino"_s,
			u"Άγιος Μαρίνος"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Simferopol"_s,
			u"Συμφερόπολη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zaporozhye"_s,
			u"Ζαπορόζιε"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Enderbury"_s,
			u"Έντερμπερι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Galapagos"_s,
			u"Γκαλάπαγκος"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kwajalein"_s,
			u"Κουατζαλέιν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Marquesas"_s,
			u"Μαρκέζας"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Pago_Pago"_s,
			u"Πάγκο Πάγκο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Rarotonga"_s,
			u"Ραροτόνγκα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tongatapu"_s,
			u"Τονγκατάπου"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Addis_Ababa"_s,
			u"Αντίς Αμπέμπα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Brazzaville"_s,
			u"Μπραζαβίλ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ouagadougou"_s,
			u"Ουαγκαντούγκου"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Costa_Rica"_s,
			u"Κόστα Ρίκα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grand_Turk"_s,
			u"Γκραντ Τουρκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guadeloupe"_s,
			u"Γουαδελούπη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Hermosillo"_s,
			u"Ερμοσίγιο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kralendijk"_s,
			u"Κράλεντικ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Louisville"_s,
			u"Λούιβιλ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Martinique"_s,
			u"Μαρτινίκα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Metlakatla"_s,
			u"Μετλακάτλα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montevideo"_s,
			u"Μοντεβιδέο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montserrat"_s,
			u"Μονσεράτ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Paramaribo"_s,
			u"Παραμαρίμπο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rio_Branco"_s,
			u"Ρίο Μπράνκο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Vincent"_s,
			u"Άγιος Βικέντιος"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Whitehorse"_s,
			u"Γουάιτχορς"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/McMurdo"_s,
			u"Μακμέρντο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Rothera"_s,
			u"Ρόθερα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Srednekolymsk"_s,
			u"Σρεντνεκολίμσκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yekaterinburg"_s,
			u"Αικατερινούπολη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Reykjavik"_s,
			u"Ρέυκιαβικ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/St_Helena"_s,
			u"Αγ. Ελένη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Adelaide"_s,
			u"Αδελαΐδα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Brisbane"_s,
			u"Μπρισμπέιν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Lindeman"_s,
			u"Λίντεμαν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Isle_of_Man"_s,
			u"Νήσος του Μαν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kaliningrad"_s,
			u"Καλίνινγκραντ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kiritimati"_s,
			u"Κιριτιμάτι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Johannesburg"_s,
			u"Γιοχάνεσμπουργκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/El_Salvador"_s,
			u"Ελ Σαλβαδόρ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Fort_Nelson"_s,
			u"Φορτ Νέλσον"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Los_Angeles"_s,
			u"Λος Άντζελες"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mexico_City"_s,
			u"Πόλη του Μεξικού"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Pangnirtung"_s,
			u"Πανγκνίρτουνγκ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Porto_Velho"_s,
			u"Πόρτο Βέλιο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Puerto_Rico"_s,
			u"Πουέρτο Ρίκο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rainy_River"_s,
			u"Ρέινι Ρίβερ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tegucigalpa"_s,
			u"Τεγκουσιγκάλπα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thunder_Bay"_s,
			u"Θάντερ Μπέι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Yellowknife"_s,
			u"Γέλοουναϊφ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Arctic/Longyearbyen"_s,
			u"Λόνγκιεαρμπιεν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Cape_Verde"_s,
			u"Πράσινο Ακρωτήριο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Lord_Howe"_s,
			u"Λορντ Χάου"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Melbourne"_s,
			u"Μελβούρνη"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Antananarivo"_s,
			u"Ανταναναρίβο"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guadalcanal"_s,
			u"Γκουανταλκανάλ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dar_es_Salaam"_s,
			u"Νταρ ες Σαλάμ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Blanc-Sablon"_s,
			u"Μπλαν Σαμπλόν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Buenos_Aires"_s,
			u"Μπουένος Άιρες"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Campo_Grande"_s,
			u"Κάμπο Γκράντε"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Danmarkshavn"_s,
			u"Ντανμαρκσάβν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson_Creek"_s,
			u"Ντόσον Κρικ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Knox"_s,
			u"Νοξ, Ιντιάνα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indianapolis"_s,
			u"Ιντιανάπολις"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Punta_Arenas"_s,
			u"Πούντα Αρένας"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rankin_Inlet"_s,
			u"Ράνκιν Ίνλετ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santa_Isabel"_s,
			u"Σάντα Ιζαμπέλ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Scoresbysund"_s,
			u"Σκορεσμπίσουντ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Macquarie"_s,
			u"Μακουάρι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Bougainville"_s,
			u"Μπουγκενβίλ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Port_Moresby"_s,
			u"Πορτ Μόρεσμπι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cambridge_Bay"_s,
			u"Κέμπριτζ Μπέι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Coral_Harbour"_s,
			u"Ατικόκαν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vevay"_s,
			u"Βιβέι, Ιντιάνα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port_of_Spain"_s,
			u"Πορτ οφ Σπέιν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santo_Domingo"_s,
			u"Άγιος Δομίνικος"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Barthelemy"_s,
			u"Άγιος Βαρθολομαίος"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Swift_Current"_s,
			u"Σουίφτ Κάρεντ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Broken_Hill"_s,
			u"Μπρόκεν Χιλ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bahia_Banderas"_s,
			u"Μπαΐα ντε Μπαντέρας"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port-au-Prince"_s,
			u"Πορτ-ο-Πρενς"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/South_Georgia"_s,
			u"Νότια Γεωργία"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Salta"_s,
			u"Σάλτα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Marengo"_s,
			u"Μαρένγκο, Ιντιάνα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Winamac"_s,
			u"Γουίναμακ, Ιντιάνα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Tucuman"_s,
			u"Τουκουμάν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Ushuaia"_s,
			u"Ουσουάια"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Tell_City"_s,
			u"Τελ Σίτι, Ιντιάνα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vincennes"_s,
			u"Βανσέν, Ιντιάνα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/DumontDUrville"_s,
			u"Ντιμόν ντ’ Ουρβίλ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/La_Rioja"_s,
			u"Λα Ριόχα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/San_Juan"_s,
			u"Σαν Χουάν"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/San_Luis"_s,
			u"Σαν Λούις"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Petersburg"_s,
			u"Πίτερσμπεργκ, Ιντιάνα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kentucky/Monticello"_s,
			u"Μοντιτσέλο, Κεντάκι"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Beulah"_s,
			u"Μπέουλα, Βόρεια Ντακότα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Center"_s,
			u"Σέντερ, Βόρεια Ντακότα"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Rio_Gallegos"_s,
			u"Ρίο Γκαγιέγκος"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/New_Salem"_s,
			u"Νιου Σέιλεμ, Βόρεια Ντακότα"_s
		})
	}));
	return data;
}

TimeZoneNames_el::TimeZoneNames_el() {
}

$Class* TimeZoneNames_el::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_el, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_el, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_el",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_el, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_el);
	});
	return class$;
}

$Class* TimeZoneNames_el::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun