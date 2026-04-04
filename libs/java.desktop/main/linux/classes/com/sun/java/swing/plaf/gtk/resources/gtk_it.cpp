#include <com/sun/java/swing/plaf/gtk/resources/gtk_it.h>
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

void gtk_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* gtk_it::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"FileChooser.acceptAllFileFilter.textAndMnemonic"_s,
			"Tutti i file"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButton.textAndMnemonic"_s,
			"Annulla"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButtonToolTip.textAndMnemonic"_s,
			"Chiude la finestra di dialogo di selezione file."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.deleteFileButton.textAndMnemonic"_s,
			"E&limina file"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesLabel.textAndMnemonic"_s,
			"&File"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filterLabel.textAndMnemonic"_s,
			"Filtro:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.foldersLabel.textAndMnemonic"_s,
			"Car&telle"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderButton.textAndMnemonic"_s,
			"&Nuova cartella"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderDialog.textAndMnemonic"_s,
			"Nome della cartella:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderNoDirectoryError.textAndMnemonic"_s,
			"Errore durante la creazione della directory \"{0}\": file o directory inesistente"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderNoDirectoryErrorTitle.textAndMnemonic"_s,
			"Errore"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButton.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButtonToolTip.textAndMnemonic"_s,
			"Apre il file selezionato."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openDialogTitle.textAndMnemonic"_s,
			"Apri"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.pathLabel.textAndMnemonic"_s,
			"&Selezione:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileButton.textAndMnemonic"_s,
			"&Rinomina file"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileDialog.textAndMnemonic"_s,
			"Rinomina file \"{0}\" in"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileError.textAndMnemonic"_s,
			"Errore durante la ridenominazione del file \"{0}\" in \"{1}\""_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileError.titleAndMnemonic"_s,
			"Errore"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButton.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButtonToolTip.textAndMnemonic"_s,
			"Salva il file selezionato."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveDialogTitle.textAndMnemonic"_s,
			"Salva"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.blue.textAndMnemonic"_s,
			"&Blu:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.color.textAndMnemonic"_s,
			"&Nome colore:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.green.textAndMnemonic"_s,
			"&Verde:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.hue.textAndMnemonic"_s,
			"&Ton.:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.red.textAndMnemonic"_s,
			"R&osso:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.saturation.textAndMnemonic"_s,
			"&Saturazione:"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.textAndMnemonic"_s,
			"Selezione colore &GTK"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.value.textAndMnemonic"_s,
			"&Valore:"_s
		})
	});
}

gtk_it::gtk_it() {
}

$Class* gtk_it::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(gtk_it, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(gtk_it, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.resources.gtk_it",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(gtk_it, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(gtk_it);
	});
	return class$;
}

$Class* gtk_it::class$ = nullptr;

						} // resources
					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com