#include <javax/swing/plaf/metal/MetalMenuBarUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicMenuBarUI.h>
#include <javax/swing/plaf/metal/MetalToolBarUI.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $JComponent = ::javax::swing::JComponent;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JToolBar = ::javax::swing::JToolBar;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicMenuBarUI = ::javax::swing::plaf::basic::BasicMenuBarUI;
using $MetalToolBarUI = ::javax::swing::plaf::metal::MetalToolBarUI;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalMenuBarUI::init$() {
	$BasicMenuBarUI::init$();
}

$ComponentUI* MetalMenuBarUI::createUI($JComponent* x) {
	$init(MetalMenuBarUI);
	if (x == nullptr) {
		$throwNew($NullPointerException, "Must pass in a non-null component"_s);
	}
	return $new(MetalMenuBarUI);
}

void MetalMenuBarUI::installUI($JComponent* c) {
	$BasicMenuBarUI::installUI(c);
	$MetalToolBarUI::register$(c);
}

void MetalMenuBarUI::uninstallUI($JComponent* c) {
	$BasicMenuBarUI::uninstallUI(c);
	$MetalToolBarUI::unregister(c);
}

void MetalMenuBarUI::update($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	bool isOpaque = $nc(c)->isOpaque();
	if (g == nullptr) {
		$throwNew($NullPointerException, "Graphics must be non-null"_s);
	}
	bool var$0 = isOpaque && ($instanceOf($UIResource, $(c->getBackground())));
	if (var$0 && $UIManager::get("MenuBar.gradient"_s) != nullptr) {
		if ($MetalToolBarUI::doesMenuBarBorderToolBar($cast($JMenuBar, c))) {
			$load($JToolBar);
			$var($JToolBar, tb, $cast($JToolBar, $MetalToolBarUI::findRegisteredComponentOfType(c, $JToolBar::class$)));
			bool var$1 = $nc(tb)->isOpaque();
			if (var$1 && $instanceOf($UIResource, $(tb->getBackground()))) {
				$var($String, var$2, "MenuBar.gradient"_s);
				int32_t var$3 = c->getWidth();
				int32_t var$4 = c->getHeight();
				$MetalUtils::drawGradient(c, g, var$2, 0, 0, var$3, var$4 + tb->getHeight(), true);
				paint(g, c);
				return;
			}
		}
		$var($String, var$5, "MenuBar.gradient"_s);
		int32_t var$6 = c->getWidth();
		$MetalUtils::drawGradient(c, g, var$5, 0, 0, var$6, c->getHeight(), true);
		paint(g, c);
	} else {
		$BasicMenuBarUI::update(g, c);
	}
}

MetalMenuBarUI::MetalMenuBarUI() {
}

$Class* MetalMenuBarUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalMenuBarUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalMenuBarUI, createUI, $ComponentUI*, $JComponent*)},
		{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MetalMenuBarUI, installUI, void, $JComponent*)},
		{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MetalMenuBarUI, uninstallUI, void, $JComponent*)},
		{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MetalMenuBarUI, update, void, $Graphics*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalMenuBarUI",
		"javax.swing.plaf.basic.BasicMenuBarUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalMenuBarUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalMenuBarUI);
	});
	return class$;
}

$Class* MetalMenuBarUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax