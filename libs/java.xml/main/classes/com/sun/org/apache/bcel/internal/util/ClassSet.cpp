#include <com/sun/org/apache/bcel/internal/util/ClassSet.h>

#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $JavaClassArray = $Array<::com::sun::org::apache::bcel::internal::classfile::JavaClass>;
using $JavaClass = ::com::sun::org::apache::bcel::internal::classfile::JavaClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$FieldInfo _ClassSet_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;>;", $PRIVATE | $FINAL, $field(ClassSet, map)},
	{}
};

$MethodInfo _ClassSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ClassSet, init$, void)},
	{"add", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)Z", nullptr, $PUBLIC, $virtualMethod(ClassSet, add, bool, $JavaClass*)},
	{"empty", "()Z", nullptr, $PUBLIC, $virtualMethod(ClassSet, empty, bool)},
	{"getClassNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ClassSet, getClassNames, $StringArray*)},
	{"remove", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC, $virtualMethod(ClassSet, remove, void, $JavaClass*)},
	{"toArray", "()[Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC, $virtualMethod(ClassSet, toArray, $JavaClassArray*)},
	{}
};

$ClassInfo _ClassSet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.util.ClassSet",
	"java.lang.Object",
	nullptr,
	_ClassSet_FieldInfo_,
	_ClassSet_MethodInfo_
};

$Object* allocate$ClassSet($Class* clazz) {
	return $of($alloc(ClassSet));
}

void ClassSet::init$() {
	$set(this, map, $new($HashMap));
}

bool ClassSet::add($JavaClass* clazz) {
	$useLocalCurrentObjectStackCache();
	bool result = false;
	if (!$nc(this->map)->containsKey($($nc(clazz)->getClassName()))) {
		result = true;
		$nc(this->map)->put($($nc(clazz)->getClassName()), clazz);
	}
	return result;
}

void ClassSet::remove($JavaClass* clazz) {
	$nc(this->map)->remove($($nc(clazz)->getClassName()));
}

bool ClassSet::empty() {
	return $nc(this->map)->isEmpty();
}

$JavaClassArray* ClassSet::toArray() {
	$useLocalCurrentObjectStackCache();
	$var($Collection, values, $nc(this->map)->values());
	$var($JavaClassArray, classes, $new($JavaClassArray, $nc(values)->size()));
	values->toArray(classes);
	return classes;
}

$StringArray* ClassSet::getClassNames() {
	$useLocalCurrentObjectStackCache();
	return $fcast($StringArray, $nc($($nc(this->map)->keySet()))->toArray($$new($StringArray, $nc(this->map)->size())));
}

ClassSet::ClassSet() {
}

$Class* ClassSet::load$($String* name, bool initialize) {
	$loadClass(ClassSet, name, initialize, &_ClassSet_ClassInfo_, allocate$ClassSet);
	return class$;
}

$Class* ClassSet::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com