#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void GetPropertyAction::init$($String* key) {
	$set(this, key, key);
}

$Object* GetPropertyAction::run() {
	return $of($System::getProperty(this->key));
}

GetPropertyAction::GetPropertyAction() {
}

$Class* GetPropertyAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"key", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(GetPropertyAction, key)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(GetPropertyAction, init$, void, $String*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(GetPropertyAction, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.jmx.mbeanserver.GetPropertyAction",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;"
	};
	$loadClass(GetPropertyAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetPropertyAction);
	});
	return class$;
}

$Class* GetPropertyAction::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com