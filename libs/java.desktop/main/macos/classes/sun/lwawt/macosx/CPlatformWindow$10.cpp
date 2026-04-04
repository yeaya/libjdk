#include <sun/lwawt/macosx/CPlatformWindow$10.h>
#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <java/io/File.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

using $ClientPropertyApplicator$Property = ::com::apple::laf::ClientPropertyApplicator$Property;
using $File = ::java::io::File;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPlatformWindow$10$$Lambda$lambda$applyProperty$0 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$10$$Lambda$lambda$applyProperty$0, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow$10::lambda$applyProperty$0(ptr);
	}
};
$Class* CPlatformWindow$10$$Lambda$lambda$applyProperty$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CPlatformWindow$10$$Lambda$lambda$applyProperty$0, init$, void)},
		{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CPlatformWindow$10$$Lambda$lambda$applyProperty$0, run, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.lwawt.macosx.CPlatformWindow$10$$Lambda$lambda$applyProperty$0",
		"java.lang.Object",
		"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(CPlatformWindow$10$$Lambda$lambda$applyProperty$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CPlatformWindow$10$$Lambda$lambda$applyProperty$0);
	});
	return class$;
}
$Class* CPlatformWindow$10$$Lambda$lambda$applyProperty$0::class$ = nullptr;

class CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($String* filename) {
		$set(this, filename, filename);
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow$10::lambda$applyProperty$1(filename, ptr);
	}
	$String* filename = nullptr;
};
$Class* CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"filename", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1, filename)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1, init$, void, $String*)},
		{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1, run, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.lwawt.macosx.CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1",
		"java.lang.Object",
		"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1);
	});
	return class$;
}
$Class* CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1::class$ = nullptr;

void CPlatformWindow$10::init$($String* name) {
	$ClientPropertyApplicator$Property::init$(name);
}

void CPlatformWindow$10::applyProperty($CPlatformWindow* c, Object$* value) {
	$useLocalObjectStack();
	if (value == nullptr || !($instanceOf($File, value))) {
		$nc(c)->execute($$new(CPlatformWindow$10$$Lambda$lambda$applyProperty$0));
		return;
	}
	$var($String, filename, $nc($cast($File, value))->getAbsolutePath());
	$nc(c)->execute($$new(CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1, filename));
}

void CPlatformWindow$10::applyProperty(Object$* c, Object$* value) {
	this->applyProperty($cast($CPlatformWindow, c), value);
}

void CPlatformWindow$10::lambda$applyProperty$1($String* filename, int64_t ptr) {
	$init(CPlatformWindow$10);
	$CPlatformWindow::nativeSetNSWindowRepresentedFilename(ptr, filename);
}

void CPlatformWindow$10::lambda$applyProperty$0(int64_t ptr) {
	$init(CPlatformWindow$10);
	$CPlatformWindow::nativeSetNSWindowRepresentedFilename(ptr, nullptr);
}

CPlatformWindow$10::CPlatformWindow$10() {
}

$Class* CPlatformWindow$10::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.lwawt.macosx.CPlatformWindow$10$$Lambda$lambda$applyProperty$0")) {
			return CPlatformWindow$10$$Lambda$lambda$applyProperty$0::load$(name, initialize);
		}
		if (name->equals("sun.lwawt.macosx.CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1")) {
			return CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(CPlatformWindow$10, init$, void, $String*)},
		{"applyProperty", "(Lsun/lwawt/macosx/CPlatformWindow;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CPlatformWindow$10, applyProperty, void, $CPlatformWindow*, Object$*)},
		{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(CPlatformWindow$10, applyProperty, void, Object$*, Object$*)},
		{"lambda$applyProperty$0", "(J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CPlatformWindow$10, lambda$applyProperty$0, void, int64_t)},
		{"lambda$applyProperty$1", "(Ljava/lang/String;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CPlatformWindow$10, lambda$applyProperty$1, void, $String*, int64_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CPlatformWindow",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CPlatformWindow$10", nullptr, nullptr, 0},
		{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CPlatformWindow$10",
		"com.apple.laf.ClientPropertyApplicator$Property",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/ClientPropertyApplicator$Property<Lsun/lwawt/macosx/CPlatformWindow;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CPlatformWindow"
	};
	$loadClass(CPlatformWindow$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CPlatformWindow$10);
	});
	return class$;
}

$Class* CPlatformWindow$10::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun