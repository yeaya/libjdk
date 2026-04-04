#include <sun/font/TrueTypeFont$1.h>
#include <java/io/RandomAccessFile.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/TrueTypeFont.h>
#include <jcpp.h>

using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TrueTypeFont = ::sun::font::TrueTypeFont;

namespace sun {
	namespace font {

void TrueTypeFont$1::init$($TrueTypeFont* this$0) {
	$set(this, this$0, this$0);
}

$Object* TrueTypeFont$1::run() {
	return $of($new($RandomAccessFile, this->this$0->platName, "r"_s));
}

TrueTypeFont$1::TrueTypeFont$1() {
}

$Class* TrueTypeFont$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/TrueTypeFont;", nullptr, $FINAL | $SYNTHETIC, $field(TrueTypeFont$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/TrueTypeFont;)V", nullptr, 0, $method(TrueTypeFont$1, init$, void, $TrueTypeFont*)},
		{"run", "()Ljava/io/RandomAccessFile;", nullptr, $PUBLIC, $virtualMethod(TrueTypeFont$1, run, $Object*), "java.io.FileNotFoundException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.TrueTypeFont",
		"open",
		"(Z)Ljava/nio/channels/FileChannel;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.TrueTypeFont$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.TrueTypeFont$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/RandomAccessFile;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.TrueTypeFont"
	};
	$loadClass(TrueTypeFont$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TrueTypeFont$1);
	});
	return class$;
}

$Class* TrueTypeFont$1::class$ = nullptr;

	} // font
} // sun