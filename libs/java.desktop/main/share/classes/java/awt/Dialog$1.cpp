#include <java/awt/Dialog$1.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dialog.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef APPLICATION_MODAL
#undef DOCUMENT_MODAL
#undef MODELESS
#undef TOOLKIT_MODAL

using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace java {
	namespace awt {

$ints* Dialog$1::$SwitchMap$java$awt$Dialog$ModalityType = nullptr;

void Dialog$1::clinit$($Class* clazz) {
	$assignStatic(Dialog$1::$SwitchMap$java$awt$Dialog$ModalityType, $new($ints, $($Dialog$ModalityType::values())->length));
	{
		try {
			Dialog$1::$SwitchMap$java$awt$Dialog$ModalityType->set($Dialog$ModalityType::MODELESS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Dialog$1::$SwitchMap$java$awt$Dialog$ModalityType->set($Dialog$ModalityType::DOCUMENT_MODAL->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Dialog$1::$SwitchMap$java$awt$Dialog$ModalityType->set($Dialog$ModalityType::APPLICATION_MODAL->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Dialog$1::$SwitchMap$java$awt$Dialog$ModalityType->set($Dialog$ModalityType::TOOLKIT_MODAL->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Dialog$1::Dialog$1() {
}

$Class* Dialog$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$awt$Dialog$ModalityType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Dialog$1, $SwitchMap$java$awt$Dialog$ModalityType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.Dialog",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Dialog$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.awt.Dialog$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Dialog"
	};
	$loadClass(Dialog$1, name, initialize, &classInfo$$, Dialog$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Dialog$1);
	});
	return class$;
}

$Class* Dialog$1::class$ = nullptr;

	} // awt
} // java