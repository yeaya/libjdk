#include <com/sun/java/swing/plaf/gtk/resources/gtk.h>
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

void gtk::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* gtk::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"FileChooser.acceptAllFileFilter.textAndMnemonic"_s,
			"All Files"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButton.textAndMnemonic"_s,
			"Cancel"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButtonToolTip.textAndMnemonic"_s,
			"Abort file chooser dialog."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.deleteFileButton.textAndMnemonic"_s,
			"De&lete File"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesLabel.textAndMnemonic"_s,
			"&Files"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filterLabel.textAndMnemonic"_s,
			"Filter:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.foldersLabel.textAndMnemonic"_s,
			"Fol&ders"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderButton.textAndMnemonic"_s,
			"&New Folder"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderDialog.textAndMnemonic"_s,
			"Folder name:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderNoDirectoryError.textAndMnemonic"_s,
			"Error creating directory \"{0}\": No such file or directory"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderNoDirectoryErrorTitle.textAndMnemonic"_s,
			"Error"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButton.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButtonToolTip.textAndMnemonic"_s,
			"Open selected file."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openDialogTitle.textAndMnemonic"_s,
			"Open"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.pathLabel.textAndMnemonic"_s,
			"&Selection:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileButton.textAndMnemonic"_s,
			"&Rename File"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileDialog.textAndMnemonic"_s,
			"Rename file \"{0}\" to"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileError.textAndMnemonic"_s,
			"Error renaming file \"{0}\" to \"{1}\""_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileError.titleAndMnemonic"_s,
			"Error"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButton.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButtonToolTip.textAndMnemonic"_s,
			"Save selected file."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveDialogTitle.textAndMnemonic"_s,
			"Save"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.blue.textAndMnemonic"_s,
			"&Blue:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.color.textAndMnemonic"_s,
			"Color &Name:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.green.textAndMnemonic"_s,
			"&Green:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.hue.textAndMnemonic"_s,
			"&Hue:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.red.textAndMnemonic"_s,
			"R&ed:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.saturation.textAndMnemonic"_s,
			"&Saturation:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.textAndMnemonic"_s,
			"&GTK Color Chooser"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.value.textAndMnemonic"_s,
			"&Value:"_s
		})
	});
}

gtk::gtk() {
}

$Class* gtk::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(gtk, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(gtk, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.resources.gtk",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(gtk, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(gtk);
	});
	return class$;
}

$Class* gtk::class$ = nullptr;

						} // resources
					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com