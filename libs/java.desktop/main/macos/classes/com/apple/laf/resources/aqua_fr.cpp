#include <com/apple/laf/resources/aqua_fr.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace apple {
		namespace laf {
			namespace resources {

void aqua_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* aqua_fr::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AbstractButton.click.textAndMnemonic"_s,
			"cliquer"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.addition.textAndMnemonic"_s,
			"ajout"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.deletion.textAndMnemonic"_s,
			"suppression"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.redo.textAndMnemonic"_s,
			u"Rétablir"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.styleChange.textAndMnemonic"_s,
			"modification de style"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.undo.textAndMnemonic"_s,
			"Annuler"_s
		}),
		$$new($ObjectArray, {
			"AbstractUndoableEdit.redo.textAndMnemonic"_s,
			u"Rétablir"_s
		}),
		$$new($ObjectArray, {
			"AbstractUndoableEdit.undo.textAndMnemonic"_s,
			"Annuler"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cancel.textAndMnemonic"_s,
			"Annuler"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsb.textAndMnemonic"_s,
			"&TSL"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsbBlue.textAndMnemonic"_s,
			"B"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsbBrightness.textAndMnemonic"_s,
			"B"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsbGreen.textAndMnemonic"_s,
			"V"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsbHue.textAndMnemonic"_s,
			"T"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsbRed.textAndMnemonic"_s,
			"R"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsbSaturation.textAndMnemonic"_s,
			"S"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.ok.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.preview.textAndMnemonic"_s,
			u"Aperçu"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.reset.textAndMnemonic"_s,
			u"&Réinitialiser"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgb.textAndMnemonic"_s,
			"R&VB"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbBlue.textAndMnemonic"_s,
			"&Bleu"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbGreen.textAndMnemonic"_s,
			"&Vert"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbRed.textAndMnemonic"_s,
			"R&ouge"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.sample.textAndMnemonic"_s,
			"Echantillon de texte  Echantillon de texte"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.swatches.textAndMnemonic"_s,
			"&Echantillons"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.swatchesRecent.textAndMnemonic"_s,
			"Dernier :"_s
		}),
		$$new($ObjectArray, {
			"ComboBox.togglePopup.textAndMnemonic"_s,
			"togglePopup"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.acceptAllFileFilter.textAndMnemonic"_s,
			"Tous les fichiers"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.by.textAndMnemonic"_s,
			"Nom"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.byDate.textAndMnemonic"_s,
			"Date de modification"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButton.textAndMnemonic"_s,
			"Annuler"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.chooseButton.textAndMnemonic"_s,
			"Choisir"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.createButton.textAndMnemonic"_s,
			u"Créer"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.desktopName"_s,
			"Bureau"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryDescription.textAndMnemonic"_s,
			u"Répertoire"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryOpenButton.textAndMnemonic"_s,
			"Ouvrir"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileDescription.textAndMnemonic"_s,
			u"Fichier générique"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileNameLabel.textAndMnemonic"_s,
			"Fichier :"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileSizeGigaBytes"_s,
			"{0} GB"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileSizeKiloBytes"_s,
			"{0} KB"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileSizeMegaBytes"_s,
			"{0} MB"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesOfTypeLabel.textAndMnemonic"_s,
			"Format de fichier :"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButton.textAndMnemonic"_s,
			"Aide"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.mac.newFolder"_s,
			"dossier sans titre"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.mac.newFolder.subsequent"_s,
			"dossier {0} sans titre"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderAccessibleName"_s,
			"Nouveau dossier"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderButton.textAndMnemonic"_s,
			"Nouveau dossier"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderError.textAndMnemonic"_s,
			u"Erreur lors de la création du dossier"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderErrorSeparator"_s,
			":"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderExistsError.textAndMnemonic"_s,
			u"Ce nom est déjà utilisé"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderPrompt.textAndMnemonic"_s,
			"Nom du nouveau dossier :"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderTitle.textAndMnemonic"_s,
			"Nouveau dossier"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButton.textAndMnemonic"_s,
			"Ouvrir"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openDialogTitle.textAndMnemonic"_s,
			"Ouvrir"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openTitle.textAndMnemonic"_s,
			"Ouvrir"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButton.textAndMnemonic"_s,
			"Enregistrer"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveDialogFileNameLabel.textAndMnemonic"_s,
			"Enregistrer sous :"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveDialogTitle.textAndMnemonic"_s,
			"Enregistrer"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveTitle.textAndMnemonic"_s,
			"Enregistrer"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.untitledFileName"_s,
			"sans titre"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.untitledFolderName"_s,
			"dossier sans titre"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.updateButton.textAndMnemonic"_s,
			u"Mettre à jour"_s
		}),
		$$new($ObjectArray, {
			"FormView.browseFileButton.textAndMnemonic"_s,
			"Parcourir..."_s
		}),
		$$new($ObjectArray, {
			"FormView.resetButton.textAndMnemonic"_s,
			u"Réinitialiser"_s
		}),
		$$new($ObjectArray, {
			"FormView.submitButton.textAndMnemonic"_s,
			u"Soumettre la requête"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.closeButtonToolTip"_s,
			"Fermer"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.iconButtonToolTip"_s,
			u"Réduire"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.maxButtonToolTip"_s,
			"Agrandir"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.restoreButtonToolTip"_s,
			"Restaurer"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.closeButton.textAndMnemonic"_s,
			"Fermer"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.closeButtonAccessibleName"_s,
			"Fermer"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.iconifyButtonAccessibleName"_s,
			u"Réduire"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.maximizeButton.textAndMnemonic"_s,
			"Agrandir"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.maximizeButtonAccessibleName"_s,
			"Agrandir"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.minimizeButton.textAndMnemonic"_s,
			u"Réduire"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.moveButton.textAndMnemonic"_s,
			u"Déplacer"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.restoreButton.textAndMnemonic"_s,
			"Restaurer"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.sizeButton.textAndMnemonic"_s,
			"Taille"_s
		}),
		$$new($ObjectArray, {
			"IsindexView.prompt"_s,
			u"Ceci est un index de recherche. Tapez des mots-clés pour la recherche :"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.cancelButton.textAndMnemonic"_s,
			"Annuler"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.inputDialog.titleAndMnemonic"_s,
			u"Entrée"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.messageDialog.titleAndMnemonic"_s,
			"Message"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.noButton.textAndMnemonic"_s,
			"&Non"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.okButton.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.title.textAndMnemonic"_s,
			u"Sélectionner une option"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.yesButton.textAndMnemonic"_s,
			"&Oui"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.abortButton.textAndMnemonic"_s,
			"&Abandonner"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.abortButtonToolTip.textAndMnemonic"_s,
			"Abandonner l\'impression"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentAborting.textAndMnemonic"_s,
			"Abandon de l\'impression..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentInitial.textAndMnemonic"_s,
			"Impression en cours..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentProgress.textAndMnemonic"_s,
			u"Page {0} imprimée..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.titleAborting.textAndMnemonic"_s,
			"Impression (abandon)"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.titleProgress.textAndMnemonic"_s,
			"Impression"_s
		}),
		$$new($ObjectArray, {
			"ProgressMonitor.progress.textAndMnemonic"_s,
			"Progression..."_s
		}),
		$$new($ObjectArray, {
			"SplitPane.leftButton.textAndMnemonic"_s,
			"bouton gauche"_s
		}),
		$$new($ObjectArray, {
			"SplitPane.rightButton.textAndMnemonic"_s,
			"bouton droit"_s
		})
	});
}

aqua_fr::aqua_fr() {
}

$Class* aqua_fr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(aqua_fr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(aqua_fr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.apple.laf.resources.aqua_fr",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(aqua_fr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(aqua_fr);
	});
	return class$;
}

$Class* aqua_fr::class$ = nullptr;

			} // resources
		} // laf
	} // apple
} // com