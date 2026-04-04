#include <com/apple/eawt/_AppMenuBarHandler.h>
#include <com/apple/laf/AquaMenuBarUI.h>
#include <com/apple/laf/ScreenMenuBar.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuBarUI.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <sun/lwawt/macosx/CMenuBar.h>
#include <jcpp.h>

#undef ICONIFIED
#undef MENU_ABOUT
#undef MENU_PREFS

using $FrameArray = $Array<::java::awt::Frame>;
using $AquaMenuBarUI = ::com::apple::laf::AquaMenuBarUI;
using $ScreenMenuBar = ::com::apple::laf::ScreenMenuBar;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JMenuBar = ::javax::swing::JMenuBar;
using $MenuBarUI = ::javax::swing::plaf::MenuBarUI;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CMenuBar = ::sun::lwawt::macosx::CMenuBar;

namespace com {
	namespace apple {
		namespace eawt {

class _AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar : public $CFRetainedResource$CFNativeAction {
	$class(_AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t menuBarPeer) override {
		_AppMenuBarHandler::nativeSetDefaultMenuBar(menuBarPeer);
	}
};
$Class* _AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(_AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar, init$, void)},
		{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(_AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar, run, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.eawt._AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar",
		"java.lang.Object",
		"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(_AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(_AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar);
	});
	return class$;
}
$Class* _AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar::class$ = nullptr;

class _AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1 : public $CFRetainedResource$CFNativeAction {
	$class(_AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t menuBarPeer) override {
		_AppMenuBarHandler::nativeActivateDefaultMenuBar(menuBarPeer);
	}
};
$Class* _AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(_AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1, init$, void)},
		{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(_AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1, run, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.eawt._AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1",
		"java.lang.Object",
		"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(_AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(_AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1);
	});
	return class$;
}
$Class* _AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1::class$ = nullptr;

_AppMenuBarHandler* _AppMenuBarHandler::instance = nullptr;
$ScreenMenuBar* _AppMenuBarHandler::defaultMenuBar = nullptr;

void _AppMenuBarHandler::nativeSetMenuState(int32_t menu, bool visible, bool enabled) {
	$init(_AppMenuBarHandler);
	$prepareNativeStatic(nativeSetMenuState, void, int32_t menu, bool visible, bool enabled);
	$invokeNativeStatic(menu, visible, enabled);
	$finishNativeStatic();
}

void _AppMenuBarHandler::nativeSetDefaultMenuBar(int64_t menuBarPeer) {
	$init(_AppMenuBarHandler);
	$prepareNativeStatic(nativeSetDefaultMenuBar, void, int64_t menuBarPeer);
	$invokeNativeStatic(menuBarPeer);
	$finishNativeStatic();
}

void _AppMenuBarHandler::nativeActivateDefaultMenuBar(int64_t menuBarPeer) {
	$init(_AppMenuBarHandler);
	$prepareNativeStatic(nativeActivateDefaultMenuBar, void, int64_t menuBarPeer);
	$invokeNativeStatic(menuBarPeer);
	$finishNativeStatic();
}

_AppMenuBarHandler* _AppMenuBarHandler::getInstance() {
	$init(_AppMenuBarHandler);
	return _AppMenuBarHandler::instance;
}

void _AppMenuBarHandler::initMenuStates(bool aboutMenuItemVisible, bool aboutMenuItemEnabled, bool prefsMenuItemVisible, bool prefsMenuItemEnabled) {
	$init(_AppMenuBarHandler);
	$synchronized(_AppMenuBarHandler::instance) {
		_AppMenuBarHandler::instance->aboutMenuItemVisible = aboutMenuItemVisible;
		_AppMenuBarHandler::instance->aboutMenuItemEnabled = aboutMenuItemEnabled;
		_AppMenuBarHandler::instance->prefsMenuItemVisible = prefsMenuItemVisible;
		_AppMenuBarHandler::instance->prefsMenuItemEnabled = prefsMenuItemEnabled;
	}
}

void _AppMenuBarHandler::init$() {
}

void _AppMenuBarHandler::setDefaultMenuBar($JMenuBar* menuBar) {
	installDefaultMenuBar(menuBar);
}

bool _AppMenuBarHandler::isMenuBarActivationNeeded() {
	$init(_AppMenuBarHandler);
	$useLocalObjectStack();
	$var($FrameArray, frames, $Frame::getFrames());
	{
		$var($FrameArray, arr$, frames);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Frame, frame, arr$->get(i$));
			{
				bool var$0 = $nc(frame)->isVisible();
				if (var$0 && !isFrameMinimized(frame)) {
					return false;
				}
			}
		}
	}
	return true;
}

bool _AppMenuBarHandler::isFrameMinimized($Frame* frame) {
	$init(_AppMenuBarHandler);
	return ($nc(frame)->getExtendedState() & $Frame::ICONIFIED) != 0;
}

