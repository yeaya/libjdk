#include <javax/naming/spi/DirStateFactory$Result.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/spi/DirStateFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::javax::naming::directory::Attributes;

namespace javax {
	namespace naming {
		namespace spi {

void DirStateFactory$Result::init$(Object$* obj, $Attributes* outAttrs) {
	$set(this, obj, obj);
	$set(this, attrs, outAttrs);
}

$Object* DirStateFactory$Result::getObject() {
	return this->obj;
}

$Attributes* DirStateFactory$Result::getAttributes() {
	return this->attrs;
}

DirStateFactory$Result::DirStateFactory$Result() {
}

$Class* DirStateFactory$Result::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"obj", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(DirStateFactory$Result, obj)},
		{"attrs", "Ljavax/naming/directory/Attributes;", nullptr, $PRIVATE, $field(DirStateFactory$Result, attrs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, $method(DirStateFactory$Result, init$, void, Object$*, $Attributes*)},
		{"getAttributes", "()Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, $virtualMethod(DirStateFactory$Result, getAttributes, $Attributes*)},
		{"getObject", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DirStateFactory$Result, getObject, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.naming.spi.DirStateFactory$Result", "javax.naming.spi.DirStateFactory", "Result", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.spi.DirStateFactory$Result",
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
		"javax.naming.spi.DirStateFactory"
	};
	$loadClass(DirStateFactory$Result, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirStateFactory$Result);
	});
	return class$;
}

$Class* DirStateFactory$Result::class$ = nullptr;

		} // spi
	} // naming
} // javax