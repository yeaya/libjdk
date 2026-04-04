#include <com/sun/tools/javac/file/JavacFileManager$SortFiles$2.h>
#include <com/sun/tools/javac/file/JavacFileManager$SortFiles.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $JavacFileManager$SortFiles = ::com::sun::tools::javac::file::JavacFileManager$SortFiles;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

void JavacFileManager$SortFiles$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$JavacFileManager$SortFiles::init$($enum$name, $enum$ordinal);
}

int32_t JavacFileManager$SortFiles$2::compare($Path* f1, $Path* f2) {
	$useLocalObjectStack();
	return $$nc($nc(f2)->getFileName())->compareTo($($nc(f1)->getFileName()));
}

int32_t JavacFileManager$SortFiles$2::compare(Object$* f1, Object$* f2) {
	return this->compare($cast($Path, f1), $cast($Path, f2));
}

JavacFileManager$SortFiles$2::JavacFileManager$SortFiles$2() {
}

$Class* JavacFileManager$SortFiles$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(JavacFileManager$SortFiles$2, init$, void, $String*, int32_t)},
		{"compare", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)I", nullptr, $PUBLIC, $method(JavacFileManager$SortFiles$2, compare, int32_t, $Path*, $Path*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JavacFileManager$SortFiles$2, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.file.JavacFileManager$SortFiles",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.file.JavacFileManager$SortFiles", "com.sun.tools.javac.file.JavacFileManager", "SortFiles", $PROTECTED | $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.tools.javac.file.JavacFileManager$SortFiles$2", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.file.JavacFileManager$SortFiles$2",
		"com.sun.tools.javac.file.JavacFileManager$SortFiles",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.file.JavacFileManager"
	};
	$loadClass(JavacFileManager$SortFiles$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JavacFileManager$SortFiles$2));
	});
	return class$;
}

$Class* JavacFileManager$SortFiles$2::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com