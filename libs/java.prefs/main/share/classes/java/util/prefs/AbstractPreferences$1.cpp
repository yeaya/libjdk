#include <java/util/prefs/AbstractPreferences$1.h>
#include <java/util/prefs/AbstractPreferences.h>
#include <java/util/prefs/Preferences.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractPreferences = ::java::util::prefs::AbstractPreferences;
using $Preferences = ::java::util::prefs::Preferences;

namespace java {
	namespace util {
		namespace prefs {

void AbstractPreferences$1::init$($AbstractPreferences* this$0) {
	$set(this, this$0, this$0);
}

$Object* AbstractPreferences$1::run() {
	return $of($Boolean::valueOf($equals(this->this$0->root, $Preferences::userRoot())));
}

AbstractPreferences$1::AbstractPreferences$1() {
}

$Class* AbstractPreferences$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/prefs/AbstractPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractPreferences$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/prefs/AbstractPreferences;)V", nullptr, 0, $method(AbstractPreferences$1, init$, void, $AbstractPreferences*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(AbstractPreferences$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.prefs.AbstractPreferences",
		"isUserNode",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.AbstractPreferences$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.AbstractPreferences$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.prefs.AbstractPreferences"
	};
	$loadClass(AbstractPreferences$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractPreferences$1);
	});
	return class$;
}

$Class* AbstractPreferences$1::class$ = nullptr;

		} // prefs
	} // util
} // java