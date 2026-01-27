#include <java/awt/im/spi/InputMethod.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Rectangle.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <java/lang/Character$Subset.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $Character$SubsetArray = $Array<::java::lang::Character$Subset>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Rectangle = ::java::awt::Rectangle;
using $InputMethodContext = ::java::awt::im::spi::InputMethodContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace java {
	namespace awt {
		namespace im {
			namespace spi {

$MethodInfo _InputMethod_MethodInfo_[] = {
	{"activate", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethod, activate, void)},
	{"deactivate", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethod, deactivate, void, bool)},
	{"dispatchEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethod, dispatchEvent, void, $AWTEvent*)},
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethod, dispose, void)},
	{"endComposition", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethod, endComposition, void)},
	{"getControlObject", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethod, getControlObject, $Object*)},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethod, getLocale, $Locale*)},
	{"hideWindows", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethod, hideWindows, void)},
	{"isCompositionEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethod, isCompositionEnabled, bool)},
	{"notifyClientWindowChange", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethod, notifyClientWindowChange, void, $Rectangle*)},
	{"reconvert", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethod, reconvert, void)},
	{"removeNotify", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethod, removeNotify, void)},
	{"setCharacterSubsets", "([Ljava/lang/Character$Subset;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethod, setCharacterSubsets, void, $Character$SubsetArray*)},
	{"setCompositionEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethod, setCompositionEnabled, void, bool)},
	{"setInputMethodContext", "(Ljava/awt/im/spi/InputMethodContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethod, setInputMethodContext, void, $InputMethodContext*)},
	{"setLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethod, setLocale, bool, $Locale*)},
	{}
};

$ClassInfo _InputMethod_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.im.spi.InputMethod",
	nullptr,
	nullptr,
	nullptr,
	_InputMethod_MethodInfo_
};

$Object* allocate$InputMethod($Class* clazz) {
	return $of($alloc(InputMethod));
}

$Class* InputMethod::load$($String* name, bool initialize) {
	$loadClass(InputMethod, name, initialize, &_InputMethod_ClassInfo_, allocate$InputMethod);
	return class$;
}

$Class* InputMethod::class$ = nullptr;

			} // spi
		} // im
	} // awt
} // java