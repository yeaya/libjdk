#include <javax/xml/datatype/DatatypeConstants$Field.h>
#include <javax/xml/datatype/DatatypeConstants.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace datatype {

void DatatypeConstants$Field::init$($String* str, int32_t id) {
	$set(this, str, str);
	this->id = id;
}

$String* DatatypeConstants$Field::toString() {
	return this->str;
}

int32_t DatatypeConstants$Field::getId() {
	return this->id;
}

DatatypeConstants$Field::DatatypeConstants$Field() {
}

$Class* DatatypeConstants$Field::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"str", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DatatypeConstants$Field, str)},
		{"id", "I", nullptr, $PRIVATE | $FINAL, $field(DatatypeConstants$Field, id)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(DatatypeConstants$Field, init$, void, $String*, int32_t)},
		{"getId", "()I", nullptr, $PUBLIC, $method(DatatypeConstants$Field, getId, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DatatypeConstants$Field, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.datatype.DatatypeConstants$Field", "javax.xml.datatype.DatatypeConstants", "Field", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.xml.datatype.DatatypeConstants$Field",
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
		"javax.xml.datatype.DatatypeConstants"
	};
	$loadClass(DatatypeConstants$Field, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DatatypeConstants$Field);
	});
	return class$;
}

$Class* DatatypeConstants$Field::class$ = nullptr;

		} // datatype
	} // xml
} // javax