#include <sun/awt/AWTAccessor$KeyboardFocusManagerAccessor.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Window = ::java::awt::Window;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$KeyboardFocusManagerAccessor_MethodInfo_[] = {
	{"getCurrentFocusCycleRoot", "()Ljava/awt/Container;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$KeyboardFocusManagerAccessor, getCurrentFocusCycleRoot, $Container*)},
	{"getCurrentKeyboardFocusManager", "(Lsun/awt/AppContext;)Ljava/awt/KeyboardFocusManager;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$KeyboardFocusManagerAccessor, getCurrentKeyboardFocusManager, $KeyboardFocusManager*, $AppContext*)},
	{"getMostRecentFocusOwner", "(Ljava/awt/Window;)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$KeyboardFocusManagerAccessor, getMostRecentFocusOwner, $Component*, $Window*)},
	{"processSynchronousLightweightTransfer", "(Ljava/awt/Component;Ljava/awt/Component;ZZJ)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$KeyboardFocusManagerAccessor, processSynchronousLightweightTransfer, bool, $Component*, $Component*, bool, bool, int64_t)},
	{"removeLastFocusRequest", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$KeyboardFocusManagerAccessor, removeLastFocusRequest, void, $Component*)},
	{"setMostRecentFocusOwner", "(Ljava/awt/Window;Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$KeyboardFocusManagerAccessor, setMostRecentFocusOwner, void, $Window*, $Component*)},
	{"shouldNativelyFocusHeavyweight", "(Ljava/awt/Component;Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$KeyboardFocusManagerAccessor, shouldNativelyFocusHeavyweight, int32_t, $Component*, $Component*, bool, bool, int64_t, $FocusEvent$Cause*)},
	{}
};

$InnerClassInfo _AWTAccessor$KeyboardFocusManagerAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$KeyboardFocusManagerAccessor", "sun.awt.AWTAccessor", "KeyboardFocusManagerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$KeyboardFocusManagerAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$KeyboardFocusManagerAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$KeyboardFocusManagerAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$KeyboardFocusManagerAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$KeyboardFocusManagerAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$KeyboardFocusManagerAccessor));
}

$Class* AWTAccessor$KeyboardFocusManagerAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$KeyboardFocusManagerAccessor, name, initialize, &_AWTAccessor$KeyboardFocusManagerAccessor_ClassInfo_, allocate$AWTAccessor$KeyboardFocusManagerAccessor);
	return class$;
}

$Class* AWTAccessor$KeyboardFocusManagerAccessor::class$ = nullptr;

	} // awt
} // sun