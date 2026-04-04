#include <com/sun/naming/internal/ObjectFactoriesFilter.h>
#include <com/sun/naming/internal/ObjectFactoriesFilter$FactoryInfo.h>
#include <java/io/ObjectInputFilter$Config.h>
#include <java/io/ObjectInputFilter$Status.h>
#include <java/io/ObjectInputFilter.h>
#include <java/io/Serializable.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/security/util/SecurityProperties.h>
#include <jcpp.h>

#undef DEFAULT_SP_VALUE
#undef FACTORIES_FILTER_PROPNAME
#undef GLOBAL
#undef REJECTED

using $ObjectFactoriesFilter$FactoryInfo = ::com::sun::naming::internal::ObjectFactoriesFilter$FactoryInfo;
using $ObjectInputFilter = ::java::io::ObjectInputFilter;
using $ObjectInputFilter$Config = ::java::io::ObjectInputFilter$Config;
using $ObjectInputFilter$Status = ::java::io::ObjectInputFilter$Status;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SecurityProperties = ::sun::security::util::SecurityProperties;

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

class ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0 : public $ObjectFactoriesFilter$FactoryInfo {
	$class(ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0, $NO_CLASS_INIT, $ObjectFactoriesFilter$FactoryInfo)
public:
	void init$($Class* factoryClass) {
		this->factoryClass = factoryClass;
	}
	virtual $Class* serialClass() override {
		 return ObjectFactoriesFilter::lambda$canInstantiateObjectsFactory$0(factoryClass);
	}
	$Class* factoryClass = nullptr;
};
$Class* ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"factoryClass", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0, factoryClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0, init$, void, $Class*)},
		{"serialClass", "()Ljava/lang/Class;", nullptr, $PUBLIC, $virtualMethod(ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0, serialClass, $Class*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.naming.internal.ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0",
		"java.lang.Object",
		"com.sun.naming.internal.ObjectFactoriesFilter$FactoryInfo",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0);
	});
	return class$;
}
$Class* ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0::class$ = nullptr;

$String* ObjectFactoriesFilter::FACTORIES_FILTER_PROPNAME = nullptr;
$String* ObjectFactoriesFilter::DEFAULT_SP_VALUE = nullptr;
$ObjectInputFilter* ObjectFactoriesFilter::GLOBAL = nullptr;

bool ObjectFactoriesFilter::canInstantiateObjectsFactory($Class* factoryClass) {
	$init(ObjectFactoriesFilter);
	return checkInput($$new(ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0, factoryClass));
}

bool ObjectFactoriesFilter::checkInput($ObjectFactoriesFilter$FactoryInfo* factoryInfo) {
	$init(ObjectFactoriesFilter);
	$ObjectInputFilter$Status* result = $nc(ObjectFactoriesFilter::GLOBAL)->checkInput(factoryInfo);
	$init($ObjectInputFilter$Status);
	return result != $ObjectInputFilter$Status::REJECTED;
}

void ObjectFactoriesFilter::init$() {
	$throwNew($InternalError, "Not instantiable"_s);
}

$String* ObjectFactoriesFilter::getFilterPropertyValue() {
	$init(ObjectFactoriesFilter);
	$var($String, propVal, $SecurityProperties::privilegedGetOverridable(ObjectFactoriesFilter::FACTORIES_FILTER_PROPNAME));
	return propVal != nullptr ? propVal : ObjectFactoriesFilter::DEFAULT_SP_VALUE;
}

$Class* ObjectFactoriesFilter::lambda$canInstantiateObjectsFactory$0($Class* factoryClass) {
	$init(ObjectFactoriesFilter);
	return factoryClass;
}

void ObjectFactoriesFilter::clinit$($Class* clazz) {
	$assignStatic(ObjectFactoriesFilter::FACTORIES_FILTER_PROPNAME, "jdk.jndi.object.factoriesFilter"_s);
	$assignStatic(ObjectFactoriesFilter::DEFAULT_SP_VALUE, "*"_s);
	$assignStatic(ObjectFactoriesFilter::GLOBAL, $ObjectInputFilter$Config::createFilter($(ObjectFactoriesFilter::getFilterPropertyValue())));
}

ObjectFactoriesFilter::ObjectFactoriesFilter() {
}

$Class* ObjectFactoriesFilter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.naming.internal.ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0")) {
			return ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"FACTORIES_FILTER_PROPNAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ObjectFactoriesFilter, FACTORIES_FILTER_PROPNAME)},
		{"DEFAULT_SP_VALUE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ObjectFactoriesFilter, DEFAULT_SP_VALUE)},
		{"GLOBAL", "Ljava/io/ObjectInputFilter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ObjectFactoriesFilter, GLOBAL)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ObjectFactoriesFilter, init$, void)},
		{"canInstantiateObjectsFactory", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $staticMethod(ObjectFactoriesFilter, canInstantiateObjectsFactory, bool, $Class*)},
		{"checkInput", "(Lcom/sun/naming/internal/ObjectFactoriesFilter$FactoryInfo;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(ObjectFactoriesFilter, checkInput, bool, $ObjectFactoriesFilter$FactoryInfo*)},
		{"getFilterPropertyValue", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(ObjectFactoriesFilter, getFilterPropertyValue, $String*)},
		{"lambda$canInstantiateObjectsFactory$0", "(Ljava/lang/Class;)Ljava/lang/Class;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ObjectFactoriesFilter, lambda$canInstantiateObjectsFactory$0, $Class*, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.naming.internal.ObjectFactoriesFilter$FactoryInfo", "com.sun.naming.internal.ObjectFactoriesFilter", "FactoryInfo", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.naming.internal.ObjectFactoriesFilter",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.naming.internal.ObjectFactoriesFilter$FactoryInfo"
	};
	$loadClass(ObjectFactoriesFilter, name, initialize, &classInfo$$, ObjectFactoriesFilter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectFactoriesFilter);
	});
	return class$;
}

$Class* ObjectFactoriesFilter::class$ = nullptr;

			} // internal
		} // naming
	} // sun
} // com