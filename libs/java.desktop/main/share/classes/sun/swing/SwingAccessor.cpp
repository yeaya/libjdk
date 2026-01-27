#include <sun/swing/SwingAccessor.h>

#include <java/lang/IllegalAccessException.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/swing/JLightweightFrame.h>
#include <sun/swing/SwingAccessor$JComponentAccessor.h>
#include <sun/swing/SwingAccessor$JLightweightFrameAccessor.h>
#include <sun/swing/SwingAccessor$JTextComponentAccessor.h>
#include <sun/swing/SwingAccessor$KeyStrokeAccessor.h>
#include <sun/swing/SwingAccessor$PopupFactoryAccessor.h>
#include <sun/swing/SwingAccessor$RepaintManagerAccessor.h>
#include <sun/swing/SwingAccessor$UIDefaultsAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $JComponent = ::javax::swing::JComponent;
using $KeyStroke = ::javax::swing::KeyStroke;
using $PopupFactory = ::javax::swing::PopupFactory;
using $RepaintManager = ::javax::swing::RepaintManager;
using $UIDefaults = ::javax::swing::UIDefaults;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JLightweightFrame = ::sun::swing::JLightweightFrame;
using $SwingAccessor$JComponentAccessor = ::sun::swing::SwingAccessor$JComponentAccessor;
using $SwingAccessor$JLightweightFrameAccessor = ::sun::swing::SwingAccessor$JLightweightFrameAccessor;
using $SwingAccessor$JTextComponentAccessor = ::sun::swing::SwingAccessor$JTextComponentAccessor;
using $SwingAccessor$KeyStrokeAccessor = ::sun::swing::SwingAccessor$KeyStrokeAccessor;
using $SwingAccessor$PopupFactoryAccessor = ::sun::swing::SwingAccessor$PopupFactoryAccessor;
using $SwingAccessor$RepaintManagerAccessor = ::sun::swing::SwingAccessor$RepaintManagerAccessor;
using $SwingAccessor$UIDefaultsAccessor = ::sun::swing::SwingAccessor$UIDefaultsAccessor;

