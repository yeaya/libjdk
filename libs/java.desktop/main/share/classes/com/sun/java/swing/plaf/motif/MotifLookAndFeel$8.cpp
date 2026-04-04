#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel$8.h>
#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel.h>
#include <java/awt/Color.h>
#include <java/lang/Math.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <jcpp.h>

using $MotifLookAndFeel = ::com::sun::java::swing::plaf::motif::MotifLookAndFeel;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifLookAndFeel$8::init$($MotifLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* MotifLookAndFeel$8::createValue($UIDefaults* table) {
	$useLocalObjectStack();
	$var($Color, c, $nc(table)->getColor("control"_s));
	int32_t var$0 = $Math::max($cast(int32_t, ($nc(c)->getRed() * 0.85)), 0);
	int32_t var$1 = $Math::max($cast(int32_t, (c->getGreen() * 0.85)), 0);
	$var($Color, base, $new($Color, var$0, var$1, $Math::max($cast(int32_t, (c->getBlue() * 0.85)), 0)));
	return $of($new($ColorUIResource, $(base->darker())));
}

MotifLookAndFeel$8::MotifLookAndFeel$8() {
}

$Class* MotifLookAndFeel$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(MotifLookAndFeel$8, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifLookAndFeel;)V", nullptr, 0, $method(MotifLookAndFeel$8, init$, void, $MotifLookAndFeel*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MotifLookAndFeel$8, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.motif.MotifLookAndFeel",
		"initComponentDefaults",
		"(Ljavax/swing/UIDefaults;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifLookAndFeel$8", nullptr, nullptr, 0},
		{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifLookAndFeel$8",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifLookAndFeel"
	};
	$loadClass(MotifLookAndFeel$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifLookAndFeel$8);
	});
	return class$;
}

$Class* MotifLookAndFeel$8::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com