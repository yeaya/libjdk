#include <sun/font/Type1Font$1.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/RandomAccessFile.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/Type1Font.h>
#include <jcpp.h>

using $FileNotFoundException = ::java::io::FileNotFoundException;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type1Font = ::sun::font::Type1Font;

namespace sun {
	namespace font {

void Type1Font$1::init$($Type1Font* this$0) {
	$set(this, this$0, this$0);
}

$Object* Type1Font$1::run() {
	try {
		return $of($new($RandomAccessFile, this->this$0->platName, "r"_s));
	} catch ($FileNotFoundException& ffne) {
	}
	return nullptr;
}

Type1Font$1::Type1Font$1() {
}

$Class* Type1Font$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/Type1Font;", nullptr, $FINAL | $SYNTHETIC, $field(Type1Font$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/Type1Font;)V", nullptr, 0, $method(Type1Font$1, init$, void, $Type1Font*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Type1Font$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.Type1Font",
		"getBuffer",
		"()Ljava/nio/ByteBuffer;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.Type1Font$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.Type1Font$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.Type1Font"
	};
	$loadClass(Type1Font$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Type1Font$1);
	});
	return class$;
}

$Class* Type1Font$1::class$ = nullptr;

	} // font
} // sun