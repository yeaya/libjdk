#include <javax/swing/plaf/synth/SynthTableHeaderUI$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/SortOrder.h>
#include <javax/swing/plaf/synth/SynthTableHeaderUI.h>
#include <jcpp.h>

#undef ASCENDING
#undef DESCENDING
#undef UNSORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $SortOrder = ::javax::swing::SortOrder;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$ints* SynthTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder = nullptr;

void SynthTableHeaderUI$1::clinit$($Class* clazz) {
	$assignStatic(SynthTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder, $new($ints, $($SortOrder::values())->length));
	{
		try {
			SynthTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder->set($SortOrder::ASCENDING->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SynthTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder->set($SortOrder::DESCENDING->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SynthTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder->set($SortOrder::UNSORTED->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

SynthTableHeaderUI$1::SynthTableHeaderUI$1() {
}

$Class* SynthTableHeaderUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$swing$SortOrder", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SynthTableHeaderUI$1, $SwitchMap$javax$swing$SortOrder)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.synth.SynthTableHeaderUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthTableHeaderUI$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.swing.plaf.synth.SynthTableHeaderUI$1",
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
		"javax.swing.plaf.synth.SynthTableHeaderUI"
	};
	$loadClass(SynthTableHeaderUI$1, name, initialize, &classInfo$$, SynthTableHeaderUI$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SynthTableHeaderUI$1);
	});
	return class$;
}

$Class* SynthTableHeaderUI$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax