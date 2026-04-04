#include <com/sun/media/sound/JSSecurityManager$1.h>
#include <com/sun/media/sound/JSSecurityManager.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServiceLoader = ::java::util::ServiceLoader;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void JSSecurityManager$1::init$($Class* val$providerClass) {
	$set(this, val$providerClass, val$providerClass);
}

$Object* JSSecurityManager$1::run() {
	$beforeCallerSensitive();
	return $$nc($ServiceLoader::load(this->val$providerClass))->iterator();
}

JSSecurityManager$1::JSSecurityManager$1() {
}

$Class* JSSecurityManager$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$providerClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(JSSecurityManager$1, val$providerClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "()V", 0, $method(JSSecurityManager$1, init$, void, $Class*)},
		{"run", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TT;>;", $PUBLIC, $virtualMethod(JSSecurityManager$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.JSSecurityManager",
		"getProviders",
		"(Ljava/lang/Class;)Ljava/util/List;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.JSSecurityManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.JSSecurityManager$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/Iterator<TT;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.JSSecurityManager"
	};
	$loadClass(JSSecurityManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JSSecurityManager$1);
	});
	return class$;
}

$Class* JSSecurityManager$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com