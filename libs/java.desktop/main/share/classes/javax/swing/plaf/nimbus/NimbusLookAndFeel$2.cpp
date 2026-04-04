#include <javax/swing/plaf/nimbus/NimbusLookAndFeel$2.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/nimbus/TableScrollPaneCorner.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $TableScrollPaneCorner = ::javax::swing::plaf::nimbus::TableScrollPaneCorner;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void NimbusLookAndFeel$2::init$($NimbusLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* NimbusLookAndFeel$2::createValue($UIDefaults* table) {
	return $of($new($TableScrollPaneCorner));
}

NimbusLookAndFeel$2::NimbusLookAndFeel$2() {
}

$Class* NimbusLookAndFeel$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(NimbusLookAndFeel$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;)V", nullptr, 0, $method(NimbusLookAndFeel$2, init$, void, $NimbusLookAndFeel*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(NimbusLookAndFeel$2, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.nimbus.NimbusLookAndFeel",
		"getDefaults",
		"()Ljavax/swing/UIDefaults;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.nimbus.NimbusLookAndFeel$2", nullptr, nullptr, 0},
		{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.NimbusLookAndFeel$2",
		"java.lang.Object",
		"javax.swing.UIDefaults$ActiveValue",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.nimbus.NimbusLookAndFeel"
	};
	$loadClass(NimbusLookAndFeel$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NimbusLookAndFeel$2);
	});
	return class$;
}

$Class* NimbusLookAndFeel$2::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax