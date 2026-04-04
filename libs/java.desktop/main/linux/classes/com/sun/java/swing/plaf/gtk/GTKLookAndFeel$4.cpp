#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$4.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <javax/swing/LayoutStyle.h>
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

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$ints* GTKLookAndFeel$4::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement = nullptr;

void GTKLookAndFeel$4::clinit$($Class* clazz) {
	$assignStatic(GTKLookAndFeel$4::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement, $new($ints, $($LayoutStyle$ComponentPlacement::values())->length));
	{
		try {
			GTKLookAndFeel$4::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement->set($LayoutStyle$ComponentPlacement::INDENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			GTKLookAndFeel$4::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement->set($LayoutStyle$ComponentPlacement::RELATED->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			GTKLookAndFeel$4::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement->set($LayoutStyle$ComponentPlacement::UNRELATED->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

GTKLookAndFeel$4::GTKLookAndFeel$4() {
}

$Class* GTKLookAndFeel$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKLookAndFeel$4, $SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.gtk.GTKLookAndFeel",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$4", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$4",
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
		"com.sun.java.swing.plaf.gtk.GTKLookAndFeel"
	};
	$loadClass(GTKLookAndFeel$4, name, initialize, &classInfo$$, GTKLookAndFeel$4::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GTKLookAndFeel$4);
	});
	return class$;
}

$Class* GTKLookAndFeel$4::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com