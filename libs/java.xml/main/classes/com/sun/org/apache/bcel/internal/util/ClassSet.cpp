#include <com/sun/org/apache/bcel/internal/util/ClassSet.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
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
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

void ClassSet::init$() {
	$set(this, map, $new($HashMap));
}

bool ClassSet::add($JavaClass* clazz) {
	$useLocalObjectStack();
	bool result = false;
	if (!this->map->containsKey($($nc(clazz)->getClassName()))) {
		result = true;
		this->map->put($(clazz->getClassName()), clazz);
	}
	return result;
}

void ClassSet::remove($JavaClass* clazz) {
	this->map->remove($($nc(clazz)->getClassName()));
}

bool ClassSet::empty() {
	return this->map->isEmpty();
}

$JavaClassArray* ClassSet::toArray() {
	$useLocalObjectStack();
	$var($Collection, values, this->map->values());
	$var($JavaClassArray, classes, $new($JavaClassArray, $nc(values)->size()));
	values->toArray(classes);
	return classes;
}

$StringArray* ClassSet::getClassNames() {
	$useLocalObjectStack();
	return $cast($StringArray, $$nc(this->map->keySet())->toArray($$new($StringArray, this->map->size())));
}

ClassSet::ClassSet() {
}

$Class* ClassSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;>;", $PRIVATE | $FINAL, $field(ClassSet, map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClassSet, init$, void)},
		{"add", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)Z", nullptr, $PUBLIC, $virtualMethod(ClassSet, add, bool, $JavaClass*)},
		{"empty", "()Z", nullptr, $PUBLIC, $virtualMethod(ClassSet, empty, bool)},
		{"getClassNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ClassSet, getClassNames, $StringArray*)},
		{"remove", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC, $virtualMethod(ClassSet, remove, void, $JavaClass*)},
		{"toArray", "()[Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC, $virtualMethod(ClassSet, toArray, $JavaClassArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.util.ClassSet",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClassSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassSet);
	});
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