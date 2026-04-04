#include <sun/lwawt/macosx/CPlatformComponent.h>
#include <java/awt/Insets.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <jcpp.h>

using $Insets = ::java::awt::Insets;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $PlatformWindow = ::sun::lwawt::PlatformWindow;
using $CFRetainedResource = ::sun::lwawt::macosx::CFRetainedResource;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPlatformComponent$$Lambda$lambda$setBounds$0 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformComponent$$Lambda$lambda$setBounds$0, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CPlatformComponent* inst, int32_t x, $Insets* insets, int32_t y, int32_t w, int32_t h) {
		$set(this, inst$, inst);
		this->x = x;
		$set(this, insets, insets);
		this->y = y;
		this->w = w;
		this->h = h;
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$setBounds$0(x, insets, y, w, h, ptr);
	}
	CPlatformComponent* inst$ = nullptr;
	int32_t x = 0;
	$Insets* insets = nullptr;
	int32_t y = 0;
	int32_t w = 0;
	int32_t h = 0;
};
$Class* CPlatformComponent$$Lambda$lambda$setBounds$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CPlatformComponent$$Lambda$lambda$setBounds$0, inst$)},
		{"x", "I", nullptr, $PUBLIC, $field(CPlatformComponent$$Lambda$lambda$setBounds$0, x)},
		{"insets", "Ljava/awt/Insets;", nullptr, $PUBLIC, $field(CPlatformComponent$$Lambda$lambda$setBounds$0, insets)},
		{"y", "I", nullptr, $PUBLIC, $field(CPlatformComponent$$Lambda$lambda$setBounds$0, y)},
		{"w", "I", nullptr, $PUBLIC, $field(CPlatformComponent$$Lambda$lambda$setBounds$0, w)},
		{"h", "I", nullptr, $PUBLIC, $field(CPlatformComponent$$Lambda$lambda$setBounds$0, h)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CPlatformComponent;ILjava/awt/Insets;III)V", nullptr, $PUBLIC, $method(CPlatformComponent$$Lambda$lambda$setBounds$0, init$, void, CPlatformComponent*, int32_t, $Insets*, int32_t, int32_t, int32_t)},
		{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CPlatformComponent$$Lambda$lambda$setBounds$0, run, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.lwawt.macosx.CPlatformComponent$$Lambda$lambda$setBounds$0",
		"java.lang.Object",
		"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CPlatformComponent$$Lambda$lambda$setBounds$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CPlatformComponent$$Lambda$lambda$setBounds$0);
	});
	return class$;
}
$Class* CPlatformComponent$$Lambda$lambda$setBounds$0::class$ = nullptr;

void CPlatformComponent::finalize() {
	this->$CFRetainedResource::finalize();
}

int32_t CPlatformComponent::hashCode() {
	 return this->$CFRetainedResource::hashCode();
}

bool CPlatformComponent::equals(Object$* arg0) {
	 return this->$CFRetainedResource::equals(arg0);
}

$Object* CPlatformComponent::clone() {
	 return this->$CFRetainedResource::clone();
}

$String* CPlatformComponent::toString() {
	 return this->$CFRetainedResource::toString();
}

void CPlatformComponent::init$() {
	$CFRetainedResource::init$(0, true);
}

int64_t CPlatformComponent::getPointer() {
	return this->ptr;
}

void CPlatformComponent::initialize($PlatformWindow* platformWindow) {
	$set(this, platformWindow, platformWindow);
	setPtr(nativeCreateComponent($nc(platformWindow)->getLayerPtr()));
}

void CPlatformComponent::setBounds(int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalObjectStack();
	$var($Insets, insets, $$nc($nc(this->platformWindow)->getPeer())->getInsets());
	execute($$new(CPlatformComponent$$Lambda$lambda$setBounds$0, this, x, insets, y, w, h));
}

void CPlatformComponent::dispose() {
	$CFRetainedResource::dispose();
}

int64_t CPlatformComponent::nativeCreateComponent(int64_t windowLayer) {
	$prepareNative(nativeCreateComponent, int64_t, int64_t windowLayer);
	int64_t $ret = $invokeNative(windowLayer);
	$finishNative();
	return $ret;
}

void CPlatformComponent::nativeSetBounds(int64_t ptr, int32_t x, int32_t y, int32_t w, int32_t h) {
	$prepareNative(nativeSetBounds, void, int64_t ptr, int32_t x, int32_t y, int32_t w, int32_t h);
	$invokeNative(ptr, x, y, w, h);
	$finishNative();
}

void CPlatformComponent::lambda$setBounds$0(int32_t x, $Insets* insets, int32_t y, int32_t w, int32_t h, int64_t ptr) {
	nativeSetBounds(ptr, x - $nc(insets)->left, y - $nc(insets)->top, w, h);
}

CPlatformComponent::CPlatformComponent() {
}

$Class* CPlatformComponent::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.lwawt.macosx.CPlatformComponent$$Lambda$lambda$setBounds$0")) {
			return CPlatformComponent$$Lambda$lambda$setBounds$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"platformWindow", "Lsun/lwawt/PlatformWindow;", nullptr, $PRIVATE | $VOLATILE, $field(CPlatformComponent, platformWindow)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(CPlatformComponent, init$, void)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(CPlatformComponent, dispose, void)},
		{"getPointer", "()J", nullptr, $PUBLIC, $virtualMethod(CPlatformComponent, getPointer, int64_t)},
		{"initialize", "(Lsun/lwawt/PlatformWindow;)V", nullptr, $PUBLIC, $virtualMethod(CPlatformComponent, initialize, void, $PlatformWindow*)},
		{"lambda$setBounds$0", "(ILjava/awt/Insets;IIIJ)V", nullptr, $PRIVATE | $SYNTHETIC, $method(CPlatformComponent, lambda$setBounds$0, void, int32_t, $Insets*, int32_t, int32_t, int32_t, int64_t)},
		{"nativeCreateComponent", "(J)J", nullptr, $PRIVATE | $NATIVE, $method(CPlatformComponent, nativeCreateComponent, int64_t, int64_t)},
		{"nativeSetBounds", "(JIIII)V", nullptr, $PRIVATE | $NATIVE, $method(CPlatformComponent, nativeSetBounds, void, int64_t, int32_t, int32_t, int32_t, int32_t)},
		{"setBounds", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(CPlatformComponent, setBounds, void, int32_t, int32_t, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CPlatformComponent",
		"sun.lwawt.macosx.CFRetainedResource",
		"sun.lwawt.PlatformComponent",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CPlatformComponent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CPlatformComponent));
	});
	return class$;
}

$Class* CPlatformComponent::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun