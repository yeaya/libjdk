#include <com/sun/tools/sjavac/pubapi/ReferenceTypeDesc.h>
#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef DECLARED

using $TypeDesc = ::com::sun::tools::sjavac::pubapi::TypeDesc;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

void ReferenceTypeDesc::init$($String* javaType) {
	$init($TypeKind);
	$TypeDesc::init$($TypeKind::DECLARED);
	$set(this, javaType, javaType);
}

bool ReferenceTypeDesc::equals(Object$* obj) {
	if (!$TypeDesc::equals(obj)) {
		return false;
	}
	return $nc(this->javaType)->equals($nc($cast(ReferenceTypeDesc, obj))->javaType);
}

int32_t ReferenceTypeDesc::hashCode() {
	int32_t var$0 = $TypeDesc::hashCode();
	return var$0 ^ $nc(this->javaType)->hashCode();
}

$String* ReferenceTypeDesc::toString() {
	$useLocalObjectStack();
	return $String::format("%s[type: %s]"_s, $$new($ObjectArray, {
		$($of(this)->getClass()->getSimpleName()),
		this->javaType
	}));
}

ReferenceTypeDesc::ReferenceTypeDesc() {
}

$Class* ReferenceTypeDesc::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReferenceTypeDesc, serialVersionUID)},
		{"javaType", "Ljava/lang/String;", nullptr, 0, $field(ReferenceTypeDesc, javaType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ReferenceTypeDesc, init$, void, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ReferenceTypeDesc, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ReferenceTypeDesc, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ReferenceTypeDesc, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.pubapi.ReferenceTypeDesc",
		"com.sun.tools.sjavac.pubapi.TypeDesc",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReferenceTypeDesc, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceTypeDesc);
	});
	return class$;
}

$Class* ReferenceTypeDesc::class$ = nullptr;

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com