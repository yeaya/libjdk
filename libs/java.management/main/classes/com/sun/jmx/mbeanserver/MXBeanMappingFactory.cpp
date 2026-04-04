#include <com/sun/jmx/mbeanserver/MXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <java/lang/reflect/Type.h>
#include <jcpp.h>

#undef DEFAULT

using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $MXBeanMapping = ::com::sun::jmx::mbeanserver::MXBeanMapping;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

MXBeanMappingFactory* MXBeanMappingFactory::DEFAULT = nullptr;

void MXBeanMappingFactory::init$() {
}

void MXBeanMappingFactory::clinit$($Class* clazz) {
	$assignStatic(MXBeanMappingFactory::DEFAULT, $new($DefaultMXBeanMappingFactory));
}

MXBeanMappingFactory::MXBeanMappingFactory() {
}

$Class* MXBeanMappingFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT", "Lcom/sun/jmx/mbeanserver/MXBeanMappingFactory;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MXBeanMappingFactory, DEFAULT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(MXBeanMappingFactory, init$, void)},
		{"mappingForType", "(Ljava/lang/reflect/Type;Lcom/sun/jmx/mbeanserver/MXBeanMappingFactory;)Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MXBeanMappingFactory, mappingForType, $MXBeanMapping*, $Type*, MXBeanMappingFactory*), "javax.management.openmbean.OpenDataException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.jmx.mbeanserver.MXBeanMappingFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MXBeanMappingFactory, name, initialize, &classInfo$$, MXBeanMappingFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MXBeanMappingFactory);
	});
	return class$;
}

$Class* MXBeanMappingFactory::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com