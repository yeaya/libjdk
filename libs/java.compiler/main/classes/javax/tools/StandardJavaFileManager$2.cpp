#include <javax/tools/StandardJavaFileManager$2.h>
#include <java/io/File.h>
#include <java/lang/Iterable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Path = ::java::nio::file::Path;

namespace javax {
	namespace tools {

void StandardJavaFileManager$2::init$($Iterable* val$paths) {
	$set(this, val$paths, val$paths);
	$set(this, iter, $nc(this->val$paths)->iterator());
}

bool StandardJavaFileManager$2::hasNext() {
	return $nc(this->iter)->hasNext();
}

$Object* StandardJavaFileManager$2::next() {
	$useLocalObjectStack();
	$var($Path, p, $cast($Path, $nc(this->iter)->next()));
	try {
		return $of($nc(p)->toFile());
	} catch ($UnsupportedOperationException& e) {
		$throwNew($IllegalArgumentException, $($nc(p)->toString()), e);
	}
	$shouldNotReachHere();
}

StandardJavaFileManager$2::StandardJavaFileManager$2() {
}

$Class* StandardJavaFileManager$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$paths", "Ljava/lang/Iterable;", nullptr, $FINAL | $SYNTHETIC, $field(StandardJavaFileManager$2, val$paths)},
		{"iter", "Ljava/util/Iterator;", "Ljava/util/Iterator<+Ljava/nio/file/Path;>;", $FINAL, $field(StandardJavaFileManager$2, iter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Iterable;)V", nullptr, 0, $method(StandardJavaFileManager$2, init$, void, $Iterable*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(StandardJavaFileManager$2, hasNext, bool)},
		{"next", "()Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(StandardJavaFileManager$2, next, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.tools.StandardJavaFileManager",
		"asFiles",
		"(Ljava/lang/Iterable;)Ljava/lang/Iterable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.tools.StandardJavaFileManager$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.tools.StandardJavaFileManager$2",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/io/File;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.tools.StandardJavaFileManager"
	};
	$loadClass(StandardJavaFileManager$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StandardJavaFileManager$2);
	});
	return class$;
}

$Class* StandardJavaFileManager$2::class$ = nullptr;

	} // tools
} // javax