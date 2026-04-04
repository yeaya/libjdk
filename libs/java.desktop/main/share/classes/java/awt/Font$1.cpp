#include <java/awt/Font$1.h>
#include <java/awt/Font.h>
#include <java/io/File.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <jcpp.h>

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Files = ::java::nio::file::Files;

namespace java {
	namespace awt {

void Font$1::init$() {
}

$Object* Font$1::run() {
	$useLocalObjectStack();
	return $of($$nc($Files::createTempFile("+~JF"_s, ".tmp"_s, $$new($FileAttributeArray, 0)))->toFile());
}

Font$1::Font$1() {
}

$Class* Font$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Font$1, init$, void)},
		{"run", "()Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(Font$1, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.Font",
		"createFont0",
		"(ILjava/io/InputStream;ZLsun/font/CreatedFontTracker;)[Ljava/awt/Font;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Font$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Font$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/File;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Font"
	};
	$loadClass(Font$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Font$1);
	});
	return class$;
}

$Class* Font$1::class$ = nullptr;

	} // awt
} // java