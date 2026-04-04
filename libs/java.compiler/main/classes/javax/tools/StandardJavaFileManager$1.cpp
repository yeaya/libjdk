#include <javax/tools/StandardJavaFileManager$1.h>
#include <java/io/File.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace tools {

void StandardJavaFileManager$1::init$($Iterable* val$files) {
	$set(this, val$files, val$files);
	$set(this, iter, $nc(this->val$files)->iterator());
}

bool StandardJavaFileManager$1::hasNext() {
	return $nc(this->iter)->hasNext();
}

$Object* StandardJavaFileManager$1::next() {
	return $of($$sure($File, $nc(this->iter)->next())->toPath());
}

StandardJavaFileManager$1::StandardJavaFileManager$1() {
}

$Class* StandardJavaFileManager$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$files", "Ljava/lang/Iterable;", nullptr, $FINAL | $SYNTHETIC, $field(StandardJavaFileManager$1, val$files)},
		{"iter", "Ljava/util/Iterator;", "Ljava/util/Iterator<+Ljava/io/File;>;", $FINAL, $field(StandardJavaFileManager$1, iter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Iterable;)V", nullptr, 0, $method(StandardJavaFileManager$1, init$, void, $Iterable*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(StandardJavaFileManager$1, hasNext, bool)},
		{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(StandardJavaFileManager$1, next, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.tools.StandardJavaFileManager",
		"asPaths",
		"(Ljava/lang/Iterable;)Ljava/lang/Iterable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.tools.StandardJavaFileManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.tools.StandardJavaFileManager$1",
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
		"javax.tools.StandardJavaFileManager"
	};
	$loadClass(StandardJavaFileManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StandardJavaFileManager$1);
	});
	return class$;
}

$Class* StandardJavaFileManager$1::class$ = nullptr;

	} // tools
} // javax