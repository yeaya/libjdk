#include <com/apple/laf/AquaMnemonicHandler.h>
#include <com/apple/laf/AquaMnemonicHandler$AltProcessor.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/KeyEventPostProcessor.h>
#include <java/awt/Window.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $WindowArray = $Array<::java::awt::Window>;
using $AquaMnemonicHandler$AltProcessor = ::com::apple::laf::AquaMnemonicHandler$AltProcessor;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $KeyEventPostProcessor = ::java::awt::KeyEventPostProcessor;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JLabel = ::javax::swing::JLabel;
using $UIManager = ::javax::swing::UIManager;

namespace com {
	namespace apple {
		namespace laf {

$AquaUtils$RecyclableSingleton* AquaMnemonicHandler::altProcessor = nullptr;
bool AquaMnemonicHandler::isMnemonicHidden$ = false;

void AquaMnemonicHandler::init$() {
}

$KeyEventPostProcessor* AquaMnemonicHandler::getInstance() {
	$init(AquaMnemonicHandler);
	return $cast($KeyEventPostProcessor, AquaMnemonicHandler::altProcessor->get());
}

void AquaMnemonicHandler::setMnemonicHidden(bool hide) {
	$init(AquaMnemonicHandler);
	if ($UIManager::getBoolean("Button.showMnemonics"_s)) {
		AquaMnemonicHandler::isMnemonicHidden$ = false;
	} else {
		AquaMnemonicHandler::isMnemonicHidden$ = hide;
	}
}

bool AquaMnemonicHandler::isMnemonicHidden() {
	$init(AquaMnemonicHandler);
	if ($UIManager::getBoolean("Button.showMnemonics"_s)) {
		AquaMnemonicHandler::isMnemonicHidden$ = false;
	}
	return AquaMnemonicHandler::isMnemonicHidden$;
}

void AquaMnemonicHandler::repaintMnemonicsInWindow($Window* w) {
	$init(AquaMnemonicHandler);
	$useLocalObjectStack();
	if (w == nullptr || !w->isShowing()) {
		return;
	}
	$var($WindowArray, ownedWindows, $nc(w)->getOwnedWindows());
	{
		$var($WindowArray, arr$, ownedWindows);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Window, element, arr$->get(i$));
			{
				repaintMnemonicsInWindow(element);
			}
		}
	}
	repaintMnemonicsInContainer(w);
}

void AquaMnemonicHandler::repaintMnemonicsInContainer($Container* cont) {
	$init(AquaMnemonicHandler);
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(cont)->getComponentCount(); ++i) {
		$var($Component, c, cont->getComponent(i));
		if (c == nullptr || !c->isVisible()) {
			continue;
		}
		if ($instanceOf($AbstractButton, c) && $cast($AbstractButton, c)->getMnemonic() != u'\0') {
			c->repaint();
			continue;
		}
		if ($instanceOf($JLabel, c) && $cast($JLabel, c)->getDisplayedMnemonic() != u'\0') {
			c->repaint();
			continue;
		}
		if ($instanceOf($Container, c)) {
			repaintMnemonicsInContainer($cast($Container, c));
		}
	}
}

void AquaMnemonicHandler::clinit$($Class* clazz) {
	$load($AquaMnemonicHandler$AltProcessor);
	$assignStatic(AquaMnemonicHandler::altProcessor, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaMnemonicHandler$AltProcessor::class$));
	AquaMnemonicHandler::isMnemonicHidden$ = true;
}

AquaMnemonicHandler::AquaMnemonicHandler() {
}

$Class* AquaMnemonicHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"altProcessor", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaMnemonicHandler$AltProcessor;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaMnemonicHandler, altProcessor)},
		{"isMnemonicHidden", "Z", nullptr, $PROTECTED | $STATIC, $staticField(AquaMnemonicHandler, isMnemonicHidden$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaMnemonicHandler, init$, void)},
		{"getInstance", "()Ljava/awt/KeyEventPostProcessor;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaMnemonicHandler, getInstance, $KeyEventPostProcessor*)},
		{"isMnemonicHidden", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaMnemonicHandler, isMnemonicHidden, bool)},
		{"repaintMnemonicsInContainer", "(Ljava/awt/Container;)V", nullptr, $STATIC, $staticMethod(AquaMnemonicHandler, repaintMnemonicsInContainer, void, $Container*)},
		{"repaintMnemonicsInWindow", "(Ljava/awt/Window;)V", nullptr, $STATIC, $staticMethod(AquaMnemonicHandler, repaintMnemonicsInWindow, void, $Window*)},
		{"setMnemonicHidden", "(Z)V", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaMnemonicHandler, setMnemonicHidden, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaMnemonicHandler$AltProcessor", "com.apple.laf.AquaMnemonicHandler", "AltProcessor", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaMnemonicHandler",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.AquaMnemonicHandler$AltProcessor"
	};
	$loadClass(AquaMnemonicHandler, name, initialize, &classInfo$$, AquaMnemonicHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AquaMnemonicHandler);
	});
	return class$;
}

$Class* AquaMnemonicHandler::class$ = nullptr;

		} // laf
	} // apple
} // com