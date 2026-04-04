#include <sun/lwawt/LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/TextArea.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/AWTAccessor$ClientPropertyKeyAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWTextAreaPeer$ScrollableJTextArea.h>
#include <sun/lwawt/LWTextAreaPeer.h>
#include <sun/lwawt/LWTextComponentPeer.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $TextArea = ::java::awt::TextArea;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextArea = ::javax::swing::JTextArea;
using $TransferHandler = ::javax::swing::TransferHandler;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $LWTextAreaPeer$ScrollableJTextArea = ::sun::lwawt::LWTextAreaPeer$ScrollableJTextArea;

namespace sun {
	namespace lwawt {

void LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::init$($LWTextAreaPeer$ScrollableJTextArea* this$1) {
	$set(this, this$1, this$1);
	$JTextArea::init$();
}

void LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::replaceSelection($String* content) {
	$useLocalObjectStack();
	$$nc(getDocument())->removeDocumentListener(this->this$1->this$0);
	$JTextArea::replaceSelection(content);
	$nc(this->this$1->this$0)->postTextEvent();
	$$nc(getDocument())->addDocumentListener(this->this$1->this$0);
}

bool LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::hasFocus() {
	return $$sure($TextArea, $nc(this->this$1->this$0)->getTarget())->hasFocus();
}

$Point* LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::getLocationOnScreen() {
	return $nc(this->this$1->this$0)->getLocationOnScreen();
}

void LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::setTransferHandler($TransferHandler* newHandler) {
	$useLocalObjectStack();
	$var($Object, key, $$nc($AWTAccessor::getClientPropertyKeyAccessor())->getJComponent_TRANSFER_HANDLER());
	$var($Object, oldHandler, getClientProperty(key));
	putClientProperty(key, newHandler);
	firePropertyChange("transferHandler"_s, oldHandler, newHandler);
}

LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate() {
}

$Class* LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/lwawt/LWTextAreaPeer$ScrollableJTextArea;", nullptr, $FINAL | $SYNTHETIC, $field(LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/LWTextAreaPeer$ScrollableJTextArea;)V", nullptr, $PRIVATE, $method(LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate, init$, void, $LWTextAreaPeer$ScrollableJTextArea*)},
		{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate, getLocationOnScreen, $Point*)},
		{"hasFocus", "()Z", nullptr, $PUBLIC, $virtualMethod(LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate, hasFocus, bool)},
		{"replaceSelection", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate, replaceSelection, void, $String*)},
		{"setTransferHandler", "(Ljavax/swing/TransferHandler;)V", nullptr, $PUBLIC, $virtualMethod(LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate, setTransferHandler, void, $TransferHandler*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWTextAreaPeer$ScrollableJTextArea", "sun.lwawt.LWTextAreaPeer", "ScrollableJTextArea", $FINAL},
		{"sun.lwawt.LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate", "sun.lwawt.LWTextAreaPeer$ScrollableJTextArea", "JTextAreaDelegate", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.lwawt.LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate",
		"javax.swing.JTextArea",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.LWTextAreaPeer"
	};
	$loadClass(LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate));
	});
	return class$;
}

$Class* LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate::class$ = nullptr;

	} // lwawt
} // sun