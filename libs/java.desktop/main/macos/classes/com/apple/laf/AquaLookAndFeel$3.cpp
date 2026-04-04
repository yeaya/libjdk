#include <com/apple/laf/AquaLookAndFeel$3.h>
#include <com/apple/laf/AquaLookAndFeel.h>
#include <javax/swing/DefaultListCellRenderer$UIResource.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $AquaLookAndFeel = ::com::apple::laf::AquaLookAndFeel;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListCellRenderer$UIResource = ::javax::swing::DefaultListCellRenderer$UIResource;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace com {
	namespace apple {
		namespace laf {

void AquaLookAndFeel$3::init$($AquaLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* AquaLookAndFeel$3::createValue($UIDefaults* defaultsTable) {
	return $of($new($DefaultListCellRenderer$UIResource));
}

AquaLookAndFeel$3::AquaLookAndFeel$3() {
}

$Class* AquaLookAndFeel$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaLookAndFeel$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaLookAndFeel;)V", nullptr, 0, $method(AquaLookAndFeel$3, init$, void, $AquaLookAndFeel*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$3, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaLookAndFeel",
		"initComponentDefaults",
		"(Ljavax/swing/UIDefaults;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaLookAndFeel$3", nullptr, nullptr, 0},
		{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaLookAndFeel$3",
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
		"com.apple.laf.AquaLookAndFeel"
	};
	$loadClass(AquaLookAndFeel$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$3);
	});
	return class$;
}

$Class* AquaLookAndFeel$3::class$ = nullptr;

		} // laf
	} // apple
} // com