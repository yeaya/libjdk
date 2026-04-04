#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>
#include <com/sun/tools/javac/util/StringUtils.h>
#include <com/sun/tools/sjavac/pubapi/ArrayTypeDesc.h>
#include <com/sun/tools/sjavac/pubapi/PrimitiveTypeDesc.h>
#include <com/sun/tools/sjavac/pubapi/ReferenceTypeDesc.h>
#include <com/sun/tools/sjavac/pubapi/TypeDesc$1.h>
#include <com/sun/tools/sjavac/pubapi/TypeVarTypeDesc.h>
#include <java/lang/AssertionError.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <jcpp.h>

#undef ARRAY
#undef DECLARED
#undef TYPEVAR
#undef VOID

using $StringUtils = ::com::sun::tools::javac::util::StringUtils;
using $ArrayTypeDesc = ::com::sun::tools::sjavac::pubapi::ArrayTypeDesc;
using $PrimitiveTypeDesc = ::com::sun::tools::sjavac::pubapi::PrimitiveTypeDesc;
using $ReferenceTypeDesc = ::com::sun::tools::sjavac::pubapi::ReferenceTypeDesc;
using $TypeDesc$1 = ::com::sun::tools::sjavac::pubapi::TypeDesc$1;
using $TypeVarTypeDesc = ::com::sun::tools::sjavac::pubapi::TypeVarTypeDesc;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $TypeVisitor = ::javax::lang::model::type::TypeVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

void TypeDesc::init$($TypeKind* typeKind) {
	$set(this, typeKind, typeKind);
}

TypeDesc* TypeDesc::decodeString($String* s$renamed) {
	$init(TypeDesc);
	$useLocalObjectStack();
	$var($String, s, s$renamed);
	$assign(s, $nc(s)->trim());
	if (s->endsWith("[]"_s)) {
		$var($String, componentPart, s->substring(0, s->length() - 2));
		return $new($ArrayTypeDesc, $(decodeString(componentPart)));
	}
	if (s->startsWith("#"_s)) {
		return $new($TypeVarTypeDesc, $(s->substring(1)));
	}
	if (s->matches("boolean|byte|char|double|float|int|long|short|void"_s)) {
		$TypeKind* tk = $TypeKind::valueOf($($StringUtils::toUpperCase(s)));
		return $new($PrimitiveTypeDesc, tk);
	}
	return $new($ReferenceTypeDesc, s);
}

$String* TypeDesc::encodeAsString(TypeDesc* td) {
	$init(TypeDesc);
	$useLocalObjectStack();
	if ($nc($nc(td)->typeKind)->isPrimitive() || td->typeKind == $TypeKind::VOID) {
		return $StringUtils::toLowerCase($($nc(td->typeKind)->toString()));
	}
	if (td->typeKind == $TypeKind::ARRAY) {
		return $str({$(encodeAsString($cast($ArrayTypeDesc, td)->compTypeDesc)), "[]"_s});
	}
	if (td->typeKind == $TypeKind::TYPEVAR) {
		return $str({"#"_s, $cast($TypeVarTypeDesc, td)->identifier});
	}
	if (td->typeKind == $TypeKind::DECLARED) {
		return $nc($cast($ReferenceTypeDesc, td)->javaType)->toString();
	}
	$throwNew($AssertionError, $$of($str({"Unhandled type: "_s, td->typeKind})));
}

TypeDesc* TypeDesc::fromType($TypeMirror* type) {
	$init(TypeDesc);
	$useLocalObjectStack();
	$var($TypeVisitor, v, $new($TypeDesc$1));
	$var(TypeDesc, td, $cast(TypeDesc, v->visit(type)));
	if (td == nullptr) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Unhandled type mirror: "_s);
		var$0->append(type);
		var$0->append(" ("_s);
		var$0->append($nc($of(type))->getClass());
		var$0->append(")"_s);
		$throwNew($AssertionError, $$of($str(var$0)));
	}
	return td;
}

bool TypeDesc::equals(Object$* obj) {
	if ($of(this)->getClass() != $nc($of(obj))->getClass()) {
		return false;
	}
	return $nc(this->typeKind)->equals($cast(TypeDesc, obj)->typeKind);
}

int32_t TypeDesc::hashCode() {
	return $nc(this->typeKind)->hashCode();
}

TypeDesc::TypeDesc() {
}

$Class* TypeDesc::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TypeDesc, serialVersionUID)},
		{"typeKind", "Ljavax/lang/model/type/TypeKind;", nullptr, 0, $field(TypeDesc, typeKind)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/lang/model/type/TypeKind;)V", nullptr, $PUBLIC, $method(TypeDesc, init$, void, $TypeKind*)},
		{"decodeString", "(Ljava/lang/String;)Lcom/sun/tools/sjavac/pubapi/TypeDesc;", nullptr, $PUBLIC | $STATIC, $staticMethod(TypeDesc, decodeString, TypeDesc*, $String*)},
		{"encodeAsString", "(Lcom/sun/tools/sjavac/pubapi/TypeDesc;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(TypeDesc, encodeAsString, $String*, TypeDesc*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(TypeDesc, equals, bool, Object$*)},
		{"fromType", "(Ljavax/lang/model/type/TypeMirror;)Lcom/sun/tools/sjavac/pubapi/TypeDesc;", nullptr, $PUBLIC | $STATIC, $staticMethod(TypeDesc, fromType, TypeDesc*, $TypeMirror*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(TypeDesc, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.sjavac.pubapi.TypeDesc$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.sjavac.pubapi.TypeDesc",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.sjavac.pubapi.TypeDesc$1"
	};
	$loadClass(TypeDesc, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeDesc);
	});
	return class$;
}

$Class* TypeDesc::class$ = nullptr;

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com