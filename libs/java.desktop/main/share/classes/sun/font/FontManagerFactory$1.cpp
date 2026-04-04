#include <sun/font/FontManagerFactory$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InternalError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <sun/font/FontManager.h>
#include <sun/font/FontManagerFactory.h>
#include <jcpp.h>

#undef DEFAULT_CLASS

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $FontManager = ::sun::font::FontManager;
using $FontManagerFactory = ::sun::font::FontManagerFactory;

namespace sun {
	namespace font {

void FontManagerFactory$1::init$() {
}

$Object* FontManagerFactory$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$init($FontManagerFactory);
		$var($String, fmClassName, $System::getProperty("sun.font.fontmanager"_s, $FontManagerFactory::DEFAULT_CLASS));
		$var($ClassLoader, cl, $ClassLoader::getSystemClassLoader());
		$Class* fmClass = $Class::forName(fmClassName, true, cl);
		$assignStatic($FontManagerFactory::instance, $cast($FontManager, $$nc(fmClass->getDeclaredConstructor($$new($ClassArray, 0)))->newInstance($$new($ObjectArray, 0))));
	} catch ($ReflectiveOperationException& ex) {
		$throwNew($InternalError, ex);
	}
	return nullptr;
}

FontManagerFactory$1::FontManagerFactory$1() {
}

$Class* FontManagerFactory$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FontManagerFactory$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FontManagerFactory$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.FontManagerFactory",
		"getInstance",
		"()Lsun/font/FontManager;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.FontManagerFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.FontManagerFactory$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.FontManagerFactory"
	};
	$loadClass(FontManagerFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontManagerFactory$1);
	});
	return class$;
}

$Class* FontManagerFactory$1::class$ = nullptr;

	} // font
} // sun