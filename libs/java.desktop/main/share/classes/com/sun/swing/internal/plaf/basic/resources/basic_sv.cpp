#include <com/sun/swing/internal/plaf/basic/resources/basic_sv.h>
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

void basic_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* basic_sv::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AbstractButton.click.textAndMnemonic"_s,
			"klicka"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.addition.textAndMnemonic"_s,
			u"tillägg"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.deletion.textAndMnemonic"_s,
			"borttagning"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.redo.textAndMnemonic"_s,
			u"Gör om"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.styleChange.textAndMnemonic"_s,
			u"formatändring"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.undo.textAndMnemonic"_s,
			u"Ångra"_s
		}),
		$$new($ObjectArray, {
			"AbstractUndoableEdit.redo.textAndMnemonic"_s,
			u"Gör om"_s
		}),
		$$new($ObjectArray, {
			"AbstractUndoableEdit.undo.textAndMnemonic"_s,
			u"Ångra"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cancel.textAndMnemonic"_s,
			"Avbryt"_s
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
			"Svart"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykCyan.textAndMnemonic"_s,
			"Cyan"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykMagenta.textAndMnemonic"_s,
			"Magenta"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykYellow.textAndMnemonic"_s,
			"Gul"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsl.textAndMnemonic"_s,
			"HS&L"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslHue.textAndMnemonic"_s,
			"Nyans"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslLightness.textAndMnemonic"_s,
			"Ljusstyrka"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslSaturation.textAndMnemonic"_s,
			u"Mättnad"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslTransparency.textAndMnemonic"_s,
			"Transparens"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsv.textAndMnemonic"_s,
			"&HSV"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvHue.textAndMnemonic"_s,
			"Nyans"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvSaturation.textAndMnemonic"_s,
			u"Mättnad"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvTransparency.textAndMnemonic"_s,
			"Transparens"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvValue.textAndMnemonic"_s,
			u"Värde"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.ok.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.preview.textAndMnemonic"_s,
			"Granska"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.reset.textAndMnemonic"_s,
			u"&Återställ"_s
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
			u"&Blå"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbGreen.textAndMnemonic"_s,
			u"Grö&n"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbHexCode.textAndMnemonic"_s,
			u"&Färgkod"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbRed.textAndMnemonic"_s,
			u"Rö&d"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.sample.textAndMnemonic"_s,
			"Exempeltext  Exempeltext"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.swatches.textAndMnemonic"_s,
			"&Prov"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.swatchesRecent.textAndMnemonic"_s,
			"Senaste:"_s
		}),
		$$new($ObjectArray, {
			"ComboBox.togglePopup.textAndMnemonic"_s,
			u"växlaPopup"_s
		}),
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
			u"Avbryt dialogrutan för filval"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryDescription.textAndMnemonic"_s,
			"Katalog"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryOpenButton.textAndMnemonic"_s,
			u"Öppna"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryOpenButtonToolTip.textAndMnemonic"_s,
			u"Öppna vald katalog"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileDescription.textAndMnemonic"_s,
			"Generisk fil"_s
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
			"Fildetaljer"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesListAccessibleName"_s,
			"Fillista"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButton.textAndMnemonic"_s,
			u"&Hjälp"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButtonToolTip.textAndMnemonic"_s,
			u"Hjälp för val av fil"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderError.textAndMnemonic"_s,
			"Kan inte skapa ny mapp"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderErrorSeparator"_s,
			":"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderParentDoesntExist.textAndMnemonic"_s,
			u"Kan inte skapa mappen.\n\nSystemet kan inte hitta angiven sökväg."_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderParentDoesntExistTitle.textAndMnemonic"_s,
			"Kan inte skapa mappen"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButton.textAndMnemonic"_s,
			u"Öppna"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButtonToolTip.textAndMnemonic"_s,
			u"Öppna vald fil"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openDialogTitle.textAndMnemonic"_s,
			u"Öppna"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.other.newFolder"_s,
			"Ny mapp"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.other.newFolder.subsequent"_s,
			"Ny mapp {0}"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameError.textAndMnemonic"_s,
			u"Kan inte namnändra {0}"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameErrorFileExists.textAndMnemonic"_s,
			u"Kan inte namnändra {0}: En fil med angivet namn finns redan. Ange ett annat filnamn. "_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameErrorTitle.textAndMnemonic"_s,
			u"Ett fel inträffade vid försök att ändra namn på fil eller mapp"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButton.textAndMnemonic"_s,
			"Spara"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButtonToolTip.textAndMnemonic"_s,
			"Spara vald fil"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveDialogTitle.textAndMnemonic"_s,
			"Spara"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.updateButton.textAndMnemonic"_s,
			"Upp&datera"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.updateButtonToolTip.textAndMnemonic"_s,
			"Uppdatera kataloglista"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.win32.newFolder"_s,
			"Ny mapp"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.win32.newFolder.subsequent"_s,
			"Ny mapp ({0})"_s
		}),
		$$new($ObjectArray, {
			"FormView.browseFileButton.textAndMnemonic"_s,
			u"Bläddra..."_s
		}),
		$$new($ObjectArray, {
			"FormView.resetButton.textAndMnemonic"_s,
			u"Återställ"_s
		}),
		$$new($ObjectArray, {
			"FormView.submitButton.textAndMnemonic"_s,
			u"Skicka fråga"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.closeButtonToolTip"_s,
			u"Stäng"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.iconButtonToolTip"_s,
			"Minimera"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.maxButtonToolTip"_s,
			"Maximera"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.restoreButtonToolTip"_s,
			u"Återställ"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.closeButton.textAndMnemonic"_s,
			u"&Stäng"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.closeButtonAccessibleName"_s,
			u"Stäng"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.iconifyButtonAccessibleName"_s,
			"Minimera"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.maximizeButton.textAndMnemonic"_s,
			"Ma&ximera"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.maximizeButtonAccessibleName"_s,
			"Maximera"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.minimizeButton.textAndMnemonic"_s,
			"Mi&nimera"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.moveButton.textAndMnemonic"_s,
			"&Flytta"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.restoreButton.textAndMnemonic"_s,
			u"&Återställ"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.sizeButton.textAndMnemonic"_s,
			"&Storlek"_s
		}),
		$$new($ObjectArray, {
			"IsindexView.prompt"_s,
			u"Detta är ett sökbart index. Ange sökord:"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.cancelButton.textAndMnemonic"_s,
			"Avbryt"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.inputDialog.titleAndMnemonic"_s,
			"Indata"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.messageDialog.titleAndMnemonic"_s,
			"Meddelande"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.noButton.textAndMnemonic"_s,
			"&Nej"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.okButton.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.title.textAndMnemonic"_s,
			u"Välj ett alternativ"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.yesButton.textAndMnemonic"_s,
			"&Ja"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.abortButton.textAndMnemonic"_s,
			"&Avbryt"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.abortButtonToolTip.textAndMnemonic"_s,
			"Avbryt utskrift"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentAborting.textAndMnemonic"_s,
			"Utskriften avbryts..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentInitial.textAndMnemonic"_s,
			u"Utskrift pågår..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentProgress.textAndMnemonic"_s,
			"Skriver ut sida {0}..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.titleAborting.textAndMnemonic"_s,
			"Skriver ut (avbryter)"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.titleProgress.textAndMnemonic"_s,
			"Skriver ut"_s
		}),
		$$new($ObjectArray, {
			"ProgressMonitor.progress.textAndMnemonic"_s,
			u"Pågår..."_s
		}),
		$$new($ObjectArray, {
			"SplitPane.leftButton.textAndMnemonic"_s,
			u"vänsterknapp"_s
		}),
		$$new($ObjectArray, {
			"SplitPane.rightButton.textAndMnemonic"_s,
			u"högerknapp"_s
		})
	});
}

basic_sv::basic_sv() {
}

$Class* basic_sv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(basic_sv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(basic_sv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.swing.internal.plaf.basic.resources.basic_sv",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(basic_sv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(basic_sv);
	});
	return class$;
}

$Class* basic_sv::class$ = nullptr;

						} // resources
					} // basic
				} // plaf
			} // internal
		} // swing
	} // sun
} // com