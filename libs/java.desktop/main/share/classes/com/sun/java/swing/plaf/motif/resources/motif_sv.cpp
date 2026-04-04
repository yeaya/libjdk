#include <com/sun/java/swing/plaf/motif/resources/motif_sv.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						namespace resources {

void motif_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* motif_sv::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"FileChooser.acceptAllFileFilter.textAndMnemonic"_s,
			"*"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButton.textAndMnemonic"_s,
			"Avbryt"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButtonToolTip.textAndMnemonic"_s,
			u"Avbryt dialogrutan för filval."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.enterFileNameLabel.textAndMnemonic"_s,
			"A&nge filnamn:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.enterFolderNameLabel.textAndMnemonic"_s,
			"Ange ett mappnamn:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesLabel.textAndMnemonic"_s,
			"F&iler"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filterLabel.textAndMnemonic"_s,
			"Filte&r"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.foldersLabel.textAndMnemonic"_s,
			"Ma&ppar"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButton.textAndMnemonic"_s,
			u"Hjälp"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButtonToolTip.textAndMnemonic"_s,
			u"Hjälp för val av fil."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButton.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButtonToolTip.textAndMnemonic"_s,
			u"Öppna vald fil."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openDialogTitle.textAndMnemonic"_s,
			u"Öppna"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.pathLabel.textAndMnemonic"_s,
			u"Ange &sökväg eller mappnamn:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButton.textAndMnemonic"_s,
			"Spara"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButtonToolTip.textAndMnemonic"_s,
			"Spara vald fil."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveDialogTitle.textAndMnemonic"_s,
			"Spara"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.updateButton.textAndMnemonic"_s,
			"Uppdatera"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.updateButtonToolTip.textAndMnemonic"_s,
			"Uppdatera kataloglistan."_s
		})
	});
}

motif_sv::motif_sv() {
}

$Class* motif_sv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(motif_sv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(motif_sv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.resources.motif_sv",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(motif_sv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(motif_sv);
	});
	return class$;
}

$Class* motif_sv::class$ = nullptr;

						} // resources
					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com