#include <sun/awt/FontConfiguration$2.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <sun/awt/FontConfiguration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontConfiguration = ::sun::awt::FontConfiguration;

namespace sun {
	namespace awt {

void FontConfiguration$2::init$($FontConfiguration* this$0, $String* val$charsetName) {
	$set(this, this$0, this$0);
	$set(this, val$charsetName, val$charsetName);
}

$Object* FontConfiguration$2::run() {
	$beforeCallerSensitive();
	try {
		return $of($Class::forName(this->val$charsetName, true, $($ClassLoader::getSystemClassLoader())));
	} catch ($ClassNotFoundException& e) {
	}
	return nullptr;
}

FontConfiguration$2::FontConfiguration$2() {
}

$Class* FontConfiguration$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/FontConfiguration;", nullptr, $FINAL | $SYNTHETIC, $field(FontConfiguration$2, this$0)},
		{"val$charsetName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(FontConfiguration$2, val$charsetName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/FontConfiguration;Ljava/lang/String;)V", "()V", 0, $method(FontConfiguration$2, init$, void, $FontConfiguration*, $String*)},
		{"run", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(FontConfiguration$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.FontConfiguration",
		"getFontCharsetEncoder",
		"(Ljava/lang/String;Ljava/lang/String;)Ljava/nio/charset/CharsetEncoder;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.FontConfiguration$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.FontConfiguration$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Class<*>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.FontConfiguration"
	};
	$loadClass(FontConfiguration$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontConfiguration$2);
	});
	return class$;
}

$Class* FontConfiguration$2::class$ = nullptr;

	} // awt
} // sun