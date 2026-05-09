#include <sun/lwawt/macosx/CCheckboxMenuItem.h>
#include <java/awt/CheckboxMenuItem.h>
#include <java/awt/Font.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/event/ItemEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/lwawt/macosx/CCheckboxMenuItem$1.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <sun/lwawt/macosx/CMenuComponent.h>
#include <sun/lwawt/macosx/CMenuItem.h>
#include <jcpp.h>

#undef DESELECTED
#undef ITEM_STATE_CHANGED
#undef SELECTED

using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $Font = ::java::awt::Font;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SunToolkit = ::sun::awt::SunToolkit;
using $CCheckboxMenuItem$1 = ::sun::lwawt::macosx::CCheckboxMenuItem$1;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CMenuItem = ::sun::lwawt::macosx::CMenuItem;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox : public $CFRetainedResource$CFNativeAction {
	$class(CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CCheckboxMenuItem* inst) {
		$set(this, inst$, inst);
	}
	virtual void run(int64_t modelPtr) override {
		$nc(inst$)->nativeSetIsCheckbox(modelPtr);
	}
	CCheckboxMenuItem* inst$ = nullptr;
};
$Class* CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CCheckboxMenuItem;)V", nullptr, $PUBLIC, $method(CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox, init$, void, CCheckboxMenuItem*)},
		{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox, run, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.lwawt.macosx.CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox",
		"java.lang.Object",
		"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox);
	});
	return class$;
}
$Class* CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox::class$ = nullptr;

class CCheckboxMenuItem$$Lambda$lambda$setState$0$1 : public $CFRetainedResource$CFNativeAction {
	$class(CCheckboxMenuItem$$Lambda$lambda$setState$0$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CCheckboxMenuItem* inst, bool state) {
		$set(this, inst$, inst);
		this->state = state;
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$setState$0(state, ptr);
	}
	CCheckboxMenuItem* inst$ = nullptr;
	bool state = false;
};
$Class* CCheckboxMenuItem$$Lambda$lambda$setState$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CCheckboxMenuItem$$Lambda$lambda$setState$0$1, inst$)},
		{"state", "Z", nullptr, $PUBLIC, $field(CCheckboxMenuItem$$Lambda$lambda$setState$0$1, state)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CCheckboxMenuItem;Z)V", nullptr, $PUBLIC, $method(CCheckboxMenuItem$$Lambda$lambda$setState$0$1, init$, void, CCheckboxMenuItem*, bool)},
		{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CCheckboxMenuItem$$Lambda$lambda$setState$0$1, run, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.lwawt.macosx.CCheckboxMenuItem$$Lambda$lambda$setState$0$1",
		"java.lang.Object",
		"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CCheckboxMenuItem$$Lambda$lambda$setState$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CCheckboxMenuItem$$Lambda$lambda$setState$0$1);
	});
	return class$;
}
$Class* CCheckboxMenuItem$$Lambda$lambda$setState$0$1::class$ = nullptr;

void CCheckboxMenuItem::setLabel($String* label) {
	this->$CMenuItem::setLabel(label);
}

void CCheckboxMenuItem::setEnabled(bool b) {
	this->$CMenuItem::setEnabled(b);
}

void CCheckboxMenuItem::dispose() {
	this->$CMenuItem::dispose();
}

void CCheckboxMenuItem::setFont($Font* f) {
	this->$CMenuItem::setFont(f);
}

void CCheckboxMenuItem::finalize() {
	this->$CMenuItem::finalize();
}

int32_t CCheckboxMenuItem::hashCode() {
	return this->$CMenuItem::hashCode();
}

bool CCheckboxMenuItem::equals(Object$* arg0) {
	return this->$CMenuItem::equals(arg0);
}

$Object* CCheckboxMenuItem::clone() {
	return this->$CMenuItem::clone();
}

$String* CCheckboxMenuItem::toString() {
	return this->$CMenuItem::toString();
}

void CCheckboxMenuItem::nativeSetState(int64_t modelPtr, bool state) {
	$prepareNative(nativeSetState, void, int64_t modelPtr, bool state);
	$invokeNative(modelPtr, state);
	$finishNative();
}

