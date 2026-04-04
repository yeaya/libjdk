#include <sun/lwawt/LWTextFieldPeer$JPasswordFieldDelegate.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/TextField.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/AWTAccessor$ClientPropertyKeyAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWTextFieldPeer.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $TextField = ::java::awt::TextField;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPasswordField = ::javax::swing::JPasswordField;
using $TransferHandler = ::javax::swing::TransferHandler;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $LWTextFieldPeer = ::sun::lwawt::LWTextFieldPeer;

namespace sun {
	namespace lwawt {

void LWTextFieldPeer$JPasswordFieldDelegate::init$($LWTextFieldPeer* this$0) {
	$set(this, this$0, this$0);
	$JPasswordField::init$();
}

void LWTextFieldPeer$JPasswordFieldDelegate::replaceSelection($String* content) {
	$useLocalObjectStack();
	$$nc(getDocument())->removeDocumentListener(this->this$0);
	$JPasswordField::replaceSelection(content);
	this->this$0->postTextEvent();
	$$nc(getDocument())->addDocumentListener(this->this$0);
}

bool LWTextFieldPeer$JPasswordFieldDelegate::hasFocus() {
	return $$sure($TextField, this->this$0->getTarget())->hasFocus();
}

$Point* LWTextFieldPeer$JPasswordFieldDelegate::getLocationOnScreen() {
	return this->this$0->getLocationOnScreen();
}

void LWTextFieldPeer$JPasswordFieldDelegate::setTransferHandler($TransferHandler* newHandler) {
	$useLocalObjectStack();
	$var($Object, key, $$nc($AWTAccessor::getClientPropertyKeyAccessor())->getJComponent_TRANSFER_HANDLER());
	$var($Object, oldHandler, getClientProperty(key));
	putClientProperty(key, newHandler);
	firePropertyChange("transferHandler"_s, oldHandler, newHandler);
}

LWTextFieldPeer$JPasswordFieldDelegate::LWTextFieldPeer$JPasswordFieldDelegate() {
}

$Class* LWTextFieldPeer$JPasswordFieldDelegate::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/LWTextFieldPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWTextFieldPeer$JPasswordFieldDelegate, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/LWTextFieldPeer;)V", nullptr, $PRIVATE, $method(LWTextFieldPeer$JPasswordFieldDelegate, init$, void, $LWTextFieldPeer*)},
		{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(LWTextFieldPeer$JPasswordFieldDelegate, getLocationOnScreen, $Point*)},
		{"hasFocus", "()Z", nullptr, $PUBLIC, $virtualMethod(LWTextFieldPeer$JPasswordFieldDelegate, hasFocus, bool)},
		{"replaceSelection", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(LWTextFieldPeer$JPasswordFieldDelegate, replaceSelection, void, $String*)},
		{"setTransferHandler", "(Ljavax/swing/TransferHandler;)V", nullptr, $PUBLIC, $virtualMethod(LWTextFieldPeer$JPasswordFieldDelegate, setTransferHandler, void, $TransferHandler*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWTextFieldPeer$JPasswordFieldDelegate", "sun.lwawt.LWTextFieldPeer", "JPasswordFieldDelegate", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.lwawt.LWTextFieldPeer$JPasswordFieldDelegate",
		"javax.swing.JPasswordField",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.LWTextFieldPeer"
	};
	$loadClass(LWTextFieldPeer$JPasswordFieldDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LWTextFieldPeer$JPasswordFieldDelegate));
	});
	return class$;
}

$Class* LWTextFieldPeer$JPasswordFieldDelegate::class$ = nullptr;

	} // lwawt
} // sun