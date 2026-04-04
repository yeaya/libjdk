#include <HangDuringStaticInitialization$1.h>
#include <HangDuringStaticInitialization.h>
#include <java/lang/ClassLoader.h>
#include <java/nio/file/FileVisitResult.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <jcpp.h>

#undef CONTINUE

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileVisitResult = ::java::nio::file::FileVisitResult;
using $Path = ::java::nio::file::Path;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;

void HangDuringStaticInitialization$1::init$() {
	$SimpleFileVisitor::init$();
}

$FileVisitResult* HangDuringStaticInitialization$1::visitFile($Path* file$renamed, $BasicFileAttributes* attrs) {
	$useLocalObjectStack();
	$var($Path, file, file$renamed);
	$beforeCallerSensitive();
	$assign(file, $nc(file)->subpath(2, $nc(file)->getNameCount()));
	$var($String, name, $nc(file)->toString());
	if ($nc(name)->endsWith(".class"_s)) {
		$assign(name, $(name->substring(0, name->indexOf("."_s)))->replace(u'/', u'.'));
		try {
			$Class::forName(name, true, nullptr);
		} catch ($Throwable& e) {
		}
	}
	$init($FileVisitResult);
	return $FileVisitResult::CONTINUE;
}

$FileVisitResult* HangDuringStaticInitialization$1::visitFile(Object$* file, $BasicFileAttributes* attrs) {
	return this->visitFile($cast($Path, file), attrs);
}

HangDuringStaticInitialization$1::HangDuringStaticInitialization$1() {
}

$Class* HangDuringStaticInitialization$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HangDuringStaticInitialization$1, init$, void)},
		{"visitFile", "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC, $virtualMethod(HangDuringStaticInitialization$1, visitFile, $FileVisitResult*, $Path*, $BasicFileAttributes*)},
		{"visitFile", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HangDuringStaticInitialization$1, visitFile, $FileVisitResult*, Object$*, $BasicFileAttributes*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HangDuringStaticInitialization",
		"test",
		"(Ljava/nio/file/FileSystem;Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HangDuringStaticInitialization$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HangDuringStaticInitialization$1",
		"java.nio.file.SimpleFileVisitor",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/nio/file/SimpleFileVisitor<Ljava/nio/file/Path;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HangDuringStaticInitialization"
	};
	$loadClass(HangDuringStaticInitialization$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HangDuringStaticInitialization$1);
	});
	return class$;
}

$Class* HangDuringStaticInitialization$1::class$ = nullptr;