void CCheckboxMenuItem::nativeSetIsCheckbox(int64_t modelPtr) {
	$prepareNative(nativeSetIsCheckbox, void, int64_t modelPtr);
	$invokeNative(modelPtr);
	$finishNative();
}

void CCheckboxMenuItem::init$($CheckboxMenuItem* target) {
	$CMenuItem::init$(target);
	this->fAutoToggle = true;
	this->fIsIndeterminate = false;
	execute($$new(CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox, this));
	setState($nc(target)->getState());
}

void CCheckboxMenuItem::setState(bool state) {
	execute($$new(CCheckboxMenuItem$$Lambda$lambda$setState$0$1, this, state));
}

void CCheckboxMenuItem::handleAction(bool state) {
	$useLocalObjectStack();
	$var($CheckboxMenuItem, target, $cast($CheckboxMenuItem, getTarget()));
	$SunToolkit::executeOnEventHandlerThread(target, $$new($CCheckboxMenuItem$1, this, target, state));
	$var($ItemEvent, event, $new($ItemEvent, target, $ItemEvent::ITEM_STATE_CHANGED, $($nc(target)->getLabel()), state ? $ItemEvent::SELECTED : $ItemEvent::DESELECTED));
	$SunToolkit::postEvent($($SunToolkit::targetToAppContext($(getTarget()))), event);
}

void CCheckboxMenuItem::setIsIndeterminate(bool indeterminate) {
	this->fIsIndeterminate = indeterminate;
}

bool CCheckboxMenuItem::isAutoToggle() {
	return this->fAutoToggle;
}

void CCheckboxMenuItem::setAutoToggle(bool b) {
	this->fAutoToggle = b;
}

void CCheckboxMenuItem::lambda$setState$0(bool state, int64_t ptr) {
	nativeSetState(ptr, state);
}

CCheckboxMenuItem::CCheckboxMenuItem() {
}

$Class* CCheckboxMenuItem::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.lwawt.macosx.CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox")) {
			return CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox::load$(name, initialize);
		}
		if (name->equals("sun.lwawt.macosx.CCheckboxMenuItem$$Lambda$lambda$setState$0$1")) {
			return CCheckboxMenuItem$$Lambda$lambda$setState$0$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"fAutoToggle", "Z", nullptr, $VOLATILE, $field(CCheckboxMenuItem, fAutoToggle)},
		{"fIsIndeterminate", "Z", nullptr, $VOLATILE, $field(CCheckboxMenuItem, fIsIndeterminate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/awt/CheckboxMenuItem;)V", nullptr, 0, $method(CCheckboxMenuItem, init$, void, $CheckboxMenuItem*)},
		{"handleAction", "(Z)V", nullptr, $PUBLIC, $virtualMethod(CCheckboxMenuItem, handleAction, void, bool)},
		{"isAutoToggle", "()Z", nullptr, $PRIVATE, $method(CCheckboxMenuItem, isAutoToggle, bool)},
		{"lambda$setState$0", "(ZJ)V", nullptr, $PRIVATE | $SYNTHETIC, $method(CCheckboxMenuItem, lambda$setState$0, void, bool, int64_t)},
		{"nativeSetIsCheckbox", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(CCheckboxMenuItem, nativeSetIsCheckbox, void, int64_t)},
		{"nativeSetState", "(JZ)V", nullptr, $PRIVATE | $NATIVE, $method(CCheckboxMenuItem, nativeSetState, void, int64_t, bool)},
		{"setAutoToggle", "(Z)V", nullptr, $PUBLIC, $virtualMethod(CCheckboxMenuItem, setAutoToggle, void, bool)},
		{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
		{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $FINAL},
		{"setIsIndeterminate", "(Z)V", nullptr, $PUBLIC, $virtualMethod(CCheckboxMenuItem, setIsIndeterminate, void, bool)},
		{"*setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
		{"setState", "(Z)V", nullptr, $PUBLIC, $virtualMethod(CCheckboxMenuItem, setState, void, bool)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CCheckboxMenuItem$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.lwawt.macosx.CCheckboxMenuItem",
		"sun.lwawt.macosx.CMenuItem",
		"java.awt.peer.CheckboxMenuItemPeer",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CCheckboxMenuItem$1"
	};
	$loadClass(CCheckboxMenuItem, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CCheckboxMenuItem));
	});
	return class$;
}

$Class* CCheckboxMenuItem::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun