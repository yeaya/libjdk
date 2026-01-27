#include <com/sun/org/apache/xerces/internal/impl/XMLScanner$NameType.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLScanner.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef ATTRIBUTENAME
#undef COMMENT
#undef DOCTYPE
#undef ELEMENTEND
#undef ELEMENTSTART
#undef ENTITY
#undef NOTATION
#undef PI
#undef REFERENCE

using $XMLScanner$NameTypeArray = $Array<::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLScanner$NameType_FieldInfo_[] = {
	{"ATTRIBUTE", "Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLScanner$NameType, ATTRIBUTE)},
	{"ATTRIBUTENAME", "Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLScanner$NameType, ATTRIBUTENAME)},
	{"COMMENT", "Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLScanner$NameType, COMMENT)},
	{"DOCTYPE", "Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLScanner$NameType, DOCTYPE)},
	{"ELEMENTSTART", "Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLScanner$NameType, ELEMENTSTART)},
	{"ELEMENTEND", "Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLScanner$NameType, ELEMENTEND)},
	{"ENTITY", "Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLScanner$NameType, ENTITY)},
	{"NOTATION", "Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLScanner$NameType, NOTATION)},
	{"PI", "Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLScanner$NameType, PI)},
	{"REFERENCE", "Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLScanner$NameType, REFERENCE)},
	{"$VALUES", "[Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(XMLScanner$NameType, $VALUES)},
	{"literal", "Ljava/lang/String;", nullptr, $FINAL, $field(XMLScanner$NameType, literal$)},
	{}
};

$MethodInfo _XMLScanner$NameType_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XMLScanner$NameType, $values, $XMLScanner$NameTypeArray*)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(XMLScanner$NameType, init$, void, $String*, int32_t, $String*)},
	{"literal", "()Ljava/lang/String;", nullptr, 0, $method(XMLScanner$NameType, literal, $String*)},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLScanner$NameType, valueOf, XMLScanner$NameType*, $String*)},
	{"values", "()[Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLScanner$NameType, values, $XMLScanner$NameTypeArray*)},
	{}
};

$InnerClassInfo _XMLScanner$NameType_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLScanner$NameType", "com.sun.org.apache.xerces.internal.impl.XMLScanner", "NameType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _XMLScanner$NameType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.org.apache.xerces.internal.impl.XMLScanner$NameType",
	"java.lang.Enum",
	nullptr,
	_XMLScanner$NameType_FieldInfo_,
	_XMLScanner$NameType_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;>;",
	nullptr,
	_XMLScanner$NameType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLScanner"
};

$Object* allocate$XMLScanner$NameType($Class* clazz) {
	return $of($alloc(XMLScanner$NameType));
}

XMLScanner$NameType* XMLScanner$NameType::ATTRIBUTE = nullptr;
XMLScanner$NameType* XMLScanner$NameType::ATTRIBUTENAME = nullptr;
XMLScanner$NameType* XMLScanner$NameType::COMMENT = nullptr;
XMLScanner$NameType* XMLScanner$NameType::DOCTYPE = nullptr;
XMLScanner$NameType* XMLScanner$NameType::ELEMENTSTART = nullptr;
XMLScanner$NameType* XMLScanner$NameType::ELEMENTEND = nullptr;
XMLScanner$NameType* XMLScanner$NameType::ENTITY = nullptr;
XMLScanner$NameType* XMLScanner$NameType::NOTATION = nullptr;
XMLScanner$NameType* XMLScanner$NameType::PI = nullptr;
XMLScanner$NameType* XMLScanner$NameType::REFERENCE = nullptr;
$XMLScanner$NameTypeArray* XMLScanner$NameType::$VALUES = nullptr;

$XMLScanner$NameTypeArray* XMLScanner$NameType::$values() {
	$init(XMLScanner$NameType);
	return $new($XMLScanner$NameTypeArray, {
		XMLScanner$NameType::ATTRIBUTE,
		XMLScanner$NameType::ATTRIBUTENAME,
		XMLScanner$NameType::COMMENT,
		XMLScanner$NameType::DOCTYPE,
		XMLScanner$NameType::ELEMENTSTART,
		XMLScanner$NameType::ELEMENTEND,
		XMLScanner$NameType::ENTITY,
		XMLScanner$NameType::NOTATION,
		XMLScanner$NameType::PI,
		XMLScanner$NameType::REFERENCE
	});
}

$XMLScanner$NameTypeArray* XMLScanner$NameType::values() {
	$init(XMLScanner$NameType);
	return $cast($XMLScanner$NameTypeArray, XMLScanner$NameType::$VALUES->clone());
}

XMLScanner$NameType* XMLScanner$NameType::valueOf($String* name) {
	$init(XMLScanner$NameType);
	return $cast(XMLScanner$NameType, $Enum::valueOf(XMLScanner$NameType::class$, name));
}

void XMLScanner$NameType::init$($String* $enum$name, int32_t $enum$ordinal, $String* literal) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, literal$, literal);
}

$String* XMLScanner$NameType::literal() {
	return this->literal$;
}

void clinit$XMLScanner$NameType($Class* class$) {
	$assignStatic(XMLScanner$NameType::ATTRIBUTE, $new(XMLScanner$NameType, "ATTRIBUTE"_s, 0, "attribute"_s));
	$assignStatic(XMLScanner$NameType::ATTRIBUTENAME, $new(XMLScanner$NameType, "ATTRIBUTENAME"_s, 1, "attribute name"_s));
	$assignStatic(XMLScanner$NameType::COMMENT, $new(XMLScanner$NameType, "COMMENT"_s, 2, "comment"_s));
	$assignStatic(XMLScanner$NameType::DOCTYPE, $new(XMLScanner$NameType, "DOCTYPE"_s, 3, "doctype"_s));
	$assignStatic(XMLScanner$NameType::ELEMENTSTART, $new(XMLScanner$NameType, "ELEMENTSTART"_s, 4, "startelement"_s));
	$assignStatic(XMLScanner$NameType::ELEMENTEND, $new(XMLScanner$NameType, "ELEMENTEND"_s, 5, "endelement"_s));
	$assignStatic(XMLScanner$NameType::ENTITY, $new(XMLScanner$NameType, "ENTITY"_s, 6, "entity"_s));
	$assignStatic(XMLScanner$NameType::NOTATION, $new(XMLScanner$NameType, "NOTATION"_s, 7, "notation"_s));
	$assignStatic(XMLScanner$NameType::PI, $new(XMLScanner$NameType, "PI"_s, 8, "pi"_s));
	$assignStatic(XMLScanner$NameType::REFERENCE, $new(XMLScanner$NameType, "REFERENCE"_s, 9, "reference"_s));
	$assignStatic(XMLScanner$NameType::$VALUES, XMLScanner$NameType::$values());
}

XMLScanner$NameType::XMLScanner$NameType() {
}

$Class* XMLScanner$NameType::load$($String* name, bool initialize) {
	$loadClass(XMLScanner$NameType, name, initialize, &_XMLScanner$NameType_ClassInfo_, clinit$XMLScanner$NameType, allocate$XMLScanner$NameType);
	return class$;
}

$Class* XMLScanner$NameType::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com