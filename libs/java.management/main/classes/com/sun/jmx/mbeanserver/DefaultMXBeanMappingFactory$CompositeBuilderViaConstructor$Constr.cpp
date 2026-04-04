#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor.h>
#include <java/lang/reflect/Constructor.h>
#include <java/util/BitSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $BitSet = ::java::util::BitSet;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr::init$($Constructor* constructor, $ints* paramIndexes, $BitSet* presentParams) {
	$set(this, constructor, constructor);
	$set(this, paramIndexes, paramIndexes);
	$set(this, presentParams, presentParams);
}

DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr::DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr() {
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"constructor", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<*>;", $FINAL, $field(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr, constructor)},
		{"paramIndexes", "[I", nullptr, $FINAL, $field(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr, paramIndexes)},
		{"presentParams", "Ljava/util/BitSet;", nullptr, $FINAL, $field(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr, presentParams)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Constructor;[ILjava/util/BitSet;)V", "(Ljava/lang/reflect/Constructor<*>;[ILjava/util/BitSet;)V", 0, $method(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr, init$, void, $Constructor*, $ints*, $BitSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilderViaConstructor", $PRIVATE | $STATIC},
		{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor", "Constr", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr",
		"java.lang.Object",
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
	$loadClass(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr);
	});
	return class$;
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com