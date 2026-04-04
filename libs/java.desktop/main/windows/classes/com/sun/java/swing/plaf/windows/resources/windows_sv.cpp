#include <com/sun/java/swing/plaf/windows/resources/windows_sv.h>
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
					namespace windows {
						namespace resources {

void windows_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* windows_sv::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"FileChooser.detailsViewActionLabel.textAndMnemonic"_s,
			"Detaljer"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.detailsViewButtonAccessibleName"_s,
			"Detaljer"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.detailsViewButtonToolTip.textAndMnemonic"_s,
			"Detaljer"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileAttrHeader.textAndMnemonic"_s,
			"Attribut"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileDateHeader.textAndMnemonic"_s,
			u"Ändrad"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileNameHeader.textAndMnemonic"_s,
			"Namn"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileNameLabel.textAndMnemonic"_s,
			"Fil&namn:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileSizeHeader.textAndMnemonic"_s,
			"Storlek"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileTypeHeader.textAndMnemonic"_s,
			"Typ"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesOfTypeLabel.textAndMnemonic"_s,
			"Filer av &typen:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.folderNameLabel.textAndMnemonic"_s,
			"Mapp&namn:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.homeFolderAccessibleName"_s,
			"Hem"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.homeFolderToolTip.textAndMnemonic"_s,
			"Hem"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.listViewActionLabel.textAndMnemonic"_s,
			"Lista"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.listViewButtonAccessibleName"_s,
			"Lista"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.listViewButtonToolTip.textAndMnemonic"_s,
			"Lista"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.lookInLabel.textAndMnemonic"_s,
			"Leta &i:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderAccessibleName"_s,
			"Ny mapp"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderActionLabel.textAndMnemonic"_s,
			"Ny mapp"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderToolTip.textAndMnemonic"_s,
			"Skapa ny mapp"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.refreshActionLabel.textAndMnemonic"_s,
			u"Förnya"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveInLabel.textAndMnemonic"_s,
			"Spara i:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.upFolderAccessibleName"_s,
			"Upp"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.upFolderToolTip.textAndMnemonic"_s,
			u"Upp en nivå"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.viewMenuButtonAccessibleName"_s,
			"Menyn Visa"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.viewMenuButtonToolTipText"_s,
			"Menyn Visa"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.viewMenuLabel.textAndMnemonic"_s,
			"Vy"_s
		})
	});
}

windows_sv::windows_sv() {
}

$Class* windows_sv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(windows_sv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(windows_sv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.resources.windows_sv",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(windows_sv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(windows_sv);
	});
	return class$;
}

$Class* windows_sv::class$ = nullptr;

						} // resources
					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com