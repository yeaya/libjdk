#include <javax/management/StringValueExp.h>
#include <java/lang/CharSequence.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

void StringValueExp::init$() {
}

void StringValueExp::init$($String* val) {
	$set(this, val, val);
}

$String* StringValueExp::getValue() {
	return this->val;
}

$String* StringValueExp::toString() {
	return $str({"\'"_s, $($nc(this->val)->replace("\'"_s, "\'\'"_s)), "\'"_s});
}

void StringValueExp::setMBeanServer($MBeanServer* s) {
}

$ValueExp* StringValueExp::apply($ObjectName* name) {
	return this;
}

StringValueExp::StringValueExp() {
}

$Class* StringValueExp::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringValueExp, serialVersionUID)},
		{"val", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringValueExp, val)},
		{}
	};
	$CompoundAttribute setMBeanServermethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StringValueExp, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StringValueExp, init$, void, $String*)},
		{"apply", "(Ljavax/management/ObjectName;)Ljavax/management/ValueExp;", nullptr, $PUBLIC, $virtualMethod(StringValueExp, apply, $ValueExp*, $ObjectName*), "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
		{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StringValueExp, getValue, $String*)},
		{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(StringValueExp, setMBeanServer, void, $MBeanServer*), nullptr, nullptr, setMBeanServermethodAnnotations$$},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StringValueExp, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.StringValueExp",
		"java.lang.Object",
		"javax.management.ValueExp",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StringValueExp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringValueExp);
	});
	return class$;
}

$Class* StringValueExp::class$ = nullptr;

	} // management
} // javax