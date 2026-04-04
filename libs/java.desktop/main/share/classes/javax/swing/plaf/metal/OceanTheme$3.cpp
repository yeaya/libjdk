#include <javax/swing/plaf/metal/OceanTheme$3.h>
#include <javax/swing/Icon.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/metal/OceanTheme$IFIcon.h>
#include <javax/swing/plaf/metal/OceanTheme.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $UIDefaults = ::javax::swing::UIDefaults;
using $OceanTheme = ::javax::swing::plaf::metal::OceanTheme;
using $OceanTheme$IFIcon = ::javax::swing::plaf::metal::OceanTheme$IFIcon;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void OceanTheme$3::init$($OceanTheme* this$0) {
	$set(this, this$0, this$0);
}

$Object* OceanTheme$3::createValue($UIDefaults* table) {
	$useLocalObjectStack();
	$var($Icon, var$0, this->this$0->getHastenedIcon("icons/ocean/minimize.gif"_s, table));
	return $of($new($OceanTheme$IFIcon, var$0, $(this->this$0->getHastenedIcon("icons/ocean/minimize-pressed.gif"_s, table))));
}

OceanTheme$3::OceanTheme$3() {
}

$Class* OceanTheme$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/OceanTheme;", nullptr, $FINAL | $SYNTHETIC, $field(OceanTheme$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/OceanTheme;)V", nullptr, 0, $method(OceanTheme$3, init$, void, $OceanTheme*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(OceanTheme$3, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.metal.OceanTheme",
		"addCustomEntriesToTable",
		"(Ljavax/swing/UIDefaults;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.OceanTheme$3", nullptr, nullptr, 0},
		{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.OceanTheme$3",
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
		"javax.swing.plaf.metal.OceanTheme"
	};
	$loadClass(OceanTheme$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OceanTheme$3);
	});
	return class$;
}

$Class* OceanTheme$3::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax