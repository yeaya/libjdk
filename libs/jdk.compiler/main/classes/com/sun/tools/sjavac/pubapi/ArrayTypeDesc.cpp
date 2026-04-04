#include <com/sun/tools/sjavac/pubapi/ArrayTypeDesc.h>
#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef ARRAY

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

void ArrayTypeDesc::init$($TypeDesc* compTypeDesc) {
	$init($TypeKind);
	$TypeDesc::init$($TypeKind::ARRAY);
	$set(this, compTypeDesc, compTypeDesc);
}

bool ArrayTypeDesc::equals(Object$* obj) {
	if (!$TypeDesc::equals(obj)) {
		return false;
	}
	return $nc(this->compTypeDesc)->equals($nc($cast(ArrayTypeDesc, obj))->compTypeDesc);
}

int32_t ArrayTypeDesc::hashCode() {
	int32_t var$0 = $TypeDesc::hashCode();
	return var$0 ^ $nc(this->compTypeDesc)->hashCode();
}

ArrayTypeDesc::ArrayTypeDesc() {
}

$Class* ArrayTypeDesc::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayTypeDesc, serialVersionUID)},
		{"compTypeDesc", "Lcom/sun/tools/sjavac/pubapi/TypeDesc;", nullptr, 0, $field(ArrayTypeDesc, compTypeDesc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/sjavac/pubapi/TypeDesc;)V", nullptr, $PUBLIC, $method(ArrayTypeDesc, init$, void, $TypeDesc*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ArrayTypeDesc, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ArrayTypeDesc, hashCode, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.pubapi.ArrayTypeDesc",
		"com.sun.tools.sjavac.pubapi.TypeDesc",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ArrayTypeDesc, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayTypeDesc);
	});
	return class$;
}

$Class* ArrayTypeDesc::class$ = nullptr;

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com