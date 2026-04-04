#include <com/sun/swing/internal/plaf/basic/resources/basic_it.h>
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
					namespace basic {
						namespace resources {

void basic_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* basic_it::getContents() {
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
			"ColorChooser.cmyk.textAndMnemonic"_s,
			"C&MYK"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykAlpha.textAndMnemonic"_s,
			"Alfa"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykBlack.textAndMnemonic"_s,
			"Nero"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykCyan.textAndMnemonic"_s,
			"Ciano"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykMagenta.textAndMnemonic"_s,
			"Magenta"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykYellow.textAndMnemonic"_s,
			"Giallo"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsl.textAndMnemonic"_s,
			"HS&L"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslHue.textAndMnemonic"_s,
			u"Tonalità"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslLightness.textAndMnemonic"_s,
			u"Luminosità"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslSaturation.textAndMnemonic"_s,
			"Saturazione"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslTransparency.textAndMnemonic"_s,
			"Trasparenza"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsv.textAndMnemonic"_s,
			"&HSV"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvHue.textAndMnemonic"_s,
			u"Tonalità"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvSaturation.textAndMnemonic"_s,
			"Saturazione"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvTransparency.textAndMnemonic"_s,
			"Trasparenza"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvValue.textAndMnemonic"_s,
			"Valore"_s
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
			"&Reimposta"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgb.textAndMnemonic"_s,
			"R&GB"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbAlpha.textAndMnemonic"_s,
			"Alfa"_s
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
			"ColorChooser.rgbHexCode.textAndMnemonic"_s,
			"&Codice colori"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbRed.textAndMnemonic"_s,
			"Ro&sso"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.sample.textAndMnemonic"_s,
			"Testo di prova          Testo di prova"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.swatches.textAndMnemonic"_s,
			"Colori cam&pione"_s
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
			"FileChooser.cancelButton.textAndMnemonic"_s,
			"Annulla"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButtonToolTip.textAndMnemonic"_s,
			"Chiude la finestra di dialogo di selezione file"_s
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
			"FileChooser.directoryOpenButtonToolTip.textAndMnemonic"_s,
			"Apre la directory selezionata"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileDescription.textAndMnemonic"_s,
			"File generico"_s
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
			"FileChooser.filesDetailsAccessibleName"_s,
			"Dettagli file"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesListAccessibleName"_s,
			"Lista dei file"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButton.textAndMnemonic"_s,
			"&?"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButtonToolTip.textAndMnemonic"_s,
			"Guida FileChooser"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderError.textAndMnemonic"_s,
			"Errore durante la creazione della nuova cartella"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderErrorSeparator"_s,
			":"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderParentDoesntExist.textAndMnemonic"_s,
			u"Impossibile creare la cartella.\n\nIl sistema non è in grado di trovare il percorso specificato."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderParentDoesntExistTitle.textAndMnemonic"_s,
			"Impossibile creare la cartella"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButton.textAndMnemonic"_s,
			"Apri"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButtonToolTip.textAndMnemonic"_s,
			"Apre il file selezionato"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openDialogTitle.textAndMnemonic"_s,
			"Apri"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.other.newFolder"_s,
			"NewFolder"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.other.newFolder.subsequent"_s,
			"NewFolder.{0}"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameError.textAndMnemonic"_s,
			"Impossibile rinominare {0}"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameErrorFileExists.textAndMnemonic"_s,
			u"Impossibile rinominare {0}: esiste già un file con il nome specificato. Specificare un altro nome. "_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameErrorTitle.textAndMnemonic"_s,
			"Errore durante la ridenominazione del file o della cartella"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButton.textAndMnemonic"_s,
			"Salva"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButtonToolTip.textAndMnemonic"_s,
			"Salva il file selezionato"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveDialogTitle.textAndMnemonic"_s,
			"Salva"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.updateButton.textAndMnemonic"_s,
			"Ag&giorna"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.updateButtonToolTip.textAndMnemonic"_s,
			"Aggiorna la lista directory"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.win32.newFolder"_s,
			"Nuova cartella"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.win32.newFolder.subsequent"_s,
			"Nuova cartella ({0})"_s
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
			"Chiudi"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.iconButtonToolTip"_s,
			"Riduci a icona"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.maxButtonToolTip"_s,
			"Ingrandisci"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.restoreButtonToolTip"_s,
			"Ripristina"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.closeButton.textAndMnemonic"_s,
			"&Chiudi"_s
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
			"In&grandisci"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.maximizeButtonAccessibleName"_s,
			"Ingrandisci"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.minimizeButton.textAndMnemonic"_s,
			"Ri&duci a icona"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.moveButton.textAndMnemonic"_s,
			"&Sposta"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.restoreButton.textAndMnemonic"_s,
			"&Ripristina"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.sizeButton.textAndMnemonic"_s,
			"R&idimensiona"_s
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
			"I&nterrompi"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.abortButtonToolTip.textAndMnemonic"_s,
			"Interrompi la stampa"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentAborting.textAndMnemonic"_s,
			"Interruzione della stampa..."_s
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
			"Avanzamento..."_s
		}),
		$$new($ObjectArray, {
			"SplitPane.leftButton.textAndMnemonic"_s,
			"tasto sinistro"_s
		}),
		$$new($ObjectArray, {
			"SplitPane.rightButton.textAndMnemonic"_s,
			"tasto destro"_s
		})
	});
}

basic_it::basic_it() {
}

$Class* basic_it::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(basic_it, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(basic_it, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.swing.internal.plaf.basic.resources.basic_it",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(basic_it, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(basic_it);
	});
	return class$;
}

$Class* basic_it::class$ = nullptr;

						} // resources
					} // basic
				} // plaf
			} // internal
		} // swing
	} // sun
} // com