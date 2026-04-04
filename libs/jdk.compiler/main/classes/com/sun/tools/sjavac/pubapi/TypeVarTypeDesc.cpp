#include <com/sun/tools/sjavac/pubapi/TypeVarTypeDesc.h>
#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef TYPEVAR

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

void TypeVarTypeDesc::init$($String* identifier) {
	$init($TypeKind);
	$TypeDesc::init$($TypeKind::TYPEVAR);
	$set(this, identifier, identifier);
}

bool TypeVarTypeDesc::equals(Object$* obj) {
	if (!$TypeDesc::equals(obj)) {
		return false;
	}
	return $nc(this->identifier)->equals($nc($cast(TypeVarTypeDesc, obj))->identifier);
}

int32_t TypeVarTypeDesc::hashCode() {
	int32_t var$0 = $TypeDesc::hashCode();
	return var$0 ^ $nc(this->identifier)->hashCode();
}

$String* TypeVarTypeDesc::toString() {
	$useLocalObjectStack();
	return $String::format("%s[identifier: %s]"_s, $$new($ObjectArray, {
		$($of(this)->getClass()->getSimpleName()),
		this->identifier
	}));
}

TypeVarTypeDesc::TypeVarTypeDesc() {
}

$Class* TypeVarTypeDesc::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TypeVarTypeDesc, serialVersionUID)},
		{"identifier", "Ljava/lang/String;", nullptr, 0, $field(TypeVarTypeDesc, identifier)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TypeVarTypeDesc, init$, void, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(TypeVarTypeDesc, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(TypeVarTypeDesc, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TypeVarTypeDesc, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.pubapi.TypeVarTypeDesc",
		"com.sun.tools.sjavac.pubapi.TypeDesc",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TypeVarTypeDesc, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeVarTypeDesc);
	});
	return class$;
}

$Class* TypeVarTypeDesc::class$ = nullptr;

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com