void _AppMenuBarHandler::installDefaultMenuBar($JMenuBar* menuBar) {
	$init(_AppMenuBarHandler);
	$useLocalObjectStack();
	if (menuBar == nullptr) {
		if (_AppMenuBarHandler::defaultMenuBar != nullptr) {
			_AppMenuBarHandler::defaultMenuBar->removeNotify();
			$assignStatic(_AppMenuBarHandler::defaultMenuBar, nullptr);
		}
		nativeSetDefaultMenuBar(0);
		return;
	}
	$var($Container, parent, $nc(menuBar)->getParent());
	if ($instanceOf($JLayeredPane, parent)) {
		$cast($JLayeredPane, parent)->remove(menuBar);
	}
	$var($MenuBarUI, ui, $cast($MenuBarUI, menuBar->getUI()));
	if (!($instanceOf($AquaMenuBarUI, ui))) {
		$assign(ui, $new($AquaMenuBarUI));
		menuBar->setUI(ui);
	}
	$var($AquaMenuBarUI, aquaUI, $cast($AquaMenuBarUI, ui));
	$var($ScreenMenuBar, screenMenuBar, $nc(aquaUI)->getScreenMenuBar());
	if (screenMenuBar == nullptr) {
		$throwNew($IllegalStateException, "Application.setDefaultMenuBar() only works if apple.laf.useScreenMenuBar=true"_s);
	}
	if (screenMenuBar != _AppMenuBarHandler::defaultMenuBar) {
		if (_AppMenuBarHandler::defaultMenuBar != nullptr) {
			_AppMenuBarHandler::defaultMenuBar->removeNotify();
		}
		$assignStatic(_AppMenuBarHandler::defaultMenuBar, screenMenuBar);
		$nc(screenMenuBar)->addNotify();
	}
	$var($Object, peer, $$nc($AWTAccessor::getMenuComponentAccessor())->getPeer(screenMenuBar));
	if (!($instanceOf($CMenuBar, peer))) {
		$throwNew($IllegalStateException, "Unable to determine native menu bar from provided JMenuBar"_s);
	}
	$nc($cast($CMenuBar, peer))->execute($$new(_AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar));
	if (isMenuBarActivationNeeded()) {
		$cast($CMenuBar, peer)->execute($$new(_AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1));
	}
}

void _AppMenuBarHandler::setAboutMenuItemVisible(bool present) {
	$synchronized(this) {
		if (this->aboutMenuItemVisible == present) {
			return;
		}
		this->aboutMenuItemVisible = present;
	}
	nativeSetMenuState(_AppMenuBarHandler::MENU_ABOUT, this->aboutMenuItemVisible, this->aboutMenuItemEnabled);
}

void _AppMenuBarHandler::setPreferencesMenuItemVisible(bool present) {
	$synchronized(this) {
		this->prefsMenuItemExplicitlySet = true;
		if (this->prefsMenuItemVisible == present) {
			return;
		}
		this->prefsMenuItemVisible = present;
	}
	nativeSetMenuState(_AppMenuBarHandler::MENU_PREFS, this->prefsMenuItemVisible, this->prefsMenuItemEnabled);
}

void _AppMenuBarHandler::setAboutMenuItemEnabled(bool enable) {
	$synchronized(this) {
		if (this->aboutMenuItemEnabled == enable) {
			return;
		}
		this->aboutMenuItemEnabled = enable;
	}
	nativeSetMenuState(_AppMenuBarHandler::MENU_ABOUT, this->aboutMenuItemVisible, this->aboutMenuItemEnabled);
}

void _AppMenuBarHandler::setPreferencesMenuItemEnabled(bool enable) {
	$synchronized(this) {
		this->prefsMenuItemExplicitlySet = true;
		if (this->prefsMenuItemEnabled == enable) {
			return;
		}
		this->prefsMenuItemEnabled = enable;
	}
	nativeSetMenuState(_AppMenuBarHandler::MENU_PREFS, this->prefsMenuItemVisible, this->prefsMenuItemEnabled);
}

bool _AppMenuBarHandler::isAboutMenuItemVisible() {
	return this->aboutMenuItemVisible;
}

bool _AppMenuBarHandler::isPreferencesMenuItemVisible() {
	return this->prefsMenuItemVisible;
}

bool _AppMenuBarHandler::isAboutMenuItemEnabled() {
	return this->aboutMenuItemEnabled;
}

bool _AppMenuBarHandler::isPreferencesMenuItemEnabled() {
	return this->prefsMenuItemEnabled;
}

void _AppMenuBarHandler::clinit$($Class* clazz) {
	$assignStatic(_AppMenuBarHandler::instance, $new(_AppMenuBarHandler));
}

_AppMenuBarHandler::_AppMenuBarHandler() {
}

