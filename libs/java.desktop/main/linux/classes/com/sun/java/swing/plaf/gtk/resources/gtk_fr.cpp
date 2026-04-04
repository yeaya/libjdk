#include <com/sun/java/swing/plaf/gtk/resources/gtk_fr.h>
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

void gtk_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* gtk_fr::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"FileChooser.acceptAllFileFilter.textAndMnemonic"_s,
			"Tous les fichiers"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButton.textAndMnemonic"_s,
			"Annuler"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButtonToolTip.textAndMnemonic"_s,
			u"Ferme la boîte de dialogue du sélecteur de fichiers."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.deleteFileButton.textAndMnemonic"_s,
			"Supprimer &le fichier"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesLabel.textAndMnemonic"_s,
			"&Fichiers"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filterLabel.textAndMnemonic"_s,
			"Filtre :"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.foldersLabel.textAndMnemonic"_s,
			"&Dossiers"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderButton.textAndMnemonic"_s,
			"&Nouveau dossier"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderDialog.textAndMnemonic"_s,
			"Nom du dossier :"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderNoDirectoryError.textAndMnemonic"_s,
			u"Erreur lors de la création du répertoire \"{0}\" : ce fichier ou répertoire n\'\'existe pas"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderNoDirectoryErrorTitle.textAndMnemonic"_s,
			"Erreur"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButton.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButtonToolTip.textAndMnemonic"_s,
			u"Ouvre le fichier sélectionné."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openDialogTitle.textAndMnemonic"_s,
			"Ouvrir"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.pathLabel.textAndMnemonic"_s,
			u"&Sélection :"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileButton.textAndMnemonic"_s,
			"&Renommer le fichier"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileDialog.textAndMnemonic"_s,
			"Renomme le fichier \"{0}\" en"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileError.textAndMnemonic"_s,
			"Erreur lors du changement de nom du fichier \"{0}\" en \"{1}\""_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameFileError.titleAndMnemonic"_s,
			"Erreur"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButton.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButtonToolTip.textAndMnemonic"_s,
			u"Enregistre le fichier sélectionné."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveDialogTitle.textAndMnemonic"_s,
			"Enregistrer"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.blue.textAndMnemonic"_s,
			"&Bleu :"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.color.textAndMnemonic"_s,
			"&Nom de couleur :"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.green.textAndMnemonic"_s,
			"&Vert :"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.hue.textAndMnemonic"_s,
			"&Teinte :"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.red.textAndMnemonic"_s,
			u"Roug&e :"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.saturation.textAndMnemonic"_s,
			"&Saturation :"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.textAndMnemonic"_s,
			u"Sélecteur de couleurs &GTK"_s
		}),
		$$new($ObjectArray, {
			"GTKColorChooserPanel.value.textAndMnemonic"_s,
			"&Valeur :"_s
		})
	});
}

gtk_fr::gtk_fr() {
}

$Class* gtk_fr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(gtk_fr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(gtk_fr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.resources.gtk_fr",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(gtk_fr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(gtk_fr);
	});
	return class$;
}

$Class* gtk_fr::class$ = nullptr;

						} // resources
					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com