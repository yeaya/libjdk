#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CollectionMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/io/InvalidObjectException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/SortedSet.h>
#include <java/util/TreeSet.h>
#include <javax/management/openmbean/ArrayType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <jcpp.h>

using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $DefaultMXBeanMappingFactory$NonNullMXBeanMapping = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping;
using $MXBeanMapping = ::com::sun::jmx::mbeanserver::MXBeanMapping;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $SortedSet = ::java::util::SortedSet;
using $TreeSet = ::java::util::TreeSet;
using $ArrayType = ::javax::management::openmbean::ArrayType;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

bool DefaultMXBeanMappingFactory$CollectionMapping::$assertionsDisabled = false;

void DefaultMXBeanMappingFactory$CollectionMapping::init$($Type* targetType, $ArrayType* openArrayType, $Class* openArrayClass, $MXBeanMapping* elementMapping) {
	$DefaultMXBeanMappingFactory$NonNullMXBeanMapping::init$(targetType, openArrayType);
	$set(this, elementMapping, elementMapping);
	$var($Type, raw, $nc($cast($ParameterizedType, targetType))->getRawType());
	$Class* c = $cast($Class, raw);
	$Class* collC = nullptr;
	$load($List);
	if (c == $List::class$) {
		$load($ArrayList);
		collC = $ArrayList::class$;
	} else {
		$load($Set);
		if (c == $Set::class$) {
			$load($HashSet);
			collC = $HashSet::class$;
		} else {
			$load($SortedSet);
			if (c == $SortedSet::class$) {
				$load($TreeSet);
				collC = $TreeSet::class$;
			} else {
				if (!DefaultMXBeanMappingFactory$CollectionMapping::$assertionsDisabled) {
					$throwNew($AssertionError);
				}
				collC = nullptr;
			}
		}
	}
	$set(this, collectionClass, $cast($Class, $Util::cast(collC)));
}

$Object* DefaultMXBeanMappingFactory$CollectionMapping::toNonNullOpenValue(Object$* value) {
	$useLocalObjectStack();
	$var($Collection, valueCollection, $cast($Collection, value));
	if ($instanceOf($SortedSet, valueCollection)) {
		$var($Comparator, comparator, $cast($SortedSet, valueCollection)->comparator());
		if (comparator != nullptr) {
			$var($String, msg, $str({"Cannot convert SortedSet with non-null comparator: "_s, comparator}));
			$throw($($DefaultMXBeanMappingFactory::openDataException(msg, $$new($IllegalArgumentException, msg))));
		}
	}
	$Class* var$0 = $nc(getOpenClass())->getComponentType();
	$var($ObjectArray, openArray, $cast($ObjectArray, $1Array::newInstance(var$0, $nc(valueCollection)->size())));
	int32_t i = 0;
	{
		$var($Iterator, i$, valueCollection->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, o, i$->next());
			openArray->set(i++, $($nc(this->elementMapping)->toOpenValue(o)));
		}
	}
	return openArray;
}

$Object* DefaultMXBeanMappingFactory$CollectionMapping::fromNonNullOpenValue(Object$* openValue) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ObjectArray, openArray, $cast($ObjectArray, openValue));
	$var($Collection, valueCollection, nullptr);
	try {
		$var($Collection, tmp, $cast($Collection, $nc(this->collectionClass)->newInstance()));
		$assign(valueCollection, $cast($Collection, $Util::cast(tmp)));
	} catch ($Exception& e) {
		$throw($($DefaultMXBeanMappingFactory::invalidObjectException("Cannot create collection"_s, e)));
	}
	{
		$var($ObjectArray, arr$, openArray);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			{
				$var($Object, value, $nc(this->elementMapping)->fromOpenValue(o));
				if (!$nc(valueCollection)->add(value)) {
					$var($StringBuilder, var$0, $new($StringBuilder));
					var$0->append("Could not add "_s);
					var$0->append(o);
					var$0->append(" to "_s);
					var$0->append($($nc(this->collectionClass)->getName()));
					var$0->append(" (duplicate set element?)"_s);
					$var($String, msg, $str(var$0));
					$throwNew($InvalidObjectException, msg);
				}
			}
		}
	}
	return valueCollection;
}

void DefaultMXBeanMappingFactory$CollectionMapping::checkReconstructible() {
	$nc(this->elementMapping)->checkReconstructible();
}

void DefaultMXBeanMappingFactory$CollectionMapping::clinit$($Class* clazz) {
	$load($DefaultMXBeanMappingFactory);
	DefaultMXBeanMappingFactory$CollectionMapping::$assertionsDisabled = !$DefaultMXBeanMappingFactory::class$->desiredAssertionStatus();
}

DefaultMXBeanMappingFactory$CollectionMapping::DefaultMXBeanMappingFactory$CollectionMapping() {
}

$Class* DefaultMXBeanMappingFactory$CollectionMapping::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DefaultMXBeanMappingFactory$CollectionMapping, $assertionsDisabled)},
		{"collectionClass", "Ljava/lang/Class;", "Ljava/lang/Class<+Ljava/util/Collection<*>;>;", $PRIVATE | $FINAL, $field(DefaultMXBeanMappingFactory$CollectionMapping, collectionClass)},
		{"elementMapping", "Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PRIVATE | $FINAL, $field(DefaultMXBeanMappingFactory$CollectionMapping, elementMapping)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/ArrayType;Ljava/lang/Class;Lcom/sun/jmx/mbeanserver/MXBeanMapping;)V", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/ArrayType<*>;Ljava/lang/Class<*>;Lcom/sun/jmx/mbeanserver/MXBeanMapping;)V", 0, $method(DefaultMXBeanMappingFactory$CollectionMapping, init$, void, $Type*, $ArrayType*, $Class*, $MXBeanMapping*)},
		{"checkReconstructible", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultMXBeanMappingFactory$CollectionMapping, checkReconstructible, void), "java.io.InvalidObjectException"},
		{"fromNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $FINAL, $virtualMethod(DefaultMXBeanMappingFactory$CollectionMapping, fromNonNullOpenValue, $Object*, Object$*), "java.io.InvalidObjectException"},
		{"toNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $FINAL, $virtualMethod(DefaultMXBeanMappingFactory$CollectionMapping, toNonNullOpenValue, $Object*, Object$*), "javax.management.openmbean.OpenDataException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CollectionMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CollectionMapping", $PRIVATE | $STATIC | $FINAL},
		{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "NonNullMXBeanMapping", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CollectionMapping",
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
	};
	$loadClass(DefaultMXBeanMappingFactory$CollectionMapping, name, initialize, &classInfo$$, DefaultMXBeanMappingFactory$CollectionMapping::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMXBeanMappingFactory$CollectionMapping);
	});
	return class$;
}

$Class* DefaultMXBeanMappingFactory$CollectionMapping::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com