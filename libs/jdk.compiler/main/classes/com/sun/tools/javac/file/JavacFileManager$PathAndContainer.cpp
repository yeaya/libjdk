#include <com/sun/tools/javac/file/JavacFileManager$PathAndContainer.h>
#include <com/sun/tools/javac/file/JavacFileManager$Container.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <java/nio/file/Path.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $JavacFileManager$Container = ::com::sun::tools::javac::file::JavacFileManager$Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

void JavacFileManager$PathAndContainer::init$($Path* path, $JavacFileManager$Container* container, int32_t index) {
	$set(this, path, path);
	$set(this, container, container);
	this->index = index;
}

int32_t JavacFileManager$PathAndContainer::compareTo(JavacFileManager$PathAndContainer* other) {
	return this->index - $nc(other)->index;
}

bool JavacFileManager$PathAndContainer::equals(Object$* o) {
	$var(JavacFileManager$PathAndContainer, pathAndContainer, nullptr);
	bool var$3 = $instanceOf(JavacFileManager$PathAndContainer, o);
	if (var$3) {
		$assign(pathAndContainer, $cast(JavacFileManager$PathAndContainer, o));
		var$3 = true;
	}
	bool var$2 = var$3;
	bool var$1 = var$2 && $nc(this->path)->equals($nc(pathAndContainer)->path);
	bool var$0 = var$1 && $nc(this->container)->equals(pathAndContainer->container);
	return var$0 && this->index == pathAndContainer->index;
}

int32_t JavacFileManager$PathAndContainer::hashCode() {
	$useLocalObjectStack();
	return $Objects::hash($$new($ObjectArray, {
		this->path,
		this->container,
		$($Integer::valueOf(this->index))
	}));
}

int32_t JavacFileManager$PathAndContainer::compareTo(Object$* other) {
	return this->compareTo($cast(JavacFileManager$PathAndContainer, other));
}

JavacFileManager$PathAndContainer::JavacFileManager$PathAndContainer() {
}

$Class* JavacFileManager$PathAndContainer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"path", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(JavacFileManager$PathAndContainer, path)},
		{"container", "Lcom/sun/tools/javac/file/JavacFileManager$Container;", nullptr, $PRIVATE | $FINAL, $field(JavacFileManager$PathAndContainer, container)},
		{"index", "I", nullptr, $PRIVATE | $FINAL, $field(JavacFileManager$PathAndContainer, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/JavacFileManager$Container;I)V", nullptr, 0, $method(JavacFileManager$PathAndContainer, init$, void, $Path*, $JavacFileManager$Container*, int32_t)},
		{"compareTo", "(Lcom/sun/tools/javac/file/JavacFileManager$PathAndContainer;)I", nullptr, $PUBLIC, $virtualMethod(JavacFileManager$PathAndContainer, compareTo, int32_t, JavacFileManager$PathAndContainer*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JavacFileManager$PathAndContainer, compareTo, int32_t, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JavacFileManager$PathAndContainer, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(JavacFileManager$PathAndContainer, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.file.JavacFileManager$PathAndContainer", "com.sun.tools.javac.file.JavacFileManager", "PathAndContainer", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.file.JavacFileManager$PathAndContainer",
		"java.lang.Object",
		"java.lang.Comparable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Comparable<Lcom/sun/tools/javac/file/JavacFileManager$PathAndContainer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.file.JavacFileManager"
	};
	$loadClass(JavacFileManager$PathAndContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacFileManager$PathAndContainer);
	});
	return class$;
}

$Class* JavacFileManager$PathAndContainer::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com