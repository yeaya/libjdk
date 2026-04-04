#include <com/apple/laf/AquaFileChooserUI$SelectionListener.h>
#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <com/apple/laf/AquaFileView.h>
#include <java/io/File.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JTable.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <jcpp.h>

#undef SAVE_DIALOG

using $FileArray = $Array<::java::io::File>;
using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$SelectionListener::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaFileChooserUI$SelectionListener::valueChanged($ListSelectionEvent* e) {
	$useLocalObjectStack();
	if ($nc(e)->getValueIsAdjusting()) {
		return;
	}
	$var($File, f, nullptr);
	int32_t selectedRow = $nc(this->this$0->fFileList)->getSelectedRow();
	$var($JFileChooser, chooser, this->this$0->getFileChooser());
	bool isSave = ($nc(chooser)->getDialogType() == $JFileChooser::SAVE_DIALOG);
	if (selectedRow >= 0) {
		$assign(f, $cast($File, $nc(this->this$0->fFileList)->getValueAt(selectedRow, 0)));
	}
	this->this$0->selectionInProgress = true;
	if (!isSave && chooser->isMultiSelectionEnabled()) {
		$var($ints, rows, $nc(this->this$0->fFileList)->getSelectedRows());
		int32_t selectableCount = 0;
		if ($nc(rows)->length > 0) {
			$var($ints, arr$, rows);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				int32_t element = arr$->get(i$);
				if (this->this$0->isSelectableForMode(chooser, $$cast($File, $nc(this->this$0->fFileList)->getValueAt(element, 0)))) {
					++selectableCount;
				}
			}
		}
		if (selectableCount > 0) {
			$var($FileArray, files, $new($FileArray, selectableCount));
			for (int32_t i = 0, si = 0; i < rows->length; ++i) {
				$assign(f, $cast($File, $nc(this->this$0->fFileList)->getValueAt(rows->get(i), 0)));
				if (this->this$0->isSelectableForMode(chooser, f)) {
					if ($nc(this->this$0->fileView)->isAlias(f)) {
						$assign(f, this->this$0->fileView->resolveAlias(f));
					}
					files->set(si++, f);
				}
			}
			chooser->setSelectedFiles(files);
		} else {
			chooser->setSelectedFiles(nullptr);
		}
	} else {
		chooser->setSelectedFiles(nullptr);
		chooser->setSelectedFile(f);
	}
	this->this$0->selectionInProgress = false;
}

AquaFileChooserUI$SelectionListener::AquaFileChooserUI$SelectionListener() {
}

$Class* AquaFileChooserUI$SelectionListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$SelectionListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(AquaFileChooserUI$SelectionListener, init$, void, $AquaFileChooserUI*)},
		{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$SelectionListener, valueChanged, void, $ListSelectionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$SelectionListener", "com.apple.laf.AquaFileChooserUI", "SelectionListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$SelectionListener",
		"java.lang.Object",
		"javax.swing.event.ListSelectionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFileChooserUI"
	};
	$loadClass(AquaFileChooserUI$SelectionListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFileChooserUI$SelectionListener);
	});
	return class$;
}

$Class* AquaFileChooserUI$SelectionListener::class$ = nullptr;

		} // laf
	} // apple
} // com