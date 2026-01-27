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

$FieldInfo _DatatypeConstants$Field_FieldInfo_[] = {
	{"str", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DatatypeConstants$Field, str)},
	{"id", "I", nullptr, $PRIVATE | $FINAL, $field(DatatypeConstants$Field, id)},
	{}
};

$MethodInfo _DatatypeConstants$Field_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(DatatypeConstants$Field, init$, void, $String*, int32_t)},
	{"getId", "()I", nullptr, $PUBLIC, $method(DatatypeConstants$Field, getId, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DatatypeConstants$Field, toString, $String*)},
	{}
};

$InnerClassInfo _DatatypeConstants$Field_InnerClassesInfo_[] = {
	{"javax.xml.datatype.DatatypeConstants$Field", "javax.xml.datatype.DatatypeConstants", "Field", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DatatypeConstants$Field_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.xml.datatype.DatatypeConstants$Field",
	"java.lang.Object",
	nullptr,
	_DatatypeConstants$Field_FieldInfo_,
	_DatatypeConstants$Field_MethodInfo_,
	nullptr,
	nullptr,
	_DatatypeConstants$Field_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.datatype.DatatypeConstants"
};

$Object* allocate$DatatypeConstants$Field($Class* clazz) {
	return $of($alloc(DatatypeConstants$Field));
}

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
	$loadClass(DatatypeConstants$Field, name, initialize, &_DatatypeConstants$Field_ClassInfo_, allocate$DatatypeConstants$Field);
	return class$;
}

$Class* DatatypeConstants$Field::class$ = nullptr;

		} // datatype
	} // xml
} // javax