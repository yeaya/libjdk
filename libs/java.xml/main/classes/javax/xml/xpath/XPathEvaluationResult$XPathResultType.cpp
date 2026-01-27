#include <javax/xml/xpath/XPathEvaluationResult$XPathResultType.h>

#include <java/lang/Enum.h>
#include <java/lang/Number.h>
#include <java/util/Objects.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/xpath/XPathConstants.h>
#include <javax/xml/xpath/XPathEvaluationResult.h>
#include <javax/xml/xpath/XPathNodes.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ANY
#undef BOOLEAN
#undef NODE
#undef NODESET
#undef NUMBER
#undef STRING

using $XPathEvaluationResult$XPathResultTypeArray = $Array<::javax::xml::xpath::XPathEvaluationResult$XPathResultType>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Objects = ::java::util::Objects;
using $QName = ::javax::xml::namespace$::QName;
using $XPathConstants = ::javax::xml::xpath::XPathConstants;
using $XPathEvaluationResult = ::javax::xml::xpath::XPathEvaluationResult;
using $XPathNodes = ::javax::xml::xpath::XPathNodes;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace xml {
		namespace xpath {

$FieldInfo _XPathEvaluationResult$XPathResultType_FieldInfo_[] = {
	{"ANY", "Ljavax/xml/xpath/XPathEvaluationResult$XPathResultType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XPathEvaluationResult$XPathResultType, ANY)},
	{"BOOLEAN", "Ljavax/xml/xpath/XPathEvaluationResult$XPathResultType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XPathEvaluationResult$XPathResultType, BOOLEAN)},
	{"NUMBER", "Ljavax/xml/xpath/XPathEvaluationResult$XPathResultType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XPathEvaluationResult$XPathResultType, NUMBER)},
	{"STRING", "Ljavax/xml/xpath/XPathEvaluationResult$XPathResultType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XPathEvaluationResult$XPathResultType, STRING)},
	{"NODESET", "Ljavax/xml/xpath/XPathEvaluationResult$XPathResultType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XPathEvaluationResult$XPathResultType, NODESET)},
	{"NODE", "Ljavax/xml/xpath/XPathEvaluationResult$XPathResultType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XPathEvaluationResult$XPathResultType, NODE)},
	{"$VALUES", "[Ljavax/xml/xpath/XPathEvaluationResult$XPathResultType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(XPathEvaluationResult$XPathResultType, $VALUES)},
	{"qnameType", "Ljavax/xml/namespace/QName;", nullptr, $FINAL, $field(XPathEvaluationResult$XPathResultType, qnameType)},
	{"clsType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(XPathEvaluationResult$XPathResultType, clsType)},
	{}
};

$MethodInfo _XPathEvaluationResult$XPathResultType_MethodInfo_[] = {
	{"$values", "()[Ljavax/xml/xpath/XPathEvaluationResult$XPathResultType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XPathEvaluationResult$XPathResultType, $values, $XPathEvaluationResult$XPathResultTypeArray*)},
	{"<init>", "(Ljava/lang/String;ILjavax/xml/namespace/QName;Ljava/lang/Class;)V", "(Ljavax/xml/namespace/QName;Ljava/lang/Class<*>;)V", $PRIVATE, $method(XPathEvaluationResult$XPathResultType, init$, void, $String*, int32_t, $QName*, $Class*)},
	{"equalsClassType", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PRIVATE, $method(XPathEvaluationResult$XPathResultType, equalsClassType, bool, $Class*)},
	{"getQNameType", "(Ljava/lang/Class;)Ljavax/xml/namespace/QName;", "(Ljava/lang/Class<*>;)Ljavax/xml/namespace/QName;", $PUBLIC | $STATIC, $staticMethod(XPathEvaluationResult$XPathResultType, getQNameType, $QName*, $Class*)},
	{"isAcceptedNumberSubType", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PRIVATE, $method(XPathEvaluationResult$XPathResultType, isAcceptedNumberSubType, bool, $Class*)},
	{"valueOf", "(Ljava/lang/String;)Ljavax/xml/xpath/XPathEvaluationResult$XPathResultType;", nullptr, $PUBLIC | $STATIC, $staticMethod(XPathEvaluationResult$XPathResultType, valueOf, XPathEvaluationResult$XPathResultType*, $String*)},
	{"values", "()[Ljavax/xml/xpath/XPathEvaluationResult$XPathResultType;", nullptr, $PUBLIC | $STATIC, $staticMethod(XPathEvaluationResult$XPathResultType, values, $XPathEvaluationResult$XPathResultTypeArray*)},
	{}
};

$InnerClassInfo _XPathEvaluationResult$XPathResultType_InnerClassesInfo_[] = {
	{"javax.xml.xpath.XPathEvaluationResult$XPathResultType", "javax.xml.xpath.XPathEvaluationResult", "XPathResultType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _XPathEvaluationResult$XPathResultType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.xml.xpath.XPathEvaluationResult$XPathResultType",
	"java.lang.Enum",
	nullptr,
	_XPathEvaluationResult$XPathResultType_FieldInfo_,
	_XPathEvaluationResult$XPathResultType_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/xml/xpath/XPathEvaluationResult$XPathResultType;>;",
	nullptr,
	_XPathEvaluationResult$XPathResultType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.xpath.XPathEvaluationResult"
};

$Object* allocate$XPathEvaluationResult$XPathResultType($Class* clazz) {
	return $of($alloc(XPathEvaluationResult$XPathResultType));
}

XPathEvaluationResult$XPathResultType* XPathEvaluationResult$XPathResultType::ANY = nullptr;
XPathEvaluationResult$XPathResultType* XPathEvaluationResult$XPathResultType::BOOLEAN = nullptr;
XPathEvaluationResult$XPathResultType* XPathEvaluationResult$XPathResultType::NUMBER = nullptr;
XPathEvaluationResult$XPathResultType* XPathEvaluationResult$XPathResultType::STRING = nullptr;
XPathEvaluationResult$XPathResultType* XPathEvaluationResult$XPathResultType::NODESET = nullptr;
XPathEvaluationResult$XPathResultType* XPathEvaluationResult$XPathResultType::NODE = nullptr;
$XPathEvaluationResult$XPathResultTypeArray* XPathEvaluationResult$XPathResultType::$VALUES = nullptr;

$XPathEvaluationResult$XPathResultTypeArray* XPathEvaluationResult$XPathResultType::$values() {
	$init(XPathEvaluationResult$XPathResultType);
	return $new($XPathEvaluationResult$XPathResultTypeArray, {
		XPathEvaluationResult$XPathResultType::ANY,
		XPathEvaluationResult$XPathResultType::BOOLEAN,
		XPathEvaluationResult$XPathResultType::NUMBER,
		XPathEvaluationResult$XPathResultType::STRING,
		XPathEvaluationResult$XPathResultType::NODESET,
		XPathEvaluationResult$XPathResultType::NODE
	});
}

$XPathEvaluationResult$XPathResultTypeArray* XPathEvaluationResult$XPathResultType::values() {
	$init(XPathEvaluationResult$XPathResultType);
	return $cast($XPathEvaluationResult$XPathResultTypeArray, XPathEvaluationResult$XPathResultType::$VALUES->clone());
}

XPathEvaluationResult$XPathResultType* XPathEvaluationResult$XPathResultType::valueOf($String* name) {
	$init(XPathEvaluationResult$XPathResultType);
	return $cast(XPathEvaluationResult$XPathResultType, $Enum::valueOf(XPathEvaluationResult$XPathResultType::class$, name));
}

void XPathEvaluationResult$XPathResultType::init$($String* $enum$name, int32_t $enum$ordinal, $QName* qnameType, $Class* clsType) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, qnameType, qnameType);
	$set(this, clsType, clsType);
}

bool XPathEvaluationResult$XPathResultType::equalsClassType($Class* clsType) {
	bool var$0 = $Objects::nonNull(clsType);
	if (var$0 && $nc(this->clsType)->isAssignableFrom(clsType)) {
		$load($Number);
		if (this->clsType == $Number::class$) {
			return isAcceptedNumberSubType(clsType);
		}
		return true;
	}
	return false;
}

bool XPathEvaluationResult$XPathResultType::isAcceptedNumberSubType($Class* clsType) {
	$load($Double);
	bool var$1 = $nc(clsType)->isAssignableFrom($Double::class$);
	$load($Integer);
	bool var$0 = var$1 || $nc(clsType)->isAssignableFrom($Integer::class$);
	$load($Long);
	return var$0 || $nc(clsType)->isAssignableFrom($Long::class$);
}

$QName* XPathEvaluationResult$XPathResultType::getQNameType($Class* clsType) {
	$init(XPathEvaluationResult$XPathResultType);
	{
		$var($XPathEvaluationResult$XPathResultTypeArray, arr$, XPathEvaluationResult$XPathResultType::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			XPathEvaluationResult$XPathResultType* type = arr$->get(i$);
			{
				if ($nc(type)->equalsClassType(clsType)) {
					return type->qnameType;
				}
			}
		}
	}
	return nullptr;
}

void clinit$XPathEvaluationResult$XPathResultType($Class* class$) {
	$load($XPathEvaluationResult);
	$assignStatic(XPathEvaluationResult$XPathResultType::ANY, $new(XPathEvaluationResult$XPathResultType, "ANY"_s, 0, $$new($QName, "http://www.w3.org/1999/XSL/Transform"_s, "any"_s), $XPathEvaluationResult::class$));
	$init($XPathConstants);
	$load($Boolean);
	$assignStatic(XPathEvaluationResult$XPathResultType::BOOLEAN, $new(XPathEvaluationResult$XPathResultType, "BOOLEAN"_s, 1, $XPathConstants::BOOLEAN, $Boolean::class$));
	$load($Number);
	$assignStatic(XPathEvaluationResult$XPathResultType::NUMBER, $new(XPathEvaluationResult$XPathResultType, "NUMBER"_s, 2, $XPathConstants::NUMBER, $Number::class$));
	$assignStatic(XPathEvaluationResult$XPathResultType::STRING, $new(XPathEvaluationResult$XPathResultType, "STRING"_s, 3, $XPathConstants::STRING, $String::class$));
	$load($XPathNodes);
	$assignStatic(XPathEvaluationResult$XPathResultType::NODESET, $new(XPathEvaluationResult$XPathResultType, "NODESET"_s, 4, $XPathConstants::NODESET, $XPathNodes::class$));
	$load($Node);
	$assignStatic(XPathEvaluationResult$XPathResultType::NODE, $new(XPathEvaluationResult$XPathResultType, "NODE"_s, 5, $XPathConstants::NODE, $Node::class$));
	$assignStatic(XPathEvaluationResult$XPathResultType::$VALUES, XPathEvaluationResult$XPathResultType::$values());
}

XPathEvaluationResult$XPathResultType::XPathEvaluationResult$XPathResultType() {
}

$Class* XPathEvaluationResult$XPathResultType::load$($String* name, bool initialize) {
	$loadClass(XPathEvaluationResult$XPathResultType, name, initialize, &_XPathEvaluationResult$XPathResultType_ClassInfo_, clinit$XPathEvaluationResult$XPathResultType, allocate$XPathEvaluationResult$XPathResultType);
	return class$;
}

$Class* XPathEvaluationResult$XPathResultType::class$ = nullptr;

		} // xpath
	} // xml
} // javax