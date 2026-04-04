#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type.h>
#include <java/lang/Enum.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod.h>
#include <jcpp.h>

#undef DSA
#undef ECDSA
#undef HMAC
#undef RSA

using $AbstractDOMSignatureMethod$TypeArray = $Array<::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

AbstractDOMSignatureMethod$Type* AbstractDOMSignatureMethod$Type::DSA = nullptr;
AbstractDOMSignatureMethod$Type* AbstractDOMSignatureMethod$Type::RSA = nullptr;
AbstractDOMSignatureMethod$Type* AbstractDOMSignatureMethod$Type::ECDSA = nullptr;
AbstractDOMSignatureMethod$Type* AbstractDOMSignatureMethod$Type::HMAC = nullptr;
$AbstractDOMSignatureMethod$TypeArray* AbstractDOMSignatureMethod$Type::$VALUES = nullptr;

$AbstractDOMSignatureMethod$TypeArray* AbstractDOMSignatureMethod$Type::$values() {
	$init(AbstractDOMSignatureMethod$Type);
	return $new($AbstractDOMSignatureMethod$TypeArray, {
		AbstractDOMSignatureMethod$Type::DSA,
		AbstractDOMSignatureMethod$Type::RSA,
		AbstractDOMSignatureMethod$Type::ECDSA,
		AbstractDOMSignatureMethod$Type::HMAC
	});
}

$AbstractDOMSignatureMethod$TypeArray* AbstractDOMSignatureMethod$Type::values() {
	$init(AbstractDOMSignatureMethod$Type);
	return $cast($AbstractDOMSignatureMethod$TypeArray, AbstractDOMSignatureMethod$Type::$VALUES->clone());
}

AbstractDOMSignatureMethod$Type* AbstractDOMSignatureMethod$Type::valueOf($String* name) {
	$init(AbstractDOMSignatureMethod$Type);
	return $cast(AbstractDOMSignatureMethod$Type, $Enum::valueOf(AbstractDOMSignatureMethod$Type::class$, name));
}

void AbstractDOMSignatureMethod$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void AbstractDOMSignatureMethod$Type::clinit$($Class* clazz) {
	$assignStatic(AbstractDOMSignatureMethod$Type::DSA, $new(AbstractDOMSignatureMethod$Type, "DSA"_s, 0));
	$assignStatic(AbstractDOMSignatureMethod$Type::RSA, $new(AbstractDOMSignatureMethod$Type, "RSA"_s, 1));
	$assignStatic(AbstractDOMSignatureMethod$Type::ECDSA, $new(AbstractDOMSignatureMethod$Type, "ECDSA"_s, 2));
	$assignStatic(AbstractDOMSignatureMethod$Type::HMAC, $new(AbstractDOMSignatureMethod$Type, "HMAC"_s, 3));
	$assignStatic(AbstractDOMSignatureMethod$Type::$VALUES, AbstractDOMSignatureMethod$Type::$values());
}

AbstractDOMSignatureMethod$Type::AbstractDOMSignatureMethod$Type() {
}

$Class* AbstractDOMSignatureMethod$Type::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DSA", "Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AbstractDOMSignatureMethod$Type, DSA)},
		{"RSA", "Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AbstractDOMSignatureMethod$Type, RSA)},
		{"ECDSA", "Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AbstractDOMSignatureMethod$Type, ECDSA)},
		{"HMAC", "Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AbstractDOMSignatureMethod$Type, HMAC)},
		{"$VALUES", "[Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractDOMSignatureMethod$Type, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AbstractDOMSignatureMethod$Type, $values, $AbstractDOMSignatureMethod$TypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(AbstractDOMSignatureMethod$Type, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(AbstractDOMSignatureMethod$Type, valueOf, AbstractDOMSignatureMethod$Type*, $String*)},
		{"values", "()[Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(AbstractDOMSignatureMethod$Type, values, $AbstractDOMSignatureMethod$TypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod$Type", "org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod", "Type", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod$Type",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod"
	};
	$loadClass(AbstractDOMSignatureMethod$Type, name, initialize, &classInfo$$, AbstractDOMSignatureMethod$Type::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AbstractDOMSignatureMethod$Type));
	});
	return class$;
}

$Class* AbstractDOMSignatureMethod$Type::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org