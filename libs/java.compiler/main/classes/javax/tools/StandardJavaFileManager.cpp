#include <javax/tools/StandardJavaFileManager.h>

#include <java/io/File.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/StandardJavaFileManager$1.h>
#include <javax/tools/StandardJavaFileManager$2.h>
#include <javax/tools/StandardJavaFileManager$PathFactory.h>
#include <jcpp.h>

using $PathArray = $Array<::java::nio::file::Path>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Path = ::java::nio::file::Path;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $StandardJavaFileManager$1 = ::javax::tools::StandardJavaFileManager$1;
using $StandardJavaFileManager$2 = ::javax::tools::StandardJavaFileManager$2;
using $StandardJavaFileManager$PathFactory = ::javax::tools::StandardJavaFileManager$PathFactory;

namespace javax {
	namespace tools {

class StandardJavaFileManager$$Lambda$lambda$asPaths$0 : public $Iterable {
	$class(StandardJavaFileManager$$Lambda$lambda$asPaths$0, $NO_CLASS_INIT, $Iterable)
public:
	void init$($Iterable* files) {
		$set(this, files, files);
	}
	virtual $Iterator* iterator() override {
		 return StandardJavaFileManager::lambda$asPaths$0(files);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StandardJavaFileManager$$Lambda$lambda$asPaths$0>());
	}
	$Iterable* files = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StandardJavaFileManager$$Lambda$lambda$asPaths$0::fieldInfos[2] = {
	{"files", "Ljava/lang/Iterable;", nullptr, $PUBLIC, $field(StandardJavaFileManager$$Lambda$lambda$asPaths$0, files)},
	{}
};
$MethodInfo StandardJavaFileManager$$Lambda$lambda$asPaths$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Iterable;)V", nullptr, $PUBLIC, $method(static_cast<void(StandardJavaFileManager$$Lambda$lambda$asPaths$0::*)($Iterable*)>(&StandardJavaFileManager$$Lambda$lambda$asPaths$0::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StandardJavaFileManager$$Lambda$lambda$asPaths$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.tools.StandardJavaFileManager$$Lambda$lambda$asPaths$0",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* StandardJavaFileManager$$Lambda$lambda$asPaths$0::load$($String* name, bool initialize) {
	$loadClass(StandardJavaFileManager$$Lambda$lambda$asPaths$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StandardJavaFileManager$$Lambda$lambda$asPaths$0::class$ = nullptr;

class StandardJavaFileManager$$Lambda$lambda$asFiles$1$1 : public $Iterable {
	$class(StandardJavaFileManager$$Lambda$lambda$asFiles$1$1, $NO_CLASS_INIT, $Iterable)
public:
	void init$($Iterable* paths) {
		$set(this, paths, paths);
	}
	virtual $Iterator* iterator() override {
		 return StandardJavaFileManager::lambda$asFiles$1(paths);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StandardJavaFileManager$$Lambda$lambda$asFiles$1$1>());
	}
	$Iterable* paths = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StandardJavaFileManager$$Lambda$lambda$asFiles$1$1::fieldInfos[2] = {
	{"paths", "Ljava/lang/Iterable;", nullptr, $PUBLIC, $field(StandardJavaFileManager$$Lambda$lambda$asFiles$1$1, paths)},
	{}
};
$MethodInfo StandardJavaFileManager$$Lambda$lambda$asFiles$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Iterable;)V", nullptr, $PUBLIC, $method(static_cast<void(StandardJavaFileManager$$Lambda$lambda$asFiles$1$1::*)($Iterable*)>(&StandardJavaFileManager$$Lambda$lambda$asFiles$1$1::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StandardJavaFileManager$$Lambda$lambda$asFiles$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.tools.StandardJavaFileManager$$Lambda$lambda$asFiles$1$1",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* StandardJavaFileManager$$Lambda$lambda$asFiles$1$1::load$($String* name, bool initialize) {
	$loadClass(StandardJavaFileManager$$Lambda$lambda$asFiles$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StandardJavaFileManager$$Lambda$lambda$asFiles$1$1::class$ = nullptr;

$NamedAttribute StandardJavaFileManager_Attribute_var$0[] = {
	{"since", 's', "13"},
	{}
};

$CompoundAttribute _StandardJavaFileManager_MethodAnnotations_getJavaFileObjectsFromPaths9[] = {
	{"Ljava/lang/Deprecated;", StandardJavaFileManager_Attribute_var$0},
	{}
};

$MethodInfo _StandardJavaFileManager_MethodInfo_[] = {
	{"asCollection", "(Ljava/lang/Iterable;)Ljava/util/Collection;", "<T:Ljava/lang/Object;>(Ljava/lang/Iterable<TT;>;)Ljava/util/Collection<TT;>;", $PRIVATE | $STATIC, $method(static_cast<$Collection*(*)($Iterable*)>(&StandardJavaFileManager::asCollection))},
	{"asFiles", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Ljava/lang/Iterable<Ljava/io/File;>;", $PRIVATE | $STATIC, $method(static_cast<$Iterable*(*)($Iterable*)>(&StandardJavaFileManager::asFiles))},
	{"asPath", "(Ljavax/tools/FileObject;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"asPaths", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Ljava/io/File;>;)Ljava/lang/Iterable<Ljava/nio/file/Path;>;", $PRIVATE | $STATIC, $method(static_cast<$Iterable*(*)($Iterable*)>(&StandardJavaFileManager::asPaths))},
	{"getJavaFileObjects", "([Ljava/io/File;)Ljava/lang/Iterable;", "([Ljava/io/File;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $TRANSIENT | $ABSTRACT},
	{"getJavaFileObjects", "([Ljava/nio/file/Path;)Ljava/lang/Iterable;", "([Ljava/nio/file/Path;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $TRANSIENT},
	{"getJavaFileObjects", "([Ljava/lang/String;)Ljava/lang/Iterable;", "([Ljava/lang/String;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $TRANSIENT | $ABSTRACT},
	{"getJavaFileObjectsFromFiles", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Ljava/io/File;>;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $ABSTRACT},
	{"getJavaFileObjectsFromPaths", "(Ljava/util/Collection;)Ljava/lang/Iterable;", "(Ljava/util/Collection<+Ljava/nio/file/Path;>;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC},
	{"getJavaFileObjectsFromPaths", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _StandardJavaFileManager_MethodAnnotations_getJavaFileObjectsFromPaths9},
	{"getJavaFileObjectsFromStrings", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<Ljava/lang/String;>;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $ABSTRACT},
	{"getLocation", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable<+Ljava/io/File;>;", $PUBLIC | $ABSTRACT},
	{"getLocationAsPaths", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable<+Ljava/nio/file/Path;>;", $PUBLIC},
	{"isSameFile", "(Ljavax/tools/FileObject;Ljavax/tools/FileObject;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"lambda$asFiles$1", "(Ljava/lang/Iterable;)Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Iterator*(*)($Iterable*)>(&StandardJavaFileManager::lambda$asFiles$1))},
	{"lambda$asPaths$0", "(Ljava/lang/Iterable;)Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Iterator*(*)($Iterable*)>(&StandardJavaFileManager::lambda$asPaths$0))},
	{"setLocation", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/Iterable;)V", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/Iterable<+Ljava/io/File;>;)V", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"setLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Collection;)V", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Collection<+Ljava/nio/file/Path;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"setLocationFromPaths", "(Ljavax/tools/JavaFileManager$Location;Ljava/util/Collection;)V", "(Ljavax/tools/JavaFileManager$Location;Ljava/util/Collection<+Ljava/nio/file/Path;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"setPathFactory", "(Ljavax/tools/StandardJavaFileManager$PathFactory;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StandardJavaFileManager_InnerClassesInfo_[] = {
	{"javax.tools.StandardJavaFileManager$PathFactory", "javax.tools.StandardJavaFileManager", "PathFactory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.tools.StandardJavaFileManager$1", nullptr, nullptr, 0},
	{"javax.tools.StandardJavaFileManager$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StandardJavaFileManager_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.tools.StandardJavaFileManager",
	nullptr,
	"javax.tools.JavaFileManager",
	nullptr,
	_StandardJavaFileManager_MethodInfo_,
	nullptr,
	nullptr,
	_StandardJavaFileManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.tools.StandardJavaFileManager$PathFactory,javax.tools.StandardJavaFileManager$1,javax.tools.StandardJavaFileManager$2"
};

$Object* allocate$StandardJavaFileManager($Class* clazz) {
	return $of($alloc(StandardJavaFileManager));
}

$Iterable* StandardJavaFileManager::getJavaFileObjectsFromPaths($Collection* paths) {
	return getJavaFileObjectsFromFiles($(asFiles(paths)));
}

$Iterable* StandardJavaFileManager::getJavaFileObjectsFromPaths($Iterable* paths) {
	return getJavaFileObjectsFromPaths($(asCollection(paths)));
}

$Iterable* StandardJavaFileManager::getJavaFileObjects($PathArray* paths) {
	return getJavaFileObjectsFromPaths($(static_cast<$Collection*>($Arrays::asList(paths))));
}

void StandardJavaFileManager::setLocationFromPaths($JavaFileManager$Location* location, $Collection* paths) {
	setLocation(location, $(asFiles(paths)));
}

void StandardJavaFileManager::setLocationForModule($JavaFileManager$Location* location, $String* moduleName, $Collection* paths) {
	$throwNew($UnsupportedOperationException);
}

$Iterable* StandardJavaFileManager::getLocationAsPaths($JavaFileManager$Location* location) {
	return asPaths($(getLocation(location)));
}

$Path* StandardJavaFileManager::asPath($FileObject* file) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void StandardJavaFileManager::setPathFactory($StandardJavaFileManager$PathFactory* f) {
}

$Iterable* StandardJavaFileManager::asPaths($Iterable* files) {
	$init(StandardJavaFileManager);
	return static_cast<$Iterable*>($new(StandardJavaFileManager$$Lambda$lambda$asPaths$0, files));
}

$Iterable* StandardJavaFileManager::asFiles($Iterable* paths) {
	$init(StandardJavaFileManager);
	return static_cast<$Iterable*>($new(StandardJavaFileManager$$Lambda$lambda$asFiles$1$1, paths));
}

$Collection* StandardJavaFileManager::asCollection($Iterable* iterable) {
	$init(StandardJavaFileManager);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Collection, iterable)) {
		return $cast($Collection, iterable);
	}
	$var($List, result, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(iterable)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, item, i$->next());
			result->add(item);
		}
	}
	return result;
}

$Iterator* StandardJavaFileManager::lambda$asFiles$1($Iterable* paths) {
	$init(StandardJavaFileManager);
	return $new($StandardJavaFileManager$2, paths);
}

$Iterator* StandardJavaFileManager::lambda$asPaths$0($Iterable* files) {
	$init(StandardJavaFileManager);
	return $new($StandardJavaFileManager$1, files);
}

$Class* StandardJavaFileManager::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(StandardJavaFileManager$$Lambda$lambda$asPaths$0::classInfo$.name)) {
			return StandardJavaFileManager$$Lambda$lambda$asPaths$0::load$(name, initialize);
		}
		if (name->equals(StandardJavaFileManager$$Lambda$lambda$asFiles$1$1::classInfo$.name)) {
			return StandardJavaFileManager$$Lambda$lambda$asFiles$1$1::load$(name, initialize);
		}
	}
	$loadClass(StandardJavaFileManager, name, initialize, &_StandardJavaFileManager_ClassInfo_, allocate$StandardJavaFileManager);
	return class$;
}

$Class* StandardJavaFileManager::class$ = nullptr;

	} // tools
} // javax