namespace sun {
	namespace swing {

$FieldInfo _SwingAccessor_FieldInfo_[] = {
	{"jComponentAccessor", "Lsun/swing/SwingAccessor$JComponentAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(SwingAccessor, jComponentAccessor)},
	{"jtextComponentAccessor", "Lsun/swing/SwingAccessor$JTextComponentAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(SwingAccessor, jtextComponentAccessor)},
	{"jLightweightFrameAccessor", "Lsun/swing/SwingAccessor$JLightweightFrameAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(SwingAccessor, jLightweightFrameAccessor)},
	{"uiDefaultsAccessor", "Lsun/swing/SwingAccessor$UIDefaultsAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(SwingAccessor, uiDefaultsAccessor)},
	{"repaintManagerAccessor", "Lsun/swing/SwingAccessor$RepaintManagerAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(SwingAccessor, repaintManagerAccessor)},
	{"popupFactoryAccessor", "Lsun/swing/SwingAccessor$PopupFactoryAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(SwingAccessor, popupFactoryAccessor)},
	{"keyStrokeAccessor", "Lsun/swing/SwingAccessor$KeyStrokeAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(SwingAccessor, keyStrokeAccessor)},
	{}
};

$MethodInfo _SwingAccessor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SwingAccessor, init$, void)},
	{"ensureClassInitialized", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $staticMethod(SwingAccessor, ensureClassInitialized, void, $Class*)},
	{"getJComponentAccessor", "()Lsun/swing/SwingAccessor$JComponentAccessor;", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingAccessor, getJComponentAccessor, $SwingAccessor$JComponentAccessor*)},
	{"getJLightweightFrameAccessor", "()Lsun/swing/SwingAccessor$JLightweightFrameAccessor;", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingAccessor, getJLightweightFrameAccessor, $SwingAccessor$JLightweightFrameAccessor*)},
	{"getJTextComponentAccessor", "()Lsun/swing/SwingAccessor$JTextComponentAccessor;", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingAccessor, getJTextComponentAccessor, $SwingAccessor$JTextComponentAccessor*)},
	{"getKeyStrokeAccessor", "()Lsun/swing/SwingAccessor$KeyStrokeAccessor;", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingAccessor, getKeyStrokeAccessor, $SwingAccessor$KeyStrokeAccessor*)},
	{"getPopupFactoryAccessor", "()Lsun/swing/SwingAccessor$PopupFactoryAccessor;", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingAccessor, getPopupFactoryAccessor, $SwingAccessor$PopupFactoryAccessor*)},
	{"getRepaintManagerAccessor", "()Lsun/swing/SwingAccessor$RepaintManagerAccessor;", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingAccessor, getRepaintManagerAccessor, $SwingAccessor$RepaintManagerAccessor*)},
	{"getUIDefaultsAccessor", "()Lsun/swing/SwingAccessor$UIDefaultsAccessor;", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingAccessor, getUIDefaultsAccessor, $SwingAccessor$UIDefaultsAccessor*)},
	{"setJComponentAccessor", "(Lsun/swing/SwingAccessor$JComponentAccessor;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingAccessor, setJComponentAccessor, void, $SwingAccessor$JComponentAccessor*)},
	{"setJLightweightFrameAccessor", "(Lsun/swing/SwingAccessor$JLightweightFrameAccessor;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingAccessor, setJLightweightFrameAccessor, void, $SwingAccessor$JLightweightFrameAccessor*)},
	{"setJTextComponentAccessor", "(Lsun/swing/SwingAccessor$JTextComponentAccessor;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingAccessor, setJTextComponentAccessor, void, $SwingAccessor$JTextComponentAccessor*)},
	{"setKeyStrokeAccessor", "(Lsun/swing/SwingAccessor$KeyStrokeAccessor;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingAccessor, setKeyStrokeAccessor, void, $SwingAccessor$KeyStrokeAccessor*)},
	{"setPopupFactoryAccessor", "(Lsun/swing/SwingAccessor$PopupFactoryAccessor;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingAccessor, setPopupFactoryAccessor, void, $SwingAccessor$PopupFactoryAccessor*)},
	{"setRepaintManagerAccessor", "(Lsun/swing/SwingAccessor$RepaintManagerAccessor;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingAccessor, setRepaintManagerAccessor, void, $SwingAccessor$RepaintManagerAccessor*)},
	{"setUIDefaultsAccessor", "(Lsun/swing/SwingAccessor$UIDefaultsAccessor;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingAccessor, setUIDefaultsAccessor, void, $SwingAccessor$UIDefaultsAccessor*)},
	{}
};

$InnerClassInfo _SwingAccessor_InnerClassesInfo_[] = {
	{"sun.swing.SwingAccessor$KeyStrokeAccessor", "sun.swing.SwingAccessor", "KeyStrokeAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.swing.SwingAccessor$PopupFactoryAccessor", "sun.swing.SwingAccessor", "PopupFactoryAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.swing.SwingAccessor$RepaintManagerAccessor", "sun.swing.SwingAccessor", "RepaintManagerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.swing.SwingAccessor$UIDefaultsAccessor", "sun.swing.SwingAccessor", "UIDefaultsAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.swing.SwingAccessor$JLightweightFrameAccessor", "sun.swing.SwingAccessor", "JLightweightFrameAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.swing.SwingAccessor$JTextComponentAccessor", "sun.swing.SwingAccessor", "JTextComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.swing.SwingAccessor$JComponentAccessor", "sun.swing.SwingAccessor", "JComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SwingAccessor_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.swing.SwingAccessor",
	"java.lang.Object",
	nullptr,
	_SwingAccessor_FieldInfo_,
	_SwingAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_SwingAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.swing.SwingAccessor$KeyStrokeAccessor,sun.swing.SwingAccessor$PopupFactoryAccessor,sun.swing.SwingAccessor$RepaintManagerAccessor,sun.swing.SwingAccessor$UIDefaultsAccessor,sun.swing.SwingAccessor$JLightweightFrameAccessor,sun.swing.SwingAccessor$JTextComponentAccessor,sun.swing.SwingAccessor$JComponentAccessor"
};

$Object* allocate$SwingAccessor($Class* clazz) {
	return $of($alloc(SwingAccessor));
}

$SwingAccessor$JComponentAccessor* SwingAccessor::jComponentAccessor = nullptr;
$SwingAccessor$JTextComponentAccessor* SwingAccessor::jtextComponentAccessor = nullptr;
$SwingAccessor$JLightweightFrameAccessor* SwingAccessor::jLightweightFrameAccessor = nullptr;
$SwingAccessor$UIDefaultsAccessor* SwingAccessor::uiDefaultsAccessor = nullptr;
$SwingAccessor$RepaintManagerAccessor* SwingAccessor::repaintManagerAccessor = nullptr;
$SwingAccessor$PopupFactoryAccessor* SwingAccessor::popupFactoryAccessor = nullptr;
$SwingAccessor$KeyStrokeAccessor* SwingAccessor::keyStrokeAccessor = nullptr;

void SwingAccessor::init$() {
}

void SwingAccessor::setJComponentAccessor($SwingAccessor$JComponentAccessor* jCompAccessor) {
	$init(SwingAccessor);
	$assignStatic(SwingAccessor::jComponentAccessor, jCompAccessor);
}

$SwingAccessor$JComponentAccessor* SwingAccessor::getJComponentAccessor() {
	$init(SwingAccessor);
	if (SwingAccessor::jComponentAccessor == nullptr) {
		$load($JComponent);
		ensureClassInitialized($JComponent::class$);
	}
	return SwingAccessor::jComponentAccessor;
}

void SwingAccessor::setJTextComponentAccessor($SwingAccessor$JTextComponentAccessor* jtca) {
	$init(SwingAccessor);
	$assignStatic(SwingAccessor::jtextComponentAccessor, jtca);
}

$SwingAccessor$JTextComponentAccessor* SwingAccessor::getJTextComponentAccessor() {
	$init(SwingAccessor);
	if (SwingAccessor::jtextComponentAccessor == nullptr) {
		$load($JTextComponent);
		ensureClassInitialized($JTextComponent::class$);
	}
	return SwingAccessor::jtextComponentAccessor;
}

void SwingAccessor::setJLightweightFrameAccessor($SwingAccessor$JLightweightFrameAccessor* accessor) {
	$init(SwingAccessor);
	$assignStatic(SwingAccessor::jLightweightFrameAccessor, accessor);
}

$SwingAccessor$JLightweightFrameAccessor* SwingAccessor::getJLightweightFrameAccessor() {
	$init(SwingAccessor);
	if (SwingAccessor::jLightweightFrameAccessor == nullptr) {
		$load($JLightweightFrame);
		ensureClassInitialized($JLightweightFrame::class$);
	}
	return SwingAccessor::jLightweightFrameAccessor;
}

void SwingAccessor::setUIDefaultsAccessor($SwingAccessor$UIDefaultsAccessor* accessor) {
	$init(SwingAccessor);
	$assignStatic(SwingAccessor::uiDefaultsAccessor, accessor);
}

$SwingAccessor$UIDefaultsAccessor* SwingAccessor::getUIDefaultsAccessor() {
	$init(SwingAccessor);
	if (SwingAccessor::uiDefaultsAccessor == nullptr) {
		$load($UIDefaults);
		ensureClassInitialized($UIDefaults::class$);
	}
	return SwingAccessor::uiDefaultsAccessor;
}

void SwingAccessor::setRepaintManagerAccessor($SwingAccessor$RepaintManagerAccessor* accessor) {
	$init(SwingAccessor);
	$assignStatic(SwingAccessor::repaintManagerAccessor, accessor);
}

$SwingAccessor$RepaintManagerAccessor* SwingAccessor::getRepaintManagerAccessor() {
	$init(SwingAccessor);
	if (SwingAccessor::repaintManagerAccessor == nullptr) {
		$load($RepaintManager);
		ensureClassInitialized($RepaintManager::class$);
	}
	return SwingAccessor::repaintManagerAccessor;
}

$SwingAccessor$PopupFactoryAccessor* SwingAccessor::getPopupFactoryAccessor() {
	$init(SwingAccessor);
	if (SwingAccessor::popupFactoryAccessor == nullptr) {
		$load($PopupFactory);
		ensureClassInitialized($PopupFactory::class$);
	}
	return SwingAccessor::popupFactoryAccessor;
}

void SwingAccessor::setPopupFactoryAccessor($SwingAccessor$PopupFactoryAccessor* popupFactoryAccessor) {
	$init(SwingAccessor);
	$assignStatic(SwingAccessor::popupFactoryAccessor, popupFactoryAccessor);
}

$SwingAccessor$KeyStrokeAccessor* SwingAccessor::getKeyStrokeAccessor() {
	$init(SwingAccessor);
	if (SwingAccessor::keyStrokeAccessor == nullptr) {
		$load($KeyStroke);
		ensureClassInitialized($KeyStroke::class$);
	}
	return SwingAccessor::keyStrokeAccessor;
}

void SwingAccessor::setKeyStrokeAccessor($SwingAccessor$KeyStrokeAccessor* accessor) {
	$init(SwingAccessor);
	$assignStatic(SwingAccessor::keyStrokeAccessor, accessor);
}

void SwingAccessor::ensureClassInitialized($Class* c) {
	$load(SwingAccessor);
	$beforeCallerSensitive();
	try {
		$nc($($MethodHandles::lookup()))->ensureInitialized(c);
	} catch ($IllegalAccessException& e) {
	}
}

SwingAccessor::SwingAccessor() {
}

$Class* SwingAccessor::load$($String* name, bool initialize) {
	$loadClass(SwingAccessor, name, initialize, &_SwingAccessor_ClassInfo_, allocate$SwingAccessor);
	return class$;
}

$Class* SwingAccessor::class$ = nullptr;

	} // swing
} // sun