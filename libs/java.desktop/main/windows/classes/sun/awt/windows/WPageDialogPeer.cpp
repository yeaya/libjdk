#include <sun/awt/windows/WPageDialogPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WPageDialog.h>
#include <sun/awt/windows/WPrintDialog.h>
#include <sun/awt/windows/WPrintDialogPeer.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $WPageDialog = ::sun::awt::windows::WPageDialog;
using $WPrintDialog = ::sun::awt::windows::WPrintDialog;
using $WPrintDialogPeer = ::sun::awt::windows::WPrintDialogPeer;

namespace sun {
	namespace awt {
		namespace windows {

class WPageDialogPeer$$Lambda$lambda$show$0 : public $Runnable {
	$class(WPageDialogPeer$$Lambda$lambda$show$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(WPageDialogPeer* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$show$0();
	}
	WPageDialogPeer* inst$ = nullptr;
};
$Class* WPageDialogPeer$$Lambda$lambda$show$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WPageDialogPeer$$Lambda$lambda$show$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WPageDialogPeer;)V", nullptr, $PUBLIC, $method(WPageDialogPeer$$Lambda$lambda$show$0, init$, void, WPageDialogPeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WPageDialogPeer$$Lambda$lambda$show$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WPageDialogPeer$$Lambda$lambda$show$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WPageDialogPeer$$Lambda$lambda$show$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WPageDialogPeer$$Lambda$lambda$show$0);
	});
	return class$;
}
$Class* WPageDialogPeer$$Lambda$lambda$show$0::class$ = nullptr;

void WPageDialogPeer::init$($WPageDialog* target) {
	$WPrintDialogPeer::init$(target);
}

bool WPageDialogPeer::_show() {
	$prepareNative(_show, bool);
	bool $ret = $invokeNative();
	$finishNative();
	return $ret;
}

void WPageDialogPeer::show() {
	$useLocalObjectStack();
	$var($Runnable, runnable, $new(WPageDialogPeer$$Lambda$lambda$show$0, this));
	$$new($Thread, nullptr, runnable, "PageDialog"_s, 0, false)->start();
}

void WPageDialogPeer::lambda$show$0() {
	try {
		$nc($cast($WPrintDialog, this->target))->setRetVal(_show());
	} catch ($Exception& e) {
	}
	$nc($cast($WPrintDialog, this->target))->setVisible(false);
}

WPageDialogPeer::WPageDialogPeer() {
}

$Class* WPageDialogPeer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.awt.windows.WPageDialogPeer$$Lambda$lambda$show$0")) {
			return WPageDialogPeer$$Lambda$lambda$show$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WPageDialog;)V", nullptr, 0, $method(WPageDialogPeer, init$, void, $WPageDialog*)},
		{"_show", "()Z", nullptr, $PRIVATE | $NATIVE, $method(WPageDialogPeer, _show, bool)},
		{"lambda$show$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(WPageDialogPeer, lambda$show$0, void)},
		{"show", "()V", nullptr, $PUBLIC, $virtualMethod(WPageDialogPeer, show, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.windows.WPageDialogPeer",
		"sun.awt.windows.WPrintDialogPeer",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WPageDialogPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WPageDialogPeer));
	});
	return class$;
}

$Class* WPageDialogPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun