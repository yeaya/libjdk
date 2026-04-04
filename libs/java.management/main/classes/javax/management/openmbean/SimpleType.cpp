#include <javax/management/openmbean/SimpleType.h>
#include <java/io/InvalidObjectException.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/util/Date.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/management/ObjectName.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

#undef BIGDECIMAL
#undef BIGINTEGER
#undef BOOLEAN
#undef BYTE
#undef CHARACTER
#undef DATE
#undef DOUBLE
#undef FLOAT
#undef INTEGER
#undef LONG
#undef OBJECTNAME
#undef SHORT
#undef STRING
#undef VOID

using $SimpleTypeArray = $Array<::javax::management::openmbean::SimpleType>;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Void = ::java::lang::Void;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $Date = ::java::util::Date;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $ObjectName = ::javax::management::ObjectName;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace javax {
	namespace management {
		namespace openmbean {

SimpleType* SimpleType::VOID = nullptr;
SimpleType* SimpleType::BOOLEAN = nullptr;
SimpleType* SimpleType::CHARACTER = nullptr;
SimpleType* SimpleType::BYTE = nullptr;
SimpleType* SimpleType::SHORT = nullptr;
SimpleType* SimpleType::INTEGER = nullptr;
SimpleType* SimpleType::LONG = nullptr;
SimpleType* SimpleType::FLOAT = nullptr;
SimpleType* SimpleType::DOUBLE = nullptr;
SimpleType* SimpleType::STRING = nullptr;
SimpleType* SimpleType::BIGDECIMAL = nullptr;
SimpleType* SimpleType::BIGINTEGER = nullptr;
SimpleType* SimpleType::DATE = nullptr;
SimpleType* SimpleType::OBJECTNAME = nullptr;
$SimpleTypeArray* SimpleType::typeArray = nullptr;
$Map* SimpleType::canonicalTypes = nullptr;

void SimpleType::init$($Class* valueClass) {
	$useLocalObjectStack();
	$var($String, var$0, $nc(valueClass)->getName());
	$var($String, var$1, valueClass->getName());
	$OpenType::init$(var$0, var$1, $(valueClass->getName()), false);
	$set(this, myHashCode, nullptr);
	$set(this, myToString, nullptr);
}

bool SimpleType::isValue(Object$* obj) {
	$useLocalObjectStack();
	if (obj == nullptr) {
		return false;
	}
	return $$nc(this->getClassName())->equals($($nc($of(obj))->getClass()->getName()));
}

bool SimpleType::equals(Object$* obj) {
	$useLocalObjectStack();
	if (!($instanceOf(SimpleType, obj))) {
		return false;
	}
	$var(SimpleType, other, $cast(SimpleType, obj));
	return $$nc(this->getClassName())->equals($($nc(other)->getClassName()));
}

int32_t SimpleType::hashCode() {
	if (this->myHashCode == nullptr) {
		$set(this, myHashCode, $Integer::valueOf($$nc(this->getClassName())->hashCode()));
	}
	return $nc(this->myHashCode)->intValue();
}

$String* SimpleType::toString() {
	$useLocalObjectStack();
	if (this->myToString == nullptr) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($(this->getClass()->getName()));
		var$0->append("(name="_s);
		var$0->append($(getTypeName()));
		var$0->append(")"_s);
		$set(this, myToString, $str(var$0));
	}
	return this->myToString;
}

$Object* SimpleType::readResolve() {
	$useLocalObjectStack();
	$var(SimpleType, canonical, $cast(SimpleType, SimpleType::canonicalTypes->get(this)));
	if (canonical == nullptr) {
		$throwNew($InvalidObjectException, $$str({"Invalid SimpleType: "_s, this}));
	}
	return canonical;
}

void SimpleType::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(SimpleType::VOID, $new(SimpleType, $Void::class$));
	$assignStatic(SimpleType::BOOLEAN, $new(SimpleType, $Boolean::class$));
	$assignStatic(SimpleType::CHARACTER, $new(SimpleType, $Character::class$));
	$assignStatic(SimpleType::BYTE, $new(SimpleType, $Byte::class$));
	$assignStatic(SimpleType::SHORT, $new(SimpleType, $Short::class$));
	$assignStatic(SimpleType::INTEGER, $new(SimpleType, $Integer::class$));
	$assignStatic(SimpleType::LONG, $new(SimpleType, $Long::class$));
	$assignStatic(SimpleType::FLOAT, $new(SimpleType, $Float::class$));
	$assignStatic(SimpleType::DOUBLE, $new(SimpleType, $Double::class$));
	$assignStatic(SimpleType::STRING, $new(SimpleType, $String::class$));
	$load($BigDecimal);
	$assignStatic(SimpleType::BIGDECIMAL, $new(SimpleType, $BigDecimal::class$));
	$load($BigInteger);
	$assignStatic(SimpleType::BIGINTEGER, $new(SimpleType, $BigInteger::class$));
	$load($Date);
	$assignStatic(SimpleType::DATE, $new(SimpleType, $Date::class$));
	$load($ObjectName);
	$assignStatic(SimpleType::OBJECTNAME, $new(SimpleType, $ObjectName::class$));
	$assignStatic(SimpleType::typeArray, $new($SimpleTypeArray, {
		SimpleType::VOID,
		SimpleType::BOOLEAN,
		SimpleType::CHARACTER,
		SimpleType::BYTE,
		SimpleType::SHORT,
		SimpleType::INTEGER,
		SimpleType::LONG,
		SimpleType::FLOAT,
		SimpleType::DOUBLE,
		SimpleType::STRING,
		SimpleType::BIGDECIMAL,
		SimpleType::BIGINTEGER,
		SimpleType::DATE,
		SimpleType::OBJECTNAME
	}));
	$assignStatic(SimpleType::canonicalTypes, $new($HashMap));
	{
		for (int32_t i = 0; i < SimpleType::typeArray->length; ++i) {
			$var(SimpleType, type, SimpleType::typeArray->get(i));
			SimpleType::canonicalTypes->put(type, type);
		}
	}
}

SimpleType::SimpleType() {
}

$Class* SimpleType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SimpleType, serialVersionUID)},
		{"VOID", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Void;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, VOID)},
		{"BOOLEAN", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Boolean;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, BOOLEAN)},
		{"CHARACTER", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Character;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, CHARACTER)},
		{"BYTE", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Byte;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, BYTE)},
		{"SHORT", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Short;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, SHORT)},
		{"INTEGER", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Integer;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, INTEGER)},
		{"LONG", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Long;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, LONG)},
		{"FLOAT", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Float;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, FLOAT)},
		{"DOUBLE", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Double;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, DOUBLE)},
		{"STRING", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/String;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, STRING)},
		{"BIGDECIMAL", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/math/BigDecimal;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, BIGDECIMAL)},
		{"BIGINTEGER", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/math/BigInteger;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, BIGINTEGER)},
		{"DATE", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/util/Date;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, DATE)},
		{"OBJECTNAME", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljavax/management/ObjectName;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, OBJECTNAME)},
		{"typeArray", "[Ljavax/management/openmbean/SimpleType;", "[Ljavax/management/openmbean/SimpleType<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(SimpleType, typeArray)},
		{"myHashCode", "Ljava/lang/Integer;", nullptr, $PRIVATE | $TRANSIENT, $field(SimpleType, myHashCode)},
		{"myToString", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(SimpleType, myToString)},
		{"canonicalTypes", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/management/openmbean/SimpleType<*>;Ljavax/management/openmbean/SimpleType<*>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SimpleType, canonicalTypes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<TT;>;)V", $PRIVATE, $method(SimpleType, init$, void, $Class*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SimpleType, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleType, hashCode, int32_t)},
		{"isValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SimpleType, isValue, bool, Object$*)},
		{"readResolve", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(SimpleType, readResolve, $Object*), "java.io.ObjectStreamException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleType, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.management.openmbean.SimpleType",
		"javax.management.openmbean.OpenType",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljavax/management/openmbean/OpenType<TT;>;"
	};
	$loadClass(SimpleType, name, initialize, &classInfo$$, SimpleType::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleType);
	});
	return class$;
}

$Class* SimpleType::class$ = nullptr;

		} // openmbean
	} // management
} // javax