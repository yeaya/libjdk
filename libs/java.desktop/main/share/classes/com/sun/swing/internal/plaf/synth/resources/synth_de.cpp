#include <com/sun/swing/internal/plaf/synth/resources/synth_de.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace swing {
			namespace internal {
				namespace plaf {
					namespace synth {
						namespace resources {

void synth_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* synth_de::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"FileChooser.detailsViewActionLabel.textAndMnemonic"_s,
			"Details"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.detailsViewButtonAccessibleName"_s,
			"Details"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.detailsViewButtonToolTip.textAndMnemonic"_s,
			"Details"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileAttrHeader.textAndMnemonic"_s,
			"Attribute"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileDateHeader.textAndMnemonic"_s,
			u"Geändert"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileNameHeader.textAndMnemonic"_s,
			"Name"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileNameLabel.textAndMnemonic"_s,
			"&Dateiname:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileSizeHeader.textAndMnemonic"_s,
			u"Größe"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileTypeHeader.textAndMnemonic"_s,
			"Typ"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesOfTypeLabel.textAndMnemonic"_s,
			"Datei&typ:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.folderNameLabel.textAndMnemonic"_s,
			"&Ordnername:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.homeFolderAccessibleName"_s,
			"Home"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.homeFolderToolTip.textAndMnemonic"_s,
			"Home"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.listViewActionLabel.textAndMnemonic"_s,
			"Liste"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.listViewButtonAccessibleName"_s,
			"Liste"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.listViewButtonToolTip.textAndMnemonic"_s,
			"Liste"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.lookInLabel.textAndMnemonic"_s,
			"Suchen &in:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderAccessibleName"_s,
			"Neuer Ordner"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderActionLabel.textAndMnemonic"_s,
			"Neuer Ordner"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderToolTip.textAndMnemonic"_s,
			"Neuen Ordner erstellen"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.refreshActionLabel.textAndMnemonic"_s,
			"Aktualisieren"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveInLabel.textAndMnemonic"_s,
			"Speichern in:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.upFolderAccessibleName"_s,
			"Nach oben"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.upFolderToolTip.textAndMnemonic"_s,
			u"Eine Ebene höher"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.viewMenuLabel.textAndMnemonic"_s,
			"Ansicht"_s
		})
	});
}

synth_de::synth_de() {
}

$Class* synth_de::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(synth_de, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(synth_de, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.swing.internal.plaf.synth.resources.synth_de",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(synth_de, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(synth_de);
	});
	return class$;
}

$Class* synth_de::class$ = nullptr;

						} // resources
					} // synth
				} // plaf
			} // internal
		} // swing
	} // sun
} // com