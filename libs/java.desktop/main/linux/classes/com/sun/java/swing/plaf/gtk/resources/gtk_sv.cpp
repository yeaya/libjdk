#include <com/sun/java/swing/plaf/gtk/resources/gtk_sv.h>
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
					namespace gtk {
						namespace resources {

void gtk_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* gtk_sv::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"FileChooser.acceptAllFileFilter.textAndMnemonic"_s,
			"Alla filer"_s
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
			"FileChooser.deleteFileButton.textAndMnemonic"_s,
			"Ta &bort fil"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesLabel.textAndMnemonic"_s,
			"&Filer"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filterLabel.textAndMnemonic"_s,
			"Filter:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.foldersLabel.textAndMnemonic"_s,
			"Map&par"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderButton.textAndMnemonic"_s,
			"&Ny mapp"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderDialog.textAndMnemonic"_s,
			"Mapp:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderNoDirectoryError.textAndMnemonic"_s,
			u"Ett fel inträffade vid försök att skapa katalogen \"{0}\": Filen eller katalogen finns inte"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderNoDirectoryErrorTitle.textAndMnemonic"_s,
			"Fel"_s
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
			"&Urval:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileButton.textAndMnemonic"_s,
			u"&Ändra namn på filen"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileDialog.textAndMnemonic"_s,
			u"Ändra namn på fil \"{0}\" till"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileError.textAndMnemonic"_s,
			u"Fel vid namnändring av fil \"{0}\" till \"{1}\""_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileError.titleAndMnemonic"_s,
			"Fel"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButton.textAndMnemonic"_s,
			"OK"_s
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
			"GTKColorChooserPanel.blue.textAndMnemonic"_s,
			u"&Blå:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.color.textAndMnemonic"_s,
			u"Färg&namn:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.green.textAndMnemonic"_s,
			u"&Grön:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.hue.textAndMnemonic"_s,
			"&Nyans:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.red.textAndMnemonic"_s,
			u"R&öd:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.saturation.textAndMnemonic"_s,
			u"&Mättnad:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.textAndMnemonic"_s,
			u"&GTK-färgväljaren"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.value.textAndMnemonic"_s,
			u"&Värde:"_s
		})
	});
}

gtk_sv::gtk_sv() {
}

$Class* gtk_sv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(gtk_sv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(gtk_sv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.resources.gtk_sv",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(gtk_sv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(gtk_sv);
	});
	return class$;
}

$Class* gtk_sv::class$ = nullptr;

						} // resources
					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com