#include <javax/management/BinaryRelQueryExp.h>
#include <javax/management/BooleanValueExp.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/NumericValueExp.h>
#include <javax/management/ObjectName.h>
#include <javax/management/Query.h>
#include <javax/management/QueryEval.h>
#include <javax/management/StringValueExp.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

#undef EQ
#undef GE
#undef GT
#undef LE
#undef LT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BooleanValueExp = ::javax::management::BooleanValueExp;
using $MBeanServer = ::javax::management::MBeanServer;
using $NumericValueExp = ::javax::management::NumericValueExp;
using $ObjectName = ::javax::management::ObjectName;
using $Query = ::javax::management::Query;
using $QueryEval = ::javax::management::QueryEval;
using $StringValueExp = ::javax::management::StringValueExp;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

void BinaryRelQueryExp::setMBeanServer($MBeanServer* s) {
	this->$QueryEval::setMBeanServer(s);
}

int32_t BinaryRelQueryExp::hashCode() {
	 return this->$QueryEval::hashCode();
}

bool BinaryRelQueryExp::equals(Object$* arg0) {
	 return this->$QueryEval::equals(arg0);
}

$Object* BinaryRelQueryExp::clone() {
	 return this->$QueryEval::clone();
}

void BinaryRelQueryExp::finalize() {
	this->$QueryEval::finalize();
}

void BinaryRelQueryExp::init$() {
	$QueryEval::init$();
}

void BinaryRelQueryExp::init$(int32_t op, $ValueExp* v1, $ValueExp* v2) {
	$QueryEval::init$();
	this->relOp = op;
	$set(this, exp1, v1);
	$set(this, exp2, v2);
}

int32_t BinaryRelQueryExp::getOperator() {
	return this->relOp;
}

$ValueExp* BinaryRelQueryExp::getLeftValue() {
	return this->exp1;
}

$ValueExp* BinaryRelQueryExp::getRightValue() {
	return this->exp2;
}

bool BinaryRelQueryExp::apply($ObjectName* name) {
	$useLocalObjectStack();
	$var($Object, val1, $nc(this->exp1)->apply(name));
	$var($Object, val2, $nc(this->exp2)->apply(name));
	bool numeric = $instanceOf($NumericValueExp, val1);
	bool bool$ = $instanceOf($BooleanValueExp, val1);
	if (numeric) {
		if ($nc($cast($NumericValueExp, val1))->isLong()) {
			int64_t lval1 = $cast($NumericValueExp, val1)->longValue();
			int64_t lval2 = $nc($cast($NumericValueExp, val2))->longValue();
			switch (this->relOp) {
			case $Query::GT:
				return lval1 > lval2;
			case $Query::LT:
				return lval1 < lval2;
			case $Query::GE:
				return lval1 >= lval2;
			case $Query::LE:
				return lval1 <= lval2;
			case $Query::EQ:
				return lval1 == lval2;
			}
		} else {
			double dval1 = $cast($NumericValueExp, val1)->doubleValue();
			double dval2 = $nc($cast($NumericValueExp, val2))->doubleValue();
			switch (this->relOp) {
			case $Query::GT:
				return dval1 > dval2;
			case $Query::LT:
				return dval1 < dval2;
			case $Query::GE:
				return dval1 >= dval2;
			case $Query::LE:
				return dval1 <= dval2;
			case $Query::EQ:
				return dval1 == dval2;
			}
		}
	} else if (bool$) {
		bool bval1 = $$nc($nc($cast($BooleanValueExp, val1))->getValue())->booleanValue();
		bool bval2 = $$nc($nc($cast($BooleanValueExp, val2))->getValue())->booleanValue();
		switch (this->relOp) {
		case $Query::GT:
			return bval1 && !bval2;
		case $Query::LT:
			return !bval1 && bval2;
		case $Query::GE:
			return bval1 || !bval2;
		case $Query::LE:
			return !bval1 || bval2;
		case $Query::EQ:
			return bval1 == bval2;
		}
	} else {
		$var($String, sval1, $nc($cast($StringValueExp, val1))->getValue());
		$var($String, sval2, $nc($cast($StringValueExp, val2))->getValue());
		switch (this->relOp) {
		case $Query::GT:
			return $nc(sval1)->compareTo(sval2) > 0;
		case $Query::LT:
			return $nc(sval1)->compareTo(sval2) < 0;
		case $Query::GE:
			return $nc(sval1)->compareTo(sval2) >= 0;
		case $Query::LE:
			return $nc(sval1)->compareTo(sval2) <= 0;
		case $Query::EQ:
			return $nc(sval1)->compareTo(sval2) == 0;
		}
	}
	return false;
}

$String* BinaryRelQueryExp::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("("_s);
	var$0->append(this->exp1);
	var$0->append(") "_s);
	var$0->append($(relOpString()));
	var$0->append(" ("_s);
	var$0->append(this->exp2);
	var$0->append(")"_s);
	return $str(var$0);
}

$String* BinaryRelQueryExp::relOpString() {
	switch (this->relOp) {
	case $Query::GT:
		return ">"_s;
	case $Query::LT:
		return "<"_s;
	case $Query::GE:
		return ">="_s;
	case $Query::LE:
		return "<="_s;
	case $Query::EQ:
		return "="_s;
	}
	return "="_s;
}

BinaryRelQueryExp::BinaryRelQueryExp() {
}

$Class* BinaryRelQueryExp::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BinaryRelQueryExp, serialVersionUID)},
		{"relOp", "I", nullptr, $PRIVATE, $field(BinaryRelQueryExp, relOp)},
		{"exp1", "Ljavax/management/ValueExp;", nullptr, $PRIVATE, $field(BinaryRelQueryExp, exp1)},
		{"exp2", "Ljavax/management/ValueExp;", nullptr, $PRIVATE, $field(BinaryRelQueryExp, exp2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(BinaryRelQueryExp, init$, void)},
		{"<init>", "(ILjavax/management/ValueExp;Ljavax/management/ValueExp;)V", nullptr, $PUBLIC, $method(BinaryRelQueryExp, init$, void, int32_t, $ValueExp*, $ValueExp*)},
		{"apply", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC, $virtualMethod(BinaryRelQueryExp, apply, bool, $ObjectName*), "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
		{"getLeftValue", "()Ljavax/management/ValueExp;", nullptr, $PUBLIC, $virtualMethod(BinaryRelQueryExp, getLeftValue, $ValueExp*)},
		{"getOperator", "()I", nullptr, $PUBLIC, $virtualMethod(BinaryRelQueryExp, getOperator, int32_t)},
		{"getRightValue", "()Ljavax/management/ValueExp;", nullptr, $PUBLIC, $virtualMethod(BinaryRelQueryExp, getRightValue, $ValueExp*)},
		{"relOpString", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(BinaryRelQueryExp, relOpString, $String*)},
		{"*setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BinaryRelQueryExp, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.BinaryRelQueryExp",
		"javax.management.QueryEval",
		"javax.management.QueryExp",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BinaryRelQueryExp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BinaryRelQueryExp));
	});
	return class$;
}

$Class* BinaryRelQueryExp::class$ = nullptr;

	} // management
} // javax