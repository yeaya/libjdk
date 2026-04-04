#include <com/sun/jmx/mbeanserver/MBeanSupport.h>
#include <com/sun/jmx/mbeanserver/DynamicMBean2.h>
#include <com/sun/jmx/mbeanserver/MBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/PerInterface.h>
#include <java/util/Iterator.h>
#include <javax/management/Attribute.h>
#include <javax/management/AttributeList.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanRegistration.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/NotCompliantMBeanException.h>
#include <javax/management/ObjectName.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $DynamicMBean2 = ::com::sun::jmx::mbeanserver::DynamicMBean2;
using $MBeanIntrospector = ::com::sun::jmx::mbeanserver::MBeanIntrospector;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Attribute = ::javax::management::Attribute;
using $AttributeList = ::javax::management::AttributeList;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanRegistration = ::javax::management::MBeanRegistration;
using $MBeanServer = ::javax::management::MBeanServer;
using $NotCompliantMBeanException = ::javax::management::NotCompliantMBeanException;
using $ObjectName = ::javax::management::ObjectName;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

int32_t MBeanSupport::hashCode() {
	 return this->$DynamicMBean2::hashCode();
}

bool MBeanSupport::equals(Object$* arg0) {
	 return this->$DynamicMBean2::equals(arg0);
}

$Object* MBeanSupport::clone() {
	 return this->$DynamicMBean2::clone();
}

$String* MBeanSupport::toString() {
	 return this->$DynamicMBean2::toString();
}

void MBeanSupport::finalize() {
	this->$DynamicMBean2::finalize();
}

void MBeanSupport::init$(Object$* resource, $Class* mbeanInterfaceType) {
	$useLocalObjectStack();
	if (mbeanInterfaceType == nullptr) {
		$throwNew($NotCompliantMBeanException, "Null MBean interface"_s);
	}
	if (!$nc(mbeanInterfaceType)->isInstance(resource)) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Resource class "_s);
		var$0->append($($nc($of(resource))->getClass()->getName()));
		var$0->append(" is not an instance of "_s);
		var$0->append($(mbeanInterfaceType->getName()));
		$var($String, msg, $str(var$0));
		$throwNew($NotCompliantMBeanException, msg);
	}
	$ReflectUtil::checkPackageAccess(mbeanInterfaceType);
	$set(this, resource, resource);
	$var($MBeanIntrospector, introspector, getMBeanIntrospector());
	$set(this, perInterface, $nc(introspector)->getPerInterface(mbeanInterfaceType));
	$set(this, mbeanInfo, introspector->getMBeanInfo(resource, this->perInterface));
}

bool MBeanSupport::isMXBean() {
	return $nc(this->perInterface)->isMXBean();
}

$ObjectName* MBeanSupport::preRegister($MBeanServer* server, $ObjectName* name$renamed) {
	$var($ObjectName, name, name$renamed);
	if ($instanceOf($MBeanRegistration, this->resource)) {
		$assign(name, $cast($MBeanRegistration, this->resource)->preRegister(server, name));
	}
	return name;
}

void MBeanSupport::preRegister2($MBeanServer* server, $ObjectName* name) {
	register$(server, name);
}

void MBeanSupport::registerFailed() {
	unregister();
}

void MBeanSupport::postRegister($Boolean* registrationDone) {
	if ($instanceOf($MBeanRegistration, this->resource)) {
		$cast($MBeanRegistration, this->resource)->postRegister(registrationDone);
	}
}

void MBeanSupport::preDeregister() {
	if ($instanceOf($MBeanRegistration, this->resource)) {
		$cast($MBeanRegistration, this->resource)->preDeregister();
	}
}

void MBeanSupport::postDeregister() {
	$var($Throwable, var$0, nullptr);
	try {
		unregister();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if ($instanceOf($MBeanRegistration, this->resource)) {
			$cast($MBeanRegistration, this->resource)->postDeregister();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$Object* MBeanSupport::getAttribute($String* attribute) {
	return $nc(this->perInterface)->getAttribute(this->resource, attribute, $(getCookie()));
}

$AttributeList* MBeanSupport::getAttributes($StringArray* attributes) {
	$useLocalObjectStack();
	$var($AttributeList, result, $new($AttributeList, $nc(attributes)->length));
	{
		$var($StringArray, arr$, attributes);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, attrName, arr$->get(i$));
			try {
				$var($Object, attrValue, getAttribute(attrName));
				result->add($$new($Attribute, attrName, attrValue));
			} catch ($Exception& e) {
			}
		}
	}
	return result;
}

void MBeanSupport::setAttribute($Attribute* attribute) {
	$useLocalObjectStack();
	$var($String, name, $nc(attribute)->getName());
	$var($Object, value, attribute->getValue());
	$nc(this->perInterface)->setAttribute(this->resource, name, value, $(getCookie()));
}

$AttributeList* MBeanSupport::setAttributes($AttributeList* attributes) {
	$useLocalObjectStack();
	$var($AttributeList, result, $new($AttributeList, $nc(attributes)->size()));
	{
		$var($Iterator, i$, attributes->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, attrObj, i$->next());
			{
				$var($Attribute, attr, $cast($Attribute, attrObj));
				try {
					setAttribute(attr);
					$var($String, var$0, $nc(attr)->getName());
					result->add($$new($Attribute, var$0, $(attr->getValue())));
				} catch ($Exception& e) {
				}
			}
		}
	}
	return result;
}

$Object* MBeanSupport::invoke($String* operation, $ObjectArray* params, $StringArray* signature) {
	return $nc(this->perInterface)->invoke(this->resource, operation, params, signature, $(getCookie()));
}

$MBeanInfo* MBeanSupport::getMBeanInfo() {
	return this->mbeanInfo;
}

$String* MBeanSupport::getClassName() {
	return $nc(this->resource)->getClass()->getName();
}

$Object* MBeanSupport::getResource() {
	return this->resource;
}

$Class* MBeanSupport::getMBeanInterface() {
	return $nc(this->perInterface)->getMBeanInterface();
}

MBeanSupport::MBeanSupport() {
}

$Class* MBeanSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mbeanInfo", "Ljavax/management/MBeanInfo;", nullptr, $PRIVATE | $FINAL, $field(MBeanSupport, mbeanInfo)},
		{"resource", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(MBeanSupport, resource)},
		{"perInterface", "Lcom/sun/jmx/mbeanserver/PerInterface;", "Lcom/sun/jmx/mbeanserver/PerInterface<TM;>;", $PRIVATE | $FINAL, $field(MBeanSupport, perInterface)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Class;)V", "<T:Ljava/lang/Object;>(TT;Ljava/lang/Class<TT;>;)V", 0, $method(MBeanSupport, init$, void, Object$*, $Class*), "javax.management.NotCompliantMBeanException"},
		{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MBeanSupport, getAttribute, $Object*, $String*), "javax.management.AttributeNotFoundException,javax.management.MBeanException,javax.management.ReflectionException"},
		{"getAttributes", "([Ljava/lang/String;)Ljavax/management/AttributeList;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MBeanSupport, getAttributes, $AttributeList*, $StringArray*)},
		{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MBeanSupport, getClassName, $String*)},
		{"getCookie", "()Ljava/lang/Object;", nullptr, $ABSTRACT, $virtualMethod(MBeanSupport, getCookie, $Object*)},
		{"getMBeanInfo", "()Ljavax/management/MBeanInfo;", nullptr, $PUBLIC, $virtualMethod(MBeanSupport, getMBeanInfo, $MBeanInfo*)},
		{"getMBeanInterface", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $FINAL, $method(MBeanSupport, getMBeanInterface, $Class*)},
		{"getMBeanIntrospector", "()Lcom/sun/jmx/mbeanserver/MBeanIntrospector;", "()Lcom/sun/jmx/mbeanserver/MBeanIntrospector<TM;>;", $ABSTRACT, $virtualMethod(MBeanSupport, getMBeanIntrospector, $MBeanIntrospector*)},
		{"getResource", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MBeanSupport, getResource, $Object*)},
		{"invoke", "(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MBeanSupport, invoke, $Object*, $String*, $ObjectArray*, $StringArray*), "javax.management.MBeanException,javax.management.ReflectionException"},
		{"isMXBean", "()Z", nullptr, $PUBLIC | $FINAL, $method(MBeanSupport, isMXBean, bool)},
		{"postDeregister", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(MBeanSupport, postDeregister, void)},
		{"postRegister", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(MBeanSupport, postRegister, void, $Boolean*)},
		{"preDeregister", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(MBeanSupport, preDeregister, void), "java.lang.Exception"},
		{"preRegister", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MBeanSupport, preRegister, $ObjectName*, $MBeanServer*, $ObjectName*), "java.lang.Exception"},
		{"preRegister2", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(MBeanSupport, preRegister2, void, $MBeanServer*, $ObjectName*), "java.lang.Exception"},
		{"register", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanSupport, register$, void, $MBeanServer*, $ObjectName*), "java.lang.Exception"},
		{"registerFailed", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(MBeanSupport, registerFailed, void)},
		{"setAttribute", "(Ljavax/management/Attribute;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(MBeanSupport, setAttribute, void, $Attribute*), "javax.management.AttributeNotFoundException,javax.management.InvalidAttributeValueException,javax.management.MBeanException,javax.management.ReflectionException"},
		{"setAttributes", "(Ljavax/management/AttributeList;)Ljavax/management/AttributeList;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MBeanSupport, setAttributes, $AttributeList*, $AttributeList*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"unregister", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanSupport, unregister, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.jmx.mbeanserver.MBeanSupport",
		"java.lang.Object",
		"com.sun.jmx.mbeanserver.DynamicMBean2,javax.management.MBeanRegistration",
		fieldInfos$$,
		methodInfos$$,
		"<M:Ljava/lang/Object;>Ljava/lang/Object;Lcom/sun/jmx/mbeanserver/DynamicMBean2;Ljavax/management/MBeanRegistration;"
	};
	$loadClass(MBeanSupport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MBeanSupport));
	});
	return class$;
}

$Class* MBeanSupport::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com