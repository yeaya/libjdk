#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

using $MXBeanMapping = ::com::sun::jmx::mbeanserver::MXBeanMapping;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void DefaultMXBeanMappingFactory$NonNullMXBeanMapping::init$($Type* javaType, $OpenType* openType) {
	$MXBeanMapping::init$(javaType, openType);
}

$Object* DefaultMXBeanMappingFactory$NonNullMXBeanMapping::fromOpenValue(Object$* openValue) {
	if (openValue == nullptr) {
		return nullptr;
	} else {
		return fromNonNullOpenValue(openValue);
	}
}

$Object* DefaultMXBeanMappingFactory$NonNullMXBeanMapping::toOpenValue(Object$* javaValue) {
	if (javaValue == nullptr) {
		return nullptr;
	} else {
		return toNonNullOpenValue(javaValue);
	}
}

bool DefaultMXBeanMappingFactory$NonNullMXBeanMapping::isIdentity() {
	return false;
}

DefaultMXBeanMappingFactory$NonNullMXBeanMapping::DefaultMXBeanMappingFactory$NonNullMXBeanMapping() {
}

$Class* DefaultMXBeanMappingFactory$NonNullMXBeanMapping::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/OpenType;)V", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/OpenType<*>;)V", 0, $method(DefaultMXBeanMappingFactory$NonNullMXBeanMapping, init$, void, $Type*, $OpenType*)},
		{"fromNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $ABSTRACT, $virtualMethod(DefaultMXBeanMappingFactory$NonNullMXBeanMapping, fromNonNullOpenValue, $Object*, Object$*), "java.io.InvalidObjectException"},
		{"fromOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $virtualMethod(DefaultMXBeanMappingFactory$NonNullMXBeanMapping, fromOpenValue, $Object*, Object$*), "java.io.InvalidObjectException"},
		{"isIdentity", "()Z", nullptr, 0, $virtualMethod(DefaultMXBeanMappingFactory$NonNullMXBeanMapping, isIdentity, bool)},
		{"toNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $ABSTRACT, $virtualMethod(DefaultMXBeanMappingFactory$NonNullMXBeanMapping, toNonNullOpenValue, $Object*, Object$*), "javax.management.openmbean.OpenDataException"},
		{"toOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $virtualMethod(DefaultMXBeanMappingFactory$NonNullMXBeanMapping, toOpenValue, $Object*, Object$*), "javax.management.openmbean.OpenDataException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "NonNullMXBeanMapping", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping",
		"com.sun.jmx.mbeanserver.MXBeanMapping",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
	};
	$loadClass(DefaultMXBeanMappingFactory$NonNullMXBeanMapping, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMXBeanMappingFactory$NonNullMXBeanMapping);
	});
	return class$;
}

$Class* DefaultMXBeanMappingFactory$NonNullMXBeanMapping::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com