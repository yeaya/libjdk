#include <com/sun/media/sound/JSSecurityManager$2.h>
#include <com/sun/media/sound/JSSecurityManager.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void JSSecurityManager$2::init$($Iterator* val$ps) {
	$set(this, val$ps, val$ps);
}

$Object* JSSecurityManager$2::run() {
	return $of($Boolean::valueOf($nc(this->val$ps)->hasNext()));
}

JSSecurityManager$2::JSSecurityManager$2() {
}

$Class* JSSecurityManager$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$ps", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(JSSecurityManager$2, val$ps)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Iterator;)V", "()V", 0, $method(JSSecurityManager$2, init$, void, $Iterator*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(JSSecurityManager$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.JSSecurityManager",
		"getProviders",
		"(Ljava/lang/Class;)Ljava/util/List;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.JSSecurityManager$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.JSSecurityManager$2",
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
		"com.sun.media.sound.JSSecurityManager"
	};
	$loadClass(JSSecurityManager$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JSSecurityManager$2);
	});
	return class$;
}

$Class* JSSecurityManager$2::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com