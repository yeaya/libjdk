#include <com/sun/tools/javac/file/PathFileObject$DirectoryFileObject.h>
#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/file/PathFileObject.h>
#include <com/sun/tools/javac/file/RelativePath$RelativeDirectory.h>
#include <com/sun/tools/javac/file/RelativePath$RelativeFile.h>
#include <com/sun/tools/javac/file/RelativePath.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $PathFileObject = ::com::sun::tools::javac::file::PathFileObject;
using $RelativePath = ::com::sun::tools::javac::file::RelativePath;
using $RelativePath$RelativeFile = ::com::sun::tools::javac::file::RelativePath$RelativeFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

void PathFileObject$DirectoryFileObject::init$($BaseFileManager* fileManager, $Path* path, $Path* userPackageRootDir, $RelativePath* relativePath) {
	$PathFileObject::init$(fileManager, path);
	$set(this, userPackageRootDir, $cast($Path, $Objects::requireNonNull(userPackageRootDir)));
	$set(this, relativePath, relativePath);
}

$String* PathFileObject$DirectoryFileObject::getName() {
	return $$nc($nc(this->relativePath)->resolveAgainst(this->userPackageRootDir))->toString();
}

$String* PathFileObject$DirectoryFileObject::inferBinaryName($Iterable* paths) {
	return toBinaryName(this->relativePath);
}

$String* PathFileObject$DirectoryFileObject::toString() {
	return $str({"DirectoryFileObject["_s, this->userPackageRootDir, ":"_s, $nc(this->relativePath)->path, "]"_s});
}

$PathFileObject* PathFileObject$DirectoryFileObject::getSibling($String* baseName) {
	$useLocalObjectStack();
	$var($BaseFileManager, var$0, this->fileManager);
	$var($Path, var$1, $nc(this->path)->resolveSibling(baseName));
	$var($Path, var$2, this->userPackageRootDir);
	return $new(PathFileObject$DirectoryFileObject, var$0, var$1, var$2, $$new($RelativePath$RelativeFile, $($nc(this->relativePath)->dirname()), baseName));
}

PathFileObject$DirectoryFileObject::PathFileObject$DirectoryFileObject() {
}

$Class* PathFileObject$DirectoryFileObject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"userPackageRootDir", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(PathFileObject$DirectoryFileObject, userPackageRootDir)},
		{"relativePath", "Lcom/sun/tools/javac/file/RelativePath;", nullptr, $PRIVATE | $FINAL, $field(PathFileObject$DirectoryFileObject, relativePath)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/file/BaseFileManager;Ljava/nio/file/Path;Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath;)V", nullptr, $PRIVATE, $method(PathFileObject$DirectoryFileObject, init$, void, $BaseFileManager*, $Path*, $Path*, $RelativePath*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PathFileObject$DirectoryFileObject, getName, $String*)},
		{"getSibling", "(Ljava/lang/String;)Lcom/sun/tools/javac/file/PathFileObject;", nullptr, 0, $virtualMethod(PathFileObject$DirectoryFileObject, getSibling, $PathFileObject*, $String*)},
		{"inferBinaryName", "(Ljava/lang/Iterable;)Ljava/lang/String;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Ljava/lang/String;", $PUBLIC, $virtualMethod(PathFileObject$DirectoryFileObject, inferBinaryName, $String*, $Iterable*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PathFileObject$DirectoryFileObject, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.file.PathFileObject$DirectoryFileObject", "com.sun.tools.javac.file.PathFileObject", "DirectoryFileObject", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.file.PathFileObject$DirectoryFileObject",
		"com.sun.tools.javac.file.PathFileObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.file.PathFileObject"
	};
	$loadClass(PathFileObject$DirectoryFileObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PathFileObject$DirectoryFileObject);
	});
	return class$;
}

$Class* PathFileObject$DirectoryFileObject::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com