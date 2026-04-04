#include <javax/management/InQueryExp.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/NumericValueExp.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryEval.h>
#include <javax/management/StringValueExp.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

using $ValueExpArray = $Array<::javax::management::ValueExp>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $NumericValueExp = ::javax::management::NumericValueExp;
using $ObjectName = ::javax::management::ObjectName;
using $QueryEval = ::javax::management::QueryEval;
using $StringValueExp = ::javax::management::StringValueExp;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

void InQueryExp::setMBeanServer($MBeanServer* s) {
	this->$QueryEval::setMBeanServer(s);
}

int32_t InQueryExp::hashCode() {
	 return this->$QueryEval::hashCode();
}

bool InQueryExp::equals(Object$* arg0) {
	 return this->$QueryEval::equals(arg0);
}

$Object* InQueryExp::clone() {
	 return this->$QueryEval::clone();
}

void InQueryExp::finalize() {
	this->$QueryEval::finalize();
}

void InQueryExp::init$() {
	$QueryEval::init$();
}

void InQueryExp::init$($ValueExp* v1, $ValueExpArray* items) {
	$QueryEval::init$();
	$set(this, val, v1);
	$set(this, valueList, items);
}

$ValueExp* InQueryExp::getCheckedValue() {
	return this->val;
}

$ValueExpArray* InQueryExp::getExplicitValues() {
	return this->valueList;
}

bool InQueryExp::apply($ObjectName* name) {
	$useLocalObjectStack();
	if (this->valueList != nullptr) {
		$var($ValueExp, v, $nc(this->val)->apply(name));
		bool numeric = $instanceOf($NumericValueExp, v);
		{
			$var($ValueExpArray, arr$, this->valueList);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($ValueExp, element, arr$->get(i$));
				{
					$assign(element, $nc(element)->apply(name));
					if (numeric) {
						double var$0 = $nc($cast($NumericValueExp, element))->doubleValue();
						if (var$0 == $nc($cast($NumericValueExp, v))->doubleValue()) {
							return true;
						}
					} else if ($$nc($nc($cast($StringValueExp, element))->getValue())->equals($($nc($cast($StringValueExp, v))->getValue()))) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

$String* InQueryExp::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append(this->val);
	var$0->append(" in ("_s);
	var$0->append($(generateValueList()));
	var$0->append(")"_s);
	return $str(var$0);
}

$String* InQueryExp::generateValueList() {
	$useLocalObjectStack();
	if (this->valueList == nullptr || this->valueList->length == 0) {
		return ""_s;
	}
	$var($StringBuilder, result, $new($StringBuilder, $($nc($nc(this->valueList)->get(0))->toString())));
	for (int32_t i = 1; i < this->valueList->length; ++i) {
		result->append(", "_s);
		result->append(this->valueList->get(i));
	}
	return result->toString();
}

InQueryExp::InQueryExp() {
}

$Class* InQueryExp::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InQueryExp, serialVersionUID)},
		{"val", "Ljavax/management/ValueExp;", nullptr, $PRIVATE, $field(InQueryExp, val)},
		{"valueList", "[Ljavax/management/ValueExp;", nullptr, $PRIVATE, $field(InQueryExp, valueList)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(InQueryExp, init$, void)},
		{"<init>", "(Ljavax/management/ValueExp;[Ljavax/management/ValueExp;)V", nullptr, $PUBLIC, $method(InQueryExp, init$, void, $ValueExp*, $ValueExpArray*)},
		{"apply", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC, $virtualMethod(InQueryExp, apply, bool, $ObjectName*), "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
		{"generateValueList", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(InQueryExp, generateValueList, $String*)},
		{"getCheckedValue", "()Ljavax/management/ValueExp;", nullptr, $PUBLIC, $virtualMethod(InQueryExp, getCheckedValue, $ValueExp*)},
		{"getExplicitValues", "()[Ljavax/management/ValueExp;", nullptr, $PUBLIC, $virtualMethod(InQueryExp, getExplicitValues, $ValueExpArray*)},
		{"*setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InQueryExp, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.InQueryExp",
		"javax.management.QueryEval",
		"javax.management.QueryExp",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InQueryExp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(InQueryExp));
	});
	return class$;
}

$Class* InQueryExp::class$ = nullptr;

	} // management
} // javax