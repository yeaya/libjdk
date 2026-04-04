#include <com/apple/laf/resources/aqua_it.h>
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

void aqua_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* aqua_it::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AbstractButton.click.textAndMnemonic"_s,
			"fare clic"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.addition.textAndMnemonic"_s,
			"aggiunta"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.deletion.textAndMnemonic"_s,
			"eliminazione"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.redo.textAndMnemonic"_s,
			"Ripeti"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.styleChange.textAndMnemonic"_s,
			"modifica di stile"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.undo.textAndMnemonic"_s,
			"Annulla"_s
		}),
		$$new($ObjectArray, {
			"AbstractUndoableEdit.redo.textAndMnemonic"_s,
			"Ripeti"_s
		}),
		$$new($ObjectArray, {
			"AbstractUndoableEdit.undo.textAndMnemonic"_s,
			"Annulla"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cancel.textAndMnemonic"_s,
			"Annulla"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsb.textAndMnemonic"_s,
			"&HSB"_s
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
			"G"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsbHue.textAndMnemonic"_s,
			"H"_s
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
			"Anteprima"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.reset.textAndMnemonic"_s,
			"R&eimposta"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgb.textAndMnemonic"_s,
			"R&GB"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbBlue.textAndMnemonic"_s,
			"&Blu"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbGreen.textAndMnemonic"_s,
			"Ver&de"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbRed.textAndMnemonic"_s,
			"&Rosso"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.sample.textAndMnemonic"_s,
			"Testo di prova          Testo di prova"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.swatches.textAndMnemonic"_s,
			"Colori ca&mpione"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.swatchesRecent.textAndMnemonic"_s,
			"Recenti:"_s
		}),
		$$new($ObjectArray, {
			"ComboBox.togglePopup.textAndMnemonic"_s,
			"togglePopup"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.acceptAllFileFilter.textAndMnemonic"_s,
			"Tutti i file"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.by.textAndMnemonic"_s,
			"Nome"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.byDate.textAndMnemonic"_s,
			"Data modifica"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButton.textAndMnemonic"_s,
			"Annulla"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.chooseButton.textAndMnemonic"_s,
			"Scegli"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.createButton.textAndMnemonic"_s,
			"Crea"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.desktopName"_s,
			"Desktop"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryDescription.textAndMnemonic"_s,
			"Directory"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryOpenButton.textAndMnemonic"_s,
			"Apri"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileDescription.textAndMnemonic"_s,
			"File generico"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileNameLabel.textAndMnemonic"_s,
			"File:"_s
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
			"Formato file:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButton.textAndMnemonic"_s,
			"?"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.mac.newFolder"_s,
			"cartella senza titolo"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.mac.newFolder.subsequent"_s,
			"cartella senza titolo {0}"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderAccessibleName"_s,
			"Nuova cartella"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderButton.textAndMnemonic"_s,
			"Nuova cartella"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderError.textAndMnemonic"_s,
			u"Si è verificato un errore durante la creazione della cartella"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderErrorSeparator"_s,
			":"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderExistsError.textAndMnemonic"_s,
			u"Il nome è già stato assegnato"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderPrompt.textAndMnemonic"_s,
			"Nome nuova cartella:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderTitle.textAndMnemonic"_s,
			"Nuova cartella"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButton.textAndMnemonic"_s,
			"Apri"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openDialogTitle.textAndMnemonic"_s,
			"Apri"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openTitle.textAndMnemonic"_s,
			"Apri"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButton.textAndMnemonic"_s,
			"Salva"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveDialogFileNameLabel.textAndMnemonic"_s,
			"Salva con nome:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveDialogTitle.textAndMnemonic"_s,
			"Salva"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveTitle.textAndMnemonic"_s,
			"Salva"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.untitledFileName"_s,
			"senza titolo"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.untitledFolderName"_s,
			"cartella senza titolo"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.updateButton.textAndMnemonic"_s,
			"Aggiorna"_s
		}),
		$$new($ObjectArray, {
			"FormView.browseFileButton.textAndMnemonic"_s,
			"Sfoglia..."_s
		}),
		$$new($ObjectArray, {
			"FormView.resetButton.textAndMnemonic"_s,
			"Reimposta"_s
		}),
		$$new($ObjectArray, {
			"FormView.submitButton.textAndMnemonic"_s,
			"Sottometti query"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.closeButtonToolTip"_s,
			"Chiude"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.iconButtonToolTip"_s,
			"Riduce a icona"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.maxButtonToolTip"_s,
			"Ingrandisce"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.restoreButtonToolTip"_s,
			"Ripristina"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.closeButton.textAndMnemonic"_s,
			"Chiudi"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.closeButtonAccessibleName"_s,
			"Chiudi"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.iconifyButtonAccessibleName"_s,
			"Riduci a icona"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.maximizeButton.textAndMnemonic"_s,
			"Ingrandisci"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.maximizeButtonAccessibleName"_s,
			"Ingrandisci"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.minimizeButton.textAndMnemonic"_s,
			"Riduci a icona"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.moveButton.textAndMnemonic"_s,
			"Sposta"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.restoreButton.textAndMnemonic"_s,
			"Ripristina"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.sizeButton.textAndMnemonic"_s,
			"Dimensiona"_s
		}),
		$$new($ObjectArray, {
			"IsindexView.prompt"_s,
			u"Questo è un indice di ricerca. Immettere le parole chiave:"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.cancelButton.textAndMnemonic"_s,
			"Annulla"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.inputDialog.titleAndMnemonic"_s,
			"Input"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.messageDialog.titleAndMnemonic"_s,
			"Messaggio"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.noButton.textAndMnemonic"_s,
			"&No"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.okButton.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.title.textAndMnemonic"_s,
			"Selezionare una opzione"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.yesButton.textAndMnemonic"_s,
			u"&Sì"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.abortButton.textAndMnemonic"_s,
			"&Interrompi"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.abortButtonToolTip.textAndMnemonic"_s,
			"Interrompe la stampa"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentAborting.textAndMnemonic"_s,
			"Interruzione della stampa in corso..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentInitial.textAndMnemonic"_s,
			"Stampa in corso..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentProgress.textAndMnemonic"_s,
			"Pagina stampata {0}..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.titleAborting.textAndMnemonic"_s,
			"Stampa in corso (operazione interrotta)"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.titleProgress.textAndMnemonic"_s,
			"Stampa in corso"_s
		}),
		$$new($ObjectArray, {
			"ProgressMonitor.progress.textAndMnemonic"_s,
			"In corso..."_s
		}),
		$$new($ObjectArray, {
			"SplitPane.leftButton.textAndMnemonic"_s,
			"pulsante sinistro"_s
		}),
		$$new($ObjectArray, {
			"SplitPane.rightButton.textAndMnemonic"_s,
			"pulsante destro"_s
		})
	});
}

aqua_it::aqua_it() {
}

$Class* aqua_it::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(aqua_it, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(aqua_it, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.apple.laf.resources.aqua_it",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(aqua_it, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(aqua_it);
	});
	return class$;
}

$Class* aqua_it::class$ = nullptr;

			} // resources
		} // laf
	} // apple
} // com