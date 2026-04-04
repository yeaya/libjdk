#include <com/sun/beans/finder/BeanInfoFinder.h>
#include <com/sun/beans/finder/InstanceFinder.h>
#include <java/beans/BeanDescriptor.h>
#include <java/beans/BeanInfo.h>
#include <java/beans/MethodDescriptor.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef DEFAULT
#undef DEFAULT_NEW

using $MethodDescriptorArray = $Array<::java::beans::MethodDescriptor>;
using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $InstanceFinder = ::com::sun::beans::finder::InstanceFinder;
using $BeanDescriptor = ::java::beans::BeanDescriptor;
using $BeanInfo = ::java::beans::BeanInfo;
using $MethodDescriptor = ::java::beans::MethodDescriptor;
using $PropertyDescriptor = ::java::beans::PropertyDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$String* BeanInfoFinder::DEFAULT = nullptr;
$String* BeanInfoFinder::DEFAULT_NEW = nullptr;

void BeanInfoFinder::init$() {
	$load($BeanInfo);
	$InstanceFinder::init$($BeanInfo::class$, true, "BeanInfo"_s, $$new($StringArray, {BeanInfoFinder::DEFAULT}));
}

bool BeanInfoFinder::isValid($Class* type, $Method* method) {
	$init(BeanInfoFinder);
	return (method != nullptr) && $nc(method->getDeclaringClass())->isAssignableFrom(type);
}

$Object* BeanInfoFinder::instantiate($Class* type, $String* prefix$renamed, $String* name) {
	$useLocalObjectStack();
	$var($String, prefix, prefix$renamed);
	if (BeanInfoFinder::DEFAULT->equals(prefix)) {
		$assign(prefix, BeanInfoFinder::DEFAULT_NEW);
	}
	bool var$0 = !BeanInfoFinder::DEFAULT_NEW->equals(prefix);
	$var($BeanInfo, info, var$0 || "ComponentBeanInfo"_s->equals(name) ? $cast($BeanInfo, $InstanceFinder::instantiate(type, prefix, name)) : ($BeanInfo*)nullptr);
	if (info != nullptr) {
		$var($BeanDescriptor, bd, info->getBeanDescriptor());
		if (bd != nullptr) {
			if ($nc($of(type))->equals(bd->getBeanClass())) {
				return info;
			}
		} else {
			$var($PropertyDescriptorArray, pds, info->getPropertyDescriptors());
			if (pds != nullptr) {
				$var($PropertyDescriptorArray, arr$, pds);
				for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
					$var($PropertyDescriptor, pd, arr$->get(i$));
					{
						$var($Method, method, $nc(pd)->getReadMethod());
						if (method == nullptr) {
							$assign(method, pd->getWriteMethod());
						}
						if (isValid(type, method)) {
							return info;
						}
					}
				}
			} else {
				$var($MethodDescriptorArray, mds, info->getMethodDescriptors());
				if (mds != nullptr) {
					$var($MethodDescriptorArray, arr$, mds);
					for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
						$var($MethodDescriptor, md, arr$->get(i$));
						if (isValid(type, $($nc(md)->getMethod()))) {
							return info;
						}
					}
				}
			}
		}
	}
	return nullptr;
}

$Object* BeanInfoFinder::find($Class* type) {
	return $InstanceFinder::find(type);
}

void BeanInfoFinder::setPackages($StringArray* packages) {
	$InstanceFinder::setPackages(packages);
}

$StringArray* BeanInfoFinder::getPackages() {
	return $InstanceFinder::getPackages();
}

BeanInfoFinder::BeanInfoFinder() {
}

void BeanInfoFinder::clinit$($Class* clazz) {
	$assignStatic(BeanInfoFinder::DEFAULT, "sun.beans.infos"_s);
	$assignStatic(BeanInfoFinder::DEFAULT_NEW, "com.sun.beans.infos"_s);
}

$Class* BeanInfoFinder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BeanInfoFinder, DEFAULT)},
		{"DEFAULT_NEW", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BeanInfoFinder, DEFAULT_NEW)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BeanInfoFinder, init$, void)},
		{"find", "(Ljava/lang/Class;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(BeanInfoFinder, find, $Object*, $Class*)},
		{"getPackages", "()[Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(BeanInfoFinder, getPackages, $StringArray*)},
		{"instantiate", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Ljava/beans/BeanInfo;", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;)Ljava/beans/BeanInfo;", $PROTECTED, $virtualMethod(BeanInfoFinder, instantiate, $Object*, $Class*, $String*, $String*)},
		{"isValid", "(Ljava/lang/Class;Ljava/lang/reflect/Method;)Z", "(Ljava/lang/Class<*>;Ljava/lang/reflect/Method;)Z", $PRIVATE | $STATIC, $staticMethod(BeanInfoFinder, isValid, bool, $Class*, $Method*)},
		{"setPackages", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(BeanInfoFinder, setPackages, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.beans.finder.BeanInfoFinder",
		"com.sun.beans.finder.InstanceFinder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/beans/finder/InstanceFinder<Ljava/beans/BeanInfo;>;"
	};
	$loadClass(BeanInfoFinder, name, initialize, &classInfo$$, BeanInfoFinder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BeanInfoFinder);
	});
	return class$;
}

$Class* BeanInfoFinder::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com