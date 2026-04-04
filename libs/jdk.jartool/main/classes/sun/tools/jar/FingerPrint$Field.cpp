#include <sun/tools/jar/FingerPrint$Field.h>
#include <sun/tools/jar/FingerPrint.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace tools {
		namespace jar {

void FingerPrint$Field::init$(int32_t access, $String* name, $String* desc) {
	this->access = access;
	$set(this, name, name);
	$set(this, desc, desc);
}

bool FingerPrint$Field::equals(Object$* that) {
	if (that == nullptr) {
		return false;
	}
	if ($equals(this, that)) {
		return true;
	}
	if (!($instanceOf(FingerPrint$Field, that))) {
		return false;
	}
	$var(FingerPrint$Field, field, $cast(FingerPrint$Field, that));
	bool var$0 = (this->access == $nc(field)->access) && $nc(this->name)->equals(field->name);
	return var$0 && $nc(this->desc)->equals(field->desc);
}

int32_t FingerPrint$Field::hashCode() {
	int32_t result = 17;
	result = 37 * result + this->access;
	result = 37 * result + $nc(this->name)->hashCode();
	result = 37 * result + $nc(this->desc)->hashCode();
	return result;
}

FingerPrint$Field::FingerPrint$Field() {
}

$Class* FingerPrint$Field::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"access", "I", nullptr, $PRIVATE | $FINAL, $field(FingerPrint$Field, access)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FingerPrint$Field, name)},
		{"desc", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FingerPrint$Field, desc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(FingerPrint$Field, init$, void, int32_t, $String*, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(FingerPrint$Field, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(FingerPrint$Field, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.tools.jar.FingerPrint$Field", "sun.tools.jar.FingerPrint", "Field", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.tools.jar.FingerPrint$Field",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.tools.jar.FingerPrint"
	};
	$loadClass(FingerPrint$Field, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FingerPrint$Field);
	});
	return class$;
}

$Class* FingerPrint$Field::class$ = nullptr;

		} // jar
	} // tools
} // sun