$Class* _AppMenuBarHandler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.apple.eawt._AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar")) {
			return _AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar::load$(name, initialize);
		}
		if (name->equals("com.apple.eawt._AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1")) {
			return _AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"MENU_ABOUT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppMenuBarHandler, MENU_ABOUT)},
		{"MENU_PREFS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppMenuBarHandler, MENU_PREFS)},
		{"instance", "Lcom/apple/eawt/_AppMenuBarHandler;", nullptr, $STATIC | $FINAL, $staticField(_AppMenuBarHandler, instance)},
		{"defaultMenuBar", "Lcom/apple/laf/ScreenMenuBar;", nullptr, $PRIVATE | $STATIC, $staticField(_AppMenuBarHandler, defaultMenuBar)},
		{"aboutMenuItemVisible", "Z", nullptr, 0, $field(_AppMenuBarHandler, aboutMenuItemVisible)},
		{"aboutMenuItemEnabled", "Z", nullptr, 0, $field(_AppMenuBarHandler, aboutMenuItemEnabled)},
		{"prefsMenuItemVisible", "Z", nullptr, 0, $field(_AppMenuBarHandler, prefsMenuItemVisible)},
		{"prefsMenuItemEnabled", "Z", nullptr, 0, $field(_AppMenuBarHandler, prefsMenuItemEnabled)},
		{"prefsMenuItemExplicitlySet", "Z", nullptr, 0, $field(_AppMenuBarHandler, prefsMenuItemExplicitlySet)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(_AppMenuBarHandler, init$, void)},
		{"getInstance", "()Lcom/apple/eawt/_AppMenuBarHandler;", nullptr, $STATIC, $staticMethod(_AppMenuBarHandler, getInstance, _AppMenuBarHandler*)},
		{"initMenuStates", "(ZZZZ)V", nullptr, $PRIVATE | $STATIC, $staticMethod(_AppMenuBarHandler, initMenuStates, void, bool, bool, bool, bool)},
		{"installDefaultMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $STATIC, $staticMethod(_AppMenuBarHandler, installDefaultMenuBar, void, $JMenuBar*)},
		{"isAboutMenuItemEnabled", "()Z", nullptr, 0, $virtualMethod(_AppMenuBarHandler, isAboutMenuItemEnabled, bool)},
		{"isAboutMenuItemVisible", "()Z", nullptr, 0, $virtualMethod(_AppMenuBarHandler, isAboutMenuItemVisible, bool)},
		{"isFrameMinimized", "(Ljava/awt/Frame;)Z", nullptr, $STATIC, $staticMethod(_AppMenuBarHandler, isFrameMinimized, bool, $Frame*)},
		{"isMenuBarActivationNeeded", "()Z", nullptr, $STATIC, $staticMethod(_AppMenuBarHandler, isMenuBarActivationNeeded, bool)},
		{"isPreferencesMenuItemEnabled", "()Z", nullptr, 0, $virtualMethod(_AppMenuBarHandler, isPreferencesMenuItemEnabled, bool)},
		{"isPreferencesMenuItemVisible", "()Z", nullptr, 0, $virtualMethod(_AppMenuBarHandler, isPreferencesMenuItemVisible, bool)},
		{"nativeActivateDefaultMenuBar", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(_AppMenuBarHandler, nativeActivateDefaultMenuBar, void, int64_t)},
		{"nativeSetDefaultMenuBar", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(_AppMenuBarHandler, nativeSetDefaultMenuBar, void, int64_t)},
		{"nativeSetMenuState", "(IZZ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(_AppMenuBarHandler, nativeSetMenuState, void, int32_t, bool, bool)},
		{"setAboutMenuItemEnabled", "(Z)V", nullptr, 0, $virtualMethod(_AppMenuBarHandler, setAboutMenuItemEnabled, void, bool)},
		{"setAboutMenuItemVisible", "(Z)V", nullptr, 0, $virtualMethod(_AppMenuBarHandler, setAboutMenuItemVisible, void, bool)},
		{"setDefaultMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, 0, $virtualMethod(_AppMenuBarHandler, setDefaultMenuBar, void, $JMenuBar*)},
		{"setPreferencesMenuItemEnabled", "(Z)V", nullptr, 0, $virtualMethod(_AppMenuBarHandler, setPreferencesMenuItemEnabled, void, bool)},
		{"setPreferencesMenuItemVisible", "(Z)V", nullptr, 0, $virtualMethod(_AppMenuBarHandler, setPreferencesMenuItemVisible, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.eawt._AppMenuBarHandler",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(_AppMenuBarHandler, name, initialize, &classInfo$$, _AppMenuBarHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(_AppMenuBarHandler);
	});
	return class$;
}

$Class* _AppMenuBarHandler::class$ = nullptr;

		} // eawt
	} // apple
} // com