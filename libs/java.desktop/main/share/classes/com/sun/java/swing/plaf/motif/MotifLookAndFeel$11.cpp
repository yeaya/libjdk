#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel$11.h>
#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel.h>
#include <com/sun/java/swing/plaf/motif/MotifTreeUI$MotifExpandedIcon.h>
#include <javax/swing/Icon.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $MotifLookAndFeel = ::com::sun::java::swing::plaf::motif::MotifLookAndFeel;
using $MotifTreeUI$MotifExpandedIcon = ::com::sun::java::swing::plaf::motif::MotifTreeUI$MotifExpandedIcon;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifLookAndFeel$11::init$($MotifLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* MotifLookAndFeel$11::createValue($UIDefaults* table) {
	return $MotifTreeUI$MotifExpandedIcon::createExpandedIcon();
}

MotifLookAndFeel$11::MotifLookAndFeel$11() {
}

$Class* MotifLookAndFeel$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(MotifLookAndFeel$11, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifLookAndFeel;)V", nullptr, 0, $method(MotifLookAndFeel$11, init$, void, $MotifLookAndFeel*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MotifLookAndFeel$11, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.motif.MotifLookAndFeel",
		"initComponentDefaults",
		"(Ljavax/swing/UIDefaults;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifLookAndFeel$11", nullptr, nullptr, 0},
		{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifLookAndFeel$11",
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
	$loadClass(MotifLookAndFeel$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifLookAndFeel$11);
	});
	return class$;
}

$Class* MotifLookAndFeel$11::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com