#include <bug6937798.h>
#include <bug6937798$1.h>
#include <bug6937798$2.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/JTable.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $bug6937798$1 = ::bug6937798$1;
using $bug6937798$2 = ::bug6937798$2;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $TableModel = ::javax::swing::table::TableModel;

void bug6937798::main($StringArray* args) {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($NimbusLookAndFeel));
	$SwingUtilities::invokeAndWait($$new($bug6937798$1));
}

void bug6937798::init$() {
	$useLocalObjectStack();
	$var($JTable, table, createCountryTable());
	$nc(table)->setShowGrid(true);
	table->setSize(100, 100);
	int32_t var$0 = table->getWidth();
	$var($BufferedImage, im, $new($BufferedImage, var$0, table->getHeight(), $BufferedImage::TYPE_INT_ARGB));
	$var($Graphics, g, im->getGraphics());
	table->print(g);
	$nc(g)->dispose();
	for (int32_t i = 0; i < im->getHeight(); ++i) {
		for (int32_t j = 0; j < im->getWidth(); ++j) {
			int32_t var$1 = im->getRGB(i, j);
			if (var$1 == $$nc(table->getGridColor())->getRGB()) {
				$nc($System::out)->println("got it!"_s);
				return;
			}
		}
	}
	$throwNew($RuntimeException, "no table\'s grid detected...."_s);
}

$JTable* bug6937798::createCountryTable() {
	$useLocalObjectStack();
	$var($StringArray, headers, $new($StringArray, {
		"Name"_s,
		"Capital City"_s,
		"Language(s)"_s,
		"Monetary Unit(s)"_s,
		"EC Member"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Albania"_s,
			"Tirane"_s,
			"Albanian, Greek"_s,
			"Lek"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Andorra"_s,
			"Andorra la Vella"_s,
			"Catalan, French, Spanish"_s,
			"French Franc, Spanish Peseta"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Austria"_s,
			"Vienna"_s,
			"German, Slovenian, Croatian"_s,
			"Schilling"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Belarus"_s,
			"Minsk"_s,
			"Byelorussian, Russian"_s,
			"Belarusian Rubel"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Belgium"_s,
			"Brussels"_s,
			"French, Flemish, German"_s,
			"Belgian Franc"_s,
			$$new($Boolean, true)
		}),
		$$new($ObjectArray, {
			"Bosnia & Herzegovina"_s,
			"Sarajevo"_s,
			"Serbo-Croatian"_s,
			"Dinar"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Bulgaria"_s,
			"Sofia"_s,
			"Bulgarian, Turkish"_s,
			"Lev"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Croatia"_s,
			"Zagreb"_s,
			"Serbo-Croatian"_s,
			"Croatian Kuna"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Czech Republic"_s,
			"Prague"_s,
			"Czech, Slovak"_s,
			"Koruna"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Denmark"_s,
			"Copenhagen"_s,
			"Danish"_s,
			"Krone"_s,
			$$new($Boolean, true)
		}),
		$$new($ObjectArray, {
			"Estonia"_s,
			"Tallinn"_s,
			"Estonian, Latvian, Lithuanian, Russian"_s,
			"Estonian Kroon"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Finland"_s,
			"Helsinki"_s,
			"Finnish, Swedish, Lappish"_s,
			"Markka"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"France"_s,
			"Paris"_s,
			"French"_s,
			"Franc"_s,
			$$new($Boolean, true)
		}),
		$$new($ObjectArray, {
			"Germany"_s,
			"Berlin"_s,
			"German"_s,
			"Deutsche Mark"_s,
			$$new($Boolean, true)
		}),
		$$new($ObjectArray, {
			"Greece"_s,
			"Athens"_s,
			"Greek, English, French"_s,
			"Drachma"_s,
			$$new($Boolean, true)
		}),
		$$new($ObjectArray, {
			"Hungary"_s,
			"Budapest"_s,
			"Hungarian"_s,
			"Forint"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Iceland"_s,
			"Reykjavik"_s,
			"Icelandic"_s,
			"Icelandic Krona"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Ireland"_s,
			"Dublin"_s,
			"Irish, English"_s,
			"Pound"_s,
			$$new($Boolean, true)
		}),
		$$new($ObjectArray, {
			"Italy"_s,
			"Rome"_s,
			"Italian"_s,
			"Lira"_s,
			$$new($Boolean, true)
		}),
		$$new($ObjectArray, {
			"Latvia"_s,
			"Riga"_s,
			"Lettish, Lithuanian, Russian"_s,
			"Lat"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Liechtenstein"_s,
			"Vaduz"_s,
			"German"_s,
			"Swiss Franc"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Lithuania"_s,
			"Vilnius"_s,
			"Lithuanian, Polish, Russian"_s,
			"Lita"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Luxembourg"_s,
			"Luxembourg"_s,
			"French, German, Letzeburgesch"_s,
			"Luxembourg Franc"_s,
			$$new($Boolean, true)
		}),
		$$new($ObjectArray, {
			"Macedonia"_s,
			"Skopje"_s,
			"Macedonian, Albanian, Turkish, Serbo-Croatian"_s,
			"Denar"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Malta"_s,
			"Valletta"_s,
			"Maltese, English"_s,
			"Maltese Lira"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Moldova"_s,
			"Chisinau"_s,
			"Moldovan, Russian"_s,
			"Leu"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Monaco"_s,
			"Monaco"_s,
			"French, English, Italian"_s,
			"French Franc"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"the Netherlands"_s,
			"Amsterdam"_s,
			"Dutch"_s,
			"Guilder"_s,
			$$new($Boolean, true)
		}),
		$$new($ObjectArray, {
			"Norway"_s,
			"Oslo"_s,
			"Norwegian"_s,
			"Krone"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Poland"_s,
			"Warsaw"_s,
			"Polish"_s,
			"Zloty"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Portugal"_s,
			"Lisbon"_s,
			"Portuguese"_s,
			"Escudo"_s,
			$$new($Boolean, true)
		}),
		$$new($ObjectArray, {
			"Romania"_s,
			"Bucharest"_s,
			"Romanian"_s,
			"Leu"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Russia"_s,
			"Moscow"_s,
			"Russian"_s,
			"Ruble"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"San Marino"_s,
			"San Marino"_s,
			"Italian"_s,
			"Italian Lira"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Slovakia"_s,
			"Bratislava"_s,
			"Slovak, Hungarian"_s,
			"Koruna"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Slovenia"_s,
			"Ljubljana"_s,
			"Slovenian, Serbo-Croatian"_s,
			"Tolar"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Spain"_s,
			"Madrid"_s,
			"Spanish"_s,
			"Peseta"_s,
			$$new($Boolean, true)
		}),
		$$new($ObjectArray, {
			"Sweden"_s,
			"Stockholm"_s,
			"Swedish"_s,
			"Krona"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Switzerland"_s,
			"Bern"_s,
			"German, French, Italian"_s,
			"Swiss Franc"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Turkey"_s,
			"Ankara"_s,
			"Turkish"_s,
			"Turkish Lira"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Ukraine"_s,
			"Kiev"_s,
			"Ukranian, Russian, Romanian, Polish, Hungarian"_s,
			"Hryvnia"_s,
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"United Kingdom"_s,
			"London"_s,
			"English, Welsh"_s,
			"British Pound"_s,
			$$new($Boolean, true)
		}),
		$$new($ObjectArray, {
			"Yugoslavia"_s,
			"Belgrade"_s,
			"Serbo-Croatian, Slovenian, Macedonian"_s,
			"Dinar"_s,
			$$new($Boolean, false)
		})
	}));
	$var($TableModel, dataModel, $new($bug6937798$2, this, headers, data));
	$var($JTable, countryTable, $new($JTable, dataModel));
	$init($Color);
	countryTable->setGridColor($Color::pink);
	countryTable->setBackground($Color::white);
	countryTable->setForeground($Color::black);
	return countryTable;
}

bug6937798::bug6937798() {
}

$Class* bug6937798::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6937798, init$, void)},
		{"createCountryTable", "()Ljavax/swing/JTable;", nullptr, $PROTECTED, $virtualMethod(bug6937798, createCountryTable, $JTable*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(bug6937798, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6937798$2", nullptr, nullptr, 0},
		{"bug6937798$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6937798",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6937798$2,bug6937798$1"
	};
	$loadClass(bug6937798, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6937798);
	});
	return class$;
}

$Class* bug6937798::class$ = nullptr;