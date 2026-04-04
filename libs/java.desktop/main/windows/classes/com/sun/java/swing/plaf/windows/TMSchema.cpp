#include <com/sun/java/swing/plaf/windows/TMSchema.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void TMSchema::init$() {
}

TMSchema::TMSchema() {
}

$Class* TMSchema::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TMSchema, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.TMSchema$TypeEnum", "com.sun.java.swing.plaf.windows.TMSchema", "TypeEnum", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{"com.sun.java.swing.plaf.windows.TMSchema$Prop", "com.sun.java.swing.plaf.windows.TMSchema", "Prop", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{"com.sun.java.swing.plaf.windows.TMSchema$State", "com.sun.java.swing.plaf.windows.TMSchema", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{"com.sun.java.swing.plaf.windows.TMSchema$Part", "com.sun.java.swing.plaf.windows.TMSchema", "Part", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{"com.sun.java.swing.plaf.windows.TMSchema$Control", "com.sun.java.swing.plaf.windows.TMSchema", "Control", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.TMSchema",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.TMSchema$TypeEnum,com.sun.java.swing.plaf.windows.TMSchema$Prop,com.sun.java.swing.plaf.windows.TMSchema$State,com.sun.java.swing.plaf.windows.TMSchema$Part,com.sun.java.swing.plaf.windows.TMSchema$Control"
	};
	$loadClass(TMSchema, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TMSchema);
	});
	return class$;
}

$Class* TMSchema::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com