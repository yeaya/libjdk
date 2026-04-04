#include <javax/swing/plaf/metal/MetalLookAndFeel$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <javax/swing/LayoutStyle.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef INDENT
#undef RELATED
#undef UNRELATED

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $LayoutStyle$ComponentPlacement = ::javax::swing::LayoutStyle$ComponentPlacement;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$ints* MetalLookAndFeel$1::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement = nullptr;

void MetalLookAndFeel$1::clinit$($Class* clazz) {
	$assignStatic(MetalLookAndFeel$1::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement, $new($ints, $($LayoutStyle$ComponentPlacement::values())->length));
	{
		try {
			MetalLookAndFeel$1::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement->set($LayoutStyle$ComponentPlacement::INDENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MetalLookAndFeel$1::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement->set($LayoutStyle$ComponentPlacement::RELATED->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MetalLookAndFeel$1::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement->set($LayoutStyle$ComponentPlacement::UNRELATED->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

MetalLookAndFeel$1::MetalLookAndFeel$1() {
}

$Class* MetalLookAndFeel$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MetalLookAndFeel$1, $SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.metal.MetalLookAndFeel",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalLookAndFeel$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.swing.plaf.metal.MetalLookAndFeel$1",
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
		"javax.swing.plaf.metal.MetalLookAndFeel"
	};
	$loadClass(MetalLookAndFeel$1, name, initialize, &classInfo$$, MetalLookAndFeel$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$1);
	});
	return class$;
}

$Class* MetalLookAndFeel$1::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax