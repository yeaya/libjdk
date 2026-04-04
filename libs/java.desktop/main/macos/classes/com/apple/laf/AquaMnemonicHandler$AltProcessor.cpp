#include <com/apple/laf/AquaMnemonicHandler$AltProcessor.h>
#include <com/apple/laf/AquaMnemonicHandler.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef KEY_PRESSED
#undef KEY_RELEASED
#undef VK_ALT

using $AquaMnemonicHandler = ::com::apple::laf::AquaMnemonicHandler;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace com {
	namespace apple {
		namespace laf {

void AquaMnemonicHandler$AltProcessor::init$() {
}

bool AquaMnemonicHandler$AltProcessor::postProcessKeyEvent($KeyEvent* ev) {
	$useLocalObjectStack();
	if ($nc(ev)->getKeyCode() != $KeyEvent::VK_ALT) {
		return false;
	}
	$var($JRootPane, root, $SwingUtilities::getRootPane($(ev->getComponent())));
	$var($Window, winAncestor, root == nullptr ? ($Window*)nullptr : $SwingUtilities::getWindowAncestor(root));
	switch (ev->getID()) {
	case $KeyEvent::KEY_PRESSED:
		$AquaMnemonicHandler::setMnemonicHidden(false);
		break;
	case $KeyEvent::KEY_RELEASED:
		$AquaMnemonicHandler::setMnemonicHidden(true);
		break;
	}
	$AquaMnemonicHandler::repaintMnemonicsInWindow(winAncestor);
	return false;
}

AquaMnemonicHandler$AltProcessor::AquaMnemonicHandler$AltProcessor() {
}

$Class* AquaMnemonicHandler$AltProcessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaMnemonicHandler$AltProcessor, init$, void)},
		{"postProcessKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC, $virtualMethod(AquaMnemonicHandler$AltProcessor, postProcessKeyEvent, bool, $KeyEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaMnemonicHandler$AltProcessor", "com.apple.laf.AquaMnemonicHandler", "AltProcessor", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaMnemonicHandler$AltProcessor",
		"java.lang.Object",
		"java.awt.KeyEventPostProcessor",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaMnemonicHandler"
	};
	$loadClass(AquaMnemonicHandler$AltProcessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaMnemonicHandler$AltProcessor);
	});
	return class$;
}

$Class* AquaMnemonicHandler$AltProcessor::class$ = nullptr;

		} // laf
	} // apple
} // com