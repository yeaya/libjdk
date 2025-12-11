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
using $Iterator = ::java::util::Iterator;

namespace javax {
	namespace tools {

$FieldInfo _StandardJavaFileManager$1_FieldInfo_[] = {
	{"val$files", "Ljava/lang/Iterable;", nullptr, $FINAL | $SYNTHETIC, $field(StandardJavaFileManager$1, val$files)},
	{"iter", "Ljava/util/Iterator;", "Ljava/util/Iterator<+Ljava/io/File;>;", $FINAL, $field(StandardJavaFileManager$1, iter)},
	{}
};

$MethodInfo _StandardJavaFileManager$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Iterable;)V", nullptr, 0, $method(static_cast<void(StandardJavaFileManager$1::*)($Iterable*)>(&StandardJavaFileManager$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _StandardJavaFileManager$1_EnclosingMethodInfo_ = {
	"javax.tools.StandardJavaFileManager",
	"asPaths",
	"(Ljava/lang/Iterable;)Ljava/lang/Iterable;"
};

$InnerClassInfo _StandardJavaFileManager$1_InnerClassesInfo_[] = {
	{"javax.tools.StandardJavaFileManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StandardJavaFileManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.tools.StandardJavaFileManager$1",
	"java.lang.Object",
	"java.util.Iterator",
	_StandardJavaFileManager$1_FieldInfo_,
	_StandardJavaFileManager$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/Path;>;",
	&_StandardJavaFileManager$1_EnclosingMethodInfo_,
	_StandardJavaFileManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.tools.StandardJavaFileManager"
};

$Object* allocate$StandardJavaFileManager$1($Class* clazz) {
	return $of($alloc(StandardJavaFileManager$1));
}

void StandardJavaFileManager$1::init$($Iterable* val$files) {
	$set(this, val$files, val$files);
	$set(this, iter, $nc(this->val$files)->iterator());
}

bool StandardJavaFileManager$1::hasNext() {
	return $nc(this->iter)->hasNext();
}

$Object* StandardJavaFileManager$1::next() {
	return $of($nc(($cast($File, $($nc(this->iter)->next()))))->toPath());
}

StandardJavaFileManager$1::StandardJavaFileManager$1() {
}

$Class* StandardJavaFileManager$1::load$($String* name, bool initialize) {
	$loadClass(StandardJavaFileManager$1, name, initialize, &_StandardJavaFileManager$1_ClassInfo_, allocate$StandardJavaFileManager$1);
	return class$;
}

$Class* StandardJavaFileManager$1::class$ = nullptr;

	} // tools
} // javax