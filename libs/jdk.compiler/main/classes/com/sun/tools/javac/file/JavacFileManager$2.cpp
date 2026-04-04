#include <com/sun/tools/javac/file/JavacFileManager$2.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <java/io/File.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

void JavacFileManager$2::init$($Iterable* val$files) {
	$set(this, val$files, val$files);
	$set(this, iter, $nc(this->val$files)->iterator());
}

bool JavacFileManager$2::hasNext() {
	return $nc(this->iter)->hasNext();
}

$Object* JavacFileManager$2::next() {
	return $of($$sure($File, $nc(this->iter)->next())->toPath());
}

JavacFileManager$2::JavacFileManager$2() {
}

$Class* JavacFileManager$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$files", "Ljava/lang/Iterable;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFileManager$2, val$files)},
		{"iter", "Ljava/util/Iterator;", "Ljava/util/Iterator<+Ljava/io/File;>;", 0, $field(JavacFileManager$2, iter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Iterable;)V", "()V", 0, $method(JavacFileManager$2, init$, void, $Iterable*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(JavacFileManager$2, hasNext, bool)},
		{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(JavacFileManager$2, next, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.file.JavacFileManager",
		"asPaths",
		"(Ljava/lang/Iterable;)Ljava/lang/Iterable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.file.JavacFileManager$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.file.JavacFileManager$2",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/Path;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.file.JavacFileManager"
	};
	$loadClass(JavacFileManager$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacFileManager$2);
	});
	return class$;
}

$Class* JavacFileManager$2::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com