#include <java/awt/Font$2.h>
#include <java/awt/Font.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void Font$2::init$($File* val$tFile) {
	$set(this, val$tFile, val$tFile);
}

$Object* Font$2::run() {
	return $of($new($FileOutputStream, this->val$tFile));
}

Font$2::Font$2() {
}

$Class* Font$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$tFile", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(Font$2, val$tFile)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;)V", "()V", 0, $method(Font$2, init$, void, $File*)},
		{"run", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(Font$2, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.Font",
		"createFont0",
		"(ILjava/io/InputStream;ZLsun/font/CreatedFontTracker;)[Ljava/awt/Font;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Font$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Font$2",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/OutputStream;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Font"
	};
	$loadClass(Font$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Font$2);
	});
	return class$;
}

$Class* Font$2::class$ = nullptr;

	} // awt
} // java