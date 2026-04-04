#include <com/sun/swing/internal/plaf/basic/resources/basic_de.h>
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

void basic_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* basic_de::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AbstractButton.click.textAndMnemonic"_s,
			"Klicken"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.addition.textAndMnemonic"_s,
			u"Hinzufügen"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.deletion.textAndMnemonic"_s,
			u"Löschen"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.redo.textAndMnemonic"_s,
			"Wiederherstellen"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.styleChange.textAndMnemonic"_s,
			u"Formatvorlagenänderung"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.undo.textAndMnemonic"_s,
			u"Rückgängig"_s
		}),
		$$new($ObjectArray, {
			"AbstractUndoableEdit.redo.textAndMnemonic"_s,
			"Wiederherstellen"_s
		}),
		$$new($ObjectArray, {
			"AbstractUndoableEdit.undo.textAndMnemonic"_s,
			u"Rückgängig"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cancel.textAndMnemonic"_s,
			"Abbrechen"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmyk.textAndMnemonic"_s,
			"C&MYK"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykAlpha.textAndMnemonic"_s,
			"Alpha"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykBlack.textAndMnemonic"_s,
			"Schwarz"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykCyan.textAndMnemonic"_s,
			"Zyan"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykMagenta.textAndMnemonic"_s,
			"Magenta"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykYellow.textAndMnemonic"_s,
			"Gelb"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsl.textAndMnemonic"_s,
			"HS&L"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslHue.textAndMnemonic"_s,
			"Farbton"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslLightness.textAndMnemonic"_s,
			"Helligkeit"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslSaturation.textAndMnemonic"_s,
			u"Sättigung"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslTransparency.textAndMnemonic"_s,
			"Transparenz"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsv.textAndMnemonic"_s,
			"&HSV"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvHue.textAndMnemonic"_s,
			"Farbton"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvSaturation.textAndMnemonic"_s,
			u"Sättigung"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvTransparency.textAndMnemonic"_s,
			"Transparenz"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvValue.textAndMnemonic"_s,
			"Wert"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.ok.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.preview.textAndMnemonic"_s,
			"Vorschau"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.reset.textAndMnemonic"_s,
			u"&Zurücksetzen"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgb.textAndMnemonic"_s,
			"R&GB"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbAlpha.textAndMnemonic"_s,
			"Alpha"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbBlue.textAndMnemonic"_s,
			"&Blau"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbGreen.textAndMnemonic"_s,
			u"Grü&n"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbHexCode.textAndMnemonic"_s,
			"&Farbcode"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbRed.textAndMnemonic"_s,
			"Ro&t"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.sample.textAndMnemonic"_s,
			"Beispieltext  Beispieltext"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.swatches.textAndMnemonic"_s,
			"&Swatches"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.swatchesRecent.textAndMnemonic"_s,
			"Aktuell:"_s
		}),
		$$new($ObjectArray, {
			"ComboBox.togglePopup.textAndMnemonic"_s,
			"togglePopup"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.acceptAllFileFilter.textAndMnemonic"_s,
			"Alle Dateien"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButton.textAndMnemonic"_s,
			"Abbrechen"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButtonToolTip.textAndMnemonic"_s,
			u"Dialogfeld für Dateiauswahl schließen"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryDescription.textAndMnemonic"_s,
			"Verzeichnis"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryOpenButton.textAndMnemonic"_s,
			u"Öffnen"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryOpenButtonToolTip.textAndMnemonic"_s,
			u"Ausgewähltes Verzeichnis öffnen"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileDescription.textAndMnemonic"_s,
			"Allgemeine Datei"_s
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
			"Dateidetails"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesListAccessibleName"_s,
			"Dateiliste"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButton.textAndMnemonic"_s,
			"&Hilfe"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButtonToolTip.textAndMnemonic"_s,
			"FileChooser-Hilfe"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderError.textAndMnemonic"_s,
			"Fehler beim Erstellen eines neuen Ordners"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderErrorSeparator"_s,
			":"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderParentDoesntExist.textAndMnemonic"_s,
			"Ordner kann nicht erstellt werden.\n\nSystem kann den angegebenen Pfad nicht finden."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderParentDoesntExistTitle.textAndMnemonic"_s,
			"Ordner kann nicht erstellt werden"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButton.textAndMnemonic"_s,
			u"Öffnen"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButtonToolTip.textAndMnemonic"_s,
			u"Ausgewählte Datei öffnen"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openDialogTitle.textAndMnemonic"_s,
			u"Öffnen"_s
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
			"{0} kann nicht umbenannt werden"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameErrorFileExists.textAndMnemonic"_s,
			"{0} kann nicht umbenannt werden: Es ist bereits eine Datei mit dem angegebenen Namen vorhanden. Geben Sie einen anderen Dateinamen an. "_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameErrorTitle.textAndMnemonic"_s,
			"Fehler beim Umbenennen von Datei oder Ordner"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButton.textAndMnemonic"_s,
			"Speichern"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButtonToolTip.textAndMnemonic"_s,
			u"Ausgewählte Datei speichern"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveDialogTitle.textAndMnemonic"_s,
			"Speichern"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.updateButton.textAndMnemonic"_s,
			"A&ktualisieren"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.updateButtonToolTip.textAndMnemonic"_s,
			"Verzeichnisliste aktualisieren"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.win32.newFolder"_s,
			"Neuer Ordner"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.win32.newFolder.subsequent"_s,
			"Neuer Ordner ({0})"_s
		}),
		$$new($ObjectArray, {
			"FormView.browseFileButton.textAndMnemonic"_s,
			"Durchsuchen..."_s
		}),
		$$new($ObjectArray, {
			"FormView.resetButton.textAndMnemonic"_s,
			u"Zurücksetzen"_s
		}),
		$$new($ObjectArray, {
			"FormView.submitButton.textAndMnemonic"_s,
			"Abfrage weiterleiten"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.closeButtonToolTip"_s,
			u"Schließen"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.iconButtonToolTip"_s,
			"Minimieren"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.maxButtonToolTip"_s,
			"Maximieren"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.restoreButtonToolTip"_s,
			"Wiederherstellen"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.closeButton.textAndMnemonic"_s,
			u"&Schließen"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.closeButtonAccessibleName"_s,
			u"Schließen"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.iconifyButtonAccessibleName"_s,
			"Als Symbol darstellen"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.maximizeButton.textAndMnemonic"_s,
			"Ma&ximieren"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.maximizeButtonAccessibleName"_s,
			"Maximieren"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.minimizeButton.textAndMnemonic"_s,
			"Mi&nimieren"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.moveButton.textAndMnemonic"_s,
			"&Verschieben"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.restoreButton.textAndMnemonic"_s,
			"&Wiederherstellen"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.sizeButton.textAndMnemonic"_s,
			u"&Größe"_s
		}),
		$$new($ObjectArray, {
			"IsindexView.prompt"_s,
			u"Dieser Index kann durchsucht werden. Geben Sie Schlüsselwörter für die Suche ein:"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.cancelButton.textAndMnemonic"_s,
			"Abbrechen"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.inputDialog.titleAndMnemonic"_s,
			"Eingabe"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.messageDialog.titleAndMnemonic"_s,
			"Meldung"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.noButton.textAndMnemonic"_s,
			"&Nein"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.okButton.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.title.textAndMnemonic"_s,
			u"Option auswählen"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.yesButton.textAndMnemonic"_s,
			"&Ja"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.abortButton.textAndMnemonic"_s,
			"&Abbruch"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.abortButtonToolTip.textAndMnemonic"_s,
			"Druckvorgang abbrechen"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentAborting.textAndMnemonic"_s,
			"Druckvorgang wird abgebrochen..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentInitial.textAndMnemonic"_s,
			u"Druckvorgang läuft..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentProgress.textAndMnemonic"_s,
			"Seite {0} wurde gedruckt..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.titleAborting.textAndMnemonic"_s,
			"Drucken (Abbruch)"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.titleProgress.textAndMnemonic"_s,
			"Drucken"_s
		}),
		$$new($ObjectArray, {
			"ProgressMonitor.progress.textAndMnemonic"_s,
			"Fortschritt..."_s
		}),
		$$new($ObjectArray, {
			"SplitPane.leftButton.textAndMnemonic"_s,
			u"linke Schaltfläche"_s
		}),
		$$new($ObjectArray, {
			"SplitPane.rightButton.textAndMnemonic"_s,
			u"rechte Schaltfläche"_s
		})
	});
}

basic_de::basic_de() {
}

$Class* basic_de::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(basic_de, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(basic_de, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.swing.internal.plaf.basic.resources.basic_de",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(basic_de, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(basic_de);
	});
	return class$;
}

$Class* basic_de::class$ = nullptr;

						} // resources
					} // basic
				} // plaf
			} // internal
		} // swing
	} // sun
} // com