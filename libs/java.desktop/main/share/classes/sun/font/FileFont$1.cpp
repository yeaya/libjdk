#include <sun/font/FileFont$1.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <sun/font/FileFont.h>
#include <jcpp.h>

#undef TRUE

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileFont = ::sun::font::FileFont;

namespace sun {
	namespace font {

void FileFont$1::init$($FileFont* this$0, $File* val$f) {
	$set(this, this$0, this$0);
	$set(this, val$f, val$f);
}

$Object* FileFont$1::run() {
	$useLocalObjectStack();
	$var($File, tmp, $new($File, $($System::getProperty("java.io.tmpdir"_s))));
	try {
		$var($String, tpath, tmp->getCanonicalPath());
		$var($String, fpath, $nc(this->val$f)->getCanonicalPath());
		return $of($Boolean::valueOf((fpath == nullptr) || fpath->startsWith(tpath)));
	} catch ($IOException& e) {
		return $of($Boolean::TRUE);
	}
	$shouldNotReachHere();
}

FileFont$1::FileFont$1() {
}

$Class* FileFont$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/FileFont;", nullptr, $FINAL | $SYNTHETIC, $field(FileFont$1, this$0)},
		{"val$f", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(FileFont$1, val$f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/FileFont;Ljava/io/File;)V", "()V", 0, $method(FileFont$1, init$, void, $FileFont*, $File*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(FileFont$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.FileFont",
		"getPublicFileName",
		"()Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.FileFont$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.FileFont$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.FileFont"
	};
	$loadClass(FileFont$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileFont$1);
	});
	return class$;
}

$Class* FileFont$1::class$ = nullptr;

	} // font
} // sun