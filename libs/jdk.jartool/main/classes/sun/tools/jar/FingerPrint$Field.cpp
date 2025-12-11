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

$FieldInfo _FingerPrint$Field_FieldInfo_[] = {
	{"access", "I", nullptr, $PRIVATE | $FINAL, $field(FingerPrint$Field, access)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FingerPrint$Field, name)},
	{"desc", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FingerPrint$Field, desc)},
	{}
};

$MethodInfo _FingerPrint$Field_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(FingerPrint$Field::*)(int32_t,$String*,$String*)>(&FingerPrint$Field::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FingerPrint$Field_InnerClassesInfo_[] = {
	{"sun.tools.jar.FingerPrint$Field", "sun.tools.jar.FingerPrint", "Field", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _FingerPrint$Field_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.tools.jar.FingerPrint$Field",
	"java.lang.Object",
	nullptr,
	_FingerPrint$Field_FieldInfo_,
	_FingerPrint$Field_MethodInfo_,
	nullptr,
	nullptr,
	_FingerPrint$Field_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.FingerPrint"
};

$Object* allocate$FingerPrint$Field($Class* clazz) {
	return $of($alloc(FingerPrint$Field));
}

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
	$loadClass(FingerPrint$Field, name, initialize, &_FingerPrint$Field_ClassInfo_, allocate$FingerPrint$Field);
	return class$;
}

$Class* FingerPrint$Field::class$ = nullptr;

		} // jar
	} // tools
} // sun