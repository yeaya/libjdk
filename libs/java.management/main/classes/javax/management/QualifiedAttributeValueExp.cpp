#include <javax/management/QualifiedAttributeValueExp.h>
#include <javax/management/AttributeValueExp.h>
#include <javax/management/InvalidApplicationException.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryEval.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeValueExp = ::javax::management::AttributeValueExp;
using $InvalidApplicationException = ::javax::management::InvalidApplicationException;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $QueryEval = ::javax::management::QueryEval;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

void QualifiedAttributeValueExp::init$() {
	$AttributeValueExp::init$();
}

void QualifiedAttributeValueExp::init$($String* className, $String* attr) {
	$AttributeValueExp::init$(attr);
	$set(this, className, className);
}

$String* QualifiedAttributeValueExp::getAttrClassName() {
	return this->className;
}

$ValueExp* QualifiedAttributeValueExp::apply($ObjectName* name) {
	$useLocalObjectStack();
	try {
		$var($MBeanServer, server, $QueryEval::getMBeanServer());
		$var($String, v, $$nc($nc(server)->getObjectInstance(name))->getClassName());
		if ($nc(v)->equals(this->className)) {
			return $AttributeValueExp::apply(name);
		}
		$throwNew($InvalidApplicationException, $$str({"Class name is "_s, v, ", should be "_s, this->className}));
	} catch ($Exception& e) {
		$throwNew($InvalidApplicationException, $$str({"Qualified attribute: "_s, e}));
	}
	$shouldNotReachHere();
}

$String* QualifiedAttributeValueExp::toString() {
	if (this->className != nullptr) {
		return $str({this->className, "."_s, $($AttributeValueExp::toString())});
	} else {
		return $AttributeValueExp::toString();
	}
}

QualifiedAttributeValueExp::QualifiedAttributeValueExp() {
}

$Class* QualifiedAttributeValueExp::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QualifiedAttributeValueExp, serialVersionUID)},
		{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(QualifiedAttributeValueExp, className)},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC | $DEPRECATED, $method(QualifiedAttributeValueExp, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(QualifiedAttributeValueExp, init$, void, $String*, $String*)},
		{"apply", "(Ljavax/management/ObjectName;)Ljavax/management/ValueExp;", nullptr, $PUBLIC, $virtualMethod(QualifiedAttributeValueExp, apply, $ValueExp*, $ObjectName*), "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
		{"getAttrClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(QualifiedAttributeValueExp, getAttrClassName, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(QualifiedAttributeValueExp, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.QualifiedAttributeValueExp",
		"javax.management.AttributeValueExp",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(QualifiedAttributeValueExp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(QualifiedAttributeValueExp);
	});
	return class$;
}

$Class* QualifiedAttributeValueExp::class$ = nullptr;

	} // management
} // javax