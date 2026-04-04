#include <sun/rmi/server/LoaderHandler$1.h>
#include <java/lang/ClassLoader.h>
#include <java/net/URL.h>
#include <sun/rmi/server/LoaderHandler$Loader.h>
#include <sun/rmi/server/LoaderHandler.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LoaderHandler$Loader = ::sun::rmi::server::LoaderHandler$Loader;

namespace sun {
	namespace rmi {
		namespace server {

void LoaderHandler$1::init$($URLArray* val$urls, $ClassLoader* val$parent) {
	$set(this, val$urls, val$urls);
	$set(this, val$parent, val$parent);
}

$Object* LoaderHandler$1::run() {
	return $of($new($LoaderHandler$Loader, this->val$urls, this->val$parent));
}

LoaderHandler$1::LoaderHandler$1() {
}

$Class* LoaderHandler$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$parent", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(LoaderHandler$1, val$parent)},
		{"val$urls", "[Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(LoaderHandler$1, val$urls)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/net/URL;Ljava/lang/ClassLoader;)V", "()V", 0, $method(LoaderHandler$1, init$, void, $URLArray*, $ClassLoader*)},
		{"run", "()Lsun/rmi/server/LoaderHandler$Loader;", nullptr, $PUBLIC, $virtualMethod(LoaderHandler$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.server.LoaderHandler",
		"lookupLoader",
		"([Ljava/net/URL;Ljava/lang/ClassLoader;)Lsun/rmi/server/LoaderHandler$Loader;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.server.LoaderHandler$1", nullptr, nullptr, 0},
		{"sun.rmi.server.LoaderHandler$Loader", "sun.rmi.server.LoaderHandler", "Loader", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.server.LoaderHandler$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/rmi/server/LoaderHandler$Loader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.server.LoaderHandler"
	};
	$loadClass(LoaderHandler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LoaderHandler$1);
	});
	return class$;
}

$Class* LoaderHandler$1::class$ = nullptr;

		} // server
	} // rmi
} // sun