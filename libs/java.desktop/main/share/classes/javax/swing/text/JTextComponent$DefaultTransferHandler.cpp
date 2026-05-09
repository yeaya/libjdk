#include <javax/swing/text/JTextComponent$DefaultTransferHandler.h>
#include <java/awt/Component.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/datatransfer/ClipboardOwner.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/StringSelection.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/awt/im/InputContext.h>
#include <java/io/IOException.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef MOVE
#undef NONE

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $ClipboardOwner = ::java::awt::datatransfer::ClipboardOwner;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $StringSelection = ::java::awt::datatransfer::StringSelection;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $InputContext = ::java::awt::im::InputContext;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $TransferHandler = ::javax::swing::TransferHandler;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace text {

int32_t JTextComponent$DefaultTransferHandler::hashCode() {
	return this->$TransferHandler::hashCode();
}

bool JTextComponent$DefaultTransferHandler::equals(Object$* arg0) {
	return this->$TransferHandler::equals(arg0);
}

$Object* JTextComponent$DefaultTransferHandler::clone() {
	return this->$TransferHandler::clone();
}

$String* JTextComponent$DefaultTransferHandler::toString() {
	return this->$TransferHandler::toString();
}

void JTextComponent$DefaultTransferHandler::finalize() {
	this->$TransferHandler::finalize();
}

void JTextComponent$DefaultTransferHandler::init$() {
	$TransferHandler::init$();
}

void JTextComponent$DefaultTransferHandler::exportToClipboard($JComponent* comp, $Clipboard* clipboard, int32_t action) {
	$useLocalObjectStack();
	if ($instanceOf($JTextComponent, comp)) {
		$var($JTextComponent, text, $cast($JTextComponent, comp));
		int32_t p0 = text->getSelectionStart();
		int32_t p1 = text->getSelectionEnd();
		if (p0 != p1) {
			try {
				$var($Document, doc, text->getDocument());
				$var($String, srcData, $nc(doc)->getText(p0, p1 - p0));
				$var($StringSelection, contents, $new($StringSelection, srcData));
				$nc(clipboard)->setContents(contents, nullptr);
				if (action == $TransferHandler::MOVE) {
					doc->remove(p0, p1 - p0);
				}
			} catch ($BadLocationException& ble) {
			}
		}
	}
}

bool JTextComponent$DefaultTransferHandler::importData($JComponent* comp, $Transferable* t) {
	$useLocalObjectStack();
	if ($instanceOf($JTextComponent, comp)) {
		$var($DataFlavor, flavor, getFlavor($($nc(t)->getTransferDataFlavors())));
		if (flavor != nullptr) {
			$var($InputContext, ic, comp->getInputContext());
			if (ic != nullptr) {
				ic->endComposition();
			}
			try {
				$var($String, data, $cast($String, t->getTransferData(flavor)));
				$cast($JTextComponent, comp)->replaceSelection(data);
				return true;
			} catch ($UnsupportedFlavorException& ufe) {
			} catch ($IOException& ioe) {
			}
		}
	}
	return false;
}

bool JTextComponent$DefaultTransferHandler::canImport($JComponent* comp, $DataFlavorArray* transferFlavors) {
	$var($JTextComponent, c, $cast($JTextComponent, comp));
	bool var$0 = $nc(c)->isEditable();
	if (!(var$0 && c->isEnabled())) {
		return false;
	}
	return (getFlavor(transferFlavors) != nullptr);
}

int32_t JTextComponent$DefaultTransferHandler::getSourceActions($JComponent* c) {
	return $TransferHandler::NONE;
}

$DataFlavor* JTextComponent$DefaultTransferHandler::getFlavor($DataFlavorArray* flavors) {
	$useLocalObjectStack();
	if (flavors != nullptr) {
		$var($DataFlavorArray, arr$, flavors);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($DataFlavor, flavor, arr$->get(i$));
			if ($nc(flavor)->equals($DataFlavor::stringFlavor)) {
				return flavor;
			}
		}
	}
	return nullptr;
}

JTextComponent$DefaultTransferHandler::JTextComponent$DefaultTransferHandler() {
}

$Class* JTextComponent$DefaultTransferHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(JTextComponent$DefaultTransferHandler, init$, void)},
		{"canImport", "(Ljavax/swing/JComponent;[Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultTransferHandler, canImport, bool, $JComponent*, $DataFlavorArray*)},
		{"exportToClipboard", "(Ljavax/swing/JComponent;Ljava/awt/datatransfer/Clipboard;I)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultTransferHandler, exportToClipboard, void, $JComponent*, $Clipboard*, int32_t), "java.lang.IllegalStateException"},
		{"getFlavor", "([Ljava/awt/datatransfer/DataFlavor;)Ljava/awt/datatransfer/DataFlavor;", nullptr, $PRIVATE, $method(JTextComponent$DefaultTransferHandler, getFlavor, $DataFlavor*, $DataFlavorArray*)},
		{"getSourceActions", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultTransferHandler, getSourceActions, int32_t, $JComponent*)},
		{"importData", "(Ljavax/swing/JComponent;Ljava/awt/datatransfer/Transferable;)Z", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DefaultTransferHandler, importData, bool, $JComponent*, $Transferable*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.JTextComponent$DefaultTransferHandler", "javax.swing.text.JTextComponent", "DefaultTransferHandler", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.JTextComponent$DefaultTransferHandler",
		"javax.swing.TransferHandler",
		"javax.swing.plaf.UIResource",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.JTextComponent"
	};
	$loadClass(JTextComponent$DefaultTransferHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTextComponent$DefaultTransferHandler));
	});
	return class$;
}

$Class* JTextComponent$DefaultTransferHandler::class$ = nullptr;

		} // text
	} // swing
} // javax