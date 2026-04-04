#include <sun/awt/FontConfiguration$1.h>
#include <java/io/File.h>
#include <sun/awt/FontConfiguration.h>
#include <jcpp.h>

#undef FALSE

using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontConfiguration = ::sun::awt::FontConfiguration;

namespace sun {
	namespace awt {

void FontConfiguration$1::init$($FontConfiguration* this$0, $String* val$fileName) {
	$set(this, this$0, this$0);
	$set(this, val$fileName, val$fileName);
}

$Object* FontConfiguration$1::run() {
	try {
		$var($File, f, $new($File, this->val$fileName));
		return $of($Boolean::valueOf(f->exists()));
	} catch ($Exception& e) {
		return $of($Boolean::FALSE);
	}
	$shouldNotReachHere();
}

FontConfiguration$1::FontConfiguration$1() {
}

$Class* FontConfiguration$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/FontConfiguration;", nullptr, $FINAL | $SYNTHETIC, $field(FontConfiguration$1, this$0)},
		{"val$fileName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(FontConfiguration$1, val$fileName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/FontConfiguration;Ljava/lang/String;)V", "()V", 0, $method(FontConfiguration$1, init$, void, $FontConfiguration*, $String*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(FontConfiguration$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.FontConfiguration",
		"fontFilesArePresent",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.FontConfiguration$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.FontConfiguration$1",
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
		"sun.awt.FontConfiguration"
	};
	$loadClass(FontConfiguration$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontConfiguration$1);
	});
	return class$;
}

$Class* FontConfiguration$1::class$ = nullptr;

	} // awt
} // sun