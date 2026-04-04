#include <com/apple/laf/AquaFileChooserUI$DnDHandler.h>
#include <com/apple/laf/AquaFileChooserUI$DnDHandler$1.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/DropTargetAdapter.h>
#include <java/awt/dnd/DropTargetDragEvent.h>
#include <java/awt/dnd/DropTargetDropEvent.h>
#include <java/io/File.h>
#include <java/net/URI.h>
#include <java/util/List.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

#undef ACTION_COPY

using $FileArray = $Array<::java::io::File>;
using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$DnDHandler$1 = ::com::apple::laf::AquaFileChooserUI$DnDHandler$1;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $DropTargetAdapter = ::java::awt::dnd::DropTargetAdapter;
using $DropTargetDragEvent = ::java::awt::dnd::DropTargetDragEvent;
using $DropTargetDropEvent = ::java::awt::dnd::DropTargetDropEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $List = ::java::util::List;
using $JFileChooser = ::javax::swing::JFileChooser;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$DnDHandler::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$DropTargetAdapter::init$();
}

void AquaFileChooserUI$DnDHandler::dragEnter($DropTargetDragEvent* dtde) {
	tryToAcceptDrag(dtde);
}

void AquaFileChooserUI$DnDHandler::dragOver($DropTargetDragEvent* dtde) {
	tryToAcceptDrag(dtde);
}

void AquaFileChooserUI$DnDHandler::dropActionChanged($DropTargetDragEvent* dtde) {
	tryToAcceptDrag(dtde);
}

void AquaFileChooserUI$DnDHandler::drop($DropTargetDropEvent* dtde) {
	$init($DataFlavor);
	if ($nc(dtde)->isDataFlavorSupported($DataFlavor::javaFileListFlavor)) {
		handleFileDropEvent(dtde);
		return;
	}
	if (dtde->isDataFlavorSupported($DataFlavor::stringFlavor)) {
		handleStringDropEvent(dtde);
		return;
	}
}

void AquaFileChooserUI$DnDHandler::tryToAcceptDrag($DropTargetDragEvent* dtde) {
	$init($DataFlavor);
	bool var$0 = $nc(dtde)->isDataFlavorSupported($DataFlavor::javaFileListFlavor);
	if (var$0 || dtde->isDataFlavorSupported($DataFlavor::stringFlavor)) {
		dtde->acceptDrag($DnDConstants::ACTION_COPY);
		return;
	}
	dtde->rejectDrag();
}

void AquaFileChooserUI$DnDHandler::handleFileDropEvent($DropTargetDropEvent* dtde) {
	$useLocalObjectStack();
	$nc(dtde)->acceptDrop($nc(dtde)->getDropAction());
	$var($Transferable, transferable, dtde->getTransferable());
	try {
		$init($DataFlavor);
		$var($List, fileList, $cast($List, $nc(transferable)->getTransferData($DataFlavor::javaFileListFlavor)));
		dropFiles($$cast($FileArray, $nc(fileList)->toArray($$new($FileArray, $nc(fileList)->size()))));
		dtde->dropComplete(true);
	} catch ($Exception& e) {
		dtde->dropComplete(false);
	}
}

void AquaFileChooserUI$DnDHandler::handleStringDropEvent($DropTargetDropEvent* dtde) {
	$useLocalObjectStack();
	$nc(dtde)->acceptDrop($nc(dtde)->getDropAction());
	$var($Transferable, transferable, dtde->getTransferable());
	$var($String, stringData, nullptr);
	try {
		$init($DataFlavor);
		$assign(stringData, $cast($String, $nc(transferable)->getTransferData($DataFlavor::stringFlavor)));
	} catch ($Exception& e) {
		dtde->dropComplete(false);
		return;
	}
	try {
		$var($File, fileAsPath, $new($File, stringData));
		if (fileAsPath->exists()) {
			dropFiles($$new($FileArray, {fileAsPath}));
			dtde->dropComplete(true);
			return;
		}
	} catch ($Exception& e) {
	}
	try {
		$var($File, fileAsURI, $new($File, $$new($URI, stringData)));
		if (fileAsURI->exists()) {
			dropFiles($$new($FileArray, {fileAsURI}));
			dtde->dropComplete(true);
			return;
		}
	} catch ($Exception& e) {
	}
	dtde->dropComplete(false);
}

void AquaFileChooserUI$DnDHandler::dropFiles($FileArray* files) {
	$useLocalObjectStack();
	$var($JFileChooser, jfc, this->this$0->getFileChooser());
	if ($nc(files)->length == 1) {
		if ($nc(files->get(0))->isDirectory()) {
			$nc(jfc)->setCurrentDirectory(files->get(0));
			return;
		}
		if (!this->this$0->isSelectableForMode(jfc, files->get(0))) {
			return;
		}
	}
	$nc(jfc)->setSelectedFiles(files);
	{
		$var($FileArray, arr$, files);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($File, file, arr$->get(i$));
			{
				jfc->ensureFileIsVisible(file);
			}
		}
	}
	$$nc(this->this$0->getModel())->runWhenDone($$new($AquaFileChooserUI$DnDHandler$1, this, files));
}

AquaFileChooserUI$DnDHandler::AquaFileChooserUI$DnDHandler() {
}

$Class* AquaFileChooserUI$DnDHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$DnDHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, 0, $method(AquaFileChooserUI$DnDHandler, init$, void, $AquaFileChooserUI*)},
		{"dragEnter", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$DnDHandler, dragEnter, void, $DropTargetDragEvent*)},
		{"dragOver", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$DnDHandler, dragOver, void, $DropTargetDragEvent*)},
		{"drop", "(Ljava/awt/dnd/DropTargetDropEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$DnDHandler, drop, void, $DropTargetDropEvent*)},
		{"dropActionChanged", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$DnDHandler, dropActionChanged, void, $DropTargetDragEvent*)},
		{"dropFiles", "([Ljava/io/File;)V", nullptr, $PROTECTED, $virtualMethod(AquaFileChooserUI$DnDHandler, dropFiles, void, $FileArray*)},
		{"handleFileDropEvent", "(Ljava/awt/dnd/DropTargetDropEvent;)V", nullptr, $PROTECTED, $virtualMethod(AquaFileChooserUI$DnDHandler, handleFileDropEvent, void, $DropTargetDropEvent*)},
		{"handleStringDropEvent", "(Ljava/awt/dnd/DropTargetDropEvent;)V", nullptr, $PROTECTED, $virtualMethod(AquaFileChooserUI$DnDHandler, handleStringDropEvent, void, $DropTargetDropEvent*)},
		{"tryToAcceptDrag", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PROTECTED, $virtualMethod(AquaFileChooserUI$DnDHandler, tryToAcceptDrag, void, $DropTargetDragEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$DnDHandler", "com.apple.laf.AquaFileChooserUI", "DnDHandler", 0},
		{"com.apple.laf.AquaFileChooserUI$DnDHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$DnDHandler",
		"java.awt.dnd.DropTargetAdapter",
		nullptr,
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
	$loadClass(AquaFileChooserUI$DnDHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFileChooserUI$DnDHandler);
	});
	return class$;
}

$Class* AquaFileChooserUI$DnDHandler::class$ = nullptr;

		} // laf
	} // apple
} // com