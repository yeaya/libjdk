#include <java/awt/Font$3.h>
#include <java/awt/Font.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void Font$3::init$($File* val$tFile) {
	$set(this, val$tFile, val$tFile);
}

$Object* Font$3::run() {
	$nc(this->val$tFile)->delete$();
	return nullptr;
}

Font$3::Font$3() {
}

$Class* Font$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$tFile", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(Font$3, val$tFile)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;)V", "()V", 0, $method(Font$3, init$, void, $File*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Font$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.Font",
		"createFont0",
		"(ILjava/io/InputStream;ZLsun/font/CreatedFontTracker;)[Ljava/awt/Font;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Font$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Font$3",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Font"
	};
	$loadClass(Font$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Font$3);
	});
	return class$;
}

$Class* Font$3::class$ = nullptr;

	} // awt
} // java