#include <java/awt/ModalEventFilter$1.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dialog.h>
#include <java/awt/ModalEventFilter.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef APPLICATION_MODAL
#undef DOCUMENT_MODAL
#undef TOOLKIT_MODAL

using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace java {
	namespace awt {

$ints* ModalEventFilter$1::$SwitchMap$java$awt$Dialog$ModalityType = nullptr;

void ModalEventFilter$1::clinit$($Class* clazz) {
	$assignStatic(ModalEventFilter$1::$SwitchMap$java$awt$Dialog$ModalityType, $new($ints, $($Dialog$ModalityType::values())->length));
	{
		try {
			ModalEventFilter$1::$SwitchMap$java$awt$Dialog$ModalityType->set($Dialog$ModalityType::DOCUMENT_MODAL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ModalEventFilter$1::$SwitchMap$java$awt$Dialog$ModalityType->set($Dialog$ModalityType::APPLICATION_MODAL->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ModalEventFilter$1::$SwitchMap$java$awt$Dialog$ModalityType->set($Dialog$ModalityType::TOOLKIT_MODAL->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ModalEventFilter$1::ModalEventFilter$1() {
}

$Class* ModalEventFilter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$awt$Dialog$ModalityType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ModalEventFilter$1, $SwitchMap$java$awt$Dialog$ModalityType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.ModalEventFilter",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.ModalEventFilter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.awt.ModalEventFilter$1",
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
		"java.awt.ModalEventFilter"
	};
	$loadClass(ModalEventFilter$1, name, initialize, &classInfo$$, ModalEventFilter$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ModalEventFilter$1);
	});
	return class$;
}

$Class* ModalEventFilter$1::class$ = nullptr;

	} // awt